/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckBGConsistency_CheckBGConsistency_Pkg_H_
#define _CheckBGConsistency_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"
#include "CaseLinkingInUse_CheckBGConsistency_Pkg.h"
#include "CheckMode_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */ passedBG_out;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */ applyServiceBrake;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */ badBaliseMessageToDMI;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::errorLinkedBG */ errorLinkedBG;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */ errorUnlinkedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg /* 2 */ Context_2;
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg /* 1 */ _1_Context_1;
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_NVLOCACC /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L23 */ _L23_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L22 */ _L22_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L20 */ _L20_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L19 */ _L19_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L18 */ _L18_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L12 */ _L12_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L11 */ _L11_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L10 */ _L10_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L13 */ _L13_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L15 */ _L15_IfBlock1;
  Q_NVLOCACC /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L16 */ _L16_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::startTheCheck */ startTheCheck;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::isLinked */ isLinked;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::linkingInUse */ linkingInUse;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::_L14 */ _L14;
  Q_LINK /* CheckBGConsistency_Pkg::CheckBGConsistency::_L24 */ _L24;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::_L26 */ _L26;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::_L27 */ _L27;
  Q_LINK /* CheckBGConsistency_Pkg::CheckBGConsistency::_L29 */ _L29;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::_L30 */ _L30;
  trainPosition_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::CheckBGConsistency::_L31 */ _L31;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::_L32 */ _L32;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::_L33 */ _L33;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::_L34 */ _L34;
  M_MODE /* CheckBGConsistency_Pkg::CheckBGConsistency::_L35 */ _L35;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CheckBGConsistency::_L39 */ _L39;
  BG_Message_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::CheckBGConsistency::_L40 */ _L40;
} outC_CheckBGConsistency_CheckBGConsistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::CheckBGConsistency */
extern void CheckBGConsistency_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckBGConsistency::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::mMode */M_MODE mMode,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trackSide_ForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSide_ForCheck,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC);

extern void CheckBGConsistency_reset_CheckBGConsistency_Pkg(
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC);

#endif /* _CheckBGConsistency_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckBGConsistency_CheckBGConsistency_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

