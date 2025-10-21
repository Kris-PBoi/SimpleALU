// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VadderTb__Syms.h"


void VadderTb___024root__trace_chg_0_sub_0(VadderTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VadderTb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root__trace_chg_0\n"); );
    // Init
    VadderTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VadderTb___024root*>(voidSelf);
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VadderTb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VadderTb___024root__trace_chg_0_sub_0(VadderTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.adderTb__DOT__a_i),8);
    bufp->chgCData(oldp+1,(vlSelfRef.adderTb__DOT__b_i),8);
    bufp->chgCData(oldp+2,((0xffU & ((IData)(vlSelfRef.adderTb__DOT__a_i) 
                                     ^ ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                        ^ (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int))))),8);
    bufp->chgBit(oldp+3,((1U & ((IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int) 
                                >> 8U))));
    bufp->chgSData(oldp+4,(((0x100U & (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int)) 
                            | (0xffU & ((IData)(vlSelfRef.adderTb__DOT__a_i) 
                                        ^ ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                           ^ (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int)))))),9);
    bufp->chgSData(oldp+5,(vlSelfRef.adderTb__DOT__uut__DOT__carry_int),9);
}

void VadderTb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root__trace_cleanup\n"); );
    // Init
    VadderTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VadderTb___024root*>(voidSelf);
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
