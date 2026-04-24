module SdataSrc (
    input logic clock,
    input logic [31:0] newPC,
    input logic [31:0] oldPC,
    input logic [31:0] rs1,
    input logic [31:0] rs2,
    input logic [31:0] imm,
    input logic [3:0] SdataSrcControl,
    output logic [31:0] writeData,
    output logic [31:0] ALUsrcA,
    output logic [31:0] ALUsrcB
);
    logic[31:0] Data1,
    always_ff @( posedge clock ) begin : blockName
        Data1 <= rs1;
        Writeback <= rs2;
    end
    always_comb begin : blockName
        case (SdataSrcControl)
            4'b0000: writeData = Data1;           // rs1
            4'b0001: writeData = Writeback;       // rs2
            4'b0010: writeData = imm;             // immediate
            4'b0011: writeData = newPC;          // newPC
            4'b0100: writeData = oldPC;          // oldPC
            default: writeData = 32'b0;          // Mặc định trả về 0 nếu không khớp
        endcase
    end

endmodule
