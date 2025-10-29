// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsubtractorTb__Syms.h"


VL_ATTR_COLD void VsubtractorTb___024root__trace_init_sub__TOP__0(VsubtractorTb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("subtractorTb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"b_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"diff",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"carry_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+6,0,"b_iComp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"carry_int2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+10,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VsubtractorTb___024root__trace_init_top(VsubtractorTb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsubtractorTb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VsubtractorTb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VsubtractorTb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsubtractorTb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsubtractorTb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VsubtractorTb___024root__trace_register(VsubtractorTb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VsubtractorTb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VsubtractorTb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VsubtractorTb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VsubtractorTb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VsubtractorTb___024root__trace_const_0_sub_0(VsubtractorTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VsubtractorTb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root__trace_const_0\n"); );
    // Init
    VsubtractorTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsubtractorTb___024root*>(voidSelf);
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VsubtractorTb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VsubtractorTb___024root__trace_const_0_sub_0(VsubtractorTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+9,(8U),32);
    bufp->fullCData(oldp+10,(1U),8);
}

VL_ATTR_COLD void VsubtractorTb___024root__trace_full_0_sub_0(VsubtractorTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VsubtractorTb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root__trace_full_0\n"); );
    // Init
    VsubtractorTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsubtractorTb___024root*>(voidSelf);
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VsubtractorTb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VsubtractorTb___024root__trace_full_0_sub_0(VsubtractorTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.subtractorTb__DOT__a_i),8);
    bufp->fullCData(oldp+2,(vlSelfRef.subtractorTb__DOT__b_i),8);
    bufp->fullCData(oldp+3,(((((0x80U & (((0xffffff80U 
                                           & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                          ^ (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                  >> 7U)) 
                                              << 7U) 
                                             ^ (0xffffff80U 
                                                & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                         ^ (0xffffff80U 
                                            & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                               | (0x40U & (((0xffffffc0U 
                                             & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                            ^ (((~ 
                                                 ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                  >> 6U)) 
                                                << 6U) 
                                               ^ (0xffffffc0U 
                                                  & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                           ^ (0xffffffc0U 
                                              & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2))))) 
                              | ((0x20U & (((0xffffffe0U 
                                             & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                            ^ (((~ 
                                                 ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                  >> 5U)) 
                                                << 5U) 
                                               ^ (0xffffffe0U 
                                                  & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                           ^ (0xffffffe0U 
                                              & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                                 | (0x10U & (((0xfffffff0U 
                                               & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                              ^ (((~ 
                                                   ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                    >> 4U)) 
                                                  << 4U) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                             ^ (0xfffffff0U 
                                                & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))))) 
                             | (((8U & (((0xfffffff8U 
                                          & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                         ^ (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                 >> 3U)) 
                                             << 3U) 
                                            ^ (0xfffffff8U 
                                               & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                        ^ (0xfffffff8U 
                                           & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                                 | (4U & (((0xfffffffcU 
                                            & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                           ^ (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                   >> 2U)) 
                                               << 2U) 
                                              ^ (0xfffffffcU 
                                                 & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                          ^ (0xfffffffcU 
                                             & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2))))) 
                                | ((2U & (((0xfffffffeU 
                                            & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                           ^ (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                   >> 1U)) 
                                               << 1U) 
                                              ^ (0xfffffffeU 
                                                 & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                          ^ (0xfffffffeU 
                                             & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                                   | (1U & ((((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                              ^ (IData)(vlSelfRef.subtractorTb__DOT__b_i)) 
                                             ^ (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)) 
                                            ^ (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2))))))),8);
    bufp->fullBit(oldp+4,((1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                  >> 7U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                >> 7U)) 
                                            ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                               >> 7U))))));
    bufp->fullSData(oldp+5,(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int),9);
    bufp->fullCData(oldp+6,((0xffU & (~ (IData)(vlSelfRef.subtractorTb__DOT__b_i)))),8);
    bufp->fullCData(oldp+7,(vlSelfRef.subtractorTb__DOT__uut__DOT__sum),8);
    bufp->fullSData(oldp+8,(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2),9);
}
