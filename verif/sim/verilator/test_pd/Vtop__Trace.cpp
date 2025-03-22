// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__i),32);
            tracep->chgIData(oldp+1,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+2,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__reset));
            tracep->chgIData(oldp+4,(vlSelf->top__DOT__clkg__DOT__counter),32);
            tracep->chgCData(oldp+5,((0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                               >> 0x14U))),5);
            tracep->chgIData(oldp+6,(vlSelf->top__DOT__dut__DOT__core__DOT__pc_f),32);
            tracep->chgIData(oldp+7,(vlSelf->top__DOT__dut__DOT__core__DOT__insn_f),32);
            tracep->chgBit(oldp+8,((0x6fU == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__dut__DOT__core__DOT__br_taken));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__dut__DOT__core__DOT__stall));
            tracep->chgIData(oldp+11,(vlSelf->top__DOT__dut__DOT__core__DOT__pc_d),32);
            tracep->chgIData(oldp+12,(vlSelf->top__DOT__dut__DOT__core__DOT__insn_d),32);
            tracep->chgIData(oldp+13,(vlSelf->top__DOT__dut__DOT__core__DOT__imm),32);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__dut__DOT__core__DOT__rs1),5);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__dut__DOT__core__DOT__rs2),5);
            tracep->chgIData(oldp+16,(vlSelf->top__DOT__dut__DOT__core__DOT__rs1_data),32);
            tracep->chgIData(oldp+17,(vlSelf->top__DOT__dut__DOT__core__DOT__rs2_data),32);
            tracep->chgIData(oldp+18,((vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                                       + vlSelf->top__DOT__dut__DOT__core__DOT__pc_d)),32);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm),4);
            tracep->chgIData(oldp+20,(vlSelf->top__DOT__dut__DOT__core__DOT__pc_x),32);
            tracep->chgIData(oldp+21,(vlSelf->top__DOT__dut__DOT__core__DOT__imm_x),32);
            tracep->chgIData(oldp+22,(vlSelf->top__DOT__dut__DOT__core__DOT__rs1_x),32);
            tracep->chgIData(oldp+23,(vlSelf->top__DOT__dut__DOT__core__DOT__rs2_x),32);
            tracep->chgIData(oldp+24,(vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs1),32);
            tracep->chgIData(oldp+25,(vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs2),32);
            tracep->chgIData(oldp+26,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_in_1),32);
            tracep->chgIData(oldp+27,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_in_2),32);
            tracep->chgIData(oldp+28,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_out),32);
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_x));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__dut__DOT__core__DOT__br_eq));
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__dut__DOT__core__DOT__br_lt));
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_x),2);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_x),2);
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__dut__DOT__core__DOT__a_sel));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__dut__DOT__core__DOT__b_sel));
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x),4);
            tracep->chgIData(oldp+37,(vlSelf->top__DOT__dut__DOT__core__DOT__pc_m),32);
            tracep->chgIData(oldp+38,(vlSelf->top__DOT__dut__DOT__core__DOT__rs2_m),32);
            tracep->chgIData(oldp+39,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_m),32);
            tracep->chgIData(oldp+40,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in),32);
            tracep->chgIData(oldp+41,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem_out),32);
            tracep->chgIData(oldp+42,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out),32);
            tracep->chgIData(oldp+43,(((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m))
                                        ? vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out
                                        : ((1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m))
                                            ? vlSelf->top__DOT__dut__DOT__core__DOT__alu_m
                                            : ((IData)(4U) 
                                               + vlSelf->top__DOT__dut__DOT__core__DOT__pc_m)))),32);
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_m));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_m));
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_m),2);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m),4);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m),2);
            tracep->chgIData(oldp+49,(vlSelf->top__DOT__dut__DOT__core__DOT__pc_w),32);
            tracep->chgIData(oldp+50,(vlSelf->top__DOT__dut__DOT__core__DOT__data_d),32);
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_w));
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_w),5);
            tracep->chgCData(oldp+53,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d),7);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x),7);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct7_d),7);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d),3);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x),3);
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_x));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_m));
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d));
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d),5);
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d),5);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d),5);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x),5);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_m),5);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d),4);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_d),2);
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_d),2);
            tracep->chgBit(oldp+70,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_d));
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_x));
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d),2);
            tracep->chgCData(oldp+73,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_x),2);
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d));
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_x));
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d),4);
            tracep->chgCData(oldp+77,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_x),4);
            tracep->chgCData(oldp+78,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d),2);
            tracep->chgCData(oldp+79,(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_x),2);
            tracep->chgIData(oldp+80,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0]),32);
            tracep->chgIData(oldp+81,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[1]),32);
            tracep->chgIData(oldp+82,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[2]),32);
            tracep->chgIData(oldp+83,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[3]),32);
            tracep->chgIData(oldp+84,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[4]),32);
            tracep->chgIData(oldp+85,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[5]),32);
            tracep->chgIData(oldp+86,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[6]),32);
            tracep->chgIData(oldp+87,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[7]),32);
            tracep->chgIData(oldp+88,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[8]),32);
            tracep->chgIData(oldp+89,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[9]),32);
            tracep->chgIData(oldp+90,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[10]),32);
            tracep->chgIData(oldp+91,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[11]),32);
            tracep->chgIData(oldp+92,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[12]),32);
            tracep->chgIData(oldp+93,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[13]),32);
            tracep->chgIData(oldp+94,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[14]),32);
            tracep->chgIData(oldp+95,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[15]),32);
            tracep->chgIData(oldp+96,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[16]),32);
            tracep->chgIData(oldp+97,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[17]),32);
            tracep->chgIData(oldp+98,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[18]),32);
            tracep->chgIData(oldp+99,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[19]),32);
            tracep->chgIData(oldp+100,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[20]),32);
            tracep->chgIData(oldp+101,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[21]),32);
            tracep->chgIData(oldp+102,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[22]),32);
            tracep->chgIData(oldp+103,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[23]),32);
            tracep->chgIData(oldp+104,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[24]),32);
            tracep->chgIData(oldp+105,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[25]),32);
            tracep->chgIData(oldp+106,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[26]),32);
            tracep->chgIData(oldp+107,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[27]),32);
            tracep->chgIData(oldp+108,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[28]),32);
            tracep->chgIData(oldp+109,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[29]),32);
            tracep->chgIData(oldp+110,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[30]),32);
            tracep->chgIData(oldp+111,(vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[31]),32);
            tracep->chgIData(oldp+112,(vlSelf->top__DOT__dut__DOT__core__DOT__imm_imm_gen__DOT__i),32);
            tracep->chgIData(oldp+113,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff),32);
            tracep->chgIData(oldp+114,(vlSelf->top__DOT__dut__DOT__core__DOT__branch_comp_inst__DOT__diff),32);
            tracep->chgIData(oldp+115,(vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_gen__DOT__i),32);
        }
        tracep->chgBit(oldp+116,(vlSelf->top__DOT__clock));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
