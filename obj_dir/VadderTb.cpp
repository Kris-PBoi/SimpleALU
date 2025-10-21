// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VadderTb__pch.h"

//============================================================
// Constructors

VadderTb::VadderTb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VadderTb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VadderTb::VadderTb(const char* _vcname__)
    : VadderTb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VadderTb::~VadderTb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VadderTb___024root___eval_debug_assertions(VadderTb___024root* vlSelf);
#endif  // VL_DEBUG
void VadderTb___024root___eval_static(VadderTb___024root* vlSelf);
void VadderTb___024root___eval_initial(VadderTb___024root* vlSelf);
void VadderTb___024root___eval_settle(VadderTb___024root* vlSelf);
void VadderTb___024root___eval(VadderTb___024root* vlSelf);

void VadderTb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VadderTb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VadderTb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VadderTb___024root___eval_static(&(vlSymsp->TOP));
        VadderTb___024root___eval_initial(&(vlSymsp->TOP));
        VadderTb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VadderTb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VadderTb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VadderTb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VadderTb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VadderTb___024root___eval_final(VadderTb___024root* vlSelf);

VL_ATTR_COLD void VadderTb::final() {
    VadderTb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VadderTb::hierName() const { return vlSymsp->name(); }
const char* VadderTb::modelName() const { return "VadderTb"; }
unsigned VadderTb::threads() const { return 1; }
void VadderTb::prepareClone() const { contextp()->prepareClone(); }
void VadderTb::atClone() const {
    contextp()->threadPoolpOnClone();
}
