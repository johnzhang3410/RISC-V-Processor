module register_file #()
(
    input clock,
    input write_enable,

    input [31:0] data_rd,
    input [4:0] addr_rd,    //register we write to when write_enable 
    input [4:0] addr_rs1,   
    input [4:0] addr_rs2,

    output [31:0] data_rs1,
    output [31:0] data_rs2
);

reg [31:0] regs [31:0];

assign data_rs1 = regs[addr_rs1];
assign data_rs2 = regs[addr_rs2];

always @(posedge clock) begin
    if (write_enable) regs[addr_rd] <= data_rd;

    // always set x0 to 0
    regs[0] <= 32'b0;
end

// initialize registers
initial begin
    integer i;
    for (i=0; i < 32; i=i+1) begin
        regs[i] = 32'b0;
    end
    regs[2] = 32'h01000000 + `MEM_DEPTH;    // x2 = 01100000
end


endmodule
