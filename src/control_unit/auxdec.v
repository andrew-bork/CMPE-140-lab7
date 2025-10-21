module auxdec (
        input  wire [1:0] alu_op,
        input  wire [5:0] funct,
        output wire [3:0] alu_ctrl,
        output wire enable_register_jump
    );

    reg [4:0] ctrl;

    assign {enable_register_jump, alu_ctrl} = ctrl;

    always @ (alu_op, funct) begin
        case (alu_op)
            2'b00: ctrl = 5'b00010;          // ADD
            2'b01: ctrl = 5'b00110;          // SUB
            default: case (funct)
                6'b10_0100: ctrl = 5'b00000; // AND
                6'b10_0101: ctrl = 5'b00001; // OR
                6'b10_0000: ctrl = 5'b00010; // ADD
                6'b10_0010: ctrl = 5'b00110; // SUB
                6'b10_1010: ctrl = 5'b00111; // SLT

                6'b00_0000: ctrl = 5'b01000; // SLL
                6'b00_0010: ctrl = 5'b01001; // SlR
                6'b01_1001: ctrl = 5'b01100; // MULTU
                6'b01_0000: ctrl = 5'b01010; // MFHI
                6'b01_0010: ctrl = 5'b01011; // MFLO

                6'b00_1000: ctrl = 5'b11111;

                default:    ctrl = 5'bXXXXX;
            endcase
        endcase
    end

endmodule