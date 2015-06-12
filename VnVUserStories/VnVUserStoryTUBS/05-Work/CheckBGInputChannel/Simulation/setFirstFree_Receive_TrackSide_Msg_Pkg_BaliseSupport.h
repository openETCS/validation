/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::cont */ cont;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::outTelegrams */ outTelegrams;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::_L1 */ _L1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::_L2 */ _L2;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::_L4 */ _L4;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::_L14 */ _L14;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::_L15 */ _L15;
} outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree */
extern void setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::inTelegramArray */Telegram_T_BG_Types_Pkg *inTelegramArray,
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

extern void setFirstFree_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#endif /* _setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

