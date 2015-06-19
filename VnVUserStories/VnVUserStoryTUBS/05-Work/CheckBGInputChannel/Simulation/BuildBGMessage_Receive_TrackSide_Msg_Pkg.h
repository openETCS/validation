/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _BuildBGMessage_Receive_TrackSide_Msg_Pkg_H_
#define _BuildBGMessage_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "checkOdometry_Receive_TrackSide_Msg_Pkg.h"
#include "manageTelegram_Receive_TrackSide_Msg_Pkg.h"
#include "manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h"
#include "updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BG_Message_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::outBGMessage */ outBGMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeAdditionalTelegram */ storeAdditionalTelegram;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ storeCollector;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ storeBGTelegramArray;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport /* 1 */ _2_Context_1;
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg /* 1 */ Context_1;
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg /* 3 */ _1_Context_3;
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg /* 3 */ Context_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3 */ IfBlock3_clock_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4 */ IfBlock4_clock;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2 */ IfBlock2_clock;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::then::_L1 */ _L1_IfBlock4;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L10 */ _L10_IfBlock4;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L11 */ _L11_IfBlock4;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L12 */ _L12_IfBlock4;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L13 */ _L13_IfBlock4;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L9 */ _L9_IfBlock4;
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L5 */ _L5_IfBlock4;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L6 */ _L6_IfBlock4;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L7 */ _L7_IfBlock4;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L48 */ _L48_IfBlock2;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L46 */ _L46_IfBlock2;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L45 */ _L45_IfBlock2;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L41 */ _L41_IfBlock2;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L29 */ _L29_IfBlock2;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L23 */ _L23_IfBlock2;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L14 */ _L14_IfBlock2;
  BG_Message_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L7 */ _L7_IfBlock2;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::_L12 */ _L12_IfBlock2;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::_L11 */ _L11_IfBlock2;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::_L6 */ _L6_IfBlock2;
  BG_Message_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::_L3 */ _L3_IfBlock2;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::_L1 */ _L1_IfBlock2;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3 */ IfBlock3_clock_IfBlock2;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3::else::_L1 */ _L14_IfBlock2_IfBlock3;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3::else::_L2 */ _L23_IfBlock2_IfBlock3;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3::then::_L1 */ _L1_IfBlock2_IfBlock3;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3::then::_L2 */ _L2_IfBlock2_IfBlock3;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L22 */ _L22_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L20 */ _L20_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L18 */ _L18_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L14 */ _L14_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L12 */ _L12_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L11 */ _L11_IfBlock1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L10 */ _L10_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L5 */ _L5_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::else::_L1 */ _L1_IfBlock1_IfBlock3;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::else::_L2 */ _L2_IfBlock1_IfBlock3;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L6 */ _L6_IfBlock1_IfBlock3;
  odometry_T_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L5 */ _L5_IfBlock1_IfBlock3;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L4 */ _L4_IfBlock1_IfBlock3;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L7 */ _L7_IfBlock1_IfBlock3;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L9 */ _L9_IfBlock1_IfBlock3;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L11 */ _L11_IfBlock1_IfBlock3;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */ BGisComplete;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */ BGisChangedEarly;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramToUse */ telegramToUse;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramPresent */ telegramPresent;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::positionToUse */ positionToUse;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::needTelegramStore */ needTelegramStore;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */ tempCollectorStore;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */ tempBGTelegramArray;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */ storeIsChanged;
  BG_Message_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::testBG */ testBG;
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L30 */ _L30;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L27 */ _L27;
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L26 */ _L26;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L25 */ _L25;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L23 */ _L23;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L31 */ _L31;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L34 */ _L34;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L42 */ _L42;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L43 */ _L43;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L44 */ _L44;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L45 */ _L45;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L46 */ _L46;
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L47 */ _L47;
  BG_Message_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L48 */ _L48;
} outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
extern void BuildBGMessage_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::reset */kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inTelegramPresent */kcg_bool inTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inDecodedTelegram */Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inActualOdometry */odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC);

extern void BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC);

#endif /* _BuildBGMessage_Receive_TrackSide_Msg_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildBGMessage_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

