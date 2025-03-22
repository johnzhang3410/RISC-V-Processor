module alu(
    input [3:0] alu_sel,    // {extra_bit, funct3}
    input [31:0] in_1,
    input [31:0] in_2,

    output reg [31:0] out
);

reg [31:0] diff;
always @(*) begin
    case (alu_sel[2:0])
        3'b000: begin
            out = alu_sel[3] ? in_1 - in_2 : in_1 + in_2;   // 1000 for SUB and 0000 for ADD
            diff = 32'bx;
        end
        3'b001: begin
            out = (in_1 << in_2[4:0]);
            diff = 32'bx;
        end
        3'b010: begin
            if (in_1[31] ^ in_2[31]) begin  //if sign bits (0: positive) are different for SLT
                out = {31'b0, in_1[31]};    //positive in_1 means negative in_2, out = 0 (in_1 not < in_2, false). else out = 1
                diff = 32'bx;
            end else begin
                diff = in_1 - in_2;
                out = {31'b0, diff[31]};
            end
        end
        3'b011: begin                       //Unsigned version of SLT, 1 if in_1 < in_2 
            out = {31'b0, (in_1 < in_2)};
            diff = 32'bx;
        end
        3'b100: begin
            out = (in_1 ^ in_2);
            diff = 32'bx;
        end
        3'b101: begin                       //arithmetic shift right when alu_sel[3], else logical shift right 
            out = alu_sel[3] ? $signed(in_1) >>> in_2[4:0] : $signed(in_1) >> in_2[4:0];
            diff = 32'bx;
        end
        3'b110: begin
            out = in_1 | in_2;
            diff = 32'bx;
        end
        3'b111: begin
            out = alu_sel[3] ? in_2 : in_1 & in_2;  // 1111 for LUI (Load upper immediate) and 0111 for AND
            diff = 32'bx;
        end        
        default: begin
            out = in_1 + in_2; // default case when no cases match
            diff = 32'bx;
        end
    endcase
end


endmodule