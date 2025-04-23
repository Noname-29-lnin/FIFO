// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo.h for the primary calling header

#include "Vtb_fifo__pch.h"
#include "Vtb_fifo__Syms.h"
#include "Vtb_fifo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo___024root___dump_triggers__act(Vtb_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fifo___024root___eval_triggers__act(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_fifo__DOT__dut__DOT__count) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__dut__DOT__count__1)));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->tb_fifo__DOT__i_clk_rd) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_rd__0))) 
                                     | ((~ (IData)(vlSelf->tb_fifo__DOT__i_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_rst_n__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->tb_fifo__DOT__i_clk_wr) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_wr__0))) 
                                     | ((~ (IData)(vlSelf->tb_fifo__DOT__i_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_rst_n__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tb_fifo__DOT__i_clk_wr) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_wr__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->tb_fifo__DOT__i_clk_rd) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_rd__0))));
    vlSelf->__VactTriggered.set(5U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__dut__DOT__count__1 
        = vlSelf->tb_fifo__DOT__dut__DOT__count;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_rd__0 
        = vlSelf->tb_fifo__DOT__i_clk_rd;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_rst_n__0 
        = vlSelf->tb_fifo__DOT__i_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_wr__0 
        = vlSelf->tb_fifo__DOT__i_clk_wr;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_fifo___024root___act_comb__TOP__1(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_fifo__DOT__dut__DOT__count = (0xfU & 
                                             (((IData)(vlSelf->tb_fifo__DOT__i_rd_en) 
                                               & (~ (IData)(vlSelf->tb_fifo__DOT__i_wr_en)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelf->tb_fifo__DOT__dut__DOT__count))
                                               : ((
                                                   (~ (IData)(vlSelf->tb_fifo__DOT__i_rd_en)) 
                                                   & (IData)(vlSelf->tb_fifo__DOT__i_wr_en))
                                                   ? 
                                                  ((IData)(vlSelf->tb_fifo__DOT__dut__DOT__count) 
                                                   - (IData)(1U))
                                                   : (IData)(vlSelf->tb_fifo__DOT__dut__DOT__count))));
    vlSelf->tb_fifo__DOT__o_empty = (0U == (IData)(vlSelf->tb_fifo__DOT__dut__DOT__count));
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("Time=%0t rst_n=%b wr_en=%b rd_en=%b data_wr=%x data_rd=%x empty=%b full=0\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_fifo__DOT__i_rst_n),
                  1,vlSelf->tb_fifo__DOT__i_wr_en,1,
                  (IData)(vlSelf->tb_fifo__DOT__i_rd_en),
                  8,vlSelf->tb_fifo__DOT__i_data_wr,
                  8,(IData)(vlSelf->tb_fifo__DOT__o_data_rd),
                  1,vlSelf->tb_fifo__DOT__o_empty);
    }
    vlSelf->tb_fifo__DOT__dut__DOT__update_rd = ((~ (IData)(vlSelf->tb_fifo__DOT__o_empty)) 
                                                 & (IData)(vlSelf->tb_fifo__DOT__i_rd_en));
    vlSelf->tb_fifo__DOT__dut__DOT__n_ptr_rd = (0xfU 
                                                & ((IData)(vlSelf->tb_fifo__DOT__dut__DOT__ptr_rd) 
                                                   + (IData)(vlSelf->tb_fifo__DOT__dut__DOT__update_rd)));
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_comb__TOP__0(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_fifo__DOT__dut__DOT__update_rd = ((~ (IData)(vlSelf->tb_fifo__DOT__o_empty)) 
                                                 & (IData)(vlSelf->tb_fifo__DOT__i_rd_en));
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("Time=%0t rst_n=%b wr_en=%b rd_en=%b data_wr=%x data_rd=%x empty=%b full=0\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_fifo__DOT__i_rst_n),
                  1,vlSelf->tb_fifo__DOT__i_wr_en,1,
                  (IData)(vlSelf->tb_fifo__DOT__i_rd_en),
                  8,vlSelf->tb_fifo__DOT__i_data_wr,
                  8,(IData)(vlSelf->tb_fifo__DOT__o_data_rd),
                  1,vlSelf->tb_fifo__DOT__o_empty);
    }
}
