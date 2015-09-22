/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::outCollector */ outCollector;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L2 */ _L2;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L3 */ _L3;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L11 */ _L11;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L10 */ _L10;
  NID_C /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L9 */ _L9;
  NID_BG /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L8 */ _L8;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L7 */ _L7;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L6 */ _L6;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L5 */ _L5;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L4 */ _L4;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::_L14 */ _L14;
} outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage */
extern void updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void updateCollectorSendMessage_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void updateCollectorSendMessage_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

