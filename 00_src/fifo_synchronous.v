module fifo_synchronous #(
    parameter SIZE_DEPTH = 16,
    parameter SIZE_DATA  = 8
)(
    // Signal Golbal
    input                      i_clk,
    input                      i_rst_n,
    // Signal Control FIFO
    input                      i_wr_en,
    input                      i_rd_en,
    // Input FIFO
    input  [SIZE_DATA - 1:0]   i_data,
    // Output FIFO
    output reg [SIZE_DATA - 1:0]    o_data,
    // Status FIFO
    output wire                     o_full,
    output wire                     o_empty
); 

parameter SIZE_ADDR = $clog2(SIZE_DEPTH);

reg [SIZE_ADDR:0] ptr_wr, ptr_rd;
wire [SIZE_ADDR:0] n_ptr_wr, n_ptr_rd;
wire update_wr, update_rd;

assign update_wr = ~o_full & i_wr_en;
assign update_rd = ~o_empty & i_rd_en;

assign n_ptr_wr = (update_wr) ? ptr_wr + 1 : ptr_wr;
assign n_ptr_rd = (update_rd) ? ptr_rd + 1 : ptr_rd;

assign o_empty = (ptr_rd == ptr_wr) ? 1 : 0;
// assign o_full = (n_ptr_wr == ptr_rd) ? 1 : 0;
assign o_full = (~|(ptr_rd[SIZE_ADDR-1:0] ^ ptr_wr[SIZE_ADDR-1:0])) && (ptr_rd[SIZE_ADDR] ^ ptr_wr[SIZE_ADDR]);
always_ff @(posedge i_clk or negedge i_rst_n) begin 
    if(~i_rst_n) begin
        ptr_rd <= 0;
        ptr_wr <= 0;
    end else begin
        ptr_rd <= n_ptr_rd;
        ptr_wr <= n_ptr_wr; 
    end
end

Smemory_single_clk#(
    .SIZE_DATA  (SIZE_DATA),
    .SIZE_ADDR  (SIZE_ADDR),
    .SIZE_DEPTH (SIZE_DEPTH) 
) RAM (
    .i_clk          (i_clk),
    .i_wr_en        (i_wr_en),
    .i_rd_en        (i_rd_en),
    .i_addr_wr      (ptr_wr[SIZE_ADDR-1:0]),
    .i_addr_rd      (ptr_rd[SIZE_ADDR-1:0]),
    .i_data         (i_data),
    .o_data         (o_data)
);

endmodule
