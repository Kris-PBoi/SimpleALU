// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsubtractorTb.h for the primary calling header

#include "VsubtractorTb__pch.h"
#include "VsubtractorTb__Syms.h"
#include "VsubtractorTb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VsubtractorTb___024root___dump_triggers__act(VsubtractorTb___024root* vlSelf);
#endif  // VL_DEBUG

void VsubtractorTb___024root___eval_triggers__act(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int__1)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int2__1)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int__1 
        = vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int;
    vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int2__1 
        = vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsubtractorTb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
