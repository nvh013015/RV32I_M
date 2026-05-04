module Controller ( 
    input logic clk,
    input logic zero,
    input logic [31:0] instruction,
    output logic PCwrite,
    output logic MemWrite,
    output logic IRwrite,
    output logic RegWrite,
    output logic AdrSrc,
    output logic [1:0] ResultSrc,
    output logic [1:0] ALUSrcA,
    output logic [1:0] ALUSrcB,
    output logic [2:0] ImmSrc,
    output logic [3:0] ALUControl
    
);
    

endmodule