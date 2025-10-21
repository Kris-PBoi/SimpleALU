// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VadderTb__Syms.h"


VL_ATTR_COLD void VadderTb___024root__trace_init_sub__TOP__0(VadderTb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("adderTb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"b_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"tot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"tot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+6,0,"carry_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VadderTb___024root__trace_init_top(VadderTb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VadderTb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VadderTb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VadderTb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VadderTb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VadderTb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VadderTb___024root__trace_register(VadderTb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VadderTb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VadderTb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VadderTb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VadderTb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VadderTb___024root__trace_const_0_sub_0(VadderTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VadderTb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root__trace_const_0\n"); );
    // Init
    VadderTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VadderTb___024root*>(voidSelf);
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VadderTb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VadderTb___024root__trace_const_0_sub_0(VadderTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+7,(8U),32);
}

VL_ATTR_COLD void VadderTb___024root__trace_full_0_sub_0(VadderTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VadderTb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root__trace_full_0\n"); );
    // Init
    VadderTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VadderTb___024root*>(voidSelf);
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VadderTb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VadderTb___024root__trace_full_0_sub_0(VadderTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.adderTb__DOT__a_i),8);
    bufp->fullCData(oldp+2,(vlSelfRef.adderTb__DOT__b_i),8);
    bufp->fullCData(oldp+3,((0xffU & ((IData)(vlSelfRef.adderTb__DOT__a_i) 
                                      ^ ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                         ^ (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int))))),8);
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int) 
                                 >> 8U))));
    bufp->fullSData(oldp+5,(((0x100U & (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int)) 
                             | (0xffU & ((IData)(vlSelfRef.adderTb__DOT__a_i) 
                                         ^ ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                            ^ (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int)))))),9);
    bufp->fullSData(oldp+6,(vlSelfRef.adderTb__DOT__uut__DOT__carry_int),9);
}
