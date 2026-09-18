// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcdc_synchronizer_tb.h for the primary calling header

#include "verilated.h"

#include "Vcdc_synchronizer_tb__Syms.h"
#include "Vcdc_synchronizer_tb___024unit.h"

VL_ATTR_COLD void Vcdc_synchronizer_tb___024unit___ctor_var_reset(Vcdc_synchronizer_tb___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcdc_synchronizer_tb___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
