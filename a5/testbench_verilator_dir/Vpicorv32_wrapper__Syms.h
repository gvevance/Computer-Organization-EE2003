// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPICORV32_WRAPPER__SYMS_H_
#define _VPICORV32_WRAPPER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vpicorv32_wrapper.h"
#include "Vpicorv32_wrapper_picorv32_wrapper.h"
#include "Vpicorv32_wrapper_axi4_memory.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vpicorv32_wrapper__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vpicorv32_wrapper*             TOPp;
    Vpicorv32_wrapper_picorv32_wrapper TOP__picorv32_wrapper;
    Vpicorv32_wrapper_axi4_memory  TOP__picorv32_wrapper__mem;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_picorv32_wrapper__mem;
    
    // CREATORS
    Vpicorv32_wrapper__Syms(Vpicorv32_wrapper* topp, const char* namep);
    ~Vpicorv32_wrapper__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
