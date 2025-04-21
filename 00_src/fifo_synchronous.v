module fifo_synchronous #(
    parameter SIZE_DEPTH = 8,
    parameter SIZE_DATA = 8
)(
    input logic                     i_clk,
    input logic                     i_rst_n,
    input logic                     i_wr_en,
    input logic                     i_rd_en,
    input logic [SIZE_DATA - 1:0]   i_data,
    output logic [SIZE_DATA - 1:0]  o_data,
    output logic                    o_full,
    output logic                    o_empty
);  

parameter ADDR_WIDTH = $clog2(SIZE_DEPTH);
// Memory and pointer
reg [SIZE_DATA - 1: 0] mem [0 : SIZE_DEPTH - 1];
reg [ADDR_WIDTH : 0] pt_rd, pt_wr;
assign pt_wr = 0;
assign pt_rd = 0;

// Write data
assign o_full = 
always @(posedge i_clk or negedge i_rst_n) begin
    if( !i_rst_n )
        pt_wr <= 0;
    else begin

    end 
end 


// Read data 
endmodule

