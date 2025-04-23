module Memory_array #(
    parameter SIZE_DATA     = 8,
    parameter SIZE_DEPTH    = 16,
    parameter SIZE_ADDR     = 3
)(
    input                   i_wr_en ,
    input                   i_rd_en ,
    input [SIZE_ADDR-1:0]   i_addr_wr,
    input [SIZE_ADDR-1:0]   i_adder_rd,
    input [SIZE_DATA-1:0]   i_data,
    output reg [SIZE_DATA-1:0] o_data
);

reg [SIZE_DATA-1:0] mem [0:SIZE_DEPTH-1];

always_comb begin
    if(i_wr_en)
        mem[i_addr_wr] = i_data;
    else 
        o_data         = i_data;

    if(i_rd_en)
        o_data         = mem[i_adder_rd];
    else
        o_data         = i_data;
end 

endmodule

