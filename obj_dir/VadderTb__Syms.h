// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VADDERTB__SYMS_H_
#define VERILATED_VADDERTB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VadderTb.h"

// INCLUDE MODULE CLASSES
#include "VadderTb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VadderTb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VadderTb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VadderTb___024root             TOP;

    // CONSTRUCTORS
    VadderTb__Syms(VerilatedContext* contextp, const char* namep, VadderTb* modelp);
    ~VadderTb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
