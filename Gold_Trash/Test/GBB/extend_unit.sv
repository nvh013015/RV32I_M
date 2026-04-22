module extend(input  logic [31:7] instr, 
    input  logic [1:0]  ImmSrc,   
    output logic [31:0] ImmExt  );
    logic [31:0] immI, immS, immB, immJ;
    logic sign;

    assign sign = instr[31];

    // Tạo sẵn hằng số cho từng loại lệnh
    assign immI = {{20{sign}}, instr[31:20]};
    assign immS = {{20{sign}}, instr[31:25], instr[11:7]};
    assign immB = {{20{sign}}, instr[7], instr[30:25], instr[11:8], 1'b0};
    assign immJ = {{12{sign}}, instr[19:12], instr[20], instr[30:21], 1'b0};

    // 2. Trong này chỉ còn là một cái Mux đơn giản, không có tính toán gì thêm
    always_comb begin
        case(ImmSrc)
            2'b00:   ImmExt = immI;
            2'b01:   ImmExt = immS;
            2'b10:   ImmExt = immB;
            2'b11:   ImmExt = immJ;
            default: ImmExt = 32'bx; 
        endcase
    end
endmodule