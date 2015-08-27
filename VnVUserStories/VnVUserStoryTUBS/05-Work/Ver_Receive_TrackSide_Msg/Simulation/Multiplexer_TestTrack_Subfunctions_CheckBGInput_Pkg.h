/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg_H_
#define _Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"
#include "Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios.h"
#include "Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::out_compressedTrackMsg */ out_compressedTrackMsg;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios /* 2 */ _1_Context_2;
  outC_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios /* 2 */ Context_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::else */ _4_else_clock_IfBlock1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::else::else::else */ _2_else_clock_IfBlock1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::else::else */ _3_else_clock_IfBlock1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::then::_L1 */ _L1_IfBlock1;
  CompressedBaliseMessage_TM /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::else::else::then::_L3 */ _L3_IfBlock1;
  CompressedBaliseMessage_TM /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::else::else::else::else::then::_L6 */ _L6_IfBlock1;
  CompressedBaliseMessage_TM /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::else::else::else::else::else::_L3 */ _L36_IfBlock1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::else::else::else::else */ else_clock_IfBlock1;
  CompressedBaliseMessage_TM /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::else::else::else::then::_L3 */ _L35_IfBlock1;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::else::then::_L2 */ _L2_IfBlock1;
  CompressedBaliseMessage_TM /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::IfBlock1::else::then::_L8 */ _L8_IfBlock1;
  CompressedBaliseMessage_TM /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::CurrentTrackMsg */ CurrentTrackMsg;
  CompressedBaliseMessage_TM /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::_L14 */ _L14;
} outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack */
extern void Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::in_TestStory */ kcg_int in_TestStory,
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::in_currentPosition */ kcg_real in_currentPosition,
  outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Multiplexer_TestTrack_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Multiplexer_TestTrack_init_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

