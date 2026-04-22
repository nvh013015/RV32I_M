`timescale 1ns / 1ps
module testbench();
    logic clk;
    logic reset;
    logic[31:0] WriteData, DataAdr;
    logic MemWrite;
    top dut(clk, reset, WriteData, DataAdr, MemWrite);
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, testbench);
    end
endmodule