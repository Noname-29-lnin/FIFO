// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fifo.h for the primary calling header

#ifndef VERILATED_VTB_FIFO___024ROOT_H_
#define VERILATED_VTB_FIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_fifo___024unit;


class Vtb_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fifo___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_fifo___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fifo__DOT__i_rst_n;
    CData/*0:0*/ tb_fifo__DOT__i_clk_wr;
    CData/*0:0*/ tb_fifo__DOT__i_clk_rd;
    CData/*0:0*/ tb_fifo__DOT__i_wr_en;
    CData/*7:0*/ tb_fifo__DOT__i_data_wr;
    CData/*0:0*/ tb_fifo__DOT__i_rd_en;
    CData/*7:0*/ tb_fifo__DOT__o_data_rd;
    CData/*0:0*/ tb_fifo__DOT__o_empty;
    CData/*3:0*/ tb_fifo__DOT__dut__DOT__ptr_wr;
    CData/*3:0*/ tb_fifo__DOT__dut__DOT__ptr_rd;
    CData/*3:0*/ tb_fifo__DOT__dut__DOT__n_ptr_wr;
    CData/*3:0*/ tb_fifo__DOT__dut__DOT__n_ptr_rd;
    CData/*0:0*/ tb_fifo__DOT__dut__DOT__update_rd;
    CData/*3:0*/ tb_fifo__DOT__dut__DOT__count;
    CData/*3:0*/ __Vdlyvdim0__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__tb_fifo__DOT__dut__DOT__Arry__DOT__mem__v0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb_fifo__DOT__dut__DOT__count__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb_fifo__DOT__dut__DOT__count__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_rd__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo__DOT__i_rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo__DOT__i_clk_wr__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> tb_fifo__DOT__dut__DOT__Arry__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hfb6dbe79__0;
    VlTriggerScheduler __VtrigSched_h87e369e5__0;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

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
