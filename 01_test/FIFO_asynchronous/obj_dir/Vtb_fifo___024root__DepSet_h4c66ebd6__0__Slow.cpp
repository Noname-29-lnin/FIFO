// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo.h for the primary calling header

#include "Vtb_fifo__pch.h"
#include "Vtb_fifo___024root.h"

VL_ATTR_COLD void Vtb_fifo___024root___eval_static(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_fifo___024root___eval_final(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo___024root___dump_triggers__stl(Vtb_fifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fifo___024root___eval_phase__stl(Vtb_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo___024root___eval_settle(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_fifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_fifo.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_fifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo___024root___dump_triggers__stl(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fifo___024root___stl_sequent__TOP__0(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_fifo__DOT__o_full = ((IData)(vlSelf->tb_fifo__DOT__dut__DOT__ptr_wr_gray) 
                                    == ((0x18U & ((~ 
                                                   ((IData)(vlSelf->tb_fifo__DOT__dut__DOT__ptr_rd_sync2) 
                                                    >> 3U)) 
                                                  << 3U)) 
                                        | (7U & (IData)(vlSelf->tb_fifo__DOT__dut__DOT__ptr_rd_sync2))));
    vlSelf->tb_fifo__DOT__o_empty = ((IData)(vlSelf->tb_fifo__DOT__dut__DOT__ptr_rd_gray) 
                                     == (IData)(vlSelf->tb_fifo__DOT__dut__DOT__ptr_wr_sync2));
}

VL_ATTR_COLD void Vtb_fifo___024root___eval_stl(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_fifo___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_fifo___024root___eval_triggers__stl(Vtb_fifo___024root* vlSelf);

VL_ATTR_COLD bool Vtb_fifo___024root___eval_phase__stl(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_fifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo___024root___dump_triggers__act(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_fifo.i_clk_wr or negedge tb_fifo.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_fifo.i_clk_rd or negedge tb_fifo.i_rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_fifo.i_clk_wr)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_fifo.i_clk_rd)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo___024root___dump_triggers__nba(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_fifo.i_clk_wr or negedge tb_fifo.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_fifo.i_clk_rd or negedge tb_fifo.i_rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_fifo.i_clk_wr)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_fifo.i_clk_rd)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fifo___024root___ctor_var_reset(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_fifo__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo__DOT__i_clk_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo__DOT__i_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo__DOT__i_data_wr = VL_RAND_RESET_I(8);
    vlSelf->tb_fifo__DOT__o_full = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo__DOT__i_clk_rd = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo__DOT__i_rd_en = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo__DOT__o_data_rd = VL_RAND_RESET_I(8);
    vlSelf->tb_fifo__DOT__o_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo__DOT__dut__DOT__ptr_wr = VL_RAND_RESET_I(5);
    vlSelf->tb_fifo__DOT__dut__DOT__ptr_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_fifo__DOT__dut__DOT__ptr_wr_gray = VL_RAND_RESET_I(5);
    vlSelf->tb_fifo__DOT__dut__DOT__ptr_rd_gray = VL_RAND_RESET_I(5);
    vlSelf->tb_fifo__DOT__dut__DOT__ptr_wr_sync1 = VL_RAND_RESET_I(5);
    vlSelf->tb_fifo__DOT__dut__DOT__ptr_wr_sync2 = VL_RAND_RESET_I(5);
    vlSelf->tb_fifo__DOT__dut__DOT__ptr_rd_sync1 = VL_RAND_RESET_I(5);
    vlSelf->tb_fifo__DOT__dut__DOT__ptr_rd_sync2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_fifo__DOT__dut__DOT__Arry__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__tb_fifo__DOT__dut__DOT__ptr_wr = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__tb_fifo__DOT__dut__DOT__ptr_rd = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvdim0__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_wr__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_rd__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
