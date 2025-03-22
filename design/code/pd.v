`define NOP 32'h00000013

module pd(
  input clock,
  input reset
);

// additional probes
wire [4:0] shamt;
assign shamt = insn_d[24:20];

// F stage wires/registers
reg   [31:0] pc_f;
wire  [31:0] insn_f;
wire         jump;
wire         br_taken;
wire         stall;

// D stage wires/registers
reg   [31:0] pc_d;
reg   [31:0] insn_d;
wire  [31:0] imm;
wire  [4:0]  rs1;
wire  [4:0]  rs2;
wire  [31:0] rs1_data;
wire  [31:0] rs2_data;
wire  [31:0] jal_target;
wire  [3:0]  imm_sel_imm;

// X stage wires/registers
reg   [31:0] pc_x;
reg   [31:0] imm_x;
reg   [31:0] rs1_x;
reg   [31:0] rs2_x;
wire  [31:0] forwarded_rs1;
wire  [31:0] forwarded_rs2;
wire  [31:0] alu_in_1;
wire  [31:0] alu_in_2;
wire  [31:0] alu_out;
wire         br_un;
wire         br_eq;
wire         br_lt;
wire  [1:0]  rs1_sel;
wire  [1:0]  rs2_sel;
wire         a_sel;
wire         b_sel;
wire  [3:0]  alu_sel;


// M stage wires/registers
reg   [31:0] pc_m;
reg   [31:0] rs2_m;
reg   [31:0] alu_m;
wire  [31:0] dmem_data_in;
wire  [31:0] dmem_out;
wire  [31:0] dmem_imm_out;
wire  [31:0] wb_data;
wire         data_w_sel;
wire         dmem_rw;
wire  [1:0]  access_size;
wire  [3:0]  imm_sel_dmem;
wire  [1:0]  wb_sel;

// W stage wires/registers
reg   [31:0] pc_w;
reg   [31:0] data_d;
wire         reg_wen;
wire  [4:0]  rd;

control control_inst
(
  .clock(clock),
  .reset(reset),

  .insn_d(insn_d),
  .br_eq(br_eq),
  .br_lt(br_lt),

  .jump(jump),
  .br_taken(br_taken),
  .stall(stall),

  .rs1(rs1),
  .rs2(rs2),
  .imm_sel_imm(imm_sel_imm),

  .a_sel(a_sel),
  .b_sel(b_sel),
  .rs1_sel(rs1_sel),
  .rs2_sel(rs2_sel),
  .br_un(br_un),
  .alu_sel(alu_sel),

  .data_w_sel(data_w_sel),
  .access_size(access_size),
  .dmem_rw(dmem_rw),
  .imm_sel_dmem(imm_sel_dmem),
  .wb_sel(wb_sel),

  .reg_wen(reg_wen),
  .rd(rd)
);

imemory # 
(
  .MEM_DEPTH(`MEM_DEPTH)
)
imem
(
  .clock(clock),
  .address(pc_f),   
  .read_write(0),    // IMEM is read-only 
  .data_in(0),       // No data input needed for read-only MEM 

  .data_out(insn_f)
);

register_file register_file_inst
(
  .clock(clock),
  .write_enable(reg_wen),
  .addr_rs1(rs1),
  .addr_rs2(rs2),
  .addr_rd(rd),
  .data_rd(data_d),

  .data_rs1(rs1_data),
  .data_rs2(rs2_data)
);

imm_gen imm_imm_gen
(
  .imm_in(insn_d),
  .imm_sel(imm_sel_imm),

  .imm_out(imm)
);

alu alu_inst
(
  .alu_sel(alu_sel),
  .in_1(alu_in_1),
  .in_2(alu_in_2),

  .out(alu_out)
);

branch_comp branch_comp_inst
(
  .in_1(forwarded_rs1),
  .in_2(forwarded_rs2),
  .br_un(br_un),
  
  .br_eq(br_eq),
  .br_lt(br_lt)
);

dmemory #
(
  .MEM_DEPTH(`MEM_DEPTH)
) 
dmem
(
  .clock(clock),
  .address(alu_m),
  .read_write(dmem_rw),
  .data_in(dmem_data_in),
  .access_size(access_size),

  .data_out(dmem_out)
);

imm_gen dmem_imm_gen
(
  .imm_in(dmem_out),
  .imm_sel(imm_sel_dmem),

  .imm_out(dmem_imm_out)
);

assign jal_target = imm + pc_d;

assign forwarded_rs1 = 
  rs1_sel == 0 ? rs1_x : 
  rs1_sel == 1 ? alu_m : data_d;

assign forwarded_rs2 = 
  rs2_sel == 0 ? rs2_x : 
  rs2_sel == 1 ? alu_m : data_d;

assign alu_in_1 = a_sel == 0 ? forwarded_rs1 : pc_x;
assign alu_in_2 = b_sel == 0 ? forwarded_rs2 : imm_x;

assign dmem_data_in = data_w_sel == 0 ? rs2_m : data_d;

assign wb_data =
  wb_sel == 0 ? dmem_imm_out :
  wb_sel == 1 ? alu_m : pc_m + 4;

always @(posedge clock) begin
  // pc datapath
  pc_f <= pc_f + 4;
  if (br_taken)   pc_f <= {alu_out[31:1], 1'b0};
  else if (jump)  pc_f <= {jal_target[31:1], 1'b0};
  else if (stall) pc_f <= pc_f;

  pc_d <= pc_f;
  if (br_taken)   pc_d <= 0;
  else if (jump)  pc_d <= 0;
  else if (stall) pc_d <= pc_d;
  
  pc_x <= pc_d;
  if (br_taken || stall) pc_x <= 0;

  pc_m <= pc_x;
  pc_w <= pc_m;

  // F stage
  insn_d <= insn_f;
  if (jump || br_taken) insn_d <= `NOP;
  else if (stall) insn_d <= insn_d;

  // D stage
  imm_x <= imm;
  rs1_x <= rs1_data;
  rs2_x <= rs2_data;

  // X stage
  alu_m <= alu_out;
  rs2_m <= forwarded_rs2;

  // M stage
  data_d <= wb_data;

  if (reset) begin
    pc_f <= 32'h01000000;
    pc_d <= 0;
    pc_x <= 0;
    pc_m <= 0;
    pc_w <= 0;

    insn_d <= `NOP;
  end
end

initial begin
  pc_f = 32'h01000000;
end

endmodule