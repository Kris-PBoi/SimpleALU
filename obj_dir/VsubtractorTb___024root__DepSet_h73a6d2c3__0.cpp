// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsubtractorTb.h for the primary calling header

#include "VsubtractorTb__pch.h"
#include "VsubtractorTb___024root.h"

VL_ATTR_COLD void VsubtractorTb___024root___eval_initial__TOP(VsubtractorTb___024root* vlSelf);
VlCoroutine VsubtractorTb___024root___eval_initial__TOP__Vtiming__0(VsubtractorTb___024root* vlSelf);

void VsubtractorTb___024root___eval_initial(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsubtractorTb___024root___eval_initial__TOP(vlSelf);
    VsubtractorTb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int__0 
        = vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int;
    vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int2__0 
        = vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2;
    vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int__1 
        = vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int;
    vlSelfRef.__Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int2__1 
        = vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2;
}

VL_INLINE_OPT VlCoroutine VsubtractorTb___024root___eval_initial__TOP__Vtiming__0(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.subtractorTb__DOT__a_i = 0x95U;
    vlSelfRef.subtractorTb__DOT__b_i = 0xd2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "subtractorTb.sv", 
                                         19);
    VL_WRITEF_NX("a = %8b\nb = %8b\ndiff = %8b\nsign = %1b\n",0,
                 8,vlSelfRef.subtractorTb__DOT__a_i,
                 8,(IData)(vlSelfRef.subtractorTb__DOT__b_i),
                 8,((((0x80U & (((IData)(vlSelfRef.subtractorTb__DOT__sign) 
                                 << 7U) ^ (0xffffff80U 
                                           & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                      | (0x40U & (((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_0) 
                                   << 6U) ^ (0xffffffc0U 
                                             & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2))))) 
                     | ((0x20U & (((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_1) 
                                   << 5U) ^ (0xffffffe0U 
                                             & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                        | (0x10U & (((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_2) 
                                     << 4U) ^ (0xfffffff0U 
                                               & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))))) 
                    | (((8U & (((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_3) 
                                << 3U) ^ (0xfffffff8U 
                                          & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                        | (4U & (((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_4) 
                                  << 2U) ^ (0xfffffffcU 
                                            & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2))))) 
                       | ((2U & (((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_5) 
                                  << 1U) ^ (0xfffffffeU 
                                            & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                          | (1U & ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_6) 
                                   ^ (~ (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2))))))),
                 1,(IData)(vlSelfRef.subtractorTb__DOT__sign));
    VL_FINISH_MT("subtractorTb.sv", 26, "");
}

void VsubtractorTb___024root___act_comb__TOP__0(VsubtractorTb___024root* vlSelf);
void VsubtractorTb___024root___act_comb__TOP__1(VsubtractorTb___024root* vlSelf);

void VsubtractorTb___024root___eval_act(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VsubtractorTb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VsubtractorTb___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void VsubtractorTb___024root___act_comb__TOP__0(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.subtractorTb__DOT__uut__DOT__sum = ((
                                                   ((0x80U 
                                                     & ((0xffffff80U 
                                                         & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                                        ^ 
                                                        (((~ 
                                                           ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                            >> 7U)) 
                                                          << 7U) 
                                                         ^ 
                                                         (0xffffff80U 
                                                          & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int))))) 
                                                    | (0x40U 
                                                       & ((0xffffffc0U 
                                                           & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                                          ^ 
                                                          (((~ 
                                                             ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                              >> 6U)) 
                                                            << 6U) 
                                                           ^ 
                                                           (0xffffffc0U 
                                                            & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))))) 
                                                   | ((0x20U 
                                                       & ((0xffffffe0U 
                                                           & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                                          ^ 
                                                          (((~ 
                                                             ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                              >> 5U)) 
                                                            << 5U) 
                                                           ^ 
                                                           (0xffffffe0U 
                                                            & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int))))) 
                                                      | (0x10U 
                                                         & ((0xfffffff0U 
                                                             & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                                            ^ 
                                                            (((~ 
                                                               ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                                >> 4U)) 
                                                              << 4U) 
                                                             ^ 
                                                             (0xfffffff0U 
                                                              & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int))))))) 
                                                  | (((8U 
                                                       & ((0xfffffff8U 
                                                           & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                                          ^ 
                                                          (((~ 
                                                             ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                              >> 3U)) 
                                                            << 3U) 
                                                           ^ 
                                                           (0xfffffff8U 
                                                            & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int))))) 
                                                      | (4U 
                                                         & ((0xfffffffcU 
                                                             & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                                            ^ 
                                                            (((~ 
                                                               ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                                >> 2U)) 
                                                              << 2U) 
                                                             ^ 
                                                             (0xfffffffcU 
                                                              & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))))) 
                                                     | ((2U 
                                                         & ((0xfffffffeU 
                                                             & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                                            ^ 
                                                            (((~ 
                                                               ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                                >> 1U)) 
                                                              << 1U) 
                                                             ^ 
                                                             (0xfffffffeU 
                                                              & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int))))) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                                              ^ 
                                                              ((~ (IData)(vlSelfRef.subtractorTb__DOT__b_i)) 
                                                               ^ (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))))));
    __Vtemp_1 = ((((0x100U & (((((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                 << 1U) & ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                               >> 7U)) 
                                           << 8U)) 
                               | (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                   & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)) 
                                  << 1U)) | (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                  >> 7U)) 
                                              << 8U) 
                                             & ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                                << 1U)))) 
                   | ((0x80U & (((((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                   << 1U) & ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                 >> 6U)) 
                                             << 7U)) 
                                 | (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                     & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)) 
                                    << 1U)) | (((~ 
                                                 ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                  >> 6U)) 
                                                << 7U) 
                                               & ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                                  << 1U)))) 
                      | (0x40U & (((((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                     << 1U) & ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                   >> 5U)) 
                                               << 6U)) 
                                   | (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                       & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)) 
                                      << 1U)) | (((~ 
                                                   ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                    >> 5U)) 
                                                  << 6U) 
                                                 & ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                                    << 1U)))))) 
                  | ((0x20U & (((((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                  << 1U) & ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                >> 4U)) 
                                            << 5U)) 
                                | (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                    & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)) 
                                   << 1U)) | (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                   >> 4U)) 
                                               << 5U) 
                                              & ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                                 << 1U)))) 
                     | (0x10U & (((((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                    << 1U) & ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                  >> 3U)) 
                                              << 4U)) 
                                  | (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                      & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)) 
                                     << 1U)) | (((~ 
                                                  ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                   >> 3U)) 
                                                 << 4U) 
                                                & ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                                   << 1U)))))) 
                 | (((8U & (((((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                               << 1U) & ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                             >> 2U)) 
                                         << 3U)) | 
                             (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                               & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)) 
                              << 1U)) | (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                              >> 2U)) 
                                          << 3U) & 
                                         ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                          << 1U)))) 
                     | (4U & (((((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                 << 1U) & ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                               >> 1U)) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                   & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)) 
                                  << 1U)) | (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                  >> 1U)) 
                                              << 2U) 
                                             & ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                                << 1U))))) 
                    | (2U & ((((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                               & ((~ (IData)(vlSelfRef.subtractorTb__DOT__b_i)) 
                                  | (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int))) 
                              | ((~ (IData)(vlSelfRef.subtractorTb__DOT__b_i)) 
                                 & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int))) 
                             << 1U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int 
        = __Vtemp_1;
    vlSelfRef.subtractorTb__DOT__sign = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                                >> 7U) 
                                               ^ ((~ 
                                                   ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                    >> 7U)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                                   >> 7U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_0 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 6U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 6U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 6U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_1 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 5U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 5U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 5U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_2 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 4U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 4U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 4U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_3 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 3U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 3U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 3U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_4 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 2U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 2U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 2U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_5 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 1U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 1U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 1U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_6 
        = (1U & ((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                 ^ ((~ (IData)(vlSelfRef.subtractorTb__DOT__b_i)) 
                    ^ (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int))));
}

VL_INLINE_OPT void VsubtractorTb___024root___act_comb__TOP__1(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___act_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2 
        = ((0x1f0U & (((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__sum) 
                       & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)) 
                      << 1U)) | ((0xcU & (((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__sum) 
                                           & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)) 
                                          << 1U)) | 
                                 (2U & ((((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__sum) 
                                          | ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__sum) 
                                             & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2))) 
                                         | (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)) 
                                        << 1U))));
}

void VsubtractorTb___024root___nba_sequent__TOP__0(VsubtractorTb___024root* vlSelf);

void VsubtractorTb___024root___eval_nba(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VsubtractorTb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VsubtractorTb___024root___nba_sequent__TOP__0(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.subtractorTb__DOT__sign = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                                >> 7U) 
                                               ^ ((~ 
                                                   ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                    >> 7U)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                                   >> 7U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_0 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 6U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 6U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 6U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_1 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 5U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 5U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 5U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_2 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 4U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 4U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 4U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_3 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 3U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 3U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 3U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_4 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 2U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 2U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 2U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_5 
        = (1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                  >> 1U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                >> 1U)) ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                           >> 1U))));
    vlSelfRef.subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_6 
        = (1U & ((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                 ^ ((~ (IData)(vlSelfRef.subtractorTb__DOT__b_i)) 
                    ^ (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int))));
}

void VsubtractorTb___024root___timing_resume(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VsubtractorTb___024root___eval_triggers__act(VsubtractorTb___024root* vlSelf);

bool VsubtractorTb___024root___eval_phase__act(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsubtractorTb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VsubtractorTb___024root___timing_resume(vlSelf);
        VsubtractorTb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsubtractorTb___024root___eval_phase__nba(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsubtractorTb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsubtractorTb___024root___dump_triggers__nba(VsubtractorTb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsubtractorTb___024root___dump_triggers__act(VsubtractorTb___024root* vlSelf);
#endif  // VL_DEBUG

void VsubtractorTb___024root___eval(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VsubtractorTb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("subtractorTb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VsubtractorTb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("subtractorTb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VsubtractorTb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VsubtractorTb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsubtractorTb___024root___eval_debug_assertions(VsubtractorTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
