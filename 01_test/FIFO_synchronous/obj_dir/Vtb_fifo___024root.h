// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fifo.h for the primary calling header

#ifndef VERILATED_VTB_FIFO___024ROOT_H_
#define VERILATED_VTB_FIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fifo__DOT__i_clk;
    CData/*0:0*/ tb_fifo__DOT__i_rst_n;
    CData/*0:0*/ tb_fifo__DOT__i_wr_en;
    CData/*0:0*/ tb_fifo__DOT__i_rd_en;
    CData/*7:0*/ tb_fifo__DOT__i_data;
    CData/*7:0*/ tb_fifo__DOT__o_data;
    CData/*3:0*/ tb_fifo__DOT__uut__DOT__ptr_wr;
    CData/*3:0*/ tb_fifo__DOT__uut__DOT__ptr_rd;
    CData/*3:0*/ tb_fifo__DOT__uut__DOT__n_ptr_wr;
    CData/*3:0*/ tb_fifo__DOT__uut__DOT__n_ptr_rd;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo__DOT__i_rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_fifo__DOT__count_wr;
    IData/*31:0*/ tb_fifo__DOT__count_rd;
    IData/*31:0*/ tb_fifo__DOT__match_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> tb_fifo__DOT__value_wr;
    VlUnpacked<CData/*7:0*/, 8> tb_fifo__DOT__value_rd;
    VlUnpacked<CData/*7:0*/, 8> tb_fifo__DOT__uut__DOT__RAM__DOT__mem;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h51f15efb__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fifo___024root(Vtb_fifo__Syms* symsp, const char* v__name);
    ~Vtb_fifo___024root();
    VL_UNCOPYABLE(Vtb_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
