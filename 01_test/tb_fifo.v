`timescale 1ps/1ps
module tb_fifo();

  // Parameters
  parameter DATA_WIDTH = 8;
  parameter SIZE_DEPTH = 16;
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

  fifo_synchronous #(
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
    // Test case 5: Write data when full

    

    // // Test case 6: Write data when full
    // @(posedge i_clk);
    // i_wr_en = 1;
    // i_rd_en = 0;
    // i_data = $random;
    // #10;
    // i_wr_en = 0;

    // $display("Test case 6: Write data when full");
    // $display("=> TestCase6: %s", o_full ? "PASS" : "FAIL");

    // // Test case 7: Read data when empty
    // i_rst_n = 0;
    // #10;
    // i_rst_n = 1;
    // @(posedge i_clk);
    // i_wr_en = 0;
    // i_rd_en = 1;
    // #10;
    // i_rd_en = 0;

    // $display("Test case 7: Read data when empty");
    // $display("=> TestCase7: %s", o_empty ? "PASS" : "FAIL");

    // End simulation
    #200;
    $display("End of simulation");
    $finish;
  end

endmodule




// `timescale 1ns/1ps
// module tb_fifo();

// reg           clk;
// reg           rst_n;
// reg           i_wr_en;
// reg           i_rd_en;
// reg  [15:0]   i_data;     // Giả định SIZE_DATA = 16
// wire [15:0]   o_data;
// wire          o_full;
// wire          o_empty;

// reg  [15:0]   rdata;
// reg           stop;

// // Instantiate DUT
// fifo_synchronous #(
//   .SIZE_DEPTH(8),
//   .SIZE_DATA(16)
// ) u_fifo (
//   .i_clk     (clk),
//   .i_rst_n   (rst_n),
//   .i_wr_en   (i_wr_en),
//   .i_rd_en   (i_rd_en),
//   .i_data    (i_data),
//   .o_data    (o_data),
//   .o_full    (o_full),
//   .o_empty   (o_empty)
// );

// // Clock generation
// always #10 clk = ~clk;

//   initial
//   begin
//     $dumpfile("tb_fifo.vcd");
//     $dumpvars(0, tb_fifo);
//   end
// // Reset and stimulus init
// initial begin
//   clk      = 0;
//   rst_n    = 0;
//   i_wr_en  = 0;
//   i_rd_en  = 0;
//   stop     = 0;
//   i_data   = 0;

//   #50 rst_n = 1;
// end

// // Write process
// initial begin
//   @(posedge clk);

//   for (int i = 0; i < 20; i++) begin
//     // Wait until FIFO has space
//     while (o_full) begin
//       @(posedge clk);
//       $display("[%0t] FIFO FULL, waiting...", $time);
//     end

//     i_wr_en <= $random;
//     i_data  <= $random;

//     $display("[%0t] WRITE: i=%0d wr_en=%0d data=0x%0h", $time, i, i_wr_en, i_data);
//     @(posedge clk);
//   end

//   i_wr_en <= 0;
//   stop <= 1;
// end

// // Read process
// initial begin
//   @(posedge clk);

//   while (!stop) begin
//     while (o_empty) begin
//       i_rd_en <= 0;
//       $display("[%0t] FIFO EMPTY, waiting...", $time);
//       @(posedge clk);
//     end

//     i_rd_en <= $random;
//     @(posedge clk);
//     rdata <= o_data;
//     $display("[%0t] READ: rd_en=%0d data=0x%0h", $time, i_rd_en, rdata);
//   end

//   i_rd_en <= 0;
//   #500 $finish;
// end

// endmodule
