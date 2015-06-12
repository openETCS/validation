/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckSingleBG_CheckBGConsistency_Pkg_SubFunction_H_
#define _CheckSingleBG_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */ isSingleBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction /* 6 */ Context_6;
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction /* 2 */ Context_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L10 */ _L10_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L9 */ _L9_IfBlock1;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L8 */ _L8_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L6 */ _L6_IfBlock1;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L5 */ _L5_IfBlock1;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L4 */ _L4_IfBlock1;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L2 */ _L2_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::else::_L1 */ _L11_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L21 */ _L21_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L20 */ _L20_IfBlock1;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L19 */ _L19_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L18 */ _L18_IfBlock1;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L17 */ _L17_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L16 */ _L16_IfBlock1;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L14 */ _L14_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L13 */ _L13_IfBlock1;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L22 */ _L22_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L23 */ _L23_IfBlock1;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L29 */ _L29_IfBlock1;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L28 */ _L28_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L27 */ _L27_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L26 */ _L26_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L25 */ _L25_IfBlock1;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L24 */ _L24_IfBlock1;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L30 */ _L30_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L31 */ _L31_IfBlock1;
  N_TOTAL /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::n_total */ n_total;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::valid */ valid;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::_L1 */ _L1;
  N_TOTAL /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::_L21 */ _L21;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::_L22 */ _L22;
} outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG */
extern void CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::telegram_in */Telegram_T_BG_Types_Pkg *telegram_in,
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction *outC);

extern void CheckSingleBG_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _CheckSingleBG_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

