module fsm(
    output logic PCWrite,
    output logic MemWrite,
    output logic IRWrite,
    output logic RegWrite,
    output logic AdrSrc,
    output logic [1:0] ResultSrc,
    output logic [1:0] ALUSrcA,
    output logic [1:0] ALUSrcB,
    output logic [1:0] ALUCop,
    output logic branch,
    input logic clock,
    input logic reset,
    input logic zero,
    input logic [31:0] instruction

);
    // State Encoding: 4-bit (0000 to 1010)
    localparam FETCH          = 4'h0,
           DECODE         = 4'h1,
           MEM_ADR        = 4'h2,
           MEM_READ       = 4'h3,
           MEM_WRITEBACK  = 4'h4,
           MEM_WRITE      = 4'h5,
           EXECUTE_R      = 4'h6,
           ALU_WRITEBACK  = 4'h7,
           EXECUTE_I      = 4'h8,
           JAL            = 4'h9,
           BEQ            = 4'hA,
            IDLE = 4'b1111; 
    
    logic [3:0] state, next_state;

    always_ff @( posedge clock ) begin 
        if (reset) begin
            state <= FETCH;
        end else begin
            state <= next_state;
        end
    end

    always_comb begin
        // Default values for control signals
        PCWrite = 0;
        MemWrite = 0;
        IRWrite = 0;
        RegWrite = 0;
        AdrSrc = 0;
        ResultSrc = 2'b00;
        ALUSrcA = 2'b00;
        ALUSrcB = 2'b00;
        ALUCop = 2'b00;

        case (state)

            FETCH: begin
                PCWrite = 1; // Enable PC update
                IRWrite = 1; // Enable instruction register write
                AdrSrc = 0; 
                ALUSrcA = 2'b00; 
                ALUSrcB = 2'b10; 
                ALUCop = 2'b00; 
                ResultSrc = 2'b10;
                next_state = DECODE; 
            end

            DECODE: begin
                // Set control signals for decoding the instruction
                // (e.g., read registers, prepare for execution)
                ALUSrcA = 2'b01; // Use rs1 as ALU source A
                ALUSrcB = 2'b01; // Use rs2 as ALU source
                ALUCop = 2'b00; // ALU performs addition (for address calculation)
                case(instruction[6:0])
                    7'b0000011, 7'b0100011: next_state = MEM_ADR; // Load/Store instructions
                    7'b0110011: next_state = EXECUTE_R; // R-type instructions
                    7'b0010011: next_state = EXECUTE_I; // I-type instructions
                    7'b1101111: next_state = JAL; // JAL instruction
                    7'b1100011: next_state = BEQ; // BEQ instruction
                    default: next_state = FETCH; // Default case (should not happen)
                endcase
            end

            MEM_ADR: begin
                // Set control signals for calculating memory address
                ALUSrcA = 2'b10; // Use rs1 as ALU source A
                ALUSrcB = 2'b01; // Use rs2 as ALU source
                ALUCop = 2'b00; // ALU performs addition (for address calculation
                case(instruction[6:0])
                    7'b0000011: next_state = MEM_READ; // Load instruction
                    7'b0100011: next_state = MEM_WRITE; // Store instruction
                    default: next_state = FETCH; // Default case (should not happen)
                endcase
            end

            MEM_READ: begin
                // Set control signals for reading from memory
                ResultSrc = 2'b00; // Select ALU result as result source
                AdrSrc = 1; // Use ALU result as memory address
                next_state = MEM_WRITEBACK; // Transition to MEM_WRITEBACK state
            end

            MEM_WRITEBACK: begin
                RegWrite = 1; // Enable register write-back with memory data
                ResultSrc = 2'b01; // Select memory data as result source
                next_state = FETCH; // Transition back to FETCH state
            end

            MEM_WRITE: begin
                MemWrite = 1; // Enable memory write
                ResultSrc = 2'b00; // Select ALU result as data source for memory write
                AdrSrc = 1; // Use ALU result as memory address
                next_state = FETCH; // Transition back to FETCH state
            end

            EXECUTE_R: begin
                // Set control signals for executing R-type instructions
                ALUSrcA = 2'b10; // Use rs1 as ALU source A
                ALUSrcB = 2'b00; // Use rs2 as ALU source
                ALUCop = 2'b10; // ALU performs operation based on funct3/funct7
                next_state = ALU_WRITEBACK; // Transition to ALU_WRITEBACK state
            end

            EXECUTE_I: begin
                // Set control signals for executing I-type instructions
                ALUSrcA = 2'b10; // Use rs1 as ALU source A
                ALUSrcB = 2'b01; // Use immediate as ALU source B
                ALUCop = 2'b10; // ALU performs operation based on funct3
                next_state = ALU_WRITEBACK; // Transition to ALU_WRITEBACK state
            end

            JAL: begin
                // Set control signals for executing JAL instruction
                ALUSrcA = 2'b01; // Use PC as ALU source A
                ALUSrcB = 2'b10; // Use immediate as ALU source B
                ALUCop = 2'b00; // ALU performs operation based on funct3
                ResultSrc = 2'b00; // Select ALU result as result source
                PCWrite = 1; // Enable PC update with ALU result
                next_state = ALU_WRITEBACK; // Transition to ALU_WRITEBACK state
            end

            BEQ: begin
                // Set control signals for executing BEQ instruction
                ALUSrcA = 2'b10; // Use rs1 as ALU source A
                ALUSrcB = 2'b00; // Use rs2 as ALU source B
                ALUCop = 2'b01; // ALU performs subtraction for comparison
                branch = 1; // Enable branching
            end

            ALU_WRITEBACK: begin
                RegWrite = 1; // Enable register write-back with ALU data
                ResultSrc = 2'b10; // Select ALU data as result source
                next_state = FETCH; // Transition back to FETCH state
            end
            
            default: begin
                next_state = IDLE; // Default case (should not happen)
            end
        endcase 
    end

endmodule