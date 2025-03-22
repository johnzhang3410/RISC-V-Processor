
`define R_TYPE  7'b0110011
`define I_TYPE  7'b0010011
`define LOAD    7'b0000011
`define STORE   7'b0100011
`define BRANCH  7'b1100011
`define JALR    7'b1100111
`define JAL     7'b1101111
`define AUIPC   7'b0010111
`define LUI     7'b0110111
`define ECALL   7'b1110011

module control( 
    input clock,
    input reset, // TODO: add reset logic

    input wire [31:0]    insn_d,
    input wire br_eq,
    input wire br_lt,

    // F 
    output reg jump,
    output reg br_taken,
    output reg stall,

    // D
    output reg [4:0]    rs1,
    output reg [4:0]    rs2,
    output reg [3:0]    imm_sel_imm,

    // X
    output reg          a_sel,
    output reg          b_sel,
    output reg [1:0]    rs1_sel,
    output reg [1:0]    rs2_sel,
    output reg          br_un,
    output reg [3:0]    alu_sel,

    // M
    output reg          data_w_sel,
    output reg [1:0]    access_size,
    output reg          dmem_rw, 
    output reg [3:0]    imm_sel_dmem,
    output reg [1:0]    wb_sel,

    // W
    output reg          reg_wen,
    output reg [4:0]    rd
);

//store intermediate control signals and states
reg [6:0] opcode_d;
reg [6:0] opcode_x;

reg [6:0] funct7_d;
reg [2:0] funct3_d;
reg [2:0] funct3_x;

reg reg_wen_d;
reg reg_wen_x;
reg reg_wen_m;
reg reg_wen_w;

reg br_un_d;
reg br_un_x;

reg [4:0] rs1_d;
reg [4:0] rs2_d;
reg [4:0] rd_d;
reg [4:0] rd_x;
reg [4:0] rd_m;
reg [4:0] rd_w;

reg [3:0] alu_sel_d;
reg [3:0] alu_sel_x;

reg [1:0] rs1_sel_d;
reg [1:0] rs1_sel_x;
reg [1:0] rs2_sel_d;
reg [1:0] rs2_sel_x;

reg       data_w_sel_d;
reg       data_w_sel_x;
reg       data_w_sel_m;

reg [1:0] access_size_d;
reg [1:0] access_size_x;
reg [1:0] access_size_m;

reg dmem_rw_d;
reg dmem_rw_x;
reg dmem_rw_m;

reg [3:0] imm_sel_dmem_d;
reg [3:0] imm_sel_dmem_x;
reg [3:0] imm_sel_dmem_m;

reg [1:0] wb_sel_d;
reg [1:0] wb_sel_x;
reg [1:0] wb_sel_m;

// F
always @(*) begin
    // jump
    jump = opcode_d == `JAL;

    // br_taken
    br_taken = 0;
    if (opcode_x == `JALR) begin
        br_taken = 1;
    end else if (opcode_x == `BRANCH) begin
        case (funct3_x)
        3'b000: br_taken = br_eq;
        3'b001: br_taken = !br_eq;
        3'b100: br_taken = br_lt;
        3'b101: br_taken = !br_lt;
        3'b110: br_taken = br_lt;
        3'b111: br_taken = !br_lt;
        default: br_taken = 0;    // noop
        endcase
    end
end

// D
always @(*) begin
    opcode_d = insn_d[6:0];
    funct7_d = insn_d[31:25];
    funct3_d = insn_d[14:12];

    case (opcode_d)    
    `R_TYPE: begin
        reg_wen_d       = 1;                    // r-type instructions write to rd
        imm_sel_imm     = 4'bxxxx;
        br_un_d         = 1'bx;
        rs1_d           = insn_d[19:15];
        rs2_d           = insn_d[24:20];
        rd_d            = insn_d[11:7];
        alu_sel_d       = {funct7_d[5], funct3_d};   // inst[30] ditinguishes between ADD and SUB, SRL and SRA
        access_size_d   = 2'bxx;
        dmem_rw_d       = 0;                    // don't care dmem
        imm_sel_dmem_d  = 4'bxxxx;
        wb_sel_d        = 1;                     // write alu_out to rd
    end
    `I_TYPE: begin
        reg_wen_d       = 1;                    // i-type instructions write to rd
        imm_sel_imm     = 3;
        br_un_d         = 1'bx;
        rs1_d           = insn_d[19:15];
        rs2_d           = 0;                   // i-type doesn't use rs2
        rd_d            = insn_d[11:7];
        alu_sel_d       = {funct3_d == 3'b101 ? funct7_d[5] : 1'b0, funct3_d};
        access_size_d   = 2'bxx;
        dmem_rw_d       = 0;                    // don't care dmem
        imm_sel_dmem_d  = 4'bxxxx;
        wb_sel_d        = 1;                     // write alu_out to rd
    end
    `LOAD: begin
        reg_wen_d       = 1;                    // write to rd
        imm_sel_imm     = 3;
        br_un_d         = 1'bx;
        rs1_d           = insn_d[19:15];
        rs2_d           = 0;                   // load doesn't use rs2
        rd_d            = insn_d[11:7];
        alu_sel_d       = 0;                    // alu add
        access_size_d   = 2'bxx;
        dmem_rw_d       = 0;                    // dmem read
        imm_sel_dmem_d  = {1'b0, funct3_d};
        wb_sel_d        = 0;                     // write dmem to rd
    end
    `STORE: begin
        reg_wen_d       = 0;                    // store doesn't write to rd
        imm_sel_imm     = 6;
        br_un_d         = 1'bx;
        rs1_d           = insn_d[19:15];
        rs2_d           = insn_d[24:20];
        rd_d            = 0;
        alu_sel_d       = 0;                    // alu add
        access_size_d   = funct3_d[1:0];
        dmem_rw_d       = 1;                    // dmem write
        imm_sel_dmem_d  = 4'bxxxx;
        wb_sel_d        = 2'bxx;
    end
    `BRANCH: begin   
        reg_wen_d       = 0;                    // branch doesn't write to rd
        imm_sel_imm     = 7;
        br_un_d         = funct3_d[1];              // unsigned comparison
        rs1_d           = insn_d[19:15];
        rs2_d           = insn_d[24:20];
        rd_d            = 0;
        alu_sel_d       = 0;                    // alu add
        access_size_d   = 2'bxx;
        dmem_rw_d       = 0;                    // don't care dmem
        imm_sel_dmem_d  = 4'bxxxx;
        wb_sel_d        = 2'bxx;
    end
    `JALR: begin
        reg_wen_d       = 1;                    // jalr wrtes to rd
        imm_sel_imm     = 3;                // I-format immediate
        br_un_d         = 1'bx;
        rs1_d           = insn_d[19:15];
        rs2_d           = 0;                   // jalr doesn't use rs2
        rd_d            = insn_d[11:7];
        alu_sel_d       = 0;                    // alu add
        access_size_d   = 2'bxx;
        dmem_rw_d       = 0;                    // don't care dmem
        imm_sel_dmem_d  = 4'bxxxx;
        wb_sel_d        = 2;                     // write pc+4 to rd
    end
    `JAL: begin
        reg_wen_d       = 1;                    // jal writes to rd
        imm_sel_imm     = 4'b1000;
        br_un_d         = 1'bx;
        rs1_d           = 0;
        rs2_d           = 0;                   
        rd_d            = insn_d[11:7];
        alu_sel_d       = 0;                    // alu add
        access_size_d   = 2'bxx;
        dmem_rw_d       = 0;                    // don't care dmem 
        imm_sel_dmem_d  = 4'bxxxx;
        wb_sel_d        = 2;                     // write pc+4 to rd        
    end
    `AUIPC: begin
        reg_wen_d       = 1;                    // auipc writes to rd
        imm_sel_imm     = 9;
        br_un_d         = 1'bx;
        rs1_d           = 0;
        rs2_d           = 0;                   
        rd_d            = insn_d[11:7];
        alu_sel_d       = 0;                    // alu add
        access_size_d   = 2'bxx;
        dmem_rw_d       = 0;                    // don't care dmem
        imm_sel_dmem_d  = 4'bxxxx;
        wb_sel_d        = 1;                     // write alu result to rd
    end
    `LUI: begin
        reg_wen_d       = 1;                    // lui writes to rd
        imm_sel_imm     = 9;
        br_un_d         = 1'bx;
        rs1_d           = 0;
        rs2_d           = 0;                   
        rd_d            = insn_d[11:7];
        alu_sel_d       = 4'b1111;              // alu set alu_out=in_2
        access_size_d   = 2'bxx;
        dmem_rw_d       = 0;                    // don't care dmem
        imm_sel_dmem_d  = 4'bxxxx;
        wb_sel_d        = 1;                     // write alu result to rd
    end
    `ECALL: begin
        reg_wen_d       = 0;            // ecall doesn't write to rd
        imm_sel_imm     = 4'bxxxx;
        br_un_d         = 1'bx;
        rs1_d           = 0;
        rs2_d           = 0;                   
        rd_d            = 0;
        alu_sel_d       = 4'bxxxx;
        access_size_d   = 2'bxx;
        dmem_rw_d       = 0;            // don't care dmem
        imm_sel_dmem_d  = 4'bxxxx;
        wb_sel_d        = 2'bxx;
    end
    default: begin
        reg_wen_d       = 0;            // ecall doesn't write to rd
        imm_sel_imm     = 4'bxxxx;
        br_un_d         = 1'bx;
        rs1_d           = 0;
        rs2_d           = 0;                   
        rd_d            = 0;
        alu_sel_d       = 4'bxxxx;
        access_size_d   = 2'bxx;
        dmem_rw_d       = 0;            // don't care dmem
        imm_sel_dmem_d  = 4'bxxxx;
        wb_sel_d        = 2'bxx;
    end
    endcase

    rs1 = rs1_d;
    rs2 = rs2_d;

    // bypasses: none, MX, WX 
    // rs1_sel {0: rs1, 1: alu_m, 2: data_d}
    rs1_sel_d = 0;
    if (reg_wen_x == 1 && rd_x == rs1_d && rs1_d != 0)  //if destination of X matches source reg of D, MX Bypass 
        rs1_sel_d = 1;
    else if (reg_wen_m == 1 && rd_m == rs1_d && rs1_d != 0) //WX Bypass 
        rs1_sel_d = 2;
    // rs2_sel {0: rs2, 1: alu_m, 2: data_d}
    // data_w_sel {0: rs2, 1: data_d}, selects data for store (from D or W)
    rs2_sel_d = 0;
    data_w_sel_d = 0;
    if (reg_wen_x == 1 && rd_x == rs2_d && rs2_d != 0) begin    //rs2 MX
        rs2_sel_d = 1;
        data_w_sel_d = 1;   // no need to check for STORE, because dmem_rw = 1 only when opcode = STORE
    end else if (reg_wen_m == 1 && rd_m == rs2_d && rs2_d != 0) begin   ///rs2 WX 
        rs2_sel_d = 2;
    end

    // stall (x0 used as default value for rs1/2 representing no dependencies)
    stall = 0;
    if (opcode_x == `LOAD) begin   // load-use, when load is followed by a dependent insn, stall
        stall = (rs1_d == rd_x && rs1_d != 0) || ((rs2_d == rd_x && rs2_d != 0) && (opcode_d != `STORE));
    end else if (reg_wen == 1) begin    // WD, no such forwarding 
        stall = 
            (rs1_d == rd_w && rs1_d != 0 && rs1_sel_d == 0) 
            || (rs2_d == rd_w && rs2_d != 0 && rs2_sel_d == 0);
    end
end


// X
always @(*) begin
    alu_sel = alu_sel_x;
    br_un   = br_un_x;
    rs1_sel = rs1_sel_x;
    rs2_sel = rs2_sel_x;

    // a_sel {0: rs1, 1: pc_x}
    a_sel = 0;
    if (opcode_x == `BRANCH || opcode_x == `JAL || opcode_x == `AUIPC)  //use pc as rs1
        a_sel = 1;

    // b_sel {0: rs2, 1: imm}
    b_sel = 1;
    if (opcode_x == `R_TYPE)
        b_sel = 0;
end

// M
always @(*) begin
    dmem_rw         = dmem_rw_m;
    access_size     = access_size_m;
    imm_sel_dmem    = imm_sel_dmem_m;
    wb_sel          = wb_sel_m;
    data_w_sel      = data_w_sel_m;
end

// W
always @(*) begin
    reg_wen = reg_wen_w;
    rd      = rd_w;
end


always @(posedge clock) begin
    opcode_x        <= opcode_d;
    funct3_x        <= funct3_d;
    reg_wen_x       <= reg_wen_d;            
    br_un_x         <= br_un_d;              
    rd_x            <= rd_d;
    alu_sel_x       <= alu_sel_d;
    access_size_x   <= access_size_d;
    dmem_rw_x       <= dmem_rw_d;            
    imm_sel_dmem_x  <= imm_sel_dmem_d;
    wb_sel_x        <= wb_sel_d;
    rs1_sel_x       <= rs1_sel_d;
    rs2_sel_x       <= rs2_sel_d;
    data_w_sel_x    <= data_w_sel_d;

    // kill insn_x if stall or  br_taken (set to addi x0, x0, 0)
    if (stall || br_taken) begin
        opcode_x    <= `I_TYPE;
        reg_wen_x   <= 1;
        rd_x        <= 0;
        dmem_rw_x   <= 0;
        wb_sel_x    <= 1;
    end

    reg_wen_m       <= reg_wen_x;                   
    rd_m            <= rd_x;
    access_size_m   <= access_size_x;
    dmem_rw_m       <= dmem_rw_x;
    imm_sel_dmem_m  <= imm_sel_dmem_x;
    wb_sel_m        <= wb_sel_x;
    data_w_sel_m    <= data_w_sel_x;

    reg_wen_w       <= reg_wen_m;
    rd_w            <= rd_m;

    if (reset) begin
        // D stage is reset by pd.v

        opcode_x        <= `I_TYPE;
        funct3_x        <= 0;
        reg_wen_x       <= 1;            
        br_un_x         <= 0;                   
        rd_x            <= 0;
        alu_sel_x       <= 0;
        access_size_x   <= 0;
        dmem_rw_x       <= 0;            
        imm_sel_dmem_x  <= 0;
        wb_sel_x        <= 1;
        rs1_sel_x       <= 0;
        rs2_sel_x       <= 0;
        data_w_sel_x    <= 0;

        reg_wen_m       <= 1;                   
        rd_m            <= 0;
        access_size_m   <= 0;
        dmem_rw_m       <= 0;
        imm_sel_dmem_m  <= 0;
        wb_sel_m        <= 1;
        data_w_sel_m    <= 0;

        reg_wen_w       <= 1;
        rd_w            <= 0;
    end
end

endmodule