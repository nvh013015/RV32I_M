module Store(
    input logic[31:0] writeData, //Data from rs2 (SdataSrc)
    input logic [2:0] WhichStore, // 00: byte, 01: half-word, 10: word (funt3)
    input logic [1:0] which_half_or_byte,
    output logic[31:0] storeData, //Data to be stored in memory
    output logic [3:0] storeMask // Mask for byte/half-word/word store
);
    
    always_comb begin
        storeData = 32'b0;
        storeMask = 4'b0000;
        case (WhichStore)
            3'b000: case (which_half_or_byte)
                2'b00: begin
                    storeData = {24'b0, writeData[7:0]};
                    storeMask = 4'b0001;
                end
                2'b01: begin
                    storeData = {16'b0, writeData[7:0], 8'b0};
                    storeMask = 4'b0010;
                end
                2'b10: begin
                    storeData = {8'b0, writeData[7:0], 16'b0};
                    storeMask = 4'b0100;
                end
                2'b11: begin
                    storeData = { writeData[7:0] , 24'b0};
                    storeMask = 4'b1000;
                end
                default: begin
                    storeData = 32'b0;
                    storeMask = 4'b0000;
                end
            endcase
            3'b001: case (which_half_or_byte)
                2'b00: begin
                    storeData = {16'b0, writeData[15:0]};
                    storeMask = 4'b0011;
                end
                2'b10: begin
                    storeData = {writeData[15:0], 16'b0};
                    storeMask = 4'b1100;
                end
                default: begin
                    storeData = 32'b0;
                    storeMask = 4'b0000;
                end
            endcase
            3'b010: begin
                storeData = writeData;
                storeMask = 4'b1111;
            end
            default: begin
                storeData = 32'b0;
                storeMask = 4'b0000;
            end
        endcase
    end
endmodule