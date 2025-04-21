module LUT#(
    parameter SIZE_DATA = 8,
    parameter SIZE_ADDR = 3
)(
    input               i_clk,
    input               i_rst_n,
    input               i_wr_en,
    input               i_rd_en,
    input [SIZE_ADDR - 1: 0] i_wr_addr,
    input [SIZE_ADDR - 1: 0] i_rd_addr,
    input [SIZE_DATA - 1: 0]    i_data,
    output reg [SIZE_DATA - 1: 0] o_data
);

reg [SIZE_DATA - 1:0] mem [0 :SIZE_ADDR - 1];

always @(posedge i_clk or negedge i_rst_n) begin
    if(~i_rst_n) begin
        mem[0]    <= 0;
        o_data    <= 0;
    end else begin 
        if(i_wr_en) 
            mem[i_wr_addr] <= i_data;
        else if(i_rd_en)
            o_data <= mem[i_rd_addr];
    end 
end 

endmodule

