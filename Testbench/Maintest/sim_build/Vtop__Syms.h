// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_Top;
    VerilatedScope* __Vscopep_Top__cpu;
    VerilatedScope* __Vscopep_Top__cpu__controller;
    VerilatedScope* __Vscopep_Top__cpu__controller__aluC_Generator;
    VerilatedScope* __Vscopep_Top__cpu__controller__decoder;
    VerilatedScope* __Vscopep_Top__cpu__controller__fsm_inst;
    VerilatedScope* __Vscopep_Top__cpu__datapath;
    VerilatedScope* __Vscopep_Top__cpu__datapath__alu;
    VerilatedScope* __Vscopep_Top__cpu__datapath__extender;
    VerilatedScope* __Vscopep_Top__cpu__datapath__ir;
    VerilatedScope* __Vscopep_Top__cpu__datapath__mdr;
    VerilatedScope* __Vscopep_Top__cpu__datapath__regFile;
    VerilatedScope* __Vscopep_Top__cpu__datapath__regFile__unnamedblk1;
    VerilatedScope* __Vscopep_Top__cpu__datapath__regFile__unnamedblk2;
    VerilatedScope* __Vscopep_Top__cpu__datapath__sResultSrc;
    VerilatedScope* __Vscopep_Top__cpu__datapath__sdataSrc;
    VerilatedScope* __Vscopep_Top__cpu__datapath__spcSrc;
    VerilatedScope* __Vscopep_Top__cpu__datapath__store;
    VerilatedScope* __Vscopep_Top__memory;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
