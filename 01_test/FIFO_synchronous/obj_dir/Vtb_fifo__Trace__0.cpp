// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_fifo__Syms.h"


void Vtb_fifo___024root__trace_chg_0_sub_0(Vtb_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root__trace_chg_0\n"); );
    // Init
    Vtb_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fifo___024root*>(voidSelf);
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_fifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_fifo___024root__trace_chg_0_sub_0(Vtb_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_fifo__DOT__i_rst_n));
        bufp->chgBit(oldp+1,(vlSelf->tb_fifo__DOT__i_wr_en));
        bufp->chgBit(oldp+2,(vlSelf->tb_fifo__DOT__i_rd_en));
        bufp->chgCData(oldp+3,(vlSelf->tb_fifo__DOT__i_data),8);
        bufp->chgCData(oldp+4,(vlSelf->tb_fifo__DOT__value_rd[0]),8);
        bufp->chgCData(oldp+5,(vlSelf->tb_fifo__DOT__value_rd[1]),8);
        bufp->chgCData(oldp+6,(vlSelf->tb_fifo__DOT__value_rd[2]),8);
        bufp->chgCData(oldp+7,(vlSelf->tb_fifo__DOT__value_rd[3]),8);
        bufp->chgCData(oldp+8,(vlSelf->tb_fifo__DOT__value_rd[4]),8);
        bufp->chgCData(oldp+9,(vlSelf->tb_fifo__DOT__value_rd[5]),8);
        bufp->chgCData(oldp+10,(vlSelf->tb_fifo__DOT__value_rd[6]),8);
        bufp->chgCData(oldp+11,(vlSelf->tb_fifo__DOT__value_rd[7]),8);
        bufp->chgIData(oldp+12,(vlSelf->tb_fifo__DOT__count_wr),32);
        bufp->chgIData(oldp+13,(vlSelf->tb_fifo__DOT__count_rd),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+14,(vlSelf->tb_fifo__DOT__o_data),8);
        bufp->chgCData(oldp+15,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[0]),8);
        bufp->chgCData(oldp+16,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[1]),8);
        bufp->chgCData(oldp+17,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[2]),8);
        bufp->chgCData(oldp+18,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[3]),8);
        bufp->chgCData(oldp+19,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[4]),8);
        bufp->chgCData(oldp+20,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[5]),8);
        bufp->chgCData(oldp+21,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[6]),8);
        bufp->chgCData(oldp+22,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[7]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+23,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                     ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                     & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                         ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                        >> 3U)))));
        bufp->chgBit(oldp+24,(((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                               == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr))));
        bufp->chgCData(oldp+25,(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),4);
        bufp->chgCData(oldp+26,(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd),4);
        bufp->chgCData(oldp+27,((7U & (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr))),3);
        bufp->chgCData(oldp+28,((7U & (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd))),3);
    }
    bufp->chgBit(oldp+29,(vlSelf->tb_fifo__DOT__i_clk));
    bufp->chgCData(oldp+30,((0xfU & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr) 
                                     + ((~ ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                            ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                            & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                               >> 3U))) 
                                        & (IData)(vlSelf->tb_fifo__DOT__i_wr_en))))),4);
    bufp->chgCData(oldp+31,((0xfU & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                     + (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                         != (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                        & (IData)(vlSelf->tb_fifo__DOT__i_rd_en))))),4);
    bufp->chgBit(oldp+32,(((~ ((~ (IData)((0U != (7U 
                                                  & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                     ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                               & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                   ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                  >> 3U))) & (IData)(vlSelf->tb_fifo__DOT__i_wr_en))));
    bufp->chgBit(oldp+33,((((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                            != (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                           & (IData)(vlSelf->tb_fifo__DOT__i_rd_en))));
}

void Vtb_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root__trace_cleanup\n"); );
    // Init
    Vtb_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fifo___024root*>(voidSelf);
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
