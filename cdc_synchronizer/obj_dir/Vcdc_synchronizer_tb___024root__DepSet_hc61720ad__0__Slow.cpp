// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcdc_synchronizer_tb.h for the primary calling header

#include "verilated.h"

#include "Vcdc_synchronizer_tb__Syms.h"
#include "Vcdc_synchronizer_tb__Syms.h"
#include "Vcdc_synchronizer_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdc_synchronizer_tb___024root___dump_triggers__stl(Vcdc_synchronizer_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcdc_synchronizer_tb___024root___eval_triggers__stl(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcdc_synchronizer_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
