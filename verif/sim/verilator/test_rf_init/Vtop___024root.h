// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(W_ENABLE,0,0);
    VL_OUT8(W_DESTINATION,4,0);
    VL_OUT(F_PC,31,0);
    VL_OUT(F_INSN,31,0);
    VL_OUT(W_PC,31,0);
    VL_OUT(W_DATA,31,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__br_taken;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__stall;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__rs1;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__rs2;
        CData/*3:0*/ top__DOT__dut__DOT__core__DOT__imm_sel_imm;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__br_lt;
        CData/*6:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d;
        CData/*6:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x;
        CData/*2:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d;
        CData/*2:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_x;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_m;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_w;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_x;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_x;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_x;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_m;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_m;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_w;
        CData/*3:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d;
        CData/*3:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x;
        CData/*1:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d;
        CData/*1:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_x;
        CData/*1:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_m;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_x;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_m;
        CData/*3:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d;
        CData/*3:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_x;
        CData/*3:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m;
        CData/*1:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d;
        CData/*1:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_x;
        CData/*1:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pc_f;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__insn_f;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pc_d;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__insn_d;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__imm;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__jal_target;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pc_x;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__imm_x;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__rs1_x;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__rs2_x;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__forwarded_rs2;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__alu_out;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pc_m;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__rs2_m;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__alu_m;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__dmem_data_in;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__dmem_imm_out;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pc_w;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_d;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__branch_comp_inst__DOT__diff;
        VlUnpacked<CData/*7:0*/, 1048577> top__DOT__dut__DOT__core__DOT__imem__DOT__memory;
        VlUnpacked<IData/*31:0*/, 42> top__DOT__dut__DOT__core__DOT__imem__DOT__unnamedblk1__DOT__temp_arr;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs;
        VlUnpacked<CData/*7:0*/, 1048577> top__DOT__dut__DOT__core__DOT__dmem__DOT__memory;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 42> top__DOT__dut__DOT__core__DOT__dmem__DOT__unnamedblk1__DOT__temp_arr;
    };

    // LOCAL VARIABLES
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound1;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound2;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound3;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound4;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound5;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound6;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound7;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound8;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound9;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound10;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound11;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
