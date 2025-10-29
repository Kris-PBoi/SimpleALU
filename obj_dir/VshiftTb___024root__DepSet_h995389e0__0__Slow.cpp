// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VshiftTb.h for the primary calling header

#include "VshiftTb__pch.h"
#include "VshiftTb___024root.h"

VL_ATTR_COLD void VshiftTb___024root___eval_static(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VshiftTb___024root___eval_final(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VshiftTb___024root___dump_triggers__stl(VshiftTb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VshiftTb___024root___eval_phase__stl(VshiftTb___024root* vlSelf);

VL_ATTR_COLD void VshiftTb___024root___eval_settle(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VshiftTb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("shiftTb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VshiftTb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VshiftTb___024root___dump_triggers__stl(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VshiftTb___024root___act_sequent__TOP__0(VshiftTb___024root* vlSelf);

VL_ATTR_COLD void VshiftTb___024root___eval_stl(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VshiftTb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VshiftTb___024root___eval_triggers__stl(VshiftTb___024root* vlSelf);

VL_ATTR_COLD bool VshiftTb___024root___eval_phase__stl(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VshiftTb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VshiftTb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VshiftTb___024root___dump_triggers__act(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VshiftTb___024root___dump_triggers__nba(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VshiftTb___024root___ctor_var_reset(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->shiftTb__DOT__a_i = VL_RAND_RESET_I(8);
    vlSelf->shiftTb__DOT__b_i = VL_RAND_RESET_I(8);
    vlSelf->shiftTb__DOT__outLeft = VL_RAND_RESET_I(8);
    vlSelf->shiftTb__DOT__outRight = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
