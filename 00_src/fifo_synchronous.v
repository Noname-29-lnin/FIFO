module fifo_synchronous #(
    parameter SIZE_DEPTH = 8,
    parameter SIZE_DATA = 8
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
    output reg [SIZE_DATA - 1:0]  o_data,
    // Status FIFO
    output wire                    o_full,
    output wire                    o_empty
);  

parameter ADDR = $clog2(SIZE_DEPTH);
reg [ADDR - 1: 0] ptr_rd, ptr_wr;
reg [ADDR - 1: 0] n_ptr_rd, n_ptr_wr;

// Status FIFO
assign o_full = (~|(ptr_rd ^ n_ptr_wr));
assign o_empty = (~|(ptr_rd ^ ptr_wr));


LUT #(
    .SIZE_DATA(SIZE_DATA),
    .SIZE_ADDR(ADDR)
)lut_mem(
    .i_clk (i_clk),
    .i_rst_n(i_rst_n),
    .i_wr_en(i_wr_en),
    .i_rd_en(i_rd_en),
    .i_wr_addr(ptr_wr),
    .i_rd_addr(ptr_rd),
    .i_data(i_data),

    .o_data(o_data)
);

always_comb begin
    if((~o_full) && (ptr_wr == ADDR - 2) && (i_wr_en))
        n_ptr_wr = 0;
    else if((~o_full)&&(i_wr_en))
        n_ptr_wr = ptr_wr + 1;

    if((~o_empty) && (ptr_rd == ADDR - 2) && (i_rd_en))
        n_ptr_rd = 0;
    else if((~o_empty) && (i_rd_en)) 
        n_ptr_rd = ptr_rd + 1;
end

always @(posedge i_clk or negedge i_rst_n) begin
    if(~i_rst_n) begin
        ptr_rd <= 0;
        ptr_wr <= 0;
    end else begin
        ptr_wr <= n_ptr_wr;
        ptr_rd <= n_ptr_rd; 
    end
end 
endmodule
