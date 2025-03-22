// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

extern const VlWide<13>/*415:0*/ Vtop__ConstPool__CONST_35c3f080_0;

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__imem__DOT__i;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__dmem__DOT__i;
    VlWide<3>/*95:0*/ __Vtemp4;
    // Body
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[1U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[2U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[3U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[4U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[5U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[6U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[7U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[8U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[9U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0xaU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0xbU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0xcU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0xdU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0xeU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0xfU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x10U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x11U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x12U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x13U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x14U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x15U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x16U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x17U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x18U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x19U] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x1aU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x1bU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x1cU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x1dU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x1eU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[0x1fU] = 0U;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[2U] = 0x1100000U;
    VL_READMEM_N(true, 32, 66, 0, VL_CVT_PACK_STR_NW(13, Vtop__ConstPool__CONST_35c3f080_0)
                 ,  &(vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__unnamedblk1__DOT__temp_arr)
                 , 0, ~0ULL);
    top__DOT__dut__DOT__core__DOT__imem__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x42U, top__DOT__dut__DOT__core__DOT__imem__DOT__i)) {
        vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound5 
            = ((0x41U >= (0x7fU & top__DOT__dut__DOT__core__DOT__imem__DOT__i))
                ? (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__unnamedblk1__DOT__temp_arr
                   [(0x7fU & top__DOT__dut__DOT__core__DOT__imem__DOT__i)])
                : 0U);
        if (VL_LIKELY((0x100000U >= (0x1fffffU & VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__imem__DOT__i))))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__memory[(0x1fffffU 
                                                                      & VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__imem__DOT__i))] 
                = vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound5;
        }
        vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound6 
            = (0xffU & (((0x41U >= (0x7fU & top__DOT__dut__DOT__core__DOT__imem__DOT__i))
                          ? vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__unnamedblk1__DOT__temp_arr
                         [(0x7fU & top__DOT__dut__DOT__core__DOT__imem__DOT__i)]
                          : 0U) >> 8U));
        if (VL_LIKELY((0x100000U >= (0x1fffffU & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__imem__DOT__i)))))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__memory[(0x1fffffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__imem__DOT__i)))] 
                = vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound6;
        }
        vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound7 
            = (0xffU & (((0x41U >= (0x7fU & top__DOT__dut__DOT__core__DOT__imem__DOT__i))
                          ? vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__unnamedblk1__DOT__temp_arr
                         [(0x7fU & top__DOT__dut__DOT__core__DOT__imem__DOT__i)]
                          : 0U) >> 0x10U));
        if (VL_LIKELY((0x100000U >= (0x1fffffU & ((IData)(2U) 
                                                  + 
                                                  VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__imem__DOT__i)))))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__memory[(0x1fffffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__imem__DOT__i)))] 
                = vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound7;
        }
        vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound8 
            = (((0x41U >= (0x7fU & top__DOT__dut__DOT__core__DOT__imem__DOT__i))
                 ? vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__unnamedblk1__DOT__temp_arr
                [(0x7fU & top__DOT__dut__DOT__core__DOT__imem__DOT__i)]
                 : 0U) >> 0x18U);
        if (VL_LIKELY((0x100000U >= (0x1fffffU & ((IData)(3U) 
                                                  + 
                                                  VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__imem__DOT__i)))))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__memory[(0x1fffffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__imem__DOT__i)))] 
                = vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound8;
        }
        top__DOT__dut__DOT__core__DOT__imem__DOT__i 
            = ((IData)(1U) + top__DOT__dut__DOT__core__DOT__imem__DOT__i);
    }
    VL_READMEM_N(true, 32, 66, 0, VL_CVT_PACK_STR_NW(13, Vtop__ConstPool__CONST_35c3f080_0)
                 ,  &(vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__unnamedblk1__DOT__temp_arr)
                 , 0, ~0ULL);
    top__DOT__dut__DOT__core__DOT__dmem__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x42U, top__DOT__dut__DOT__core__DOT__dmem__DOT__i)) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound12 
            = ((0x41U >= (0x7fU & top__DOT__dut__DOT__core__DOT__dmem__DOT__i))
                ? (0xffU & vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__unnamedblk1__DOT__temp_arr
                   [(0x7fU & top__DOT__dut__DOT__core__DOT__dmem__DOT__i)])
                : 0U);
        if (VL_LIKELY((0x100000U >= (0x1fffffU & VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__dmem__DOT__i))))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[(0x1fffffU 
                                                                      & VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__dmem__DOT__i))] 
                = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound12;
        }
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound13 
            = (0xffU & (((0x41U >= (0x7fU & top__DOT__dut__DOT__core__DOT__dmem__DOT__i))
                          ? vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__unnamedblk1__DOT__temp_arr
                         [(0x7fU & top__DOT__dut__DOT__core__DOT__dmem__DOT__i)]
                          : 0U) >> 8U));
        if (VL_LIKELY((0x100000U >= (0x1fffffU & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__dmem__DOT__i)))))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[(0x1fffffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__dmem__DOT__i)))] 
                = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound13;
        }
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound14 
            = (0xffU & (((0x41U >= (0x7fU & top__DOT__dut__DOT__core__DOT__dmem__DOT__i))
                          ? vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__unnamedblk1__DOT__temp_arr
                         [(0x7fU & top__DOT__dut__DOT__core__DOT__dmem__DOT__i)]
                          : 0U) >> 0x10U));
        if (VL_LIKELY((0x100000U >= (0x1fffffU & ((IData)(2U) 
                                                  + 
                                                  VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__dmem__DOT__i)))))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[(0x1fffffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__dmem__DOT__i)))] 
                = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound14;
        }
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound15 
            = (((0x41U >= (0x7fU & top__DOT__dut__DOT__core__DOT__dmem__DOT__i))
                 ? vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__unnamedblk1__DOT__temp_arr
                [(0x7fU & top__DOT__dut__DOT__core__DOT__dmem__DOT__i)]
                 : 0U) >> 0x18U);
        if (VL_LIKELY((0x100000U >= (0x1fffffU & ((IData)(3U) 
                                                  + 
                                                  VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__dmem__DOT__i)))))) {
            vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[(0x1fffffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         VL_MULS_III(21,32,32, (IData)(4U), top__DOT__dut__DOT__core__DOT__dmem__DOT__i)))] 
                = vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound15;
        }
        top__DOT__dut__DOT__core__DOT__dmem__DOT__i 
            = ((IData)(1U) + top__DOT__dut__DOT__core__DOT__dmem__DOT__i);
    }
    __Vtemp4[0U] = 0x72616365U;
    __Vtemp4[1U] = 0x61702e74U;
    __Vtemp4[2U] = 0x5377U;
    vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd = VL_FOPEN_NN(
                                                                 VL_CVT_PACK_STR_NW(3, __Vtemp4)
                                                                 , 
                                                                 std::string("w"));
    vlSelf->top__DOT__clock = 0U;
    vlSelf->top__DOT__reset = 1U;
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_f = 0x1000000U;
    vlSelf->top__DOT__clkg__DOT__counter = 0U;
}

void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Variables
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__br_eq;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__a_sel;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__b_sel;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__forwarded_rs1;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__alu_in_1;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__alu_in_2;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__dmem_out;
    // Body
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
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in 
        = ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_m)
            ? vlSelf->top__DOT__dut__DOT__core__DOT__data_d
            : vlSelf->top__DOT__dut__DOT__core__DOT__rs2_m);
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
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d 
        = (0x7fU & vlSelf->top__DOT__dut__DOT__core__DOT__insn_d);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct7_d 
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
                        = ((8U & ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct7_d) 
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
                                        << 3U) & ((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct7_d) 
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
    top__DOT__dut__DOT__core__DOT__alu_in_1 = ((IData)(top__DOT__dut__DOT__core__DOT__a_sel)
                                                ? vlSelf->top__DOT__dut__DOT__core__DOT__pc_x
                                                : top__DOT__dut__DOT__core__DOT__forwarded_rs1);
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
    vlSelf->top__DOT__dut__DOT__core__DOT__rs1_data 
        = vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs
        [vlSelf->top__DOT__dut__DOT__core__DOT__rs1];
    vlSelf->top__DOT__dut__DOT__core__DOT__rs2_data 
        = vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs
        [vlSelf->top__DOT__dut__DOT__core__DOT__rs2];
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
                    ? VL_SHIFTRS_III(32,32,5, top__DOT__dut__DOT__core__DOT__alu_in_1, 
                                     (0x1fU & top__DOT__dut__DOT__core__DOT__alu_in_2))
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
    vlSelf->top__DOT__dut__DOT__core__DOT__jal_target 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__imm 
           + vlSelf->top__DOT__dut__DOT__core__DOT__pc_d);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__top__DOT__clock = 0U;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__4(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__DOT_____05Ftrace_fd = 0;
    vlSelf->top__DOT__clkg__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_f = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__insn_f = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__insn_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__jal_target = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__imm_sel_imm = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__imm_x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__rs1_x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__rs2_x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__forwarded_rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__br_lt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_m = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__rs2_m = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_m = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_data_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_imm_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__pc_w = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__data_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_d = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__opcode_x = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct7_d = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_d = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__funct3_x = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_d = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_m = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__reg_wen_w = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_d = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__br_un_x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_d = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_d = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_d = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_x = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_m = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rd_w = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_d = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__alu_sel_x = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_d = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs1_sel_x = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_d = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__rs2_sel_x = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_d = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__data_w_sel_m = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_d = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_x = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__access_size_m = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_d = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_x = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__dmem_rw_m = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_d = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_x = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__imm_sel_dmem_m = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_d = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_x = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__core__DOT__control_inst__DOT__wb_sel_m = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<1048577; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<66; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT__unnamedblk1__DOT__temp_arr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__imem__DOT____Vlvbound8 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__register_file_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__diff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__core__DOT__branch_comp_inst__DOT__diff = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1048577; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<66; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT__unnamedblk1__DOT__temp_arr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound8 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound9 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound10 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound11 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound12 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound13 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound14 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem__DOT____Vlvbound15 = VL_RAND_RESET_I(8);
}
