module imemory 
#(
    parameter MEM_DEPTH = 32'd1048576
)
(
    input   wire            clock,
    input   wire    [31:0]  address,
    input   wire            read_write,
    input   wire    [31:0]  data_in,            //instructions are always 32 bits
    output  wire    [31:0]  data_out
);

reg [7:0] memory [MEM_DEPTH:0];

wire [7:0] in_bytes[4];

always @(posedge clock) begin
    if (read_write) begin
        memory[address]     <=  data_in[7:0];
        memory[address+1]   <=  data_in[15:8];
        memory[address+2]   <=  data_in[23:16];
        memory[address+3]   <=  data_in[31:24];
    end
end

assign data_out = {memory[address+3], memory[address+2], memory[address+1], memory[address]};

integer i;
initial begin
    reg [31:0] temp_arr [`LINE_COUNT];
    $readmemh(`MEM_PATH, temp_arr);

    for (i=0; i < `LINE_COUNT; i=i+1) begin
        memory[4*i]     =  temp_arr[i][7:0];
        memory[4*i+1]   =  temp_arr[i][15:8];
        memory[4*i+2]   =  temp_arr[i][23:16];
        memory[4*i+3]   =  temp_arr[i][31:24];
    end
end

endmodule