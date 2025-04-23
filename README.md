# Introduction for FIFO

FIFO stands for First In, First Out, which is a data structure used for queuling. In hardware design, especilly with Verilog, FIFOs are crucial for buffering data between diffrent modules that might operate at different speeds or clocks.

# FIFO Synchronous

In Synchronous FIFO, data read and write operations use the same clock frequency. Usually, they are used with high clock frequency to support high-speed systems.

![FIFO_Synchronous](20_doc/fifo_synchronous.svg)

| Port    | Size      | Func                           |
| ------- | --------- | ------------------------------ |
| i_clk   | 1         | Clock frequency                |
| i_rst_n | 1         | Input reset, active low        |
| i_wr_en | 1         | Write Enable                   |
| i_rd_en | 1         | Read Enable                    |
| i_data  | SIZE_DATA | Data In                        |
| o_data  | SIZE_DATA | Data Out                       |
| o_full  | 1         | FIFO is full, can't write data |
| o_empty | 1         | FIFO is empty, can't read data |

```Verilog
module fifo_synchronous #(
    parameter SIZE_DEPTH = 16,
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
    output wire o_full,
    output wire o_empty
);  
```

**Single port memory single clk**

```Verilog
module Smemory_single_clk#(
    parameter SIZE_DATA = 8,
    parameter SIZE_ADDR = 3,
    parameter SIZE_DEPTH = 8
)(
    input                   i_clk,
    input                   i_wr_en,
    input                   i_rd_en,
    input [SIZE_ADDR - 1:0] i_addr,
    input [SIZE_DATA - 1:0] i_data,
    output reg [SIZE_DATA-1:0]  o_data
);

reg [SIZE_DATA - 1:0] mem [0: SIZE_DEPTH - 1];

always_ff @(posedge i_clk) begin
    if(i_wr_en) begin
        mem[i_addr] <= i_data;
        o_data      <= 0;
    end else if(i_rd_en)
        o_data <= mem[i_addr];
    else
        o_data <= i_data;
end

endmodule
```

## Method 1:

```Verilog
parameter SIZE_ADDR = $clog2(SIZE_DEPTH);
reg [SIZE_ADDR - 1: 0] ptr_wr, ptr_rd;
assign o_full = ((ptr_wr + 1) == ptr_rd) ? 1'b1 : 1'b0;
assign o_empty = (ptr_wr == ptr_rd) ? 1'b1 : 1'b0;
```

## Methd 2:

| ptr_wr | ptr_rd | Count |
| ------ | ------ | ----- |
| 0      | 0      | 0     |
| 0      | 1      | -1    |
| 1      | 0      | +1    |
| 1      | 1      | 0     |

```Verilog
assign o_full = (Count == SIZE_DEPTH);
assign o_empty = (Count == 0);
```

# FIFO ArchSynchronous


# Reference

+ [Verilog on Intel (Altera) FPGA](https://www.youtube.com/watch?v=9H5fp9FomBA&list=PLFIdP97RY-2JScNwjqORFS-Ry47HN8w_a)
+ [Synchronous FIFO](https://www.chipverify.com/verilog/synchronous-fifo)
+ [Synchronous FIFO](https://vlsiverify.com/verilog/verilog-codes/synchronous-fifo/)
+ [FIFO functional timing requirements](https://www.intel.com/content/www/us/en/docs/programmable/683522/24-2/fifo-functional-timing-requirements.html)
