// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo.h for the primary calling header

#include "Vtb_fifo__pch.h"
#include "Vtb_fifo__Syms.h"
#include "Vtb_fifo___024unit.h"

void Vtb_fifo___024unit___ctor_var_reset(Vtb_fifo___024unit* vlSelf);

Vtb_fifo___024unit::Vtb_fifo___024unit(Vtb_fifo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_fifo___024unit___ctor_var_reset(this);
}

void Vtb_fifo___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_fifo___024unit::~Vtb_fifo___024unit() {
}
