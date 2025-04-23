module fifo_asynchronous #(
    parameter SIZE_DATA  = 8    ,
    parameter SIZE_DEPTH = 16    
    // DEPTH = BUFFER_SIZE*(1 - FREQ_READ/FREQ_WRITE)
)(
    input                       i_rst_n,
    // READ
    input                       i_clk_rd,
    input                       i_rd_en ,
    output reg [SIZE_DATA-1:0]  o_data_rd,
    output reg                  o_empty  , 
    // WRITE
    input                       i_clk_wr,
    input                       i_wr_en ,
    input [SIZE_DATA-1:0]       i_data_wr,
    output reg                  o_full   
);

parameter SIZE_ADDR = $clog2(SIZE_DEPTH);
reg [SIZE_ADDR-1:0]  ptr_wr, ptr_rd;
reg [SIZE_ADDR-1:0]  n_ptr_wr, n_ptr_rd;
wire                 update_wr, update_rd;
reg [SIZE_ADDR:0]  count;

always_comb begin
    if(i_rd_en & ~i_wr_en)
        count = count + 1;
    else if(~i_rd_en & i_wr_en)
        count = count - 1;
    else 
        count = count;

    if(count == SIZE_DEPTH) begin
        o_full = 1;
    end else 
        o_full = 0;
    
    if(count == 0)
        o_empty = 1;
    else 
        o_empty = 0;
end

assign update_wr = ~o_full & i_wr_en;
assign update_rd = ~o_empty & i_rd_en;

assign n_ptr_rd = (update_rd) ? ptr_rd + 1 : ptr_rd;
always_ff @(posedge i_clk_rd or negedge i_rst_n) begin
    if(~i_rst_n) 
        ptr_rd <= 0;
    else
        ptr_rd <= n_ptr_rd;
end 

assign n_ptr_wr = (update_wr) ? ptr_wr + 1 : ptr_wr;
always_ff @(posedge i_clk_wr or negedge i_rst_n) begin
    if(~i_rst_n)
        ptr_wr <= 0;
    else 
        ptr_wr <= n_ptr_wr;
end

Smemory_duo_clk #(
    .SIZE_DATA (SIZE_DATA),
    .SIZE_DEPTH(SIZE_DEPTH),
    .SIZE_ADDR (SIZE_ADDR)
) Arry (
    // READ
    .i_clk_rd    (i_clk_rd),
    .i_rd_en     (update_rd),
    .i_addr_rd   (ptr_rd[SIZE_ADDR-1:0]),
    .o_data_rd   (o_data_rd),

    // WRITE
    .i_clk_wr    (i_clk_wr),
    .i_wr_en     (update_rd),
    .i_addr_wr   (ptr_wr[SIZE_ADDR-1:0]),
    .i_data_wr   (i_data_wr)
);

endmodule

