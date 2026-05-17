module Top (
    input logic clk,
    input logic reset
);
    logic memWrite;
    logic [31:0] mem_addr;
    logic [31:0] mem_wdata;
    logic [3:0] mem_wmask;
    logic [31:0] mem_rdata;

    rv32i_m cpu (
        .clk(clk),
        .reset(reset),
        .memWrite(memWrite),
        .mem_rdata(mem_rdata),
        .mem_addr(mem_addr),
        .mem_wdata(mem_wdata),
        .mem_wmask(mem_wmask)
    );

    Memory memory (
        .clk(clk),
        .memWrite(memWrite),
        .mem_addr(mem_addr),
        .mem_wdata(mem_wdata),
        .mem_wmask(mem_wmask),
        .mem_rdata(mem_rdata)
    );
endmodule