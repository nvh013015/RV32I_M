module controller(
    input  logic [6:0]   op, 
    input  logic [14:12] funct3,
    input  logic         funct7b5,
    input  logic         Zero,
    output logic [1:0]   ResultSrc, 
    output logic [2:0]   ALUControl,
    output logic         ALUSrc,    
    output logic         PCSrc,    
    output logic [1:0]   ImmSrc, 
    output logic         RegWrite,
    output logic         MemWrite,  
    output logic         Jump
);
    logic [1:0] ALUOp;             
    logic       Branch;

   // --- INSTANCE MAINDEC ---
    maindec md (
        .op        (op),
        .ResultSrc (ResultSrc),
        .MemWrite  (MemWrite),
        .Branch    (Branch),
        .ALUSrc    (ALUSrc),
        .RegWrite  (RegWrite),
        .jump      (Jump),      // Chú ý: port trong maindec viết thường 'jump'
        .ImmSrc    (ImmSrc),
        .ALU0p     (ALUOp)      // Chú ý: port trong maindec viết số 'ALU0p'
    );

    // --- INSTANCE ALUDEC ---
    aludec ad (
        .opb5       (op[5]),
        .funct3     (funct3),
        .funct7b5   (funct7b5),
        .ALU0p      (ALUOp),    // Khớp với khai báo input logic[1:0] ALU0p
        .ALUControl (ALUControl)
    );

    assign PCSrc = (Branch & Zero) | Jump;

endmodule