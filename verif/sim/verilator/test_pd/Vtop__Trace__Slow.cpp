// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+117,"top clock", false,-1);
        tracep->declBit(c+4,"top reset", false,-1);
        tracep->declBit(c+117,"top clkg clk", false,-1);
        tracep->declBit(c+4,"top clkg rst", false,-1);
        tracep->declBus(c+5,"top clkg counter", false,-1, 31,0);
        tracep->declBit(c+117,"top dut clock", false,-1);
        tracep->declBit(c+4,"top dut reset", false,-1);
        tracep->declBit(c+117,"top dut core clock", false,-1);
        tracep->declBit(c+4,"top dut core reset", false,-1);
        tracep->declBus(c+6,"top dut core shamt", false,-1, 4,0);
        tracep->declBus(c+7,"top dut core pc_f", false,-1, 31,0);
        tracep->declBus(c+8,"top dut core insn_f", false,-1, 31,0);
        tracep->declBit(c+9,"top dut core jump", false,-1);
        tracep->declBit(c+10,"top dut core br_taken", false,-1);
        tracep->declBit(c+11,"top dut core stall", false,-1);
        tracep->declBus(c+12,"top dut core pc_d", false,-1, 31,0);
        tracep->declBus(c+13,"top dut core insn_d", false,-1, 31,0);
        tracep->declBus(c+14,"top dut core imm", false,-1, 31,0);
        tracep->declBus(c+15,"top dut core rs1", false,-1, 4,0);
        tracep->declBus(c+16,"top dut core rs2", false,-1, 4,0);
        tracep->declBus(c+17,"top dut core rs1_data", false,-1, 31,0);
        tracep->declBus(c+18,"top dut core rs2_data", false,-1, 31,0);
        tracep->declBus(c+19,"top dut core jal_target", false,-1, 31,0);
        tracep->declBus(c+20,"top dut core imm_sel_imm", false,-1, 3,0);
        tracep->declBus(c+21,"top dut core pc_x", false,-1, 31,0);
        tracep->declBus(c+22,"top dut core imm_x", false,-1, 31,0);
        tracep->declBus(c+23,"top dut core rs1_x", false,-1, 31,0);
        tracep->declBus(c+24,"top dut core rs2_x", false,-1, 31,0);
        tracep->declBus(c+25,"top dut core forwarded_rs1", false,-1, 31,0);
        tracep->declBus(c+26,"top dut core forwarded_rs2", false,-1, 31,0);
        tracep->declBus(c+27,"top dut core alu_in_1", false,-1, 31,0);
        tracep->declBus(c+28,"top dut core alu_in_2", false,-1, 31,0);
        tracep->declBus(c+29,"top dut core alu_out", false,-1, 31,0);
        tracep->declBit(c+30,"top dut core br_un", false,-1);
        tracep->declBit(c+31,"top dut core br_eq", false,-1);
        tracep->declBit(c+32,"top dut core br_lt", false,-1);
        tracep->declBus(c+33,"top dut core rs1_sel", false,-1, 1,0);
        tracep->declBus(c+34,"top dut core rs2_sel", false,-1, 1,0);
        tracep->declBit(c+35,"top dut core a_sel", false,-1);
        tracep->declBit(c+36,"top dut core b_sel", false,-1);
        tracep->declBus(c+37,"top dut core alu_sel", false,-1, 3,0);
        tracep->declBus(c+38,"top dut core pc_m", false,-1, 31,0);
        tracep->declBus(c+39,"top dut core rs2_m", false,-1, 31,0);
        tracep->declBus(c+40,"top dut core alu_m", false,-1, 31,0);
        tracep->declBus(c+41,"top dut core dmem_data_in", false,-1, 31,0);
        tracep->declBus(c+42,"top dut core dmem_out", false,-1, 31,0);
        tracep->declBus(c+43,"top dut core dmem_imm_out", false,-1, 31,0);
        tracep->declBus(c+44,"top dut core wb_data", false,-1, 31,0);
        tracep->declBit(c+45,"top dut core data_w_sel", false,-1);
        tracep->declBit(c+46,"top dut core dmem_rw", false,-1);
        tracep->declBus(c+47,"top dut core access_size", false,-1, 1,0);
        tracep->declBus(c+48,"top dut core imm_sel_dmem", false,-1, 3,0);
        tracep->declBus(c+49,"top dut core wb_sel", false,-1, 1,0);
        tracep->declBus(c+50,"top dut core pc_w", false,-1, 31,0);
        tracep->declBus(c+51,"top dut core data_d", false,-1, 31,0);
        tracep->declBit(c+52,"top dut core reg_wen", false,-1);
        tracep->declBus(c+53,"top dut core rd", false,-1, 4,0);
        tracep->declBit(c+117,"top dut core control_inst clock", false,-1);
        tracep->declBit(c+4,"top dut core control_inst reset", false,-1);
        tracep->declBus(c+13,"top dut core control_inst insn_d", false,-1, 31,0);
        tracep->declBit(c+31,"top dut core control_inst br_eq", false,-1);
        tracep->declBit(c+32,"top dut core control_inst br_lt", false,-1);
        tracep->declBit(c+9,"top dut core control_inst jump", false,-1);
        tracep->declBit(c+10,"top dut core control_inst br_taken", false,-1);
        tracep->declBit(c+11,"top dut core control_inst stall", false,-1);
        tracep->declBus(c+15,"top dut core control_inst rs1", false,-1, 4,0);
        tracep->declBus(c+16,"top dut core control_inst rs2", false,-1, 4,0);
        tracep->declBus(c+20,"top dut core control_inst imm_sel_imm", false,-1, 3,0);
        tracep->declBit(c+35,"top dut core control_inst a_sel", false,-1);
        tracep->declBit(c+36,"top dut core control_inst b_sel", false,-1);
        tracep->declBus(c+33,"top dut core control_inst rs1_sel", false,-1, 1,0);
        tracep->declBus(c+34,"top dut core control_inst rs2_sel", false,-1, 1,0);
        tracep->declBit(c+30,"top dut core control_inst br_un", false,-1);
        tracep->declBus(c+37,"top dut core control_inst alu_sel", false,-1, 3,0);
        tracep->declBit(c+45,"top dut core control_inst data_w_sel", false,-1);
        tracep->declBus(c+47,"top dut core control_inst access_size", false,-1, 1,0);
        tracep->declBit(c+46,"top dut core control_inst dmem_rw", false,-1);
        tracep->declBus(c+48,"top dut core control_inst imm_sel_dmem", false,-1, 3,0);
        tracep->declBus(c+49,"top dut core control_inst wb_sel", false,-1, 1,0);
        tracep->declBit(c+52,"top dut core control_inst reg_wen", false,-1);
        tracep->declBus(c+53,"top dut core control_inst rd", false,-1, 4,0);
        tracep->declBus(c+54,"top dut core control_inst opcode_d", false,-1, 6,0);
        tracep->declBus(c+55,"top dut core control_inst opcode_x", false,-1, 6,0);
        tracep->declBus(c+56,"top dut core control_inst funct7_d", false,-1, 6,0);
        tracep->declBus(c+57,"top dut core control_inst funct3_d", false,-1, 2,0);
        tracep->declBus(c+58,"top dut core control_inst funct3_x", false,-1, 2,0);
        tracep->declBit(c+59,"top dut core control_inst reg_wen_d", false,-1);
        tracep->declBit(c+60,"top dut core control_inst reg_wen_x", false,-1);
        tracep->declBit(c+61,"top dut core control_inst reg_wen_m", false,-1);
        tracep->declBit(c+52,"top dut core control_inst reg_wen_w", false,-1);
        tracep->declBit(c+62,"top dut core control_inst br_un_d", false,-1);
        tracep->declBit(c+30,"top dut core control_inst br_un_x", false,-1);
        tracep->declBus(c+63,"top dut core control_inst rs1_d", false,-1, 4,0);
        tracep->declBus(c+64,"top dut core control_inst rs2_d", false,-1, 4,0);
        tracep->declBus(c+65,"top dut core control_inst rd_d", false,-1, 4,0);
        tracep->declBus(c+66,"top dut core control_inst rd_x", false,-1, 4,0);
        tracep->declBus(c+67,"top dut core control_inst rd_m", false,-1, 4,0);
        tracep->declBus(c+53,"top dut core control_inst rd_w", false,-1, 4,0);
        tracep->declBus(c+68,"top dut core control_inst alu_sel_d", false,-1, 3,0);
        tracep->declBus(c+37,"top dut core control_inst alu_sel_x", false,-1, 3,0);
        tracep->declBus(c+69,"top dut core control_inst rs1_sel_d", false,-1, 1,0);
        tracep->declBus(c+33,"top dut core control_inst rs1_sel_x", false,-1, 1,0);
        tracep->declBus(c+70,"top dut core control_inst rs2_sel_d", false,-1, 1,0);
        tracep->declBus(c+34,"top dut core control_inst rs2_sel_x", false,-1, 1,0);
        tracep->declBit(c+71,"top dut core control_inst data_w_sel_d", false,-1);
        tracep->declBit(c+72,"top dut core control_inst data_w_sel_x", false,-1);
        tracep->declBit(c+45,"top dut core control_inst data_w_sel_m", false,-1);
        tracep->declBus(c+73,"top dut core control_inst access_size_d", false,-1, 1,0);
        tracep->declBus(c+74,"top dut core control_inst access_size_x", false,-1, 1,0);
        tracep->declBus(c+47,"top dut core control_inst access_size_m", false,-1, 1,0);
        tracep->declBit(c+75,"top dut core control_inst dmem_rw_d", false,-1);
        tracep->declBit(c+76,"top dut core control_inst dmem_rw_x", false,-1);
        tracep->declBit(c+46,"top dut core control_inst dmem_rw_m", false,-1);
        tracep->declBus(c+77,"top dut core control_inst imm_sel_dmem_d", false,-1, 3,0);
        tracep->declBus(c+78,"top dut core control_inst imm_sel_dmem_x", false,-1, 3,0);
        tracep->declBus(c+48,"top dut core control_inst imm_sel_dmem_m", false,-1, 3,0);
        tracep->declBus(c+79,"top dut core control_inst wb_sel_d", false,-1, 1,0);
        tracep->declBus(c+80,"top dut core control_inst wb_sel_x", false,-1, 1,0);
        tracep->declBus(c+49,"top dut core control_inst wb_sel_m", false,-1, 1,0);
        tracep->declBus(c+118,"top dut core imem MEM_DEPTH", false,-1, 31,0);
        tracep->declBit(c+117,"top dut core imem clock", false,-1);
        tracep->declBus(c+7,"top dut core imem address", false,-1, 31,0);
        tracep->declBit(c+119,"top dut core imem read_write", false,-1);
        tracep->declBus(c+120,"top dut core imem data_in", false,-1, 31,0);
        tracep->declBus(c+8,"top dut core imem data_out", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+121+i*1,"top dut core imem in_bytes", true,(i+0), 7,0);}}
        tracep->declBus(c+1,"top dut core imem i", false,-1, 31,0);
        tracep->declBit(c+117,"top dut core register_file_inst clock", false,-1);
        tracep->declBit(c+52,"top dut core register_file_inst write_enable", false,-1);
        tracep->declBus(c+51,"top dut core register_file_inst data_rd", false,-1, 31,0);
        tracep->declBus(c+53,"top dut core register_file_inst addr_rd", false,-1, 4,0);
        tracep->declBus(c+15,"top dut core register_file_inst addr_rs1", false,-1, 4,0);
        tracep->declBus(c+16,"top dut core register_file_inst addr_rs2", false,-1, 4,0);
        tracep->declBus(c+17,"top dut core register_file_inst data_rs1", false,-1, 31,0);
        tracep->declBus(c+18,"top dut core register_file_inst data_rs2", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+81+i*1,"top dut core register_file_inst regs", true,(i+0), 31,0);}}
        tracep->declBus(c+2,"top dut core register_file_inst unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+13,"top dut core imm_imm_gen imm_in", false,-1, 31,0);
        tracep->declBus(c+20,"top dut core imm_imm_gen imm_sel", false,-1, 3,0);
        tracep->declBus(c+14,"top dut core imm_imm_gen imm_out", false,-1, 31,0);
        tracep->declBus(c+113,"top dut core imm_imm_gen i", false,-1, 31,0);
        tracep->declBus(c+37,"top dut core alu_inst alu_sel", false,-1, 3,0);
        tracep->declBus(c+27,"top dut core alu_inst in_1", false,-1, 31,0);
        tracep->declBus(c+28,"top dut core alu_inst in_2", false,-1, 31,0);
        tracep->declBus(c+29,"top dut core alu_inst out", false,-1, 31,0);
        tracep->declBus(c+114,"top dut core alu_inst diff", false,-1, 31,0);
        tracep->declBus(c+25,"top dut core branch_comp_inst in_1", false,-1, 31,0);
        tracep->declBus(c+26,"top dut core branch_comp_inst in_2", false,-1, 31,0);
        tracep->declBit(c+30,"top dut core branch_comp_inst br_un", false,-1);
        tracep->declBit(c+31,"top dut core branch_comp_inst br_eq", false,-1);
        tracep->declBit(c+32,"top dut core branch_comp_inst br_lt", false,-1);
        tracep->declBus(c+115,"top dut core branch_comp_inst diff", false,-1, 31,0);
        tracep->declBus(c+118,"top dut core dmem MEM_DEPTH", false,-1, 31,0);
        tracep->declBit(c+117,"top dut core dmem clock", false,-1);
        tracep->declBus(c+40,"top dut core dmem address", false,-1, 31,0);
        tracep->declBit(c+46,"top dut core dmem read_write", false,-1);
        tracep->declBus(c+41,"top dut core dmem data_in", false,-1, 31,0);
        tracep->declBus(c+47,"top dut core dmem access_size", false,-1, 1,0);
        tracep->declBus(c+42,"top dut core dmem data_out", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+125+i*1,"top dut core dmem in_bytes", true,(i+0), 7,0);}}
        tracep->declBus(c+3,"top dut core dmem i", false,-1, 31,0);
        tracep->declBus(c+42,"top dut core dmem_imm_gen imm_in", false,-1, 31,0);
        tracep->declBus(c+48,"top dut core dmem_imm_gen imm_sel", false,-1, 3,0);
        tracep->declBus(c+43,"top dut core dmem_imm_gen imm_out", false,-1, 31,0);
        tracep->declBus(c+116,"top dut core dmem_imm_gen i", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__i),32);
        tracep->fullIData(oldp+2,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+3,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__i),32);
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__reset));
        tracep->fullIData(oldp+5,(vlSelf->top__DOT__clkg__DOT__counter),32);
        tracep->fullCData(oldp+6,((0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                            >> 0x14U))),5);
        tracep->fullIData(oldp+7,(vlSelf->top__DOT__dut__DOT__core__DOT__pc_f),32);
        tracep->fullIData(oldp+8,(vlSelf->top__DOT__dut__DOT__core__DOT__insn_f),32);
        tracep->fullBit(oldp+9,((0x6fU == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__dut__DOT__core__DOT__br_taken));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__dut__DOT__core__DOT__stall));
        tracep->fullIData(oldp+12,(vlSelf->top__DOT__dut__DOT__core__DOT__pc_d),32);
        tracep->fullIData(oldp+13,(vlSelf->top__DOT__dut__DOT__core__DOT__insn_d),32);
        tracep->fullIData(oldp+14,(vlSelf->top__DOT__dut__DOT__core__DOT__imm),32);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__dut__DOT__core__DOT__rs1),5);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__dut__DOT__core__DOT__rs2),5);
        tracep->fullIData(oldp+17,(vlSelf->top__DOT__dut__DOT__core__DOT__rs1_data),32);
        tracep->fullIData(oldp+18,(vlSelf->top__DOT__dut__DOT__core__DOT__rs2_data),32);
        tracep->fullIData(oldp+19,((vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                                    + vlSelf->top__DOT__dut__DOT__core__DOT__pc_d)),32);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm),4);
        tracep->fullIData(oldp+21,(vlSelf->top__DOT__dut__DOT__core__DOT__pc_x),32);
        tracep->fullIData(oldp+22,(vlSelf->top__DOT__dut__DOT__core__DOT__imm_x),32);
        tracep->fullIData(oldp+23,(vlSelf->top__DOT__dut__DOT__core__DOT__rs1_x),32);
        tracep->fullIData(oldp+24,(vlSelf->top__DOT__dut__DOT__core__DOT__rs2_x),32);
        tracep->fullIData(oldp+25,(vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs1),32);
        tracep->fullIData(oldp+26,(vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs2),32);
        tracep->fullIData(oldp+27,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_in_1),32);
        tracep->fullIData(oldp+28,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_in_2),32);
        tracep->fullIData(oldp+29,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_out),32);
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_x));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__dut__DOT__core__DOT__br_eq));
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__dut__DOT__core__DOT__br_lt));
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_x),2);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_x),2);
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__dut__DOT__core__DOT__a_sel));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__dut__DOT__core__DOT__b_sel));
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x),4);
        tracep->fullIData(oldp+38,(vlSelf->top__DOT__dut__DOT__core__DOT__pc_m),32);
        tracep->fullIData(oldp+39,(vlSelf->top__DOT__dut__DOT__core__DOT__rs2_m),32);
        tracep->fullIData(oldp+40,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_m),32);
        tracep->fullIData(oldp+41,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in),32);
        tracep->fullIData(oldp+42,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem_out),32);
        tracep->fullIData(oldp+43,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out),32);
        tracep->fullIData(oldp+44,(((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m))
                                     ? vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out
                                     : ((1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m))
                                         ? vlSelf->top__DOT__dut__DOT__core__DOT__alu_m
                                         : ((IData)(4U) 
                                            + vlSelf->top__DOT__dut__DOT__core__DOT__pc_m)))),32);
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_m));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_m));
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_m),2);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m),4);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m),2);
        tracep->fullIData(oldp+50,(vlSelf->top__DOT__dut__DOT__core__DOT__pc_w),32);
        tracep->fullIData(oldp+51,(vlSelf->top__DOT__dut__DOT__core__DOT__data_d),32);
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_w));
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_w),5);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d),7);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x),7);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct7_d),7);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d),3);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x),3);
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d));
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_x));
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_m));
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d));
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d),5);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d),5);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d),5);
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x),5);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_m),5);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d),4);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_d),2);
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_d),2);
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_d));
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_x));
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d),2);
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_x),2);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d));
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_x));
        tracep->fullCData(oldp+77,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d),4);
        tracep->fullCData(oldp+78,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_x),4);
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d),2);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_x),2);
        tracep->fullIData(oldp+81,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0]),32);
        tracep->fullIData(oldp+82,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[1]),32);
        tracep->fullIData(oldp+83,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[2]),32);
        tracep->fullIData(oldp+84,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[3]),32);
        tracep->fullIData(oldp+85,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[4]),32);
        tracep->fullIData(oldp+86,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[5]),32);
        tracep->fullIData(oldp+87,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[6]),32);
        tracep->fullIData(oldp+88,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[7]),32);
        tracep->fullIData(oldp+89,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[8]),32);
        tracep->fullIData(oldp+90,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[9]),32);
        tracep->fullIData(oldp+91,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[10]),32);
        tracep->fullIData(oldp+92,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[11]),32);
        tracep->fullIData(oldp+93,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[12]),32);
        tracep->fullIData(oldp+94,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[13]),32);
        tracep->fullIData(oldp+95,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[14]),32);
        tracep->fullIData(oldp+96,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[15]),32);
        tracep->fullIData(oldp+97,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[16]),32);
        tracep->fullIData(oldp+98,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[17]),32);
        tracep->fullIData(oldp+99,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[18]),32);
        tracep->fullIData(oldp+100,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[19]),32);
        tracep->fullIData(oldp+101,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[20]),32);
        tracep->fullIData(oldp+102,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[21]),32);
        tracep->fullIData(oldp+103,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[22]),32);
        tracep->fullIData(oldp+104,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[23]),32);
        tracep->fullIData(oldp+105,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[24]),32);
        tracep->fullIData(oldp+106,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[25]),32);
        tracep->fullIData(oldp+107,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[26]),32);
        tracep->fullIData(oldp+108,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[27]),32);
        tracep->fullIData(oldp+109,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[28]),32);
        tracep->fullIData(oldp+110,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[29]),32);
        tracep->fullIData(oldp+111,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[30]),32);
        tracep->fullIData(oldp+112,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[31]),32);
        tracep->fullIData(oldp+113,(vlSelf->top__DOT__dut__DOT__core__DOT__imm_imm_gen__DOT__i),32);
        tracep->fullIData(oldp+114,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff),32);
        tracep->fullIData(oldp+115,(vlSelf->top__DOT__dut__DOT__core__DOT__branch_comp_inst__DOT__diff),32);
        tracep->fullIData(oldp+116,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_gen__DOT__i),32);
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__clock));
        tracep->fullIData(oldp+118,(0x100000U),32);
        tracep->fullBit(oldp+119,(0U));
        tracep->fullIData(oldp+120,(0U),32);
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__in_bytes[0]),8);
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__in_bytes[1]),8);
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__in_bytes[2]),8);
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__in_bytes[3]),8);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__in_bytes[0]),8);
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__in_bytes[1]),8);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__in_bytes[2]),8);
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__in_bytes[3]),8);
    }
}
