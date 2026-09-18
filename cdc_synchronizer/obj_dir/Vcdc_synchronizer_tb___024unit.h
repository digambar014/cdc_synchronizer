// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcdc_synchronizer_tb.h for the primary calling header

#ifndef VERILATED_VCDC_SYNCHRONIZER_TB___024UNIT_H_
#define VERILATED_VCDC_SYNCHRONIZER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcdc_synchronizer_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcdc_synchronizer_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vcdc_synchronizer_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcdc_synchronizer_tb___024unit(Vcdc_synchronizer_tb__Syms* symsp, const char* v__name);
    ~Vcdc_synchronizer_tb___024unit();
    VL_UNCOPYABLE(Vcdc_synchronizer_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
