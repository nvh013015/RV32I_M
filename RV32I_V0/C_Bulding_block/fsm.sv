module fsm(
    output logic PCWrite,
    output logic MemWrite,
    output logic IRWrite,
    output logic RegWrite,
    output logic AdrSrc,
    output logic [1:0] ResultSrc,
    output logic [1:0] ALUSrcA,
    output logic [1:0] ALUSrcB,
    output logic [2:0] ImmSrc,
    output logic [3:0] ALUControl,
    input logic clk,
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
           BEQ            = 4'hA;
    
    logic [3:0] state, next_state;

    always_ff @( posedge clock ) begin 
        state <= next_state;
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
        ImmSrc = 3'b000;
        ALUCop = 2'b00;

        case (state)
            FETCH: begin
                PCWrite = 1; // Enable PC update
                IRWrite = 1; // Enable instruction register write
                AdrSrc = 0; // Use PC for memory address
                ALUSrcA = 2'b00; // Use PC as ALU source A
                ALUSrcB = 2'b10; // Use immediate value (4) as ALU source B
                ALUCop = 2'b00; // ALU performs addition (PC + 4)
                ResultSrc = 2'b10; // Select ALU result as result source
                next_state = DECODE; // Transition to DECODE state
            end

            DECODE: begin
                // Set control signals for decoding the instruction
                // (e.g., read registers, prepare for execution)
                next_state = EXECUTE_R; // Transition to EXECUTE_R state (for R-type instructions)
            end

            MEM_ADR: begin
                // Set control signals for calculating memory address
                next_state = MEM_READ; // Transition to MEM_READ state
            end

            MEM_READ: begin
                // Set control signals for reading from memory
                next_state = MEM_WRITEBACK; // Transition to MEM_WRITEBACK state
            end

            MEM_WRITEBACK: begin
                RegWrite = 1; // Enable register write-back with memory data
                ResultSrc = 2'b01; // Select memory data as result source
                next_state = FETCH; // Transition back to FETCH state
            end

            MEM_WRITE: begin
                MemWrite = 1; // Enable memory write
                next_state = FETCH; // Transition back to FETCH state
            end

            EXECUTE_R: begin
                // Set control signals for executing R-type instructions
                next_state = ALU_WRITEBACK; // Transition to ALU_WRITEBACK state
            end

            ALU_WRITEBACK: begin
                RegWrite = 1; // Enable register write-back with ALU data
                ResultSrc = 2'b10; // Select ALU data as result source
                next_state = FETCH; // Transition back to FETCH state
            end


endmodule