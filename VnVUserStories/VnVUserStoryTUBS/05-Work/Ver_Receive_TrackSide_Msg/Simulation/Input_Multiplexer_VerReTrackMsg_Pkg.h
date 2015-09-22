/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Input_Multiplexer_VerReTrackMsg_Pkg_H_
#define _Input_Multiplexer_VerReTrackMsg_Pkg_H_

#include "kcg_types.h"
#include "Check_EndofTrack_Subfuction_Enhancements_Pkg.h"
#include "Convert_CompressedBalise__Subfuction_Enhancements_Pkg.h"
#include "Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* VerReTrackMsg_Pkg::Input_Multiplexer::out_compressedPackets */ out_compressedPackets;
  TelegramHeader_T_BG_Types_Pkg /* VerReTrackMsg_Pkg::Input_Multiplexer::out_TelegramHeader */ out_TelegramHeader;
  kcg_bool /* VerReTrackMsg_Pkg::Input_Multiplexer::out_TrackFinished */ out_TrackFinished;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg /* 1 */ _2_Context_1;
  outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg /* 1 */ _1_Context_1;
  outC_Check_EndofTrack_Subfuction_Enhancements_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* VerReTrackMsg_Pkg::Input_Multiplexer::_L6 */ _L6;
  kcg_bool /* VerReTrackMsg_Pkg::Input_Multiplexer::_L12 */ _L12;
  kcg_real /* VerReTrackMsg_Pkg::Input_Multiplexer::_L2 */ _L2;
  TelegramHeader_T_BG_Types_Pkg /* VerReTrackMsg_Pkg::Input_Multiplexer::_L8 */ _L8;
  CompressedPackets_T_Common_Types_Pkg /* VerReTrackMsg_Pkg::Input_Multiplexer::_L7 */ _L7;
  CompressedBaliseMessage_TM /* VerReTrackMsg_Pkg::Input_Multiplexer::_L9 */ _L9;
  kcg_real /* VerReTrackMsg_Pkg::Input_Multiplexer::_L18 */ _L18;
} outC_Input_Multiplexer_VerReTrackMsg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* VerReTrackMsg_Pkg::Input_Multiplexer */
extern void Input_Multiplexer_VerReTrackMsg_Pkg(
  /* VerReTrackMsg_Pkg::Input_Multiplexer::in_TestStory */ kcg_int in_TestStory,
  /* VerReTrackMsg_Pkg::Input_Multiplexer::in_currentPosition */ kcg_real in_currentPosition,
  /* VerReTrackMsg_Pkg::Input_Multiplexer::EndofStory */ kcg_real EndofStory,
  outC_Input_Multiplexer_VerReTrackMsg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Input_Multiplexer_reset_VerReTrackMsg_Pkg(
  outC_Input_Multiplexer_VerReTrackMsg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Input_Multiplexer_init_VerReTrackMsg_Pkg(
  outC_Input_Multiplexer_VerReTrackMsg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Input_Multiplexer_VerReTrackMsg_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Multiplexer_VerReTrackMsg_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

