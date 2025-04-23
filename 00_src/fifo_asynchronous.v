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
reg [SIZE_ADDR :0]  ptr_wr, ptr_rd;
reg [SIZE_ADDR :0]  n_ptr_wr, n_ptr_rd;
wire                update_wr, update_rd;



Smemory_duo_clk #(
    .SIZE_DATA (SIZE_DATA),
    .SIZE_DEPTH(SIZE_DEPTH),
    .SIZE_ADDR (SIZE_ADDR)
) BUFFER (
    // READ
    .i_clk_rd    (i_clk_rd),
    .i_rd_en     (update_rd),
    .i_addr_rd   (ptr_rd[SIZE_ADDR-1:0]),
    .i_data_rd   (),
    .o_data_rd   (),

    // WRITE
    .i_clk_wr    (i_clk_wr),
    .i_wr_en     (update_rd),
    .i_addr_wr   (ptr_wr[SIZE_ADDR-1:0]),
    .i_data_wr   (),
    .o_data_wr   ()
);

endmodule

