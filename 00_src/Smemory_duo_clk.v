// module Smemory_duo_clk #(
//     parameter SIZE_DATA     = 8,
//     parameter SIZE_DEPTH    = 16,
//     parameter SIZE_ADDR     = 4
// )(
//     // READ
//     input                       i_clk_rd    ,
//     input                       i_rd_en     ,
//     input [SIZE_ADDR-1:0]       i_addr_rd   ,
//     output reg [SIZE_DATA-1:0]  o_data_rd   ,

//     // WRITE
//     input                       i_clk_wr    ,
//     input                       i_wr_en     ,
//     input [SIZE_ADDR-1:0]       i_addr_wr   ,
//     input [SIZE_DATA-1:0]       i_data_wr   
// );

// // Memory array
// reg [SIZE_DATA-1:0] mem [0:SIZE_DEPTH-1];

// // Write
// always_ff @(posedge i_clk_wr) begin
//     if(i_wr_en)
//         mem[i_addr_wr]  <= i_data_wr;
// end

// // Read
// always_ff @(posedge i_clk_rd) begin
//     if(i_rd_en)
//         o_data_rd       <= mem[i_addr_rd];
// end

// endmodule

module Smemory_duo_clk #(
    parameter SIZE_DATA     = 8,
    parameter SIZE_DEPTH    = 16,
    parameter SIZE_ADDR     = 4
)(
    // READ
    input                       i_clk_rd,
    input                       i_rd_en,
    input [SIZE_ADDR-1:0]       i_addr_rd,
    output reg [SIZE_DATA-1:0]  o_data_rd,
    // WRITE
    input                       i_clk_wr,
    input                       i_wr_en,
    input [SIZE_ADDR-1:0]       i_addr_wr,
    input [SIZE_DATA-1:0]       i_data_wr
);

// Memory array
reg [SIZE_DATA-1:0] mem [0:SIZE_DEPTH-1];

// Write
always_ff @(posedge i_clk_wr) begin
    if (i_wr_en)
        mem[i_addr_wr] <= i_data_wr;
end

// Read
always_ff @(posedge i_clk_rd) begin
    if (i_rd_en)
        o_data_rd <= mem[i_addr_rd];
    // Không cần giữ o_data_rd vì update_rd đã được kiểm soát bởi !o_empty
end

endmodule