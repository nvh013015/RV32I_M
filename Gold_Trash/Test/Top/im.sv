module imem(input logic[31:0] a, output logic[31:0] rd);
    logic[31:0] RAM[0:63];
    initial
        $readmemh("testbench/test.hex",RAM);
    assign rd = RAM[a[31:2]]; //word aligned
endmodule