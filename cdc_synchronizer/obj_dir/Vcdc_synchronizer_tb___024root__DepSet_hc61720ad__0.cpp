// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcdc_synchronizer_tb.h for the primary calling header

#include "verilated.h"

#include "Vcdc_synchronizer_tb__Syms.h"
#include "Vcdc_synchronizer_tb__Syms.h"
#include "Vcdc_synchronizer_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcdc_synchronizer_tb___024root___eval_initial__TOP__0(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xcULL, nullptr, 
                                       "cdc_synchronizer_tb.v", 
                                       28);
    vlSelf->cdc_synchronizer_tb__DOT__async_in = 1U;
    co_await vlSelf->__VdlySched.delay(7ULL, nullptr, 
                                       "cdc_synchronizer_tb.v", 
                                       29);
    vlSelf->cdc_synchronizer_tb__DOT__async_in = 0U;
    co_await vlSelf->__VdlySched.delay(6ULL, nullptr, 
                                       "cdc_synchronizer_tb.v", 
                                       30);
    vlSelf->cdc_synchronizer_tb__DOT__async_in = 1U;
    co_await vlSelf->__VdlySched.delay(9ULL, nullptr, 
                                       "cdc_synchronizer_tb.v", 
                                       31);
    vlSelf->cdc_synchronizer_tb__DOT__async_in = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "cdc_synchronizer_tb.v", 
                                       33);
    VL_FINISH_MT("cdc_synchronizer_tb.v", 33, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdc_synchronizer_tb___024root___dump_triggers__act(Vcdc_synchronizer_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcdc_synchronizer_tb___024root___eval_triggers__act(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->cdc_synchronizer_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__cdc_synchronizer_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__cdc_synchronizer_tb__DOT__clk__0 
        = vlSelf->cdc_synchronizer_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcdc_synchronizer_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vcdc_synchronizer_tb___024root___act_sequent__TOP__0(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("Time=%0t clk=%b async_in=%b synced=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->cdc_synchronizer_tb__DOT__clk),
                  1,vlSelf->cdc_synchronizer_tb__DOT__async_in,
                  1,(IData)(vlSelf->cdc_synchronizer_tb__DOT__synced));
    }
}
