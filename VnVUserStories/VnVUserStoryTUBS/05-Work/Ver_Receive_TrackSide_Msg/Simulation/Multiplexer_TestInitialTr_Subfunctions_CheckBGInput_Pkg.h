/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg_H_
#define _Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::out_initialPosition */ out_initialPosition;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::out_EndofTrack */ out_EndofTrack;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::out_TotalNrofBGs */ out_TotalNrofBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::IfBlock1::else */ _3_else_clock_IfBlock1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::IfBlock1::else::else::else */ _1_else_clock_IfBlock1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::IfBlock1::else::else */ _2_else_clock_IfBlock1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  parameter_StoryTest_T_UNISIG_Validation_Scenarios /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::IfBlock1::then::_L15 */ _L15_IfBlock1;
  parameter_StoryTest_T_UNISIG_Validation_Scenarios /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::IfBlock1::else::else::then::_L11 */ _L11_IfBlock1;
  parameter_StoryTest_T_UNISIG_Validation_Scenarios /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::IfBlock1::else::else::else::else::then::_L4 */ _L4_IfBlock1;
  parameter_StoryTest_T_UNISIG_Validation_Scenarios /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::IfBlock1::else::else::else::else::else::_L8 */ _L8_IfBlock1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::IfBlock1::else::else::else::else */ else_clock_IfBlock1;
  parameter_StoryTest_T_UNISIG_Validation_Scenarios /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::IfBlock1::else::else::else::then::_L9 */ _L9_IfBlock1;
  parameter_StoryTest_T_UNISIG_Validation_Scenarios /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::IfBlock1::else::then::_L7 */ _L7_IfBlock1;
  parameter_StoryTest_T_UNISIG_Validation_Scenarios /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::Track_Parameter */ Track_Parameter;
  parameter_StoryTest_T_UNISIG_Validation_Scenarios /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::_L28 */ _L28;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::_L31 */ _L31;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::_L30 */ _L30;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::_L29 */ _L29;
} outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData */
extern void Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::in_TestStory */ kcg_int in_TestStory,
  outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Multiplexer_TestInitialTr_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Multiplexer_TestInitialTr_init_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

