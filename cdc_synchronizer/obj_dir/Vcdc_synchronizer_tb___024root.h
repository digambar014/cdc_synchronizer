// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcdc_synchronizer_tb.h for the primary calling header

#ifndef VERILATED_VCDC_SYNCHRONIZER_TB___024ROOT_H_
#define VERILATED_VCDC_SYNCHRONIZER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vcdc_synchronizer_tb___024unit;


class Vcdc_synchronizer_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcdc_synchronizer_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcdc_synchronizer_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cdc_synchronizer_tb__DOT__clk;
    CData/*0:0*/ cdc_synchronizer_tb__DOT__async_in;
    CData/*0:0*/ cdc_synchronizer_tb__DOT__synced;
    CData/*0:0*/ cdc_synchronizer_tb__DOT__uut__DOT__stage1;
    CData/*0:0*/ __Vdlyvval__cdc_synchronizer_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__cdc_synchronizer_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cdc_synchronizer_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcdc_synchronizer_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcdc_synchronizer_tb___024root(Vcdc_synchronizer_tb__Syms* symsp, const char* v__name);
    ~Vcdc_synchronizer_tb___024root();
    VL_UNCOPYABLE(Vcdc_synchronizer_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
