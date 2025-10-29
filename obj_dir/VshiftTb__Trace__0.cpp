// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VshiftTb__Syms.h"


void VshiftTb___024root__trace_chg_0_sub_0(VshiftTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VshiftTb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root__trace_chg_0\n"); );
    // Init
    VshiftTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VshiftTb___024root*>(voidSelf);
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VshiftTb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VshiftTb___024root__trace_chg_0_sub_0(VshiftTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.shiftTb__DOT__a_i),8);
        bufp->chgCData(oldp+1,(vlSelfRef.shiftTb__DOT__b_i),8);
        bufp->chgCData(oldp+2,((0xffU & ((IData)(vlSelfRef.shiftTb__DOT__a_i) 
                                         << (7U & (IData)(vlSelfRef.shiftTb__DOT__b_i))))),8);
        bufp->chgCData(oldp+3,((0xffU & ((IData)(vlSelfRef.shiftTb__DOT__a_i) 
                                         >> (7U & (IData)(vlSelfRef.shiftTb__DOT__b_i))))),8);
        bufp->chgCData(oldp+4,((7U & (IData)(vlSelfRef.shiftTb__DOT__b_i))),3);
    }
}

void VshiftTb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root__trace_cleanup\n"); );
    // Init
    VshiftTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VshiftTb___024root*>(voidSelf);
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
