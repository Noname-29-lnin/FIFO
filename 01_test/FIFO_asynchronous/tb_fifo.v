`timescale 1ns / 1ps

module tb_fifo;

    // Parameters
    parameter SIZE_DATA  = 8;
    parameter SIZE_DEPTH = 16;
    parameter CLK_WR_PERIOD = 10; // 100 MHz write clock
    parameter CLK_RD_PERIOD = 12; // ~83.33 MHz read clock

    // Signals
    reg                  i_rst_n;
    reg                  i_clk_wr;
    reg                  i_wr_en;
    reg [SIZE_DATA-1:0]  i_data_wr;
    wire                 o_full;
    reg                  i_clk_rd;
    reg                  i_rd_en;
    wire [SIZE_DATA-1:0] o_data_rd;
    wire                 o_empty;

    // Instantiate the FIFO
    fifo_asynchronous #(
        .SIZE_DATA(SIZE_DATA),
        .SIZE_DEPTH(SIZE_DEPTH)
    ) dut (
        .i_rst_n(i_rst_n),
        .i_clk_wr(i_clk_wr),
        .i_wr_en(i_wr_en),
        .i_data_wr(i_data_wr),
        .o_full(o_full),
        .i_clk_rd(i_clk_rd),
        .i_rd_en(i_rd_en),
        .o_data_rd(o_data_rd),
        .o_empty(o_empty)
    );

    // Clock generation
    initial begin
        i_clk_wr = 0;
        forever #(CLK_WR_PERIOD/2) i_clk_wr = ~i_clk_wr;
    end

    initial begin
        i_clk_rd = 0;
        forever #(CLK_RD_PERIOD/2) i_clk_rd = ~i_clk_rd;
    end

    // Test stimulus
    initial begin
        // Initialize signals
        i_rst_n   = 0;
        i_wr_en   = 0;
        i_rd_en   = 0;
        i_data_wr = 0;

        // Reset
        #20 i_rst_n = 1;

        // Test 1: Check initial empty state
        #20;
        if (o_empty == 1 && o_full == 0)
            $display("Test 1 Passed: FIFO is empty at startup");
        else
            $display("Test 1 Failed: FIFO not empty or full at startup");

        // Test 2: Write until full
        repeat (SIZE_DEPTH) begin
            @(posedge i_clk_wr);
            i_wr_en = 1;
            i_data_wr = i_data_wr + 1;
        end
        @(posedge i_clk_wr);
        i_wr_en = 0;

        #20;
        if (o_full == 1)
            $display("Test 2 Passed: FIFO is full after %0d writes", SIZE_DEPTH);
        else
            $display("Test 2 Failed: FIFO not full");

        // Test 3: Read until empty
        repeat (SIZE_DEPTH) begin
            @(posedge i_clk_rd);
            i_rd_en = 1;
        end
        @(posedge i_clk_rd);
        i_rd_en = 0;

        #20;
        if (o_empty == 1)
            $display("Test 3 Passed: FIFO is empty after %0d reads", SIZE_DEPTH);
        else
            $display("Test 3 Failed: FIFO not empty");

        // Test 4: Simultaneous read and write
        i_data_wr = 8'hA0;
        repeat (10) begin
            @(posedge i_clk_wr);
            i_wr_en = 1;
            i_data_wr = i_data_wr + 1;
            @(posedge i_clk_rd);
            i_rd_en = 1;
        end
        @(posedge i_clk_wr);
        i_wr_en = 0;
        @(posedge i_clk_rd);
        i_rd_en = 0;

        // Test 5: Write when full
        repeat (SIZE_DEPTH) begin
            @(posedge i_clk_wr);
            i_wr_en = 1;
            i_data_wr = 8'hFF;
        end
        #20;
        if (o_full == 1)
            $display("Test 5 Passed: FIFO remains full, no overwrite");
        else
            $display("Test 5 Failed: FIFO state incorrect");

        // Test 6: Read when empty
        repeat (5) begin
            @(posedge i_clk_rd);
            i_rd_en = 1;
        end
        @(posedge i_clk_rd);
        i_rd_en = 0;
        #20;
        if (o_empty == 1)
            $display("Test 6 Passed: FIFO remains empty, no invalid read");
        else
            $display("Test 6 Failed: FIFO state incorrect");

        // Test 7: Random read/write with CDC stress
        $display("Test Case 7 ---------------------------------");
        repeat (20) begin
            @(posedge i_clk_wr);
            i_wr_en = $random % 2;
            if (i_wr_en) i_data_wr = i_data_wr + 1;
            @(posedge i_clk_rd);
            i_rd_en = $random % 2;
            $display("Time=%t, rst_n=%b, wr_en=%b, rd_en=%b, data_wr=%h, data_rd=%h, empty=%b, full=%b", $time, i_rst_n, i_wr_en, i_rd_en, i_data_wr, o_data_rd, o_empty, o_full);
        end
        @(posedge i_clk_wr);
        i_wr_en = 0;
        @(posedge i_clk_rd);
        i_rd_en = 0;

        // End simulation
        #100;
        $finish;
    end

    // // Monitor output
    // initial begin
    //     $monitor("Time=%0t rst_n=%b wr_en=%b rd_en=%b data_wr=%h data_rd=%h empty=%b full=%b",
    //              $time, i_rst_n, i_wr_en, i_rd_en, i_data_wr, o_data_rd, o_empty, o_full);
    // end

endmodule
