// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo.h for the primary calling header

#include "Vtb_fifo__pch.h"
#include "Vtb_fifo__Syms.h"
#include "Vtb_fifo___024root.h"

void Vtb_fifo___024root___ctor_var_reset(Vtb_fifo___024root* vlSelf);

Vtb_fifo___024root::Vtb_fifo___024root(Vtb_fifo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_fifo___024root___ctor_var_reset(this);
}

void Vtb_fifo___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_fifo___024root::~Vtb_fifo___024root() {
}
