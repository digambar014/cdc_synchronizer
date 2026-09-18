// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcdc_synchronizer_tb.h for the primary calling header

#include "verilated.h"

#include "Vcdc_synchronizer_tb__Syms.h"
#include "Vcdc_synchronizer_tb___024root.h"

VlCoroutine Vcdc_synchronizer_tb___024root___eval_initial__TOP__0(Vcdc_synchronizer_tb___024root* vlSelf);
VlCoroutine Vcdc_synchronizer_tb___024root___eval_initial__TOP__1(Vcdc_synchronizer_tb___024root* vlSelf);

void Vcdc_synchronizer_tb___024root___eval_initial(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___eval_initial\n"); );
    // Body
    Vcdc_synchronizer_tb___024root___eval_initial__TOP__0(vlSelf);
    Vcdc_synchronizer_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__cdc_synchronizer_tb__DOT__clk__0 
        = vlSelf->cdc_synchronizer_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vcdc_synchronizer_tb___024root___eval_initial__TOP__1(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "cdc_synchronizer_tb.v", 
                                           8);
        vlSelf->__Vdlyvval__cdc_synchronizer_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->cdc_synchronizer_tb__DOT__clk)));
        vlSelf->__Vdlyvset__cdc_synchronizer_tb__DOT__clk__v0 = 1U;
    }
}

void Vcdc_synchronizer_tb___024root___act_sequent__TOP__0(Vcdc_synchronizer_tb___024root* vlSelf);

void Vcdc_synchronizer_tb___024root___eval_act(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vcdc_synchronizer_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcdc_synchronizer_tb___024root___nba_sequent__TOP__0(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__Vdlyvset__cdc_synchronizer_tb__DOT__clk__v0) {
        vlSelf->cdc_synchronizer_tb__DOT__clk = vlSelf->__Vdlyvval__cdc_synchronizer_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__cdc_synchronizer_tb__DOT__clk__v0 = 0U;
    }
}

VL_INLINE_OPT void Vcdc_synchronizer_tb___024root___nba_sequent__TOP__1(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->cdc_synchronizer_tb__DOT__synced = vlSelf->cdc_synchronizer_tb__DOT__uut__DOT__stage1;
    vlSelf->cdc_synchronizer_tb__DOT__uut__DOT__stage1 
        = vlSelf->cdc_synchronizer_tb__DOT__async_in;
}

void Vcdc_synchronizer_tb___024root___eval_nba(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcdc_synchronizer_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcdc_synchronizer_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcdc_synchronizer_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vcdc_synchronizer_tb___024root___eval_triggers__act(Vcdc_synchronizer_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdc_synchronizer_tb___024root___dump_triggers__act(Vcdc_synchronizer_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcdc_synchronizer_tb___024root___timing_resume(Vcdc_synchronizer_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdc_synchronizer_tb___024root___dump_triggers__nba(Vcdc_synchronizer_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcdc_synchronizer_tb___024root___eval(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcdc_synchronizer_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcdc_synchronizer_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("cdc_synchronizer_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vcdc_synchronizer_tb___024root___timing_resume(vlSelf);
                Vcdc_synchronizer_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcdc_synchronizer_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("cdc_synchronizer_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcdc_synchronizer_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vcdc_synchronizer_tb___024root___timing_resume(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vcdc_synchronizer_tb___024root___eval_debug_assertions(Vcdc_synchronizer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdc_synchronizer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdc_synchronizer_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
