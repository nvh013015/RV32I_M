module SResultSrc (
    input logic clock,
    input logic [1:0]resultSrc,
    input logic [31:0] ALUresult,
    input logic [31:0] MemData,
    output logic [31:0] Result
);
    logic [31:0] ALUout;
    always_ff @( posedge clock ) begin 
        ALUout <= ALUresult;
    end
    always_comb begin 
        case (resultSrc)
            2'b00: Result = ALUout;
            2'b01: Result = MemData;
            2'b10: Result = ALUresult;
            default: Result = 32'b0;
        endcase
    end
endmodule