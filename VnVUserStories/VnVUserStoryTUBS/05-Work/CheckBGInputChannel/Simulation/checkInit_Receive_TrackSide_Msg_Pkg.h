/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _checkInit_Receive_TrackSide_Msg_Pkg_H_
#define _checkInit_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkInit::outCollector */ outCollector;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkInit::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkInit::IfBlock1::then::_L1 */ _L1_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkInit::IfBlock1::else::_L20 */ _L20_IfBlock1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::checkInit::IfBlock1::else::_L19 */ _L19_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkInit::isDefined */ isDefined;
  kcg_int /* Receive_TrackSide_Msg_Pkg::checkInit::_L2 */ _L2;
  kcg_int /* Receive_TrackSide_Msg_Pkg::checkInit::_L4 */ _L4;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkInit::_L6 */ _L6;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkInit::_L8 */ _L8;
} outC_checkInit_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::checkInit */
extern void checkInit_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkInit::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkInit::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC);

extern void checkInit_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC);

#endif /* _checkInit_Receive_TrackSide_Msg_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkInit_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

