/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _addTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _addTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.h"
#include "setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h"
#include "replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */ outCollector;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */ outTelegramArray;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */ outBGisComplete;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */ outIsDuplicate;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport /* 1 */ _2_Context_1[8];
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg /* 1 */ _1_Context_1;
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport /* 3 */ Context_3[8];
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L55 */ _L55_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L48 */ _L48_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L49 */ _L49_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L50 */ _L50_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L51 */ _L51_IfBlock1;
  NID_BG /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L52 */ _L52_IfBlock1;
  NID_C /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L53 */ _L53_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L54 */ _L54_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L47 */ _L47_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L46 */ _L46_IfBlock1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L45 */ _L45_IfBlock1;
  array__18365 /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L36 */ _L36_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L35 */ _L35_IfBlock1;
  array__18365 /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L37 */ _L37_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L39 */ _L39_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L40 */ _L40_IfBlock1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L41 */ _L41_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L21 */ _L21_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L17 */ _L17_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L15 */ _L15_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L3 */ _L3_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L6 */ _L6_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L8 */ _L8_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::then::_L9 */ _L9_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L33 */ _L33_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L32 */ _L32_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L31 */ _L31_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L30 */ _L30_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L29 */ _L29_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L27 */ _L27_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L22 */ _L22_IfBlock1;
  array_bool_8 /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L21 */ _L213_IfBlock1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L20 */ _L20_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L18 */ _L18_IfBlock1;
  array__18365 /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L16 */ _L16_IfBlock1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L17 */ _L174_IfBlock1;
  array__18365 /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L15 */ _L155_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L14 */ _L14_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L13 */ _L13_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L11 */ _L11_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L10 */ _L10_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L9 */ _L96_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L8 */ _L87_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L5 */ _L5_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L4 */ _L4_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::addTelegram::IfBlock1::else::_L1 */ _L19_IfBlock1;
} outC_addTelegram_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::addTelegram */
extern void addTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::addTelegram::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inoldTelegramArray */TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::doUpdate */kcg_bool doUpdate,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inPosition */centerOfBalisePosition_T_BG_Types_Pkg *inPosition,
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC);

extern void addTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC);

#endif /* _addTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** addTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

