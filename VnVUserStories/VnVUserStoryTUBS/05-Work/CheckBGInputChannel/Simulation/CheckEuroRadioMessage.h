/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckEuroRadioMessage_H_
#define _CheckEuroRadioMessage_H_

#include "kcg_types.h"
#include "ConvertTrackSideMessageTo.h"
#include "CheckAllowedPacketsRadio.h"
#include "TimingChecker.h"
#include "CheckMandatoryVariablesAndMA.h"
#include "BuildOutput.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckEuroRadioMessage::checkedMessage */ checkedMessage;
  kcg_bool /* CheckEuroRadioMessage::radioSequenceError */ radioSequenceError;
  kcg_bool /* CheckEuroRadioMessage::tNvContactError */ tNvContactError;
  kcg_bool /* CheckEuroRadioMessage::otherTimingError */ otherTimingError;
  kcg_bool /* CheckEuroRadioMessage::radioMessageConsistencyError */ radioMessageConsistencyError;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ConvertTrackSideMessageTo /* 7 */ Context_7;
  outC_BuildOutput /* 6 */ _4_Context_6;
  outC_CheckMandatoryVariablesAndMA /* 6 */ _3_Context_6;
  outC_CheckAllowedPacketsRadio /* 6 */ _2_Context_6;
  outC_TimingChecker /* 6 */ _1_Context_6;
  outC_ConvertTrackSideMessageTo /* 6 */ Context_6;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CheckEuroRadioMessage::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckEuroRadioMessage::IfBlock1::then::_L99 */ _L99_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L100 */ _L100_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L101 */ _L101_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L95 */ _L95_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L94 */ _L94_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L93 */ _L93_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L89 */ _L89_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L90 */ _L90_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckEuroRadioMessage::IfBlock1::then::_L91 */ _L91_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L86 */ _L86_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L85 */ _L85_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L64 */ _L64_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L65 */ _L65_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L66 */ _L66_IfBlock1;
  sessionStatus_Type_Radio_Types_Pkg /* CheckEuroRadioMessage::IfBlock1::then::_L67 */ _L67_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckEuroRadioMessage::IfBlock1::then::_L68 */ _L68_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L70 */ _L70_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L72 */ _L72_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L73 */ _L73_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L74 */ _L74_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* CheckEuroRadioMessage::IfBlock1::then::_L75 */ _L75_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckEuroRadioMessage::IfBlock1::then::_L76 */ _L76_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckEuroRadioMessage::IfBlock1::then::_L77 */ _L77_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L78 */ _L78_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckEuroRadioMessage::IfBlock1::then::_L79 */ _L79_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L80 */ _L80_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::then::_L81 */ _L81_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* CheckEuroRadioMessage::IfBlock1::then::_L82 */ _L82_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckEuroRadioMessage::IfBlock1::then::_L83 */ _L83_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* CheckEuroRadioMessage::IfBlock1::then::_L84 */ _L84_IfBlock1;
  kcg_bool /* CheckEuroRadioMessage::IfBlock1::else::_L3 */ _L3_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckEuroRadioMessage::IfBlock1::else::_L2 */ _L2_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckEuroRadioMessage::IfBlock1::else::_L1 */ _L1_IfBlock1;
} outC_CheckEuroRadioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroRadioMessage */
extern void CheckEuroRadioMessage(
  /* CheckEuroRadioMessage::rtmMessage */TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroRadioMessage::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* CheckEuroRadioMessage::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroRadioMessage::connectionStatus */sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* CheckEuroRadioMessage::activateCheck */kcg_bool activateCheck,
  outC_CheckEuroRadioMessage *outC);

extern void CheckEuroRadioMessage_reset(outC_CheckEuroRadioMessage *outC);

#endif /* _CheckEuroRadioMessage_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckEuroRadioMessage.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

