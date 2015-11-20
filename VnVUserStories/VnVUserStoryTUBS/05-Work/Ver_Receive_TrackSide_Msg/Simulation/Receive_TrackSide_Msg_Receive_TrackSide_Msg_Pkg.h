/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg_H_
#define _Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.h"
#include "Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSide_ForCheck_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::outTrackMessage_for_check */ outTrackMessage_for_check;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg /* 1 */ _1_Context_1;
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSide_ForCheck_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::IfBlock1::then::_L2 */ _L2_IfBlock1;
  API_TrackSideInput_T_API_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::IfBlock1::then::_L1 */ _L1_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::IfBlock1::else::_L22 */ _L22_IfBlock1;
  API_TrackSideInput_T_API_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::IfBlock1::else::_L4 */ _L4_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::IfBlock1::else::_L3 */ _L3_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::IfBlock1::else::_L1 */ _L12_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::isRadioMsg */ isRadioMsg;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::_L1 */ _L1;
  API_TrackSideInput_T_API_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::_L2 */ _L2;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::_L5 */ _L5;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::_L6 */ _L6;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::_L7 */ _L7;
  MsgSource_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::_L8 */ _L8;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::_L9 */ _L9;
  MsgSource_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::_L10 */ _L10;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::_L11 */ _L11;
} outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg */
extern void Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::API_TrackSide_Msg */ API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Receive_TrackSide_Msg_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

