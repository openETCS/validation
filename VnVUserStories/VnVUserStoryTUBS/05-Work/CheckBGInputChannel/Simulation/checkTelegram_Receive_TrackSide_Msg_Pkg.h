/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _checkTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _checkTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkTelegram::outCollector */ outCollector;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::checkTelegram::outTelegramArray */ outTelegramArray;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::outTelegramNotInGroup */ outTelegramNotInGroup;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::outBGchangedEarly */ outBGchangedEarly;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport /* 1 */ _2_Context_1;
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport /* 1 */ _1_Context_1;
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::newBGInitNeeded */ newBGInitNeeded;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L2 */ _L2;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L4 */ _L4;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L31 */ _L31;
  NID_BG /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L32 */ _L32;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L36 */ _L36;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L40 */ _L40;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L41 */ _L41;
  N_PIG /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L55 */ _L55;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L56 */ _L56;
  NID_BG /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L61 */ _L61;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L62 */ _L62;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L63 */ _L63;
  kcg_int /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L64 */ _L64;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L65 */ _L65;
  kcg_int /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L66 */ _L66;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L67 */ _L67;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L68 */ _L68;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L69 */ _L69;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L70 */ _L70;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L73 */ _L73;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L72 */ _L72;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L74 */ _L74;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L86 */ _L86;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L87 */ _L87;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L88 */ _L88;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L92 */ _L92;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L93 */ _L93;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L94 */ _L94;
} outC_checkTelegram_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::checkTelegram */
extern void checkTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::inTelegramArray */TelegramArray_T_BG_Types_Pkg *inTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::BGCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *BGCollector,
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC);

extern void checkTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC);

#endif /* _checkTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

