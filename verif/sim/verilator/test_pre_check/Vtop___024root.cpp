// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__br_eq;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__a_sel;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__b_sel;
    CData/*6:0*/ top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct7_d;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v10;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__forwarded_rs1;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__alu_in_1;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__alu_in_2;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__dmem_out;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__core__DOT__insn_d;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__core__DOT__pc_f;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__core__DOT__pc_d;
    IData/*31:0*/ __Vdlyvval__top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs__v0;
    IData/*20:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v0;
    IData/*20:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v1;
    IData/*20:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v2;
    IData/*20:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v3;
    IData/*20:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v4;
    IData/*20:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v5;
    IData/*20:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v6;
    IData/*20:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v7;
    IData/*20:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v8;
    IData/*20:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v9;
    IData/*20:0*/ __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v10;
    // Body
    __Vdly__top__DOT__dut__DOT__core__DOT__pc_d = vlSelf->top__DOT__dut__DOT__core__DOT__pc_d;
    __Vdly__top__DOT__dut__DOT__core__DOT__pc_f = vlSelf->top__DOT__dut__DOT__core__DOT__pc_f;
    __Vdly__top__DOT__dut__DOT__core__DOT__insn_d = vlSelf->top__DOT__dut__DOT__core__DOT__insn_d;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v1 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v2 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v3 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v4 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v5 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v6 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v7 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v8 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v9 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v10 = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__imm_x = vlSelf->top__DOT__dut__DOT__core__DOT__imm;
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__rs2_m = vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs2;
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_x;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_m 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_x;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_m = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_x = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_w = vlSelf->top__DOT__dut__DOT__core__DOT__pc_m;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_w = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__rs2_x = 
        vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs
        [vlSelf->top__DOT__dut__DOT__core__DOT__rs2];
    vlSelf->top__DOT__dut__DOT__core__DOT__rs1_x = 
        vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs
        [vlSelf->top__DOT__dut__DOT__core__DOT__rs1];
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_d;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_x = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_d;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_x = 0U;
    }
    __Vdly__top__DOT__dut__DOT__core__DOT__insn_d = vlSelf->top__DOT__dut__DOT__core__DOT__insn_f;
    if (((0x6fU == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d)) 
         | (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__br_taken))) {
        __Vdly__top__DOT__dut__DOT__core__DOT__insn_d = 0x13U;
    } else if (vlSelf->top__DOT__dut__DOT__core__DOT__stall) {
        __Vdly__top__DOT__dut__DOT__core__DOT__insn_d 
            = vlSelf->top__DOT__dut__DOT__core__DOT__insn_d;
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__dut__DOT__core__DOT__insn_d = 0x13U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d;
    if (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__stall) 
         | (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__br_taken))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x = 0x13U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x = 0x13U;
    }
    if (vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_w) {
        __Vdlyvval__top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs__v0 
            = vlSelf->top__DOT__dut__DOT__core__DOT__data_d;
        __Vdlyvset__top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs__v0 = 1U;
        __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs__v0 
            = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_w;
    }
    if (vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_m) {
        if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_m))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound1 
                = (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in);
            if ((0x100000U >= (0x1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_m))) {
                __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v0 
                    = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound1;
                __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v0 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v0 
                    = (0x1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_m);
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_m))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound2 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in 
                            >> 8U));
            if ((0x100000U >= (0x1fffffU & ((IData)(1U) 
                                            + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m)))) {
                __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v1 
                    = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound2;
                __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v1 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v1 
                    = (0x1fffffU & ((IData)(1U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m));
            }
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound3 
                = (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in);
            if ((0x100000U >= (0x1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_m))) {
                __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v2 
                    = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound3;
                __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v2 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v2 
                    = (0x1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_m);
            }
        } else if ((2U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_m))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound4 
                = (vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in 
                   >> 0x18U);
            if ((0x100000U >= (0x1fffffU & ((IData)(3U) 
                                            + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m)))) {
                __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v3 
                    = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound4;
                __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v3 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v3 
                    = (0x1fffffU & ((IData)(3U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m));
            }
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound5 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in 
                            >> 0x10U));
            if ((0x100000U >= (0x1fffffU & ((IData)(2U) 
                                            + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m)))) {
                __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v4 
                    = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound5;
                __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v4 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v4 
                    = (0x1fffffU & ((IData)(2U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m));
            }
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound6 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in 
                            >> 8U));
            if ((0x100000U >= (0x1fffffU & ((IData)(1U) 
                                            + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m)))) {
                __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v5 
                    = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound6;
                __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v5 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v5 
                    = (0x1fffffU & ((IData)(1U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m));
            }
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound7 
                = (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in);
            if ((0x100000U >= (0x1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_m))) {
                __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v6 
                    = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound7;
                __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v6 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v6 
                    = (0x1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_m);
            }
        } else {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound8 
                = (vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in 
                   >> 0x18U);
            if ((0x100000U >= (0x1fffffU & ((IData)(3U) 
                                            + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m)))) {
                __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v7 
                    = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound8;
                __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v7 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v7 
                    = (0x1fffffU & ((IData)(3U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m));
            }
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound9 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in 
                            >> 0x10U));
            if ((0x100000U >= (0x1fffffU & ((IData)(2U) 
                                            + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m)))) {
                __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v8 
                    = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound9;
                __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v8 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v8 
                    = (0x1fffffU & ((IData)(2U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m));
            }
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound10 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in 
                            >> 8U));
            if ((0x100000U >= (0x1fffffU & ((IData)(1U) 
                                            + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m)))) {
                __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v9 
                    = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound10;
                __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v9 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v9 
                    = (0x1fffffU & ((IData)(1U) + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m));
            }
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound11 
                = (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in);
            if ((0x100000U >= (0x1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_m))) {
                __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v10 
                    = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound11;
                __Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v10 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v10 
                    = (0x1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_m);
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__insn_d = __Vdly__top__DOT__dut__DOT__core__DOT__insn_d;
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs__v0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs__v0;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0U] = 0U;
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v0;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v1) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v1] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v1;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v2) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v2] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v2;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v3) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v3] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v3;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v4) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v4] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v4;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v5) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v5] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v5;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v6) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v6] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v6;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v7) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v7] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v7;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v8) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v8] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v8;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v9) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v9] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v9;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v10) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v10] 
            = __Vdlyvval__top__DOT__dut__DOT__core__DOT__dmem__DOT__memory__v10;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_x = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_d;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_x = 0U;
    }
    vlSelf->W_PC = vlSelf->top__DOT__dut__DOT__core__DOT__pc_w;
    top__DOT__dut__DOT__core__DOT__a_sel = 0U;
    if ((((0x63U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x)) 
          | (0x6fU == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x))) 
         | (0x17U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x)))) {
        top__DOT__dut__DOT__core__DOT__a_sel = 1U;
    }
    top__DOT__dut__DOT__core__DOT__b_sel = 1U;
    if ((0x33U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x))) {
        top__DOT__dut__DOT__core__DOT__b_sel = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_w 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_m;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_w = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_w 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_m;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_w = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__data_d = 
        ((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m))
          ? vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out
          : ((1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m))
              ? vlSelf->top__DOT__dut__DOT__core__DOT__alu_m
              : ((IData)(4U) + vlSelf->top__DOT__dut__DOT__core__DOT__pc_m)));
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_m 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_x;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_m = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_m 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_x;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_m = 0U;
    }
    vlSelf->W_ENABLE = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_w;
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_m 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_x;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_m = 0U;
    }
    vlSelf->W_DESTINATION = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_w;
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_m 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_m = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_x;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m = 1U;
    }
    vlSelf->W_DATA = vlSelf->top__DOT__dut__DOT__core__DOT__data_d;
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in 
        = ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_m)
            ? vlSelf->top__DOT__dut__DOT__core__DOT__data_d
            : vlSelf->top__DOT__dut__DOT__core__DOT__rs2_m);
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_m = vlSelf->top__DOT__dut__DOT__core__DOT__pc_x;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_m = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_m = vlSelf->top__DOT__dut__DOT__core__DOT__alu_out;
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d;
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_x = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d;
    if (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__stall) 
         | (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__br_taken))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_x = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_x = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d;
    if (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__stall) 
         | (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__br_taken))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_x = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_x = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d;
    if (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__stall) 
         | (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__br_taken))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_x 
        = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d;
    if (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__stall) 
         | (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__br_taken))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_x = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_x = 1U;
    }
    __Vdly__top__DOT__dut__DOT__core__DOT__pc_f = ((IData)(4U) 
                                                   + vlSelf->top__DOT__dut__DOT__core__DOT__pc_f);
    if (vlSelf->top__DOT__dut__DOT__core__DOT__br_taken) {
        __Vdly__top__DOT__dut__DOT__core__DOT__pc_f 
            = (0xfffffffeU & vlSelf->top__DOT__dut__DOT__core__DOT__alu_out);
    } else if ((0x6fU == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
        __Vdly__top__DOT__dut__DOT__core__DOT__pc_f 
            = (0xfffffffeU & vlSelf->top__DOT__dut__DOT__core__DOT__jal_target);
    } else if (vlSelf->top__DOT__dut__DOT__core__DOT__stall) {
        __Vdly__top__DOT__dut__DOT__core__DOT__pc_f 
            = vlSelf->top__DOT__dut__DOT__core__DOT__pc_f;
    }
    __Vdly__top__DOT__dut__DOT__core__DOT__pc_d = vlSelf->top__DOT__dut__DOT__core__DOT__pc_f;
    if (vlSelf->top__DOT__dut__DOT__core__DOT__br_taken) {
        __Vdly__top__DOT__dut__DOT__core__DOT__pc_d = 0U;
    } else if ((0x6fU == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
        __Vdly__top__DOT__dut__DOT__core__DOT__pc_d = 0U;
    } else if (vlSelf->top__DOT__dut__DOT__core__DOT__stall) {
        __Vdly__top__DOT__dut__DOT__core__DOT__pc_d 
            = vlSelf->top__DOT__dut__DOT__core__DOT__pc_d;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_x = vlSelf->top__DOT__dut__DOT__core__DOT__pc_d;
    if (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__br_taken) 
         | (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__stall))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_x = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__dut__DOT__core__DOT__pc_f = 0x1000000U;
        __Vdly__top__DOT__dut__DOT__core__DOT__pc_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__pc_x = 0U;
    }
    top__DOT__dut__DOT__core__DOT__dmem_out = ((((0x100000U 
                                                  >= 
                                                  (0x1fffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m)))
                                                  ? 
                                                 vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory
                                                 [(0x1fffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m))]
                                                  : 0U) 
                                                << 0x18U) 
                                               | ((((0x100000U 
                                                     >= 
                                                     (0x1fffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m)))
                                                     ? 
                                                    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m))]
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | ((((0x100000U 
                                                        >= 
                                                        (0x1fffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m)))
                                                        ? 
                                                       vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory
                                                       [
                                                       (0x1fffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->top__DOT__dut__DOT__core__DOT__alu_m))]
                                                        : 0U) 
                                                      << 8U) 
                                                     | ((0x100000U 
                                                         >= 
                                                         (0x1fffffU 
                                                          & vlSelf->top__DOT__dut__DOT__core__DOT__alu_m))
                                                         ? 
                                                        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory
                                                        [
                                                        (0x1fffffU 
                                                         & vlSelf->top__DOT__dut__DOT__core__DOT__alu_m)]
                                                         : 0U))));
    top__DOT__dut__DOT__core__DOT__forwarded_rs1 = 
        ((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_x))
          ? vlSelf->top__DOT__dut__DOT__core__DOT__rs1_x
          : ((1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_x))
              ? vlSelf->top__DOT__dut__DOT__core__DOT__alu_m
              : vlSelf->top__DOT__dut__DOT__core__DOT__data_d));
    vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs2 
        = ((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_x))
            ? vlSelf->top__DOT__dut__DOT__core__DOT__rs2_x
            : ((1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_x))
                ? vlSelf->top__DOT__dut__DOT__core__DOT__alu_m
                : vlSelf->top__DOT__dut__DOT__core__DOT__data_d));
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_d = __Vdly__top__DOT__dut__DOT__core__DOT__pc_d;
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_f = __Vdly__top__DOT__dut__DOT__core__DOT__pc_f;
    if (((((((((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m)) 
               | (1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) 
              | (2U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) 
             | (3U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) 
            | (4U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) 
           | (5U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) 
          | (6U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) 
         | (7U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m)))) {
        if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xfffff8ffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x400U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                 << 3U)) | ((0x200U 
                                             & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                << 2U)) 
                                            | (0x100U 
                                               & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                  << 1U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xffffc7ffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x2000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                  << 6U)) | ((0x1000U 
                                              & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                 << 5U)) 
                                             | (0x800U 
                                                & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                   << 4U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xfffe3fffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x10000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                   << 9U)) | ((0x8000U 
                                               & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                  << 8U)) 
                                              | (0x4000U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    << 7U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xfff1ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x80000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                   << 0xcU)) | ((0x40000U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    << 0xbU)) 
                                                | (0x20000U 
                                                   & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                      << 0xaU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xff8fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x400000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                    << 0xfU)) | ((0x200000U 
                                                  & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                     << 0xeU)) 
                                                 | (0x100000U 
                                                    & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                       << 0xdU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xfc7fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x2000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                     << 0x12U)) | (
                                                   (0x1000000U 
                                                    & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                       << 0x11U)) 
                                                   | (0x800000U 
                                                      & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                         << 0x10U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xe3ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x10000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                      << 0x15U)) | 
                      ((0x8000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                      << 0x14U)) | 
                       (0x4000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                      << 0x13U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0x1fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x80000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                      << 0x18U)) | 
                      ((0x40000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                       << 0x17U)) | 
                       (0x20000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                       << 0x16U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | (0xffU & top__DOT__dut__DOT__core__DOT__dmem_out));
        } else if ((1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xfff8ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x40000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                   << 3U)) | ((0x20000U 
                                               & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                  << 2U)) 
                                              | (0x10000U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    << 1U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xffc7ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x200000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                    << 6U)) | ((0x100000U 
                                                & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                   << 5U)) 
                                               | (0x80000U 
                                                  & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                     << 4U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xfe3fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x1000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                     << 9U)) | ((0x800000U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    << 8U)) 
                                                | (0x400000U 
                                                   & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                      << 7U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xf1ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x8000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                     << 0xcU)) | ((0x4000000U 
                                                   & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                      << 0xbU)) 
                                                  | (0x2000000U 
                                                     & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                        << 0xaU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0x8fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x40000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                      << 0xfU)) | (
                                                   (0x20000000U 
                                                    & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                       << 0xeU)) 
                                                   | (0x10000000U 
                                                      & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                         << 0xdU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | (0x80000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                     << 0x10U)));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xffff0000U & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | (0xffffU & top__DOT__dut__DOT__core__DOT__dmem_out));
        } else if ((2U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = top__DOT__dut__DOT__core__DOT__dmem_out;
        } else if ((3U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = (((- (IData)((top__DOT__dut__DOT__core__DOT__dmem_out 
                                >> 0x1fU))) << 0xcU) 
                   | (top__DOT__dut__DOT__core__DOT__dmem_out 
                      >> 0x14U));
        } else if ((4U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = (0xffU & top__DOT__dut__DOT__core__DOT__dmem_out);
        } else if ((5U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = (0xffffU & top__DOT__dut__DOT__core__DOT__dmem_out);
        } else if ((6U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xffff8fffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x4000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                  >> 0x11U)) | ((0x2000U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    >> 0x12U)) 
                                                | (0x1000U 
                                                   & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                      >> 0x13U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xfffc7fffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x20000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                   >> 0xeU)) | ((0x10000U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    >> 0xfU)) 
                                                | (0x8000U 
                                                   & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                      >> 0x10U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xffe3ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x100000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                    >> 0xbU)) | ((0x80000U 
                                                  & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                     >> 0xcU)) 
                                                 | (0x40000U 
                                                    & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                       >> 0xdU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xff1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x800000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                    >> 8U)) | ((0x400000U 
                                                & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                   >> 9U)) 
                                               | (0x200000U 
                                                  & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                     >> 0xaU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xf8ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x4000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                     >> 5U)) | ((0x2000000U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    >> 6U)) 
                                                | (0x1000000U 
                                                   & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                      >> 7U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xc7ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x20000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                      >> 2U)) | ((0x10000000U 
                                                  & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                     >> 3U)) 
                                                 | (0x8000000U 
                                                    & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                       >> 4U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0x3fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x80000000U & top__DOT__dut__DOT__core__DOT__dmem_out) 
                      | (0x40000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                        >> 1U))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xfffff000U & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0xfe0U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                 >> 0x14U)) | (0x1fU 
                                               & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                  >> 7U))));
        } else {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xffff1fffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x8000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                  >> 0x10U)) | ((0x4000U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    >> 0x11U)) 
                                                | (0x2000U 
                                                   & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                      >> 0x12U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xfff8ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x40000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                   >> 0xdU)) | ((0x20000U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    >> 0xeU)) 
                                                | (0x10000U 
                                                   & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                      >> 0xfU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xffc7ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x200000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                    >> 0xaU)) | ((0x100000U 
                                                  & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                     >> 0xbU)) 
                                                 | (0x80000U 
                                                    & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                       >> 0xcU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xfe3fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x1000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                     >> 7U)) | ((0x800000U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    >> 8U)) 
                                                | (0x400000U 
                                                   & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                      >> 9U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xf1ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x8000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                     >> 4U)) | ((0x4000000U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    >> 5U)) 
                                                | (0x2000000U 
                                                   & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                      >> 6U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0x8fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x40000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                      >> 1U)) | ((0x20000000U 
                                                  & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                     >> 2U)) 
                                                 | (0x10000000U 
                                                    & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                       >> 3U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | (0x80000000U & top__DOT__dut__DOT__core__DOT__dmem_out));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xffffe01fU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | ((0x1000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                  >> 0x13U)) | ((0x800U 
                                                 & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                    << 4U)) 
                                                | (0x7e0U 
                                                   & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                      >> 0x14U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
                = ((0xffffffe0U & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
                   | (0x1eU & (top__DOT__dut__DOT__core__DOT__dmem_out 
                               >> 7U)));
        }
    } else if ((8U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
            = ((0xff1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
               | ((0x800000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                >> 8U)) | ((0x400000U 
                                            & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                               >> 9U)) 
                                           | (0x200000U 
                                              & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                 >> 0xaU)))));
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
            = ((0xf8ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
               | ((0x4000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                 >> 5U)) | ((0x2000000U 
                                             & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                >> 6U)) 
                                            | (0x1000000U 
                                               & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                  >> 7U)))));
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
            = ((0xc7ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
               | ((0x20000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                  >> 2U)) | ((0x10000000U 
                                              & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                 >> 3U)) 
                                             | (0x8000000U 
                                                & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                   >> 4U)))));
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
            = ((0x3fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
               | ((0x80000000U & top__DOT__dut__DOT__core__DOT__dmem_out) 
                  | (0x40000000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                    >> 1U))));
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
            = ((0xffe007ffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
               | ((0x100000U & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                >> 0xbU)) | ((0xff000U 
                                              & top__DOT__dut__DOT__core__DOT__dmem_out) 
                                             | (0x800U 
                                                & (top__DOT__dut__DOT__core__DOT__dmem_out 
                                                   >> 9U)))));
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
            = ((0xfffff800U & vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out) 
               | (0x7feU & (top__DOT__dut__DOT__core__DOT__dmem_out 
                            >> 0x14U)));
    } else if ((9U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out 
            = (0xfffff000U & top__DOT__dut__DOT__core__DOT__dmem_out);
    }
    top__DOT__dut__DOT__core__DOT__br_eq = (top__DOT__dut__DOT__core__DOT__forwarded_rs1 
                                            == vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs2);
    if (vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_x) {
        vlSelf->top__DOT__dut__DOT__core__DOT__br_lt 
            = (top__DOT__dut__DOT__core__DOT__forwarded_rs1 
               < vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs2);
        vlSelf->top__DOT__dut__DOT__core__DOT__branch_comp_inst__DOT__diff = 0U;
    } else if (((top__DOT__dut__DOT__core__DOT__forwarded_rs1 
                 ^ vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs2) 
                >> 0x1fU)) {
        vlSelf->top__DOT__dut__DOT__core__DOT__br_lt 
            = (top__DOT__dut__DOT__core__DOT__forwarded_rs1 
               >> 0x1fU);
        vlSelf->top__DOT__dut__DOT__core__DOT__branch_comp_inst__DOT__diff = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__core__DOT__branch_comp_inst__DOT__diff 
            = (top__DOT__dut__DOT__core__DOT__forwarded_rs1 
               - vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs2);
        vlSelf->top__DOT__dut__DOT__core__DOT__br_lt 
            = (vlSelf->top__DOT__dut__DOT__core__DOT__branch_comp_inst__DOT__diff 
               >> 0x1fU);
    }
    top__DOT__dut__DOT__core__DOT__alu_in_2 = ((IData)(top__DOT__dut__DOT__core__DOT__b_sel)
                                                ? vlSelf->top__DOT__dut__DOT__core__DOT__imm_x
                                                : vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs2);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d 
        = (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__insn_d);
    top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct7_d 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
           >> 0x19U);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d 
        = (7U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                 >> 0xcU));
    if ((0x40U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
        if ((0x20U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                    if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                    } else {
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                    }
                } else {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                }
            } else if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                    if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 1U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 8U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                            >> 7U));
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 2U;
                        } else {
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                    }
                } else {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                }
            } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                    if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 1U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 3U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                        >> 0xfU));
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                        >> 7U));
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 2U;
                    } else {
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                    }
                } else {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 7U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d 
                        = (1U & ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d) 
                                 >> 1U));
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d 
                        = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    >> 0xfU));
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d 
                        = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    >> 0x14U));
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                } else {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                }
            } else {
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
            }
        } else {
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
        if ((0x10U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
            if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
            } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                    if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 1U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 9U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                        >> 7U));
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0xfU;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 1U;
                    } else {
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                    }
                } else {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 1U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d 
                        = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    >> 0xfU));
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d 
                        = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    >> 0x14U));
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d 
                        = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    >> 7U));
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d 
                        = ((8U & ((IData)(top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct7_d) 
                                  >> 2U)) | (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d));
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 1U;
                } else {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                }
            } else {
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
            }
        } else if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
        } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
        } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
            if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 6U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d 
                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                >> 0xfU));
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d 
                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                >> 0x14U));
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d 
                    = (3U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d));
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 1U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
            } else {
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
            }
        } else {
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
        if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
        } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
            if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 1U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 9U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d 
                        = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    >> 7U));
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 1U;
                } else {
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
                }
            } else {
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
            if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 1U;
                vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 3U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d 
                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                >> 0xfU));
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d 
                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                >> 7U));
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d 
                    = ((0x3ffffff8U & (((5U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d)) 
                                        << 3U) & ((IData)(top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct7_d) 
                                                  >> 2U))) 
                       | (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d));
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 1U;
            } else {
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
                vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
            }
        } else {
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
        }
    } else if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
    } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
    } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 1U;
            vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 3U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d 
                = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                            >> 0xfU));
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d 
                = (0x1fU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                            >> 7U));
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d 
                = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
        } else {
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
            vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
        }
    } else {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = 0U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__rs1 = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d;
    vlSelf->top__DOT__dut__DOT__core__DOT__rs2 = vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d;
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_d = 0U;
    if ((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_x) 
          & ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x) 
             == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d))) 
         & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d)))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_d = 1U;
    } else if ((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_m) 
                 & ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_m) 
                    == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d))) 
                & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d)))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_d = 2U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_d = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_d = 0U;
    if ((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_x) 
          & ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x) 
             == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d))) 
         & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d)))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_d = 1U;
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_d = 1U;
    } else if ((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_m) 
                 & ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_m) 
                    == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d))) 
                & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d)))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_d = 2U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__stall = 0U;
    if ((3U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__stall 
            = ((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d) 
                 == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x)) 
                & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d))) 
               | ((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d) 
                    == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x)) 
                   & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d))) 
                  & (0x23U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d))));
    } else if (vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_w) {
        vlSelf->top__DOT__dut__DOT__core__DOT__stall 
            = (((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d) 
                  == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_w)) 
                 & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d))) 
                & (0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_d))) 
               | ((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d) 
                    == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_w)) 
                   & (0U != (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d))) 
                  & (0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_d))));
    }
    top__DOT__dut__DOT__core__DOT__alu_in_1 = ((IData)(top__DOT__dut__DOT__core__DOT__a_sel)
                                                ? vlSelf->top__DOT__dut__DOT__core__DOT__pc_x
                                                : top__DOT__dut__DOT__core__DOT__forwarded_rs1);
    vlSelf->F_PC = vlSelf->top__DOT__dut__DOT__core__DOT__pc_f;
    vlSelf->top__DOT__dut__DOT__core__DOT__insn_f = 
        ((((0x100000U >= (0x1fffffU & ((IData)(3U) 
                                       + vlSelf->top__DOT__dut__DOT__core__DOT__pc_f)))
            ? vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__memory
           [(0x1fffffU & ((IData)(3U) + vlSelf->top__DOT__dut__DOT__core__DOT__pc_f))]
            : 0U) << 0x18U) | ((((0x100000U >= (0x1fffffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->top__DOT__dut__DOT__core__DOT__pc_f)))
                                  ? vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__memory
                                 [(0x1fffffU & ((IData)(2U) 
                                                + vlSelf->top__DOT__dut__DOT__core__DOT__pc_f))]
                                  : 0U) << 0x10U) | 
                               ((((0x100000U >= (0x1fffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->top__DOT__dut__DOT__core__DOT__pc_f)))
                                   ? vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__memory
                                  [(0x1fffffU & ((IData)(1U) 
                                                 + vlSelf->top__DOT__dut__DOT__core__DOT__pc_f))]
                                   : 0U) << 8U) | (
                                                   (0x100000U 
                                                    >= 
                                                    (0x1fffffU 
                                                     & vlSelf->top__DOT__dut__DOT__core__DOT__pc_f))
                                                    ? 
                                                   vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__memory
                                                   [
                                                   (0x1fffffU 
                                                    & vlSelf->top__DOT__dut__DOT__core__DOT__pc_f)]
                                                    : 0U))));
    vlSelf->top__DOT__dut__DOT__core__DOT__br_taken = 0U;
    if ((0x67U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__br_taken = 1U;
    } else if ((0x63U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__br_taken 
            = (1U & ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x))
                      ? ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x))
                          ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x))
                              ? (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__br_lt))
                              : (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__br_lt))
                          : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x))
                              ? (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__br_lt))
                              : (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__br_lt)))
                      : ((~ ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x) 
                             >> 1U)) & ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x))
                                         ? (~ (IData)(top__DOT__dut__DOT__core__DOT__br_eq))
                                         : (IData)(top__DOT__dut__DOT__core__DOT__br_eq)))));
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm)) 
               | (1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) 
              | (2U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) 
             | (3U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) 
            | (4U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) 
           | (5U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) 
          | (6U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) 
         | (7U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm)))) {
        if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xfffff8ffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x400U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                 << 3U)) | ((0x200U 
                                             & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                << 2U)) 
                                            | (0x100U 
                                               & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                  << 1U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xffffc7ffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x2000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                  << 6U)) | ((0x1000U 
                                              & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                 << 5U)) 
                                             | (0x800U 
                                                & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                   << 4U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xfffe3fffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x10000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                   << 9U)) | ((0x8000U 
                                               & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                  << 8U)) 
                                              | (0x4000U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    << 7U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xfff1ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x80000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                   << 0xcU)) | ((0x40000U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    << 0xbU)) 
                                                | (0x20000U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                      << 0xaU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xff8fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x400000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    << 0xfU)) | ((0x200000U 
                                                  & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                     << 0xeU)) 
                                                 | (0x100000U 
                                                    & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                       << 0xdU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xfc7fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x2000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                     << 0x12U)) | (
                                                   (0x1000000U 
                                                    & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                       << 0x11U)) 
                                                   | (0x800000U 
                                                      & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                         << 0x10U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xe3ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x10000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                      << 0x15U)) | 
                      ((0x8000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                      << 0x14U)) | 
                       (0x4000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                      << 0x13U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0x1fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x80000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                      << 0x18U)) | 
                      ((0x40000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                       << 0x17U)) | 
                       (0x20000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                       << 0x16U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__insn_d));
        } else if ((1U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xfff8ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x40000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                   << 3U)) | ((0x20000U 
                                               & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                  << 2U)) 
                                              | (0x10000U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    << 1U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xffc7ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x200000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    << 6U)) | ((0x100000U 
                                                & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                   << 5U)) 
                                               | (0x80000U 
                                                  & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                     << 4U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xfe3fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x1000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                     << 9U)) | ((0x800000U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    << 8U)) 
                                                | (0x400000U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                      << 7U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xf1ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x8000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                     << 0xcU)) | ((0x4000000U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                      << 0xbU)) 
                                                  | (0x2000000U 
                                                     & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                        << 0xaU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0x8fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x40000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                      << 0xfU)) | (
                                                   (0x20000000U 
                                                    & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                       << 0xeU)) 
                                                   | (0x10000000U 
                                                      & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                         << 0xdU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | (0x80000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                     << 0x10U)));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xffff0000U & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | (0xffffU & vlSelf->top__DOT__dut__DOT__core__DOT__insn_d));
        } else if ((2U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = vlSelf->top__DOT__dut__DOT__core__DOT__insn_d;
        } else if ((3U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = (((- (IData)((vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                      >> 0x14U));
        } else if ((4U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__insn_d);
        } else if ((5U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = (0xffffU & vlSelf->top__DOT__dut__DOT__core__DOT__insn_d);
        } else if ((6U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xffff8fffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x4000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                  >> 0x11U)) | ((0x2000U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    >> 0x12U)) 
                                                | (0x1000U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                      >> 0x13U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xfffc7fffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x20000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                   >> 0xeU)) | ((0x10000U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    >> 0xfU)) 
                                                | (0x8000U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                      >> 0x10U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xffe3ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x100000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    >> 0xbU)) | ((0x80000U 
                                                  & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                     >> 0xcU)) 
                                                 | (0x40000U 
                                                    & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                       >> 0xdU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xff1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x800000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    >> 8U)) | ((0x400000U 
                                                & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                   >> 9U)) 
                                               | (0x200000U 
                                                  & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                     >> 0xaU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xf8ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x4000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                     >> 5U)) | ((0x2000000U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    >> 6U)) 
                                                | (0x1000000U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                      >> 7U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xc7ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x20000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                      >> 2U)) | ((0x10000000U 
                                                  & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                     >> 3U)) 
                                                 | (0x8000000U 
                                                    & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                       >> 4U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0x3fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x80000000U & vlSelf->top__DOT__dut__DOT__core__DOT__insn_d) 
                      | (0x40000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                        >> 1U))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xfffff000U & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0xfe0U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                 >> 0x14U)) | (0x1fU 
                                               & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                  >> 7U))));
        } else {
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xffff1fffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x8000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                  >> 0x10U)) | ((0x4000U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    >> 0x11U)) 
                                                | (0x2000U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                      >> 0x12U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xfff8ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x40000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                   >> 0xdU)) | ((0x20000U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    >> 0xeU)) 
                                                | (0x10000U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                      >> 0xfU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xffc7ffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x200000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    >> 0xaU)) | ((0x100000U 
                                                  & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                     >> 0xbU)) 
                                                 | (0x80000U 
                                                    & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                       >> 0xcU)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xfe3fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x1000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                     >> 7U)) | ((0x800000U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    >> 8U)) 
                                                | (0x400000U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                      >> 9U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xf1ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x8000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                     >> 4U)) | ((0x4000000U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    >> 5U)) 
                                                | (0x2000000U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                      >> 6U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0x8fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x40000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                      >> 1U)) | ((0x20000000U 
                                                  & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                     >> 2U)) 
                                                 | (0x10000000U 
                                                    & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                       >> 3U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | (0x80000000U & vlSelf->top__DOT__dut__DOT__core__DOT__insn_d));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xffffe01fU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | ((0x1000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                  >> 0x13U)) | ((0x800U 
                                                 & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                    << 4U)) 
                                                | (0x7e0U 
                                                   & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                      >> 0x14U)))));
            vlSelf->top__DOT__dut__DOT__core__DOT__imm 
                = ((0xffffffe0U & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
                   | (0x1eU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                               >> 7U)));
        }
    } else if ((8U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__imm 
            = ((0xff1fffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
               | ((0x800000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                >> 8U)) | ((0x400000U 
                                            & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                               >> 9U)) 
                                           | (0x200000U 
                                              & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                 >> 0xaU)))));
        vlSelf->top__DOT__dut__DOT__core__DOT__imm 
            = ((0xf8ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
               | ((0x4000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                 >> 5U)) | ((0x2000000U 
                                             & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                >> 6U)) 
                                            | (0x1000000U 
                                               & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                  >> 7U)))));
        vlSelf->top__DOT__dut__DOT__core__DOT__imm 
            = ((0xc7ffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
               | ((0x20000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                  >> 2U)) | ((0x10000000U 
                                              & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                 >> 3U)) 
                                             | (0x8000000U 
                                                & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                   >> 4U)))));
        vlSelf->top__DOT__dut__DOT__core__DOT__imm 
            = ((0x3fffffffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
               | ((0x80000000U & vlSelf->top__DOT__dut__DOT__core__DOT__insn_d) 
                  | (0x40000000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                    >> 1U))));
        vlSelf->top__DOT__dut__DOT__core__DOT__imm 
            = ((0xffe007ffU & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
               | ((0x100000U & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                >> 0xbU)) | ((0xff000U 
                                              & vlSelf->top__DOT__dut__DOT__core__DOT__insn_d) 
                                             | (0x800U 
                                                & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                                                   >> 9U)))));
        vlSelf->top__DOT__dut__DOT__core__DOT__imm 
            = ((0xfffff800U & vlSelf->top__DOT__dut__DOT__core__DOT__imm) 
               | (0x7feU & (vlSelf->top__DOT__dut__DOT__core__DOT__insn_d 
                            >> 0x14U)));
    } else if ((9U == (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__imm 
            = (0xfffff000U & vlSelf->top__DOT__dut__DOT__core__DOT__insn_d);
    }
    if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x))) {
        if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x))) {
            if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x))) {
                vlSelf->top__DOT__dut__DOT__core__DOT__alu_out 
                    = ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x))
                        ? top__DOT__dut__DOT__core__DOT__alu_in_2
                        : (top__DOT__dut__DOT__core__DOT__alu_in_1 
                           & top__DOT__dut__DOT__core__DOT__alu_in_2));
                vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff = 0U;
            } else {
                vlSelf->top__DOT__dut__DOT__core__DOT__alu_out 
                    = (top__DOT__dut__DOT__core__DOT__alu_in_1 
                       | top__DOT__dut__DOT__core__DOT__alu_in_2);
                vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_out 
                = ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x))
                    ? (top__DOT__dut__DOT__core__DOT__alu_in_1 
                       >> (0x1fU & top__DOT__dut__DOT__core__DOT__alu_in_2))
                    : (top__DOT__dut__DOT__core__DOT__alu_in_1 
                       >> (0x1fU & top__DOT__dut__DOT__core__DOT__alu_in_2)));
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff = 0U;
        } else {
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_out 
                = (top__DOT__dut__DOT__core__DOT__alu_in_1 
                   ^ top__DOT__dut__DOT__core__DOT__alu_in_2);
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff = 0U;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_out 
                = (top__DOT__dut__DOT__core__DOT__alu_in_1 
                   < top__DOT__dut__DOT__core__DOT__alu_in_2);
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff = 0U;
        } else if (((top__DOT__dut__DOT__core__DOT__alu_in_1 
                     ^ top__DOT__dut__DOT__core__DOT__alu_in_2) 
                    >> 0x1fU)) {
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_out 
                = (top__DOT__dut__DOT__core__DOT__alu_in_1 
                   >> 0x1fU);
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff = 0U;
        } else {
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff 
                = (top__DOT__dut__DOT__core__DOT__alu_in_1 
                   - top__DOT__dut__DOT__core__DOT__alu_in_2);
            vlSelf->top__DOT__dut__DOT__core__DOT__alu_out 
                = (vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff 
                   >> 0x1fU);
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x))) {
        vlSelf->top__DOT__dut__DOT__core__DOT__alu_out 
            = (top__DOT__dut__DOT__core__DOT__alu_in_1 
               << (0x1fU & top__DOT__dut__DOT__core__DOT__alu_in_2));
        vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__core__DOT__alu_out 
            = ((8U & (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x))
                ? (top__DOT__dut__DOT__core__DOT__alu_in_1 
                   - top__DOT__dut__DOT__core__DOT__alu_in_2)
                : (top__DOT__dut__DOT__core__DOT__alu_in_1 
                   + top__DOT__dut__DOT__core__DOT__alu_in_2));
        vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff = 0U;
    }
    vlSelf->F_INSN = vlSelf->top__DOT__dut__DOT__core__DOT__insn_f;
    vlSelf->top__DOT__dut__DOT__core__DOT__jal_target 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__imm 
           + vlSelf->top__DOT__dut__DOT__core__DOT__pc_d);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
}
#endif  // VL_DEBUG
