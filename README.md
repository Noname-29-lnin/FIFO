# Lý thuyết tổng thể về FIFO
## 
 
# FIFO

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

