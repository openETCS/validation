/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::outCollector */ outCollector;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L1 */ _L1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L2 */ _L2;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L3 */ _L3;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L11 */ _L11;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L10 */ _L10;
  NID_C /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L9 */ _L9;
  NID_BG /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L8 */ _L8;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L7 */ _L7;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L6 */ _L6;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L5 */ _L5;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L4 */ _L4;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L12 */ _L12;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::_L13 */ _L13;
} outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB */
extern void updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::inSingleBadBalise */ kcg_bool inSingleBadBalise,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void updateCollectorSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void updateCollectorSingleBB_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

