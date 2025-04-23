module fifo_asynchronous #(
    parameter SIZE_DATA  = 8    ,
    parameter FREQ_READ  = 50   ,
    parameter FREQ_WRITE = 5    ,
    parameter BUFFER     = 100  
)(
    input                       i_rst_n,
    // READ
    input                       i_clk_rd,
    input                       i_rd_en ,
    input [SIZE_DATA-1:0]       i_data_rd,
    output reg [SIZE_DATA-1:0]  o_data_rd,
    output reg                  o_full   ,
    // WRITE
    input                       i_clk_wr,
    input                       i_wr_en ,
    input [SIZE_DATA-1:0]       i_data_wr,
    output reg [SIZE_DATA-1:0]  o_data_wr,
    output reg                  o_empty   
);
parameter SIZE_DEPTH = $round(BUFFER*(1 - FREQ_READ/FREQ_WRITE));
parameter SIZE_ADDR = $clog2(SIZE_DEPTH);

Smemory_duo_clk #(
    .SIZE_DATA (),
    .SIZE_DEPTH(),
    .SIZE_ADDR ()
) BUFFER (
    // READ
    .i_clk_rd    (),
    .i_rd_en     (),
    .i_addr_rd   (),
    .i_data_rd   (),
    .o_data_rd   (),

    // WRITE
    .i_clk_wr    (),
    .i_wr_en     (),
    .i_addr_wr   (),
    .i_data_wr   (),
    .o_data_wr   ()
);

endmodule

