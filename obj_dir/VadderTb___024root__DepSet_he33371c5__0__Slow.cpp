// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VadderTb.h for the primary calling header

#include "VadderTb__pch.h"
#include "VadderTb___024root.h"

VL_ATTR_COLD void VadderTb___024root___eval_static(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VadderTb___024root___eval_final(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VadderTb___024root___dump_triggers__stl(VadderTb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VadderTb___024root___eval_phase__stl(VadderTb___024root* vlSelf);

VL_ATTR_COLD void VadderTb___024root___eval_settle(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_settle\n"); );
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
            VadderTb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("adderTb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VadderTb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VadderTb___024root___dump_triggers__stl(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] adderTb.uut.carry_int)\n");
    }
}
#endif  // VL_DEBUG

void VadderTb___024root___act_comb__TOP__0(VadderTb___024root* vlSelf);

VL_ATTR_COLD void VadderTb___024root___eval_stl(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VadderTb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VadderTb___024root___eval_triggers__stl(VadderTb___024root* vlSelf);

VL_ATTR_COLD bool VadderTb___024root___eval_phase__stl(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VadderTb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VadderTb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VadderTb___024root___dump_triggers__act(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] adderTb.uut.carry_int)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VadderTb___024root___dump_triggers__nba(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] adderTb.uut.carry_int)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VadderTb___024root___ctor_var_reset(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->adderTb__DOT__a_i = VL_RAND_RESET_I(8);
    vlSelf->adderTb__DOT__b_i = VL_RAND_RESET_I(8);
    vlSelf->adderTb__DOT__sum = VL_RAND_RESET_I(8);
    vlSelf->adderTb__DOT__tot = VL_RAND_RESET_I(9);
    vlSelf->adderTb__DOT__uut__DOT__carry_int = VL_RAND_RESET_I(9);
    vlSelf->__Vtrigprevexpr___TOP__adderTb__DOT__uut__DOT__carry_int__0 = VL_RAND_RESET_I(9);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__adderTb__DOT__uut__DOT__carry_int__1 = VL_RAND_RESET_I(9);
    vlSelf->__VactDidInit = 0;
}
