module maindec(input logic[6:0] op,
    output logic[1:0] ResultSrc,
    output logic MemWrite,
    output logic Branch,ALUSrc,
    output logic RegWrite,jump,
    output logic[1:0] ImmSrc,
    output logic[1:0] ALU0p);
    logic[10:0] controls;

    // BUG FIX 1: đổi 'Jump' → 'jump' cho khớp với tên port đã khai báo ở trên
    assign {RegWrite, ImmSrc, ALUSrc, MemWrite,
            ResultSrc, Branch, ALU0p, jump} = controls;

    always_comb begin
        case(op)
        // RegWrite_ImmSrc_ALUSrc_MemWrite_ResultSrc_Branch_ALUOp_Jump
        7'b0000011: controls = 11'b1_00_1_0_01_0_00_0; // lw
        7'b0100011: controls = 11'b0_01_1_1_00_0_00_0; // sw
        // BUG FIX 2: R-type ImmSrc không dùng nhưng không được để 'xx'
        //            vì gây X-state lan rộng; đặt 00 thay thế
        7'b0110011: controls = 11'b1_00_0_0_00_0_10_0; // R-type
        7'b1100011: controls = 11'b0_10_0_0_00_1_01_0; // beq
        7'b0010011: controls = 11'b1_00_1_0_00_0_10_0; // I-type ALU
        7'b1101111: controls = 11'b1_11_0_0_10_0_00_1; // jal
        default:    controls = 11'b0_00_0_0_00_0_00_0; // safe default (NOP)
        endcase
    end
endmodule