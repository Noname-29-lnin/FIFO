// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo.h for the primary calling header

#include "Vtb_fifo__pch.h"
#include "Vtb_fifo___024root.h"

VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo___024root* vlSelf);
VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo___024root* vlSelf);
VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__2(Vtb_fifo___024root* vlSelf);

void Vtb_fifo___024root___eval_initial(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_initial\n"); );
    // Body
    Vtb_fifo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fifo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_fifo___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__dut__DOT__count__0 
        = vlSelf->tb_fifo__DOT__dut__DOT__count;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__dut__DOT__count__1 
        = vlSelf->tb_fifo__DOT__dut__DOT__count;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_rd__0 
        = vlSelf->tb_fifo__DOT__i_clk_rd;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_rst_n__0 
        = vlSelf->tb_fifo__DOT__i_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_wr__0 
        = vlSelf->tb_fifo__DOT__i_clk_wr;
}

VL_INLINE_OPT VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_fifo__DOT__i_rst_n = 0U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_fifo.v", 
                                       52);
    vlSelf->tb_fifo__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_fifo.v", 
                                       55);
    if (vlSelf->tb_fifo__DOT__o_empty) {
        VL_WRITEF("Test 1 Passed: FIFO is empty at startup\n");
    } else {
        VL_WRITEF("Test 1 Failed: FIFO not empty or full at startup\n");
    }
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       64);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       68);
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_fifo.v", 
                                       71);
    VL_WRITEF("Test 2 Failed: FIFO not full\n");
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       80);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       83);
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_fifo.v", 
                                       86);
    if (vlSelf->tb_fifo__DOT__o_empty) {
        VL_WRITEF("Test 3 Passed: FIFO is empty after 16 reads\n");
    } else {
        VL_WRITEF("Test 3 Failed: FIFO not empty\n");
    }
    vlSelf->tb_fifo__DOT__i_data_wr = 0xa0U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       96);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       99);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       96);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       99);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       96);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       99);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       96);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       99);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       96);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       99);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       96);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       99);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       96);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       99);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       96);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       99);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       96);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       99);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       96);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_fifo__DOT__i_data_wr)));
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       99);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       102);
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       104);
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VtrigSched_hfb6dbe79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_wr)", 
                                                       "tb_fifo.v", 
                                                       110);
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_data_wr = 0xffU;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_fifo.v", 
                                       114);
    VL_WRITEF("Test 5 Failed: FIFO state incorrect\n");
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       123);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       123);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       123);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       123);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       123);
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VtrigSched_h87e369e5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk_rd)", 
                                                       "tb_fifo.v", 
                                                       126);
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_fifo.v", 
                                       128);
    if (vlSelf->tb_fifo__DOT__o_empty) {
        VL_WRITEF("Test 6 Passed: FIFO remains empty, no invalid read\n");
    } else {
        VL_WRITEF("Test 6 Failed: FIFO state incorrect\n");
    }
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "tb_fifo.v", 
                                       135);
    VL_FINISH_MT("tb_fifo.v", 136, "");
}

VL_INLINE_OPT VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(6ULL, nullptr, 
                                           "tb_fifo.v", 
                                           40);
        vlSelf->tb_fifo__DOT__i_clk_rd = (1U & (~ (IData)(vlSelf->tb_fifo__DOT__i_clk_rd)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__2(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb_fifo.v", 
                                           39);
        vlSelf->tb_fifo__DOT__i_clk_wr = (1U & (~ (IData)(vlSelf->tb_fifo__DOT__i_clk_wr)));
    }
}

VL_INLINE_OPT void Vtb_fifo___024root___act_comb__TOP__0(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_fifo__DOT__dut__DOT__n_ptr_wr = (0xfU 
                                                & ((IData)(vlSelf->tb_fifo__DOT__dut__DOT__ptr_wr) 
                                                   + (IData)(vlSelf->tb_fifo__DOT__i_wr_en)));
}

void Vtb_fifo___024root___act_comb__TOP__1(Vtb_fifo___024root* vlSelf);

void Vtb_fifo___024root___eval_act(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_act\n"); );
    // Body
    if ((0x38ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_fifo___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x39ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_fifo___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_sequent__TOP__0(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0 = 0U;
    if (vlSelf->tb_fifo__DOT__dut__DOT__update_rd) {
        vlSelf->__Vdlyvval__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0 
            = vlSelf->tb_fifo__DOT__i_data_wr;
        vlSelf->__Vdlyvset__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0 
            = vlSelf->tb_fifo__DOT__dut__DOT__ptr_wr;
    }
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_sequent__TOP__1(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->tb_fifo__DOT__dut__DOT__update_rd) {
        vlSelf->tb_fifo__DOT__o_data_rd = vlSelf->tb_fifo__DOT__dut__DOT__Arry__DOT__mem
            [vlSelf->tb_fifo__DOT__dut__DOT__ptr_rd];
    }
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_sequent__TOP__2(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_fifo__DOT__dut__DOT__ptr_wr = ((IData)(vlSelf->tb_fifo__DOT__i_rst_n)
                                               ? (IData)(vlSelf->tb_fifo__DOT__dut__DOT__n_ptr_wr)
                                               : 0U);
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_sequent__TOP__3(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0) {
        vlSelf->tb_fifo__DOT__dut__DOT__Arry__DOT__mem[vlSelf->__Vdlyvdim0__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_sequent__TOP__4(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->tb_fifo__DOT__dut__DOT__ptr_rd = ((IData)(vlSelf->tb_fifo__DOT__i_rst_n)
                                               ? (IData)(vlSelf->tb_fifo__DOT__dut__DOT__n_ptr_rd)
                                               : 0U);
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_comb__TOP__2(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->tb_fifo__DOT__dut__DOT__n_ptr_rd = (0xfU 
                                                & ((IData)(vlSelf->tb_fifo__DOT__dut__DOT__ptr_rd) 
                                                   + (IData)(vlSelf->tb_fifo__DOT__dut__DOT__update_rd)));
}

void Vtb_fifo___024root___nba_comb__TOP__0(Vtb_fifo___024root* vlSelf);

void Vtb_fifo___024root___eval_nba(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((0x38ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x3cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x3aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vtb_fifo___024root___timing_resume(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hfb6dbe79__0.resume("@(posedge tb_fifo.i_clk_wr)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h87e369e5__0.resume("@(posedge tb_fifo.i_clk_rd)");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_fifo___024root___timing_commit(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hfb6dbe79__0.commit("@(posedge tb_fifo.i_clk_wr)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h87e369e5__0.commit("@(posedge tb_fifo.i_clk_rd)");
    }
}

void Vtb_fifo___024root___eval_triggers__act(Vtb_fifo___024root* vlSelf);

bool Vtb_fifo___024root___eval_phase__act(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fifo___024root___eval_triggers__act(vlSelf);
    Vtb_fifo___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_fifo___024root___timing_resume(vlSelf);
        Vtb_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fifo___024root___eval_phase__nba(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fifo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo___024root___dump_triggers__nba(Vtb_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo___024root___dump_triggers__act(Vtb_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fifo___024root___eval(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_fifo.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_fifo.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fifo___024root___eval_debug_assertions(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
