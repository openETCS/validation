/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _TimingChecker_H_
#define _TimingChecker_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TimingChecker::tNvContactError */ tNvContactError;
  kcg_bool /* TimingChecker::sequenceError */ sequenceError;
  kcg_bool /* TimingChecker::otherTimingError */ otherTimingError;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* TimingChecker::lastKnownTTrain */ lastKnownTTrain;
  kcg_bool /* TimingChecker::ignoreTimestamp */ ignoreTimestamp;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TimingChecker::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TimingChecker::IfBlock1::then::_L33 */ _L33_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L32 */ _L32_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L31 */ _L31_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L30 */ _L30_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L29 */ _L29_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L28 */ _L28_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L27 */ _L27_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L26 */ _L26_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L25 */ _L25_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L24 */ _L24_IfBlock1;
  T_TRAIN /* TimingChecker::IfBlock1::then::_L23 */ _L23_IfBlock1;
  T_TRAIN /* TimingChecker::IfBlock1::then::_L22 */ _L22_IfBlock1;
  kcg_int /* TimingChecker::IfBlock1::then::_L20 */ _L20_IfBlock1;
  T_TRAIN /* TimingChecker::IfBlock1::then::_L17 */ _L17_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* TimingChecker::IfBlock1::then::_L14 */ _L14_IfBlock1;
  kcg_int /* TimingChecker::IfBlock1::then::_L3 */ _L3_IfBlock1;
  kcg_int /* TimingChecker::IfBlock1::then::_L4 */ _L4_IfBlock1;
  T_TRAIN /* TimingChecker::IfBlock1::then::_L5 */ _L5_IfBlock1;
  kcg_int /* TimingChecker::IfBlock1::then::_L6 */ _L6_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L7 */ _L7_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L9 */ _L9_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* TimingChecker::IfBlock1::then::_L10 */ _L10_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* TimingChecker::IfBlock1::then::_L11 */ _L11_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::then::_L12 */ _L12_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* TimingChecker::IfBlock1::then::_L13 */ _L13_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::else::else::IfBlock2::then::_L5 */ _L5_IfBlock1_IfBlock2;
  kcg_real /* TimingChecker::IfBlock1::else::else::IfBlock2::then::_L3 */ _L3_IfBlock1_IfBlock2;
  kcg_bool /* TimingChecker::IfBlock1::else::else::IfBlock2::then::_L2 */ _L2_IfBlock1_IfBlock2;
  kcg_bool /* TimingChecker::IfBlock1::else::else::IfBlock2::else::_L3 */ _L31_IfBlock1_IfBlock2;
  kcg_bool /* TimingChecker::IfBlock1::else::else::IfBlock2::else::_L2 */ _L22_IfBlock1_IfBlock2;
  kcg_bool /* TimingChecker::IfBlock1::else::else::IfBlock2::else::_L1 */ _L1_IfBlock1_IfBlock2;
  kcg_bool /* TimingChecker::IfBlock1::else::else::IfBlock2 */ IfBlock2_clock_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::else::else::connectingStatusConnecting */ connectingStatusConnecting_IfBlock1;
  sessionStatus_Type_Radio_Types_Pkg /* TimingChecker::IfBlock1::else::else::_L1 */ _L15_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::else::else::_L3 */ _L34_IfBlock1;
  sessionStatus_Type_Radio_Types_Pkg /* TimingChecker::IfBlock1::else::else::_L5 */ _L53_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::else::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TimingChecker::IfBlock1::else::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* TimingChecker::TimestampKnown */ TimestampKnown;
  ReceivedMessage_T_Common_Types_Pkg /* TimingChecker::_L30 */ _L30;
  T_TRAIN /* TimingChecker::_L31 */ _L31;
  kcg_bool /* TimingChecker::_L32 */ _L32;
  kcg_real /* TimingChecker::_L34 */ _L34;
} outC_TimingChecker;

/* ===========  node initialization and cycle functions  =========== */
/* TimingChecker */
extern void TimingChecker(
  /* TimingChecker::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* TimingChecker::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* TimingChecker::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* TimingChecker::connectionStatus */sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* TimingChecker::messageTimestamp */T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker *outC);

extern void TimingChecker_reset(outC_TimingChecker *outC);

#endif /* _TimingChecker_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TimingChecker.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

