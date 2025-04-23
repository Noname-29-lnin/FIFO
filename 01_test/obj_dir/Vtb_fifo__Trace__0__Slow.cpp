// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_fifo__Syms.h"


VL_ATTR_COLD void Vtb_fifo___024root__trace_init_sub__TOP__0(Vtb_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"SIZE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+40,0,"o_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"o_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("value_wr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+54+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("value_rd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+21,0,"count_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+22,0,"count_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+70,0,"match_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"SIZE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+40,0,"o_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"o_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"SIZE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"ptr_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"ptr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"n_ptr_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"n_ptr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+49,0,"update_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"update_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"SIZE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"SIZE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"i_addr_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,0,"i_addr_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+24+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_fifo___024root__trace_init_top(Vtb_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root__trace_init_top\n"); );
    // Body
    Vtb_fifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_fifo___024root__trace_register(Vtb_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_fifo___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_fifo___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_fifo___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_fifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_fifo___024root__trace_const_0_sub_0(Vtb_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root__trace_const_0\n"); );
    // Init
    Vtb_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fifo___024root*>(voidSelf);
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_fifo___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_fifo___024root__trace_const_0_sub_0(Vtb_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+51,(8U),32);
    bufp->fullIData(oldp+52,(0x10U),32);
    bufp->fullIData(oldp+53,(4U),32);
    bufp->fullCData(oldp+54,(vlSelf->tb_fifo__DOT__value_wr[0]),8);
    bufp->fullCData(oldp+55,(vlSelf->tb_fifo__DOT__value_wr[1]),8);
    bufp->fullCData(oldp+56,(vlSelf->tb_fifo__DOT__value_wr[2]),8);
    bufp->fullCData(oldp+57,(vlSelf->tb_fifo__DOT__value_wr[3]),8);
    bufp->fullCData(oldp+58,(vlSelf->tb_fifo__DOT__value_wr[4]),8);
    bufp->fullCData(oldp+59,(vlSelf->tb_fifo__DOT__value_wr[5]),8);
    bufp->fullCData(oldp+60,(vlSelf->tb_fifo__DOT__value_wr[6]),8);
    bufp->fullCData(oldp+61,(vlSelf->tb_fifo__DOT__value_wr[7]),8);
    bufp->fullCData(oldp+62,(vlSelf->tb_fifo__DOT__value_wr[8]),8);
    bufp->fullCData(oldp+63,(vlSelf->tb_fifo__DOT__value_wr[9]),8);
    bufp->fullCData(oldp+64,(vlSelf->tb_fifo__DOT__value_wr[10]),8);
    bufp->fullCData(oldp+65,(vlSelf->tb_fifo__DOT__value_wr[11]),8);
    bufp->fullCData(oldp+66,(vlSelf->tb_fifo__DOT__value_wr[12]),8);
    bufp->fullCData(oldp+67,(vlSelf->tb_fifo__DOT__value_wr[13]),8);
    bufp->fullCData(oldp+68,(vlSelf->tb_fifo__DOT__value_wr[14]),8);
    bufp->fullCData(oldp+69,(vlSelf->tb_fifo__DOT__value_wr[15]),8);
    bufp->fullIData(oldp+70,(vlSelf->tb_fifo__DOT__match_count),32);
}

VL_ATTR_COLD void Vtb_fifo___024root__trace_full_0_sub_0(Vtb_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root__trace_full_0\n"); );
    // Init
    Vtb_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fifo___024root*>(voidSelf);
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_fifo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_fifo___024root__trace_full_0_sub_0(Vtb_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_fifo__DOT__i_rst_n));
    bufp->fullBit(oldp+2,(vlSelf->tb_fifo__DOT__i_wr_en));
    bufp->fullBit(oldp+3,(vlSelf->tb_fifo__DOT__i_rd_en));
    bufp->fullCData(oldp+4,(vlSelf->tb_fifo__DOT__i_data),8);
    bufp->fullCData(oldp+5,(vlSelf->tb_fifo__DOT__value_rd[0]),8);
    bufp->fullCData(oldp+6,(vlSelf->tb_fifo__DOT__value_rd[1]),8);
    bufp->fullCData(oldp+7,(vlSelf->tb_fifo__DOT__value_rd[2]),8);
    bufp->fullCData(oldp+8,(vlSelf->tb_fifo__DOT__value_rd[3]),8);
    bufp->fullCData(oldp+9,(vlSelf->tb_fifo__DOT__value_rd[4]),8);
    bufp->fullCData(oldp+10,(vlSelf->tb_fifo__DOT__value_rd[5]),8);
    bufp->fullCData(oldp+11,(vlSelf->tb_fifo__DOT__value_rd[6]),8);
    bufp->fullCData(oldp+12,(vlSelf->tb_fifo__DOT__value_rd[7]),8);
    bufp->fullCData(oldp+13,(vlSelf->tb_fifo__DOT__value_rd[8]),8);
    bufp->fullCData(oldp+14,(vlSelf->tb_fifo__DOT__value_rd[9]),8);
    bufp->fullCData(oldp+15,(vlSelf->tb_fifo__DOT__value_rd[10]),8);
    bufp->fullCData(oldp+16,(vlSelf->tb_fifo__DOT__value_rd[11]),8);
    bufp->fullCData(oldp+17,(vlSelf->tb_fifo__DOT__value_rd[12]),8);
    bufp->fullCData(oldp+18,(vlSelf->tb_fifo__DOT__value_rd[13]),8);
    bufp->fullCData(oldp+19,(vlSelf->tb_fifo__DOT__value_rd[14]),8);
    bufp->fullCData(oldp+20,(vlSelf->tb_fifo__DOT__value_rd[15]),8);
    bufp->fullIData(oldp+21,(vlSelf->tb_fifo__DOT__count_wr),32);
    bufp->fullIData(oldp+22,(vlSelf->tb_fifo__DOT__count_rd),32);
    bufp->fullCData(oldp+23,(vlSelf->tb_fifo__DOT__o_data),8);
    bufp->fullCData(oldp+24,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[0]),8);
    bufp->fullCData(oldp+25,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[1]),8);
    bufp->fullCData(oldp+26,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[2]),8);
    bufp->fullCData(oldp+27,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[3]),8);
    bufp->fullCData(oldp+28,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[4]),8);
    bufp->fullCData(oldp+29,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[5]),8);
    bufp->fullCData(oldp+30,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[6]),8);
    bufp->fullCData(oldp+31,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[7]),8);
    bufp->fullCData(oldp+32,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[8]),8);
    bufp->fullCData(oldp+33,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[9]),8);
    bufp->fullCData(oldp+34,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[10]),8);
    bufp->fullCData(oldp+35,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[11]),8);
    bufp->fullCData(oldp+36,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[12]),8);
    bufp->fullCData(oldp+37,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[13]),8);
    bufp->fullCData(oldp+38,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[14]),8);
    bufp->fullCData(oldp+39,(vlSelf->tb_fifo__DOT__uut__DOT__RAM__DOT__mem[15]),8);
    bufp->fullBit(oldp+40,((1U & ((~ (IData)((0U != 
                                              (0xfU 
                                               & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                  & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                      ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                     >> 4U)))));
    bufp->fullBit(oldp+41,(((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                            == (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr))));
    bufp->fullCData(oldp+42,(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr),5);
    bufp->fullCData(oldp+43,(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd),5);
    bufp->fullCData(oldp+44,((0xfU & (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr))),4);
    bufp->fullCData(oldp+45,((0xfU & (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd))),4);
    bufp->fullBit(oldp+46,(vlSelf->tb_fifo__DOT__i_clk));
    bufp->fullCData(oldp+47,((0x1fU & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr) 
                                       + ((~ ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                              ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                              & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                  ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                                 >> 4U))) 
                                          & (IData)(vlSelf->tb_fifo__DOT__i_wr_en))))),5);
    bufp->fullCData(oldp+48,((0x1fU & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                       + (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                           != (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                          & (IData)(vlSelf->tb_fifo__DOT__i_rd_en))))),5);
    bufp->fullBit(oldp+49,(((~ ((~ (IData)((0U != (0xfU 
                                                   & ((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                                      ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)))))) 
                                & (((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                                    ^ (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                                   >> 4U))) & (IData)(vlSelf->tb_fifo__DOT__i_wr_en))));
    bufp->fullBit(oldp+50,((((IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_rd) 
                             != (IData)(vlSelf->tb_fifo__DOT__uut__DOT__ptr_wr)) 
                            & (IData)(vlSelf->tb_fifo__DOT__i_rd_en))));
}
