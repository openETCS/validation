/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CaseLinkingInUse_CheckBGConsistency_Pkg_H_
#define _CaseLinkingInUse_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"
#include "IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ passedBG_out;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */ errorLinkedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBGlocal */ passedBGlocal;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction /* 2 */ _3_Context_2;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* 17 */ Context_17;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* 16 */ Context_16;
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction /* 1 */ _2_Context_1;
  outC_CheckCompleteness_CheckBGConsistency_Pkg /* 2 */ Context_2;
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction /* 1 */ _1_Context_1;
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_LINKORIENTATION /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::then::_L19 */ _L19_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::then::_L16 */ _L16_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::then::_L14 */ _L14_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::then::_L13 */ _L13_IfBlock1;
  Q_LINKORIENTATION /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::then::_L12 */ _L12_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::else::_L1 */ _L1_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L49 */ _L49_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L47 */ _L47_IfBlock1;
  Q_LINKORIENTATION /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L45 */ _L45_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L24 */ _L24_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L23 */ _L23_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L19 */ _L197_IfBlock1;
  N_PIG /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L18 */ _L18_IfBlock1;
  N_PIG /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L16 */ _L166_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L15 */ _L15_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L14 */ _L145_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L13 */ _L134_IfBlock1;
  Q_LINKORIENTATION /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L52 */ _L52_IfBlock1;
  BG_Message_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L58 */ _L58_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L57 */ _L57_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::isComplete */ isComplete;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::lastTelegram */ lastTelegram;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::isSingle */ isSingle;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::isAnnounced */ isAnnounced;
  Q_LINKORIENTATION /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_linkorientation_local */ q_linkorientation_local;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L13 */ _L13;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L12 */ _L12;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L11 */ _L11;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L15 */ _L15;
  Q_LINKORIENTATION /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L17 */ _L17;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L16 */ _L16;
  positionedBGs_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L18 */ _L18;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L19 */ _L19;
  BG_Header_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L24 */ _L24;
  Q_NVLOCACC /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L25 */ _L25;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L26 */ _L26;
  BG_Message_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L27 */ _L27;
} outC_CaseLinkingInUse_CheckBGConsistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::CaseLinkingInUse */
extern void CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::trackSideForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC);

extern void CaseLinkingInUse_reset_CheckBGConsistency_Pkg(
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC);

#endif /* _CaseLinkingInUse_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CaseLinkingInUse_CheckBGConsistency_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

