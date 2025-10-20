// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mips_top.h for the primary calling header

#include "Vtb_mips_top__pch.h"
#include "Vtb_mips_top___024root.h"

VL_ATTR_COLD void Vtb_mips_top___024root___eval_initial__TOP(Vtb_mips_top___024root* vlSelf);
VlCoroutine Vtb_mips_top___024root___eval_initial__TOP__0(Vtb_mips_top___024root* vlSelf);

void Vtb_mips_top___024root___eval_initial(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___eval_initial\n"); );
    // Body
    Vtb_mips_top___024root___eval_initial__TOP(vlSelf);
    Vtb_mips_top___024root___eval_initial__TOP__0(vlSelf);
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
}

VL_INLINE_OPT VlCoroutine Vtb_mips_top___024root___eval_initial__TOP__0(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_mips_top__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_mips_top.v", 
                                       35);
    vlSelf->tb_mips_top__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_mips_top.v", 
                                       36);
    vlSelf->tb_mips_top__DOT__rst = 0U;
    while ((0x48U != vlSelf->tb_mips_top__DOT__pc_current)) {
        vlSelf->tb_mips_top__DOT__clk = 0U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb_mips_top.v", 
                                           28);
        vlSelf->tb_mips_top__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb_mips_top.v", 
                                           29);
    }
    VL_FINISH_MT("tb_mips_top.v", 44, "");
}

void Vtb_mips_top___024root___eval_act(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_mips_top___024root___nba_sequent__TOP__0(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvdim0__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvval__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvset__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0;
    __Vdlyvdim0__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0;
    __Vdlyvval__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0;
    __Vdlyvset__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0 = 0;
    // Body
    __Vdlyvset__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0 = 0U;
    __Vdlyvset__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0U;
    if ((8U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__md__DOT__ctrl))) {
        __Vdlyvval__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0 
            = vlSelf->tb_mips_top__DOT__wd_dm;
        __Vdlyvset__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0 = 1U;
        __Vdlyvdim0__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0 
            = (0x3fU & (vlSelf->tb_mips_top__DOT__alu_out 
                        >> 2U));
    }
    if ((0x20U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__md__DOT__ctrl))) {
        if ((0x200U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__md__DOT__ctrl))) {
            __Vdlyvval__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 
                = vlSelf->tb_mips_top__DOT__pc_current;
            __Vdlyvdim0__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0x1fU;
        } else {
            __Vdlyvval__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 
                = ((4U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__md__DOT__ctrl))
                    ? vlSelf->tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram
                   [(0x3fU & (vlSelf->tb_mips_top__DOT__alu_out 
                              >> 2U))] : vlSelf->tb_mips_top__DOT__alu_out);
            __Vdlyvdim0__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 
                = (0x1fU & ((0x40U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__md__DOT__ctrl))
                             ? (vlSelf->tb_mips_top__DOT__instr 
                                >> 0xbU) : (vlSelf->tb_mips_top__DOT__instr 
                                            >> 0x10U)));
        }
        __Vdlyvset__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 1U;
    }
    if (__Vdlyvset__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0) {
        vlSelf->tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram[__Vdlyvdim0__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0] 
            = __Vdlyvval__tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram__v0;
    }
    if (__Vdlyvset__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0) {
        vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf[__Vdlyvdim0__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0] 
            = __Vdlyvval__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtb_mips_top___024root___nba_sequent__TOP__1(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((8U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))) {
        if ((4U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))) {
            if ((2U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))) {
                vlSelf->tb_mips_top__DOT__alu_out = 
                    ((1U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))
                      ? vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa
                      : 0U);
            } else if ((1U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))) {
                vlSelf->tb_mips_top__DOT__alu_out = 0U;
            } else {
                vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu__DOT__multiplier_register 
                    = ((QData)((IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa)) 
                       * (QData)((IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb)));
            }
        } else {
            vlSelf->tb_mips_top__DOT__alu_out = ((2U 
                                                  & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))
                                                   ? (IData)(
                                                             (vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu__DOT__multiplier_register 
                                                              >> 0x20U))
                                                   : (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu__DOT__multiplier_register))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))
                                                   ? 
                                                  (vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->tb_mips_top__DOT__instr 
                                                       >> 6U)))
                                                   : 
                                                  (vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa 
                                                   << 
                                                   (0x1fU 
                                                    & (vlSelf->tb_mips_top__DOT__instr 
                                                       >> 6U)))));
        }
    } else {
        vlSelf->tb_mips_top__DOT__alu_out = ((4U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))
                                              ? ((2U 
                                                  & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))
                                                   ? 
                                                  ((vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa 
                                                    < vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa 
                                                   - vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb))
                                                  : 0U)
                                              : ((2U 
                                                  & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa 
                                                   + vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl))
                                                   ? 
                                                  (vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa 
                                                   | vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb)
                                                   : 
                                                  (vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa 
                                                   & vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb))));
    }
}

extern const VlUnpacked<SData/*9:0*/, 64> Vtb_mips_top__ConstPool__TABLE_hea074c31_0;
extern const VlUnpacked<CData/*4:0*/, 256> Vtb_mips_top__ConstPool__TABLE_hd8644382_0;

VL_INLINE_OPT void Vtb_mips_top___024root___nba_sequent__TOP__2(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__ad__DOT__ctrl;
    tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__ad__DOT__ctrl = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->tb_mips_top__DOT__pc_current = ((IData)(vlSelf->tb_mips_top__DOT__rst)
                                             ? 0U : vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__pc_next);
    vlSelf->tb_mips_top__DOT__instr = vlSelf->tb_mips_top__DOT__DUT__DOT__imem__DOT__rom
        [(0x3fU & (vlSelf->tb_mips_top__DOT__pc_current 
                   >> 2U))];
    vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__sext_imm 
        = (((- (IData)((1U & (vlSelf->tb_mips_top__DOT__instr 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->tb_mips_top__DOT__instr));
    __Vtableidx1 = (vlSelf->tb_mips_top__DOT__instr 
                    >> 0x1aU);
    vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__md__DOT__ctrl 
        = Vtb_mips_top__ConstPool__TABLE_hea074c31_0
        [__Vtableidx1];
    __Vtableidx2 = ((0xfcU & (vlSelf->tb_mips_top__DOT__instr 
                              << 2U)) | (3U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__md__DOT__ctrl)));
    tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__ad__DOT__ctrl 
        = Vtb_mips_top__ConstPool__TABLE_hd8644382_0
        [__Vtableidx2];
    vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl 
        = (0xfU & (IData)(tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__ad__DOT__ctrl));
    vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT____Vcellinp__pc_src_mux__sel 
        = ((2U & ((IData)(tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__ad__DOT__ctrl) 
                  >> 3U)) | (1U & ((IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__md__DOT__ctrl) 
                                   >> 7U)));
}

VL_INLINE_OPT void Vtb_mips_top___024root___nba_comb__TOP__0(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_mips_top__DOT__wd_dm = ((0U == (0x1fU 
                                               & (vlSelf->tb_mips_top__DOT__instr 
                                                  >> 0x10U)))
                                        ? 0U : vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf
                                       [(0x1fU & (vlSelf->tb_mips_top__DOT__instr 
                                                  >> 0x10U))]);
    vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa 
        = ((0U == (0x1fU & (vlSelf->tb_mips_top__DOT__instr 
                            >> 0x15U))) ? 0U : vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf
           [(0x1fU & (vlSelf->tb_mips_top__DOT__instr 
                      >> 0x15U))]);
    vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb 
        = ((0x10U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__md__DOT__ctrl))
            ? vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__sext_imm
            : vlSelf->tb_mips_top__DOT__wd_dm);
}

VL_INLINE_OPT void Vtb_mips_top___024root___nba_comb__TOP__1(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__pc_next 
        = ((2U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT____Vcellinp__pc_src_mux__sel))
            ? ((1U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT____Vcellinp__pc_src_mux__sel))
                ? 0U : vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa)
            : ((1U & (IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT____Vcellinp__pc_src_mux__sel))
                ? ((0xf0000000U & ((IData)(4U) + vlSelf->tb_mips_top__DOT__pc_current)) 
                   | (0xffffffcU & (vlSelf->tb_mips_top__DOT__instr 
                                    << 2U))) : ((((IData)(vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__md__DOT__ctrl) 
                                                  >> 8U) 
                                                 & (0U 
                                                    == vlSelf->tb_mips_top__DOT__alu_out))
                                                 ? 
                                                ((IData)(4U) 
                                                 + 
                                                 (vlSelf->tb_mips_top__DOT__pc_current 
                                                  + 
                                                  VL_SHIFTL_III(32,32,32, vlSelf->tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__sext_imm, 2U)))
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->tb_mips_top__DOT__pc_current))));
}

void Vtb_mips_top___024root___eval_nba(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mips_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mips_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mips_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mips_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mips_top___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_mips_top___024root___timing_resume(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_mips_top___024root___eval_triggers__act(Vtb_mips_top___024root* vlSelf);

bool Vtb_mips_top___024root___eval_phase__act(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_mips_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_mips_top___024root___timing_resume(vlSelf);
        Vtb_mips_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_mips_top___024root___eval_phase__nba(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_mips_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mips_top___024root___dump_triggers__nba(Vtb_mips_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mips_top___024root___dump_triggers__act(Vtb_mips_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mips_top___024root___eval(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_mips_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_mips_top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_mips_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_mips_top.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_mips_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_mips_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_mips_top___024root___eval_debug_assertions(Vtb_mips_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mips_top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
