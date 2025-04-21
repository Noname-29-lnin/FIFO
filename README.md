# Introduction for FIFO

FIFO stands for First In, First Out, which is a data structure used for queuling. In hardware design, especilly with Verilog, FIFOs are crucial for buffering data between diffrent modules that might operate at different speeds or clocks. 

# FIFO Synchronous



## FIFO full: count == SIZE_DEPTH
| Write | Read | Count |
|:-----:|:-----:|:-----:|
| 1 | 0 | +1 |
| 0 | 1 | -1 |
| 1 | 1 | 0  |
| 0 | 0 | 0  |

## FIFO empty: count == 0

# FIFO Asynchronous
 
# Using Verilog FIFO

## Spec for FIFO synchronous
| Port | Size | Func |
|:-----|:----:|:-----|
| i_clk | 1 | Tín hiệu Clock đồng bộ |
| i_rst_n | 1 | Tín hiệu reset tích cực thấp |
| i_data | SIZE_DATA | Độ dài dữ liệu cần lưu trữ |
| i_wr_en | 1 | Cho phép ghi dữ liệu |
| i_rd_en | 1 | Cho phép đọc dữ liệu |
| o_data | SIZE_DATA | Độ dài dữ liệu đầu ra |
| o_full | 1 | Tín hiệu báo FIFO đã đầy |
| o_empty | 1 | Tín hiệu báo FIFO chưa có dữ liệu (rỗng) |
 
# Reference
+ [Verilog on Intel (Altera) FPGA](https://www.youtube.com/watch?v=9H5fp9FomBA&list=PLFIdP97RY-2JScNwjqORFS-Ry47HN8w_a)
+ [Synchronous FIFO](https://www.chipverify.com/verilog/synchronous-fifo)