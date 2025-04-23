// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo.h for the primary calling header

#include "Vtb_fifo__pch.h"
#include "Vtb_fifo___024root.h"

VL_ATTR_COLD void Vtb_fifo___024root___eval_initial__TOP(Vtb_fifo___024root* vlSelf);
VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo___024root* vlSelf);
VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo___024root* vlSelf);

void Vtb_fifo___024root___eval_initial(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_initial\n"); );
    // Body
    Vtb_fifo___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_fifo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fifo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk__0 
        = vlSelf->tb_fifo__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__i_rst_n__0 
        = vlSelf->tb_fifo__DOT__i_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_fifo__DOT__count_wr = 0U;
    vlSelf->tb_fifo__DOT__count_rd = 0U;
    VL_WRITEF("-------------- Test Case 1 --------------\n");
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data = 0x29U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_rst_n = 0U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Test case 1: Reset the FIFO\nFIFO reset, pt_rd: %2#, pt_wr: %2#\nFIFO empty: %1#, FIFO full: %1#\nFIFO data: %x\n=> TestCase1: %s\n-------------- Test Case 2 --------------\n",
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd,
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              1,((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                 == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)),
              1,(1U & ((~ (IData)((0U != (7U & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                       & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                           ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                          >> 3U))),8,(IData)(vlSelf->tb_fifo__DOT__o_data),
              32,(((0U == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd)) 
                   & (0U == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))
                   ? 0x50415353U : 0x4641494cU));
    vlSelf->tb_fifo__DOT__i_rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_rst_n = 1U;
    vlSelf->tb_fifo__DOT__count_wr = 0U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data = (0xffU & VL_RANDOM_I());
    VL_WRITEF("Time = %t, o_full = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,(1U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                                  & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                      ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                     >> 3U))),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data = (0xffU & VL_RANDOM_I());
    VL_WRITEF("Time = %t, o_full = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,(1U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                                  & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                      ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                     >> 3U))),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data = (0xffU & VL_RANDOM_I());
    VL_WRITEF("Time = %t, o_full = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,(1U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                                  & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                      ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                     >> 3U))),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data = (0xffU & VL_RANDOM_I());
    VL_WRITEF("Time = %t, o_full = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,(1U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                                  & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                      ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                     >> 3U))),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data = (0xffU & VL_RANDOM_I());
    VL_WRITEF("Time = %t, o_full = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,(1U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                                  & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                      ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                     >> 3U))),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data = (0xffU & VL_RANDOM_I());
    VL_WRITEF("Time = %t, o_full = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,(1U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                                  & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                      ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                     >> 3U))),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data = (0xffU & VL_RANDOM_I());
    VL_WRITEF("Time = %t, o_full = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,(1U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                                  & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                      ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                     >> 3U))),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data = (0xffU & VL_RANDOM_I());
    VL_WRITEF("Time = %t, o_full = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,(1U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                                  & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                      ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                     >> 3U))),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data = (0xffU & VL_RANDOM_I());
    VL_WRITEF("Time = %t, o_full = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,(1U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                                  & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                      ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                     >> 3U))),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    VL_WRITEF("Test case 2: Write data until full\n=> TestCase2: %s\n-------------- Test Case 3 --------------\n",
              32,((1U & ((~ (IData)((0U != (7U & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                         & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                             ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                            >> 3U))) ? 0x50415353U : 0x4641494cU));
    vlSelf->tb_fifo__DOT__count_rd = 0U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__value_rd[(7U & vlSelf->tb_fifo__DOT__count_rd)] 
        = vlSelf->tb_fifo__DOT__o_data;
    vlSelf->tb_fifo__DOT__count_rd = ((IData)(1U) + vlSelf->tb_fifo__DOT__count_rd);
    VL_WRITEF("Time = %t, o_empty = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                            == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__value_rd[(7U & vlSelf->tb_fifo__DOT__count_rd)] 
        = vlSelf->tb_fifo__DOT__o_data;
    vlSelf->tb_fifo__DOT__count_rd = ((IData)(1U) + vlSelf->tb_fifo__DOT__count_rd);
    VL_WRITEF("Time = %t, o_empty = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                            == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__value_rd[(7U & vlSelf->tb_fifo__DOT__count_rd)] 
        = vlSelf->tb_fifo__DOT__o_data;
    vlSelf->tb_fifo__DOT__count_rd = ((IData)(1U) + vlSelf->tb_fifo__DOT__count_rd);
    VL_WRITEF("Time = %t, o_empty = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                            == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__value_rd[(7U & vlSelf->tb_fifo__DOT__count_rd)] 
        = vlSelf->tb_fifo__DOT__o_data;
    vlSelf->tb_fifo__DOT__count_rd = ((IData)(1U) + vlSelf->tb_fifo__DOT__count_rd);
    VL_WRITEF("Time = %t, o_empty = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                            == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__value_rd[(7U & vlSelf->tb_fifo__DOT__count_rd)] 
        = vlSelf->tb_fifo__DOT__o_data;
    vlSelf->tb_fifo__DOT__count_rd = ((IData)(1U) + vlSelf->tb_fifo__DOT__count_rd);
    VL_WRITEF("Time = %t, o_empty = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                            == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__value_rd[(7U & vlSelf->tb_fifo__DOT__count_rd)] 
        = vlSelf->tb_fifo__DOT__o_data;
    vlSelf->tb_fifo__DOT__count_rd = ((IData)(1U) + vlSelf->tb_fifo__DOT__count_rd);
    VL_WRITEF("Time = %t, o_empty = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                            == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__value_rd[(7U & vlSelf->tb_fifo__DOT__count_rd)] 
        = vlSelf->tb_fifo__DOT__o_data;
    vlSelf->tb_fifo__DOT__count_rd = ((IData)(1U) + vlSelf->tb_fifo__DOT__count_rd);
    VL_WRITEF("Time = %t, o_empty = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                            == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__value_rd[(7U & vlSelf->tb_fifo__DOT__count_rd)] 
        = vlSelf->tb_fifo__DOT__o_data;
    vlSelf->tb_fifo__DOT__count_rd = ((IData)(1U) + vlSelf->tb_fifo__DOT__count_rd);
    VL_WRITEF("Time = %t, o_empty = %b, ptr_wr = %2#, ptr_rd = %2#\n",
              64,VL_TIME_UNITED_Q(1),-12,1,((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                            == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)),
              4,(IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),
              4,vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd);
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    VL_WRITEF("Test case 3: Read data until empty\n=> TestCase3: %s\n-------------- Test Case 4 --------------\n",
              32,(((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                   == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr))
                   ? 0x50415353U : 0x4641494cU));
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_fifo.v", 
                                       117);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_fifo.v", 
                                       120);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       122);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       124);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    vlSelf->tb_fifo__DOT__i_data = 0x1dU;
    VL_WRITEF("FIFO data: i_data = %3#, o_data = %3#\n",
              8,vlSelf->tb_fifo__DOT__i_data,8,(IData)(vlSelf->tb_fifo__DOT__o_data));
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    vlSelf->tb_fifo__DOT__i_data = 0x1eU;
    VL_WRITEF("FIFO data: i_data = %3#, o_data = %3#\n",
              8,vlSelf->tb_fifo__DOT__i_data,8,(IData)(vlSelf->tb_fifo__DOT__o_data));
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    vlSelf->tb_fifo__DOT__i_data = 0x1fU;
    VL_WRITEF("FIFO data: i_data = %3#, o_data = %3#\n",
              8,vlSelf->tb_fifo__DOT__i_data,8,(IData)(vlSelf->tb_fifo__DOT__o_data));
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    vlSelf->tb_fifo__DOT__i_data = 0x20U;
    VL_WRITEF("FIFO data: i_data = %3#, o_data = %3#\n",
              8,vlSelf->tb_fifo__DOT__i_data,8,(IData)(vlSelf->tb_fifo__DOT__o_data));
    co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo.i_clk)", 
                                                       "tb_fifo.v", 
                                                       148);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    vlSelf->tb_fifo__DOT__i_data = 0x21U;
    VL_WRITEF("FIFO data: i_data = %3#, o_data = %3#\n-------------- Test Case 5 --------------\n",
              8,vlSelf->tb_fifo__DOT__i_data,8,(IData)(vlSelf->tb_fifo__DOT__o_data));
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_fifo.v", 
                                       155);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_fifo.v", 
                                       156);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 1U;
    vlSelf->tb_fifo__DOT__i_rd_en = 0U;
    VL_WRITEF("Input data\n");
    while ((1U & (~ ((~ (IData)((0U != (7U & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                              ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                     & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                         ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                        >> 3U))))) {
        co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo.i_clk)", 
                                                           "tb_fifo.v", 
                                                           162);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_fifo__DOT__i_data = (0xffU & VL_MODDIVS_III(32, (IData)(
                                                                           VL_RANDOM_I()), (IData)(0x100U)));
        VL_WRITEF("Time=%t, i_wr_en=%b, i_rd_en=%b, i_data = %x, o_full=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_fifo__DOT__i_wr_en),
                  1,vlSelf->tb_fifo__DOT__i_rd_en,8,
                  (IData)(vlSelf->tb_fifo__DOT__i_data),
                  1,(1U & ((~ (IData)((0U != (7U & 
                                              ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                               ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                           & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                               ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                              >> 3U))));
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_fifo.v", 
                                       166);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fifo__DOT__i_wr_en = 0U;
    vlSelf->tb_fifo__DOT__i_rd_en = 1U;
    VL_WRITEF("Output data\n");
    while (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
            != (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr))) {
        co_await vlSelf->__VtrigSched_h51f15efb__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo.i_clk)", 
                                                           "tb_fifo.v", 
                                                           171);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VL_WRITEF("Time=%t, i_wr_en=%b, i_rd_en=%b, o_data = %x, o_empty=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_fifo__DOT__i_wr_en),
                  1,vlSelf->tb_fifo__DOT__i_rd_en,8,
                  (IData)(vlSelf->tb_fifo__DOT__o_data),
                  1,((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                     == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)));
    }
    co_await vlSelf->__VdlySched.delay(0xc8ULL, nullptr, 
                                       "tb_fifo.v", 
                                       176);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("End of simulation\n");
    VL_FINISH_MT("tb_fifo.v", 178, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb_fifo.v", 
                                           38);
        vlSelf->tb_fifo__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_fifo__DOT__i_clk)));
    }
}

VL_INLINE_OPT void Vtb_fifo___024root___act_comb__TOP__0(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_fifo__DOT__uut__DOT__update_wr = ((~ 
                                                  ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (7U 
                                                                & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                                   ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                                   & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                       ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                      >> 3U))) 
                                                 & (IData)(vlSelf->tb_fifo__DOT__i_wr_en));
    vlSelf->tb_fifo__DOT__uut__DOT__update_rd = (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                  != (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                 & (IData)(vlSelf->tb_fifo__DOT__i_rd_en));
    vlSelf->tb_fifo__DOT__uut__DOT__n_ptr_wr = (0xfU 
                                                & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr) 
                                                   + (IData)(vlSelf->tb_fifo__DOT__uut__DOT__update_wr)));
    vlSelf->tb_fifo__DOT__uut__DOT__n_ptr_rd = (0xfU 
                                                & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                   + (IData)(vlSelf->tb_fifo__DOT__uut__DOT__update_rd)));
    if (vlSelf->tb_fifo__DOT__uut__DOT__update_wr) {
        vlSelf->tb_fifo__DOT__uut__DOT__memory_array__DOT__mem[(7U 
                                                                & (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr))] 
            = vlSelf->tb_fifo__DOT__i_data;
    } else {
        vlSelf->tb_fifo__DOT__o_data = vlSelf->tb_fifo__DOT__i_data;
    }
    vlSelf->tb_fifo__DOT__o_data = ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__update_rd)
                                     ? vlSelf->tb_fifo__DOT__uut__DOT__memory_array__DOT__mem
                                    [(7U & (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd))]
                                     : (IData)(vlSelf->tb_fifo__DOT__i_data));
}

void Vtb_fifo___024root___eval_act(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_fifo___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_sequent__TOP__0(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_fifo__DOT__i_rst_n) {
        vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr = vlSelf->tb_fifo__DOT__uut__DOT__n_ptr_wr;
        vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd = vlSelf->tb_fifo__DOT__uut__DOT__n_ptr_rd;
    } else {
        vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr = 0U;
        vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd = 0U;
    }
}

void Vtb_fifo___024root___eval_nba(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_fifo___024root___timing_resume(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h51f15efb__0.resume("@(posedge tb_fifo.i_clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_fifo___024root___timing_commit(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h51f15efb__0.commit("@(posedge tb_fifo.i_clk)");
    }
}

void Vtb_fifo___024root___eval_triggers__act(Vtb_fifo___024root* vlSelf);

bool Vtb_fifo___024root___eval_phase__act(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
