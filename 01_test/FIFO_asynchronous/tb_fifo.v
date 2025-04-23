`timescale 1ps/1ps
module tb_fifo();

  parameter SIZE_DATA = 8;
  parameter SIZE_DEPTH = 256;
  parameter SIZE_ADDR = $clog2(SIZE_DEPTH);

  reg i_clk_wr, i_clk_rd, i_rst_n;
  reg [SIZE_DATA-1:0] i_data_wr, o_data_rd;
  reg i_wr_en, i_rd_en;
  reg o_full, o_empty;

  fifo_asynchronous #(
                      .SIZE_DATA  (SIZE_DATA),
                      .SIZE_DEPTH (SIZE_DEPTH)
                      // DEPTH = BUFFER_SIZE*(1 - FREQ_READ/FREQ_WRITE)
                    ) uut (
                      .i_rst_n                    (i_rst_n),
                      // READ
                      .i_clk_rd                   (i_clk_rd),
                      .i_rd_en                    (i_rd_en),
                      .o_data_rd                  (o_data_rd),
                      .o_empty                    (o_empty),
                      // WRITE
                      .i_clk_wr                   (i_clk_wr),
                      .i_wr_en                    (i_wr_en),
                      .i_data_wr                  (i_data_wr),
                      .o_full                     (o_full)
                    );

  always #5 i_clk_wr = ~i_clk_wr; // 400MHz
  always #50 i_clk_rd = ~i_clk_rd;// 40MHz

// Dump wave
  initial begin
    $dumpfile("tb_fifo.vcd");
    $dumpvars(0, tb_fifo);
  end

// Test case
  initial begin
    $display("------------------------- Test Case 1 -------------------------");
    // Test reset 

    $display("------------------------- Test Case 2 -------------------------");
    // Test write util full 
    
    $display("------------------------- Test Case 3 -------------------------");
    // Test read util empty 

    $display("------------------------- Test Case 4 -------------------------");
    // Test read and write simultaneously

    $display("------------------------- Test Case 5 -------------------------");
    // Test read final and read final
  end

endmodule
