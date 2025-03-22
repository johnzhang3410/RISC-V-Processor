module branch_comp (
    input wire [31:0] in_1,
    input wire [31:0] in_2,
    input wire br_un,   //allows for both unsigned and sign comparison

    output reg br_eq,   //1 if both inputs are the same
    output reg br_lt    //1 if in_1 < in_2
);

assign br_eq = (in_1 == in_2);
reg [31:0] diff;
always @(*) begin
    if (br_un) begin
        // unsigned lt
        br_lt = in_1 < in_2;
        diff = 32'bx;
    end else begin
        // signed lt, same logic as in ALU
        if (in_1[31] ^ in_2[31]) begin  
            br_lt = in_1[31];
            diff = 32'bx;
        end else begin
            diff = in_1 - in_2;
            br_lt = diff[31];
        end
    end
end


endmodule