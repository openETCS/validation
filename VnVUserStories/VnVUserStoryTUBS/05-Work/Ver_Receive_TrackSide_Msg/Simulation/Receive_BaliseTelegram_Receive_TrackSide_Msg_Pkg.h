/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "BuildBGMessage_Receive_TrackSide_Msg_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSide_ForCheck_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::outTrackMessage_for_check */ outTrackMessage_for_check;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::telegramPresent */ telegramPresent;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::centerOfBaliseDetection */ centerOfBaliseDetection;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::decodedTelegram */ decodedTelegram;
  MsgSource_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::msgType */ msgType;
  T_internal_Type_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::systemTimeMsgReceived */ systemTimeMsgReceived;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L1 */ _L1;
  odometry_T_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L5 */ _L5;
  BG_Message_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L6 */ _L6;
  TrackSide_ForCheck_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L7 */ _L7;
  RadioMessage_T_Radio_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L13 */ _L13;
  API_TrackSideInput_T_API_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L17 */ _L17;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L18 */ _L18;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L19 */ _L19;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L20 */ _L20;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L22 */ _L22;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L23 */ _L23;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L25 */ _L25;
  TelegramHeader_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L26 */ _L26;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L28 */ _L28;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L30 */ _L30;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L31 */ _L31;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L34 */ _L34;
  MsgSource_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L35 */ _L35;
  MsgSource_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L37 */ _L37;
  T_internal_Type_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L38 */ _L38;
  T_internal_Type_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L40 */ _L40;
  CompressedPackets_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L46 */ _L46;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L55 */ _L55;
} outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram */
extern void Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::API_TrackSide_Msg */ API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Receive_BaliseTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

