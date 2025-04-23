`timescale 1ps/1ps
module tb_fifo();

  // Parameters
  parameter DATA_WIDTH = 8;
  parameter SIZE_DEPTH = 8;
  parameter ADDR_WIDTH = $clog2(SIZE_DEPTH);

  // Signals
  reg i_clk, i_rst_n;
  reg i_wr_en; // Changed to reg to drive in initial block
  reg i_rd_en; // Changed to reg to drive in initial block
  reg [DATA_WIDTH-1:0] i_data;
  reg [DATA_WIDTH-1:0] o_data;
  reg o_full, o_empty;

  // Memory to store write and read data
  reg [DATA_WIDTH-1:0] value_wr [0:SIZE_DEPTH-1];
  reg [DATA_WIDTH-1:0] value_rd [0:SIZE_DEPTH-1];
  integer count_wr, count_rd;
  integer match_count;
  // Instantiate the FIFO module

  fifo_array #(
                     .SIZE_DATA(DATA_WIDTH),
                     .SIZE_DEPTH(SIZE_DEPTH)
                   ) uut (
                     .i_clk(i_clk),
                     .i_rst_n(i_rst_n),
                     .i_wr_en(i_wr_en),
                     .i_rd_en(i_rd_en),
                     .i_data(i_data),
                     .o_data(o_data),
                     .o_full(o_full),
                     .o_empty(o_empty)
                   );

always #5 i_clk = ~i_clk;

  // Dump waveform
  initial
  begin
    $dumpfile("tb_fifo.vcd");
    $dumpvars(0, tb_fifo);
  end

  // Test procedure
  initial
  begin
    // Initialize signals
    count_wr = 0;
    count_rd = 0;

    // Test case 1: Reset the FIFO
    $display("-------------- Test Case 1 --------------");
    #10;
    i_rst_n = 1;
    #10;
    @(posedge i_clk);
    i_wr_en = 1;
    i_rd_en = 0;
    i_data = 8'h29;
    
    #10;
    i_rst_n = 0;
    i_wr_en = 0;
    i_rd_en = 0;
    #10;
    $display("Test case 1: Reset the FIFO");
    $display("FIFO reset, pt_rd: %d, pt_wr: %d", uut.ptr_rd, uut.ptr_wr);
    $display("FIFO empty: %d, FIFO full: %d", o_empty, o_full);
    $display("FIFO data: %h", o_data);
    $display("=> TestCase1: %s", ((uut.ptr_rd == 0)&&(uut.ptr_wr == 0)) ? "PASS" : "FAIL");

    // Test case 2: Write data until full
    $display("-------------- Test Case 2 --------------");
    i_rst_n = 0;
    #10;
    i_rst_n = 1;
    count_wr = 0;

    repeat (SIZE_DEPTH + 1)
    begin
      @(posedge i_clk);
      i_wr_en = 1;
      i_rd_en = 0;
      i_data = $random;
      $display("Time = %t, o_full = %b, ptr_wr = %d, ptr_rd = %d",$time, o_full, uut.ptr_wr, uut.ptr_rd);
      #10;
    end
    i_wr_en = 0;

    $display("Test case 2: Write data until full");
    $display("=> TestCase2: %s", o_full ? "PASS" : "FAIL");

    // Test case 3: Read data until empty
    $display("-------------- Test Case 3 --------------");
    count_rd = 0;
    repeat (SIZE_DEPTH)
    begin
      @(posedge i_clk);
      i_wr_en = 0;
      i_rd_en = 1;
      #10;
      value_rd[count_rd] = o_data;
      count_rd = count_rd + 1;
      $display("Time = %t, o_empty = %b, ptr_wr = %d, ptr_rd = %d", $time, o_empty, uut.ptr_wr, uut.ptr_rd);
    end
    i_rd_en = 0;

    $display("Test case 3: Read data until empty");
    $display("=> TestCase3: %s", o_empty ? "PASS" : "FAIL");

    // Test case 4: Write and read simultaneously
    // Kiem tra; doc va ghi dong thoi
    $display("-------------- Test Case 4 --------------");
    #20; // reset 
    i_rst_n = 0;
    
    #20; 
    i_rst_n = 1;
    #10;

    @(posedge i_clk);
    i_wr_en = 1;
    i_rd_en = 0;
    i_data = 29;
    $display("FIFO data: i_data = %d, o_data = %d",i_data, o_data);

    @(posedge i_clk);
    i_wr_en = 1;
    i_rd_en = 1;
    i_data  = 30;
    $display("FIFO data: i_data = %d, o_data = %d",i_data, o_data);

    @(posedge i_clk);
    i_wr_en = 1;
    i_rd_en = 1;
    i_data  = 31;
    $display("FIFO data: i_data = %d, o_data = %d",i_data, o_data);
    
    @(posedge i_clk);
    i_wr_en = 1;
    i_rd_en = 1;
    i_data  = 32;
    $display("FIFO data: i_data = %d, o_data = %d",i_data, o_data);

    @(posedge i_clk);
    i_wr_en = 1;
    i_rd_en = 1;
    i_data  = 33;
    $display("FIFO data: i_data = %d, o_data = %d",i_data, o_data);

    $display("-------------- Test Case 5 --------------");
    #20 i_rst_n = 0;
    #20 i_rst_n = 1;
    #10;
    i_wr_en = 1;
    i_rd_en = 0;
    $display("Input data");
    while(!o_full) begin
        @(posedge i_clk);
        i_data = $random%(2**DATA_WIDTH);
        $display("Time=%t, i_wr_en=%b, i_rd_en=%b, i_data = %h, o_full=%b", $time, i_wr_en, i_rd_en, i_data, o_full);
    end 
    #10;
    i_wr_en = 0;
    i_rd_en = 1;
    $display("Output data");
    while(!o_empty) begin
        @(posedge i_clk);
        $display("Time=%t, i_wr_en=%b, i_rd_en=%b, o_data = %h, o_empty=%b", $time, i_wr_en, i_rd_en, o_data, o_empty);
    end

    // End simulation
    #200;
    $display("End of simulation");
    $finish;
  end

endmodule

