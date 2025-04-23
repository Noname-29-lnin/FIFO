// module fifo_asynchronous #(
//     parameter SIZE_DATA  = 8    ,
//     parameter SIZE_DEPTH = 16    
//     // DEPTH = BUFFER_SIZE*(1 - FREQ_READ/FREQ_WRITE)
// )(
//     input                       i_rst_n,
//     // READ
//     input                       i_clk_rd,
//     input                       i_rd_en ,
//     output reg [SIZE_DATA-1:0]  o_data_rd,
//     output reg                  o_empty  , 
//     // WRITE
//     input                       i_clk_wr,
//     input                       i_wr_en ,
//     input [SIZE_DATA-1:0]       i_data_wr,
//     output reg                  o_full   
// );

// parameter SIZE_ADDR = $clog2(SIZE_DEPTH);
// reg [SIZE_ADDR-1:0]  ptr_wr, ptr_rd;
// reg [SIZE_ADDR-1:0]  w_ptr_wr, w_ptr_rd;
// reg [SIZE_ADDR-1:0]  n_ptr_wr, n_ptr_rd;
// wire                 update_wr, update_rd;

// reg [SIZE_ADDR:0] count;
// logic [SIZE_ADDR:0] next_count; // Biến trung gian

// always_comb begin
//     if (i_rd_en & ~i_wr_en)
//         next_count = count + 1;
//     else if (~i_rd_en & i_wr_en)
//         next_count = count - 1;
//     else 
//         next_count = count;

//     o_full = (next_count == SIZE_DEPTH);
//     o_empty = (next_count == 0);
// end

// always_ff @(posedge i_clk_wr or posedge i_clk_rd or negedge i_rst_n) begin
//     if (~i_rst_n)
//         count <= 0;
//     else
//         count <= next_count;
// end

// assign update_wr = ~o_full & i_wr_en;
// assign update_rd = ~o_empty & i_rd_en;

// assign n_ptr_rd = (update_rd) ? ptr_rd + 1 : ptr_rd;
// always_ff @(posedge i_clk_rd or negedge i_rst_n) begin
//     if(~i_rst_n) 
//         ptr_rd <= 0;
//     else
//         ptr_rd <= n_ptr_rd;
// end 

// assign n_ptr_wr = (update_wr) ? ptr_wr + 1 : ptr_wr;
// always_ff @(posedge i_clk_wr or negedge i_rst_n) begin
//     if(~i_rst_n)
//         ptr_wr <= 0;
//     else 
//         ptr_wr <= n_ptr_wr;
// end

// always_ff @(posedge i_clk_wr) begin
//     w_ptr_wr <= ptr_wr;
// end

// always_ff @(posedge i_clk_rd) begin
//     w_ptr_rd <= ptr_rd;
// end

// Smemory_duo_clk #(
//     .SIZE_DATA (SIZE_DATA),
//     .SIZE_DEPTH(SIZE_DEPTH),
//     .SIZE_ADDR (SIZE_ADDR)
// ) Arry (
//     // READ
//     .i_clk_rd    (i_clk_rd),
//     .i_rd_en     (update_rd),
//     .i_addr_rd   (w_ptr_rd[SIZE_ADDR-1:0]),
//     .o_data_rd   (o_data_rd),

//     // WRITE
//     .i_clk_wr    (i_clk_wr),
//     .i_wr_en     (update_rd),
//     .i_addr_wr   (w_ptr_wr[SIZE_ADDR-1:0]),
//     .i_data_wr   (i_data_wr)
// );

// endmodule

module fifo_asynchronous #(
    parameter SIZE_DATA  = 8,
    parameter SIZE_DEPTH = 16
)(
    input                       i_rst_n,
    // READ
    input                       i_clk_rd,
    input                       i_rd_en,
    output reg [SIZE_DATA-1:0]  o_data_rd,
    output                      o_empty,
    // WRITE
    input                       i_clk_wr,
    input                       i_wr_en,
    input [SIZE_DATA-1:0]       i_data_wr,
    output                      o_full
);

parameter SIZE_ADDR = $clog2(SIZE_DEPTH);

// Con trỏ và mã Gray (kích thước SIZE_ADDR+1 để phát hiện đầy/rỗng)
reg [SIZE_ADDR:0] ptr_wr, ptr_rd;
reg [SIZE_ADDR:0] ptr_wr_gray, ptr_rd_gray;
reg [SIZE_ADDR:0] ptr_wr_sync1, ptr_wr_sync2; // Đồng bộ ptr_wr sang clk_rd
reg [SIZE_ADDR:0] ptr_rd_sync1, ptr_rd_sync2; // Đồng bộ ptr_rd sang clk_wr

// Chuyển đổi sang mã Gray
function [SIZE_ADDR:0] bin_to_gray(input [SIZE_ADDR:0] bin);
    bin_to_gray = bin ^ (bin >> 1);
endfunction

// Logic ghi: Cập nhật ptr_wr và ptr_wr_gray
always_ff @(posedge i_clk_wr or negedge i_rst_n) begin
    if (~i_rst_n) begin
        ptr_wr <= 0;
        ptr_wr_gray <= 0;
    end else if (i_wr_en && !o_full) begin
        ptr_wr <= ptr_wr + 1;
        ptr_wr_gray <= bin_to_gray(ptr_wr + 1);
    end
end

// Logic đọc: Cập nhật ptr_rd và ptr_rd_gray
always_ff @(posedge i_clk_rd or negedge i_rst_n) begin
    if (~i_rst_n) begin
        ptr_rd <= 0;
        ptr_rd_gray <= 0;
    end else if (i_rd_en && !o_empty) begin
        ptr_rd <= ptr_rd + 1;
        ptr_rd_gray <= bin_to_gray(ptr_rd + 1);
    end
end

// Đồng bộ ptr_wr sang miền clk_rd
always_ff @(posedge i_clk_rd or negedge i_rst_n) begin
    if (~i_rst_n) begin
        ptr_wr_sync1 <= 0;
        ptr_wr_sync2 <= 0;
    end else begin
        ptr_wr_sync1 <= ptr_wr_gray;
        ptr_wr_sync2 <= ptr_wr_sync1;
    end
end

// Đồng bộ ptr_rd sang miền clk_wr
always_ff @(posedge i_clk_wr or negedge i_rst_n) begin
    if (~i_rst_n) begin
        ptr_rd_sync1 <= 0;
        ptr_rd_sync2 <= 0;
    end else begin
        ptr_rd_sync1 <= ptr_rd_gray;
        ptr_rd_sync2 <= ptr_rd_sync1;
    end
end

// Xác định trạng thái đầy/rỗng
assign o_full = (ptr_wr_gray == {~ptr_rd_sync2[SIZE_ADDR:SIZE_ADDR-1], ptr_rd_sync2[SIZE_ADDR-2:0]});
assign o_empty = (ptr_rd_gray == ptr_wr_sync2);

// Điều khiển cập nhật
wire update_wr = i_wr_en & ~o_full;
wire update_rd = i_rd_en & ~o_empty;

Smemory_duo_clk #(
    .SIZE_DATA (SIZE_DATA),
    .SIZE_DEPTH(SIZE_DEPTH),
    .SIZE_ADDR (SIZE_ADDR)
) Arry (
    // READ
    .i_clk_rd    (i_clk_rd),
    .i_rd_en     (update_rd),
    .i_addr_rd   (ptr_rd[SIZE_ADDR-1:0]),
    .o_data_rd   (o_data_rd),
    // WRITE
    .i_clk_wr    (i_clk_wr),
    .i_wr_en     (update_wr),
    .i_addr_wr   (ptr_wr[SIZE_ADDR-1:0]),
    .i_data_wr   (i_data_wr)
);

endmodule