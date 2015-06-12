/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction_H_
#define _BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "bildBGHeader_CheckBGConsistency_Pkg_SubFunction.h"
#include "MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::checkedMessage */ checkedMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction /* 1 */ _1_Context_1;
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MsgSource_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L38 */ _L38;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L40 */ _L40;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L44 */ _L44;
  TelegramArray_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L43 */ _L43;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L42 */ _L42;
  centerOfBalisePosition_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L41 */ _L41;
  RadioMetadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L46 */ _L46;
  BG_Header_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L59 */ _L59;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L60 */ _L60;
  Q_NVLOCACC /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L61 */ _L61;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L62 */ _L62;
  BG_Message_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L63 */ _L63;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L66 */ _L66;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L82 */ _L82;
  CompressedPackets_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L84 */ _L84;
} outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage */
extern void BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::trackSideForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction *outC);

extern void BuildCheckedMessage_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

