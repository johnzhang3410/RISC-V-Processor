
/* Your Code Below! Enable the following define's 
 * and replace ??? with actual wires */
// ----- signals -----
// You will also need to define PC properly
`define F_PC                pc_f
`define F_INSN              insn_f

`define D_PC                pc_d
`define D_OPCODE            control_inst.opcode_d
`define D_RD                control_inst.rd_d
`define D_RS1               control_inst.rs1_d
`define D_RS2               control_inst.rs2_d
`define D_FUNCT3            control_inst.funct3_d
`define D_FUNCT7            control_inst.funct7_d
`define D_IMM               imm
`define D_SHAMT             shamt

`define R_WRITE_ENABLE      reg_wen
`define R_WRITE_DESTINATION rd
`define R_WRITE_DATA        data_d
`define R_READ_RS1          rs1
`define R_READ_RS2          rs2
`define R_READ_RS1_DATA     rs1_data
`define R_READ_RS2_DATA     rs2_data

`define E_PC                pc_x
`define E_ALU_RES           alu_out
`define E_BR_TAKEN          br_taken

`define M_PC                pc_m
`define M_ADDRESS           alu_m
`define M_RW                dmem_rw
`define M_SIZE_ENCODED      access_size
`define M_DATA              dmem_data_in

`define W_PC                pc_w
`define W_ENABLE            reg_wen
`define W_DESTINATION       rd
`define W_DATA              data_d

// ----- signals -----

// ----- design -----
`define TOP_MODULE                 pd
// ----- design -----
