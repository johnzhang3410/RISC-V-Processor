// possible formats to support in imm_sel: 10 possibilities
// I-format: 12b signed (3)
// Load: 8b signed (0), 8b unsigned (4), 16b signed (1), 16b unsigned (5), 32b (2)
// Store: inst[31:25]+inst[11:7] signed (6), 8b signed, 16b signed, 32b
// Branch: a single fucking format (7)
// jalr: 12b signed (same as I-format)
// jal: another fucking format (8)
// auipc & lui: inst[31:12] (9)

module imm_gen (
    input wire [31:0] imm_in,
    input wire [3:0] imm_sel,         // what bits are used in imm_in

    output reg [31:0] imm_out 
);

//assign imm_out[31:0] = imm_in;

integer i;
always @(*) begin
    case (imm_sel)
        0: begin
            //8b signed
            for (i=8; i < 32; i=i+1) begin      //sign extension
                imm_out[i] = imm_in[7];
            end
            imm_out[7:0] = imm_in[7:0];
        end
        1: begin
            //16b signed
            for (i=16; i< 32; i=i+1) begin
                imm_out[i] = imm_in[15];
            end
            imm_out[15:0] = imm_in[15:0];
        end
        2: begin
            //32b
            imm_out = imm_in; 
        end
        3: begin
            //for 12b signed (2), I-format
            imm_out = {{20{imm_in[31]}}, imm_in[31:20]};
        end
        4: begin
            //8b unsigned, 0 extend 
            for (i=8; i < 32; i=i+1) begin
                imm_out[i] = 0;
            end
            imm_out[7:0] = imm_in[7:0];
        end
        5: begin
            //16b unsigned
            for (i=16; i< 32; i=i+1) begin
                imm_out[i] = 0;
            end
            imm_out[15:0] = imm_in[15:0];
        end
        6: begin
            //store, inst[31:25]+inst[11:7]
            for (i=12; i<32; i=i+1) begin
                imm_out[i] = imm_in[31];
            end
            imm_out[4:0] = imm_in[11:7];
            imm_out[11:5] = imm_in[31:25];
        end
        7: begin
            //branch
            for (i=13; i<32; i=i+1) begin
                imm_out[i] = imm_in[31];    //sign extend the 12th bit 
            end
            imm_out[12] = imm_in[31];
            imm_out[11] = imm_in[7];
            imm_out[10:5] = imm_in[30:25];
            imm_out[4:1] = imm_in[11:8];
            imm_out[0] = 0;
        end
        4'b1000: begin
            //jal
            for (i=21; i < 32; i=i+1) begin
                imm_out[i] = imm_in[31];     //sign extend the 20th bit 
            end
            imm_out[20] = imm_in[31];   
            imm_out[19:12] = imm_in[19:12];
            imm_out[11] = imm_in[20];
            imm_out[10:1] = imm_in[30:21];
            imm_out[0] = 0;
        end
        9: begin
            //auipc & lui: inst[31:12], lower 12b are zeroes
            imm_out[31:12] = imm_in[31:12];
            for (i=0; i < 12; i=i+1) begin
                imm_out[i] = 0;
            end

            // imm_out = {imm_in[31:12], 12'b0};
        end
    endcase 
end


endmodule