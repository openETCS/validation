/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _setIntervalBGPosition_Receive_TrackSide_Msg_Pkg_H_
#define _setIntervalBGPosition_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::outUpdateBGPosition */ outUpdateBGPosition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::_L2 */ _L2;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::_L4 */ _L4;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::_L7 */ _L7;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::_L18 */ _L18;
} outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition */
extern void setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::inOldPosition */centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC);

extern void setIntervalBGPosition_reset_Receive_TrackSide_Msg_Pkg(
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC);

#endif /* _setIntervalBGPosition_Receive_TrackSide_Msg_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

