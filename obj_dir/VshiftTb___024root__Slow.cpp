// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VshiftTb.h for the primary calling header

#include "VshiftTb__pch.h"
#include "VshiftTb__Syms.h"
#include "VshiftTb___024root.h"

void VshiftTb___024root___ctor_var_reset(VshiftTb___024root* vlSelf);

VshiftTb___024root::VshiftTb___024root(VshiftTb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VshiftTb___024root___ctor_var_reset(this);
}

void VshiftTb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VshiftTb___024root::~VshiftTb___024root() {
}
