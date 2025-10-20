// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mips_top.h for the primary calling header

#include "Vtb_mips_top__pch.h"
#include "Vtb_mips_top__Syms.h"
#include "Vtb_mips_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mips_top___024root___dump_triggers__act(Vtb_mips_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mips_top___024root___eval_triggers__act(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_mips_top__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mips_top__DOT__clk__0))) 
                                     | ((IData)(vlSelf->tb_mips_top__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mips_top__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_mips_top__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mips_top__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, ((((IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl__0)) 
                                      | (vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa 
                                         != vlSelf->__Vtrigprevexpr___TOP__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa__0)) 
                                     | (vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb 
                                        != vlSelf->__Vtrigprevexpr___TOP__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb__0)));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_mips_top__DOT__clk__0 
        = vlSelf->tb_mips_top__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_mips_top__DOT__rst__0 
        = vlSelf->tb_mips_top__DOT__rst;
    vlSelf->__Vtrigprevexpr___TOP__tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl__0 
        = vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl;
    vlSelf->__Vtrigprevexpr___TOP__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa__0 
        = vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa;
    vlSelf->__Vtrigprevexpr___TOP__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb__0 
        = vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mips_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
