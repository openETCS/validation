/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _manageTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _manageTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "checkTelegram_Receive_TrackSide_Msg_Pkg.h"
#include "checkInit_Receive_TrackSide_Msg_Pkg.h"
#include "addTelegram_Receive_TrackSide_Msg_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisComplete */ outBGisComplete;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisChangedEarly */ outBGisChangedEarly;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::manageTelegram::outCollector */ outCollector;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageTelegram::outTelegramArray */ outTelegramArray;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::outStoresChanged */ outStoresChanged;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_addTelegram_Receive_TrackSide_Msg_Pkg /* 4 */ Context_4;
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg /* 1 */ _1_Context_1;
  outC_checkInit_Receive_TrackSide_Msg_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::isNotReceivedAlready */ isNotReceivedAlready;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::needsReplace */ needsReplace;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L6 */ _L6;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L11 */ _L11;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L10 */ _L10;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L47 */ _L47;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L51 */ _L51;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L54 */ _L54;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L53 */ _L53;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L58 */ _L58;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L60 */ _L60;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L63 */ _L63;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L64 */ _L64;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L65 */ _L65;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L66 */ _L66;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L67 */ _L67;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L68 */ _L68;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L69 */ _L69;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L70 */ _L70;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L72 */ _L72;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L73 */ _L73;
} outC_manageTelegram_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::manageTelegram */
extern void manageTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inoldTelegramArray */TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC);

extern void manageTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC);

#endif /* _manageTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

