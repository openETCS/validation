/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckCompleteness_CheckBGConsistency_Pkg_H_
#define _CheckCompleteness_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */ isComplete;
  kcg_bool /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */ isSingleBG;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */ lastTelegram;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction /* 1 */ _2_Context_1;
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction /* 1 */ _1_Context_1;
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::then::_L3 */ _L3_IfBlock1;
  BG_Message_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::else::_L5 */ _L56_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::else::_L6 */ _L6_IfBlock1;
  BG_Message_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L4 */ _L4_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L3 */ _L35_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L1 */ _L14_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L2 */ _L23_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L5 */ _L5_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L7 */ _L7_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L8 */ _L8_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L9 */ _L9_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::CheckCompleteness::numberOfBalises */ numberOfBalises;
  kcg_int /* CheckBGConsistency_Pkg::CheckCompleteness::nTotal */ nTotal;
  BG_Message_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CheckCompleteness::_L1 */ _L1;
  kcg_int /* CheckBGConsistency_Pkg::CheckCompleteness::_L3 */ _L3;
  N_TOTAL /* CheckBGConsistency_Pkg::CheckCompleteness::_L4 */ _L4;
  kcg_int /* CheckBGConsistency_Pkg::CheckCompleteness::_L5 */ _L5;
} outC_CheckCompleteness_CheckBGConsistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::CheckCompleteness */
extern void CheckCompleteness_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckCompleteness::bgMessage */BG_Message_T_BG_Types_Pkg *bgMessage,
  outC_CheckCompleteness_CheckBGConsistency_Pkg *outC);

extern void CheckCompleteness_reset_CheckBGConsistency_Pkg(
  outC_CheckCompleteness_CheckBGConsistency_Pkg *outC);

#endif /* _CheckCompleteness_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckCompleteness_CheckBGConsistency_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

