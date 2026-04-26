module SdataSrc (
    input logic clock,
    input logic [31:0] newPC,
    input logic [31:0] oldPC,
    input logic [31:0] rs1,
    input logic [31:0] rs2,
    input logic [31:0] imm,
    input logic [1:0] SdataSrcA,
    input logic [1:0] SdataSrcB,
    output logic [31:0] writeData,
    output logic [31:0] ALUsrcA,
    output logic [31:0] ALUsrcB
);
    logic[31:0] Data1;
    always_ff @( posedge clock ) begin 
        Data1 <= rs1;
        writeData <= rs2;
    end

    always_comb begin
        case (SdataSrcA)
            2'b00: ALUsrcA = newPC;
            2'b01: ALUsrcA = oldPC;
            2'b10: ALUsrcA = Data1; 
            default: ALUsrcA = 0;
        endcase
    end
    
    always_comb begin 
        case (SdataSrcB)
            2'b00: ALUsrcB = writeData;
            2'b01: ALUsrcB = imm;
            2'b10: ALUsrcB = 32'd4; 
            default: ALUsrcB = 0;
        endcase
    end


endmodule
