// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VadderTb.h for the primary calling header

#include "VadderTb__pch.h"
#include "VadderTb__Syms.h"
#include "VadderTb___024root.h"

void VadderTb___024root___ctor_var_reset(VadderTb___024root* vlSelf);

VadderTb___024root::VadderTb___024root(VadderTb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VadderTb___024root___ctor_var_reset(this);
}

void VadderTb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VadderTb___024root::~VadderTb___024root() {
}
