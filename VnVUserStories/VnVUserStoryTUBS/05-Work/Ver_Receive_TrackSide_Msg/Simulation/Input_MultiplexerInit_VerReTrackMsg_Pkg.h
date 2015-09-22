/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Input_MultiplexerInit_VerReTrackMsg_Pkg_H_
#define _Input_MultiplexerInit_VerReTrackMsg_Pkg_H_

#include "kcg_types.h"
#include "Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg.h"
#include "Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* VerReTrackMsg_Pkg::Input_MultiplexerInit::out_acceleration */ out_acceleration;
  kcg_real /* VerReTrackMsg_Pkg::Input_MultiplexerInit::out_initialPosition */ out_initialPosition;
  kcg_real /* VerReTrackMsg_Pkg::Input_MultiplexerInit::out_initialVelocity */ out_initialVelocity;
  kcg_int /* VerReTrackMsg_Pkg::Input_MultiplexerInit::out_TotalNrofBGs */ out_TotalNrofBGs;
  kcg_real /* VerReTrackMsg_Pkg::Input_MultiplexerInit::EndofStory */ EndofStory;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg /* 1 */ _1_Context_1;
  outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* VerReTrackMsg_Pkg::Input_MultiplexerInit::_L6 */ _L6;
  kcg_int /* VerReTrackMsg_Pkg::Input_MultiplexerInit::_L3 */ _L3;
  kcg_real /* VerReTrackMsg_Pkg::Input_MultiplexerInit::_L10 */ _L10;
  kcg_real /* VerReTrackMsg_Pkg::Input_MultiplexerInit::_L11 */ _L11;
  kcg_real /* VerReTrackMsg_Pkg::Input_MultiplexerInit::_L13 */ _L13;
  kcg_real /* VerReTrackMsg_Pkg::Input_MultiplexerInit::_L14 */ _L14;
  kcg_int /* VerReTrackMsg_Pkg::Input_MultiplexerInit::_L15 */ _L15;
} outC_Input_MultiplexerInit_VerReTrackMsg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* VerReTrackMsg_Pkg::Input_MultiplexerInit */
extern void Input_MultiplexerInit_VerReTrackMsg_Pkg(
  /* VerReTrackMsg_Pkg::Input_MultiplexerInit::in_TestDriver */ kcg_int in_TestDriver,
  /* VerReTrackMsg_Pkg::Input_MultiplexerInit::in_TestStory */ kcg_int in_TestStory,
  outC_Input_MultiplexerInit_VerReTrackMsg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Input_MultiplexerInit_reset_VerReTrackMsg_Pkg(
  outC_Input_MultiplexerInit_VerReTrackMsg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Input_MultiplexerInit_init_VerReTrackMsg_Pkg(
  outC_Input_MultiplexerInit_VerReTrackMsg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Input_MultiplexerInit_VerReTrackMsg_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Input_MultiplexerInit_VerReTrackMsg_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

