// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsubtractorTb.h for the primary calling header

#include "VsubtractorTb__pch.h"
#include "VsubtractorTb__Syms.h"
#include "VsubtractorTb___024root.h"

extern const VlWide<13>/*415:0*/ VsubtractorTb__ConstPool__CONST_hcfcce57c_0;

VL_ATTR_COLD void VsubtractorTb___024root___eval_initial__TOP(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(13, VsubtractorTb__ConstPool__CONST_hcfcce57c_0));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsubtractorTb___024root___dump_triggers__stl(VsubtractorTb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VsubtractorTb___024root___eval_triggers__stl(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int__0)));
    vlSelfRef.__VstlTriggered.set(2U, ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int2__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int__0 
        = vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int;
    vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int2__0 
        = vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsubtractorTb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
