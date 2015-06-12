/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_
#define _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */ applyServiceBrake;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */ badBaliseMessageToDMI;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ passedBG_out;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */ errorUnlinkedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction /* 1 */ _2_Context_1;
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction /* 2 */ Context_2;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* 17 */ Context_17;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* 16 */ Context_16;
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction /* 1 */ _1_Context_1;
  outC_CheckCompleteness_CheckBGConsistency_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::then::_L16 */ _L16_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::then::_L15 */ _L15_IfBlock1;
  Q_NVLOCACC /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::then::_L13 */ _L13_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::then::_L12 */ _L12_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::then::_L9 */ _L9_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::else::_L4 */ _L4_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::else::_L3 */ _L36_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::else::_L5 */ _L5_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L3 */ _L3_IfBlock1;
  N_PIG /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L18 */ _L18_IfBlock1;
  N_PIG /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L16 */ _L165_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L15 */ _L154_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L14 */ _L14_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L13 */ _L133_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L23 */ _L23_IfBlock1;
  Q_NVLOCACC /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L24 */ _L24_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L25 */ _L25_IfBlock1;
  BG_Message_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L26 */ _L26_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L19 */ _L19_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::isComplete */ isComplete;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::isSingle */ isSingle;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::lastTelegram */ lastTelegram;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L13 */ _L13;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L12 */ _L12;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L11 */ _L11;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L15 */ _L15;
  BG_Message_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L21 */ _L21;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L20 */ _L20;
} outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
extern void CaseLinkingNotInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::trackSideForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg *outC);

extern void CaseLinkingNotInUse_reset_CheckBGConsistency_Pkg(
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg *outC);

#endif /* _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CaseLinkingNotInUse_CheckBGConsistency_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

