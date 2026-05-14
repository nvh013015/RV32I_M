module MDR(
    input logic reset,
    input logic clock,
    input logic [2:0] Which_load_comment, // funct3 000: LB, 001: LH, 010: LW, 011: LBU, 100: LHU
    input logic [1:0] What_HW_or_B,
    input logic [31:0] Data,
    output logic [31:0] o_Data
);
    logic [31:0] i_Data;
    always_ff @( posedge clock ) begin
        if (reset) begin
            i_Data <= 32'b0;
        end
        else begin
            i_Data <= Data;
        end
    end
    always_comb begin 
        case (Which_load_comment)
            3'b000: case (What_HW_or_B)
                2'b00: o_Data = {{24{i_Data[7]}}, i_Data[7:0]};
                2'b01: o_Data = {{24{i_Data[15]}}, i_Data[15:8]};
                2'b10: o_Data = {{24{i_Data[23]}}, i_Data[23:16]};
                2'b11: o_Data = {{24{i_Data[31]}}, i_Data[31:24]};
                default: o_Data = 32'b0;
            endcase
            3'b001: case (What_HW_or_B)
                2'b00: o_Data = {{16{i_Data[15]}}, i_Data[15:0]};
                2'b01: o_Data = {{16{i_Data[31]}}, i_Data[31:16]};
                default: o_Data = 32'b0;
            endcase
            3'b010: o_Data = i_Data;
            3'b011: case (What_HW_or_B)
                2'b00: o_Data = {24'b0, i_Data[7:0]};
                2'b01: o_Data = {24'b0, i_Data[15:8]};
                2'b10: o_Data = {24'b0, i_Data[23:16]};
                2'b11: o_Data = {24'b0, i_Data[31:24]};
                default: o_Data = 32'b0;
            endcase
            3'b100: case (What_HW_or_B)
                2'b00: o_Data = {16'b0, i_Data[15:0]};
                2'b01: o_Data = {16'b0, i_Data[31:16]};
                default: o_Data = 32'b0;
            endcase
            default: o_Data = 32'b0;
        endcase
    end
endmodule