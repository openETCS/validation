/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::outCollector */ outCollector;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L2 */ _L2;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L3 */ _L3;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L14 */ _L14;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L15 */ _L15;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L16 */ _L16;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L17 */ _L17;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L18 */ _L18;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L19 */ _L19;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L20 */ _L20;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L21 */ _L21;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L22 */ _L22;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L30 */ _L30;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L29 */ _L29;
  NID_C /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L28 */ _L28;
  NID_BG /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L27 */ _L27;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L26 */ _L26;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L25 */ _L25;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L24 */ _L24;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::_L23 */ _L23;
} outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB */
extern void checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::inTelegram */ Telegram_T_BG_Types_Pkg *inTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkSingleBB_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

