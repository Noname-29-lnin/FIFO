module Smemory_duo_clk #(
    parameter SIZE_DATA     = 8,
    parameter SIZE_DEPTH    = 16,
    parameter SIZE_ADDR     = 4
)(
    // READ
    input                       i_clk_rd    ,
    input                       i_rd_en     ,
    input [SIZE_ADDR-1:0]       i_addr_rd   ,
    input [SIZE_DATA-1:0]       i_data_rd   ,
    output reg [SIZE_DATA-1:0]  o_data_rd   ,

    // WRITE
    input                       i_clk_wr    ,
    input                       i_wr_en     ,
    input [SIZE_ADDR-1:0]       i_addr_wr   ,
    input [SIZE_DATA-1:0]       i_data_wr   ,
    output reg [SIZE_DATA-1:0]  o_data_wr   
);

// Memory array
reg [SIZE_DATA-1:0] mem [0:SIZE_DEPTH-1];

// Read
always_ff @(posedge i_clk_rd) begin
    if(i_rd_en) begin
        mem[i_addr_rd] <= i_data_rd;
        o_data_rd      <= 0;
    end else
        o_data_rd      <= i_data_rd;
end 

// Write
always_ff @(posedge i_clk_wr) begin
    if(i_wr_en)
        o_data_wr      <= mem[i_addr_wr];
    else 
        o_data_wr      <= i_data_wr;
end

endmodule
