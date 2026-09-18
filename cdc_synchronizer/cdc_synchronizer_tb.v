module cdc_synchronizer_tb;

    reg  clk      = 0;  // Clock signal
    reg  async_in = 0;  // Asynchronous input signal
    wire synced;        // Synchronized output

    // Clock generation: 10 time-unit period
    always #5 clk <= ~clk;

    // Instantiate the DUT
    cdc_synchronizer uut (
        .clk      (clk),
        .async_in (async_in),
        .synced   (synced)
    );

    initial begin
        $monitor("Time=%0t clk=%b async_in=%b synced=%b",
             $time, clk, async_in, synced);
    end
    

    // Apply asynchronous input transitions
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, cdc_synchronizer_tb);

        #12 async_in = 1;
        #7  async_in = 0;
        #6  async_in = 1;
        #9  async_in = 0;

        #50 $finish;
    end

endmodule

