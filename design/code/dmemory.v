module dmemory 
#(
    parameter MEM_DEPTH = 32'd1048576
)
(
    input   wire            clock,
    input   wire    [31:0]  address,
    input   wire            read_write,                 //1 for write, 0 for read
    input   wire    [31:0]  data_in,                    //data to write 
    input   wire    [1:0]   access_size,                //byte, half-word, word
    output  wire    [31:0]  data_out                    //data we read
);

reg [7:0] memory [MEM_DEPTH:0];                         //represents the memory, each element is 1 byte

wire [7:0] in_bytes[4];

always @(posedge clock) begin                           //write operation 
    if (read_write) begin
        case (access_size)
            0: memory[address] <= data_in[7:0];         //write byte
            1: begin                                    //write half-word
                memory[address+1] <= data_in[15:8];
                memory[address] <= data_in[7:0];
            end
            2: begin                                    //write word
                memory[address+3] <= data_in[31:24];
                memory[address+2] <= data_in[23:16];
                memory[address+1] <= data_in[15:8];
                memory[address] <= data_in[7:0];
            end
            default: begin // default store word
                memory[address+3] <= data_in[31:24];
                memory[address+2] <= data_in[23:16];
                memory[address+1] <= data_in[15:8];
                memory[address] <= data_in[7:0];
            end  
        endcase
    end
end

assign data_out = {memory[address+3], memory[address+2], memory[address+1], memory[address]};   //reads word

integer i;
initial begin
    reg [31:0] temp_arr [`LINE_COUNT];
    $readmemh(`MEM_PATH, temp_arr);                     //reads mem content from hex file in MEM_PATH to temp_arr

    for (i=0; i < `LINE_COUNT; i=i+1) begin             //initializes the array byte by byte 
        memory[4*i]     =  temp_arr[i][7:0];
        memory[4*i+1]   =  temp_arr[i][15:8];
        memory[4*i+2]   =  temp_arr[i][23:16];
        memory[4*i+3]   =  temp_arr[i][31:24];
    end
end

endmodule