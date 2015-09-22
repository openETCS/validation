/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Check_EndofTrack_Subfuction_Enhancements_Pkg_H_
#define _Check_EndofTrack_Subfuction_Enhancements_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Subfuction_Enhancements_Pkg::Check_EndofTrack::out_TracksFinished */ out_TracksFinished;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Subfuction_Enhancements_Pkg::Check_EndofTrack::_L2 */ _L2;
  kcg_real /* Subfuction_Enhancements_Pkg::Check_EndofTrack::_L1 */ _L1;
  kcg_bool /* Subfuction_Enhancements_Pkg::Check_EndofTrack::_L3 */ _L3;
} outC_Check_EndofTrack_Subfuction_Enhancements_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfuction_Enhancements_Pkg::Check_EndofTrack */
extern void Check_EndofTrack_Subfuction_Enhancements_Pkg(
  /* Subfuction_Enhancements_Pkg::Check_EndofTrack::in_currentPosition */ kcg_real in_currentPosition,
  /* Subfuction_Enhancements_Pkg::Check_EndofTrack::in_EndofStory */ kcg_real in_EndofStory,
  outC_Check_EndofTrack_Subfuction_Enhancements_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Check_EndofTrack_reset_Subfuction_Enhancements_Pkg(
  outC_Check_EndofTrack_Subfuction_Enhancements_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Check_EndofTrack_init_Subfuction_Enhancements_Pkg(
  outC_Check_EndofTrack_Subfuction_Enhancements_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Check_EndofTrack_Subfuction_Enhancements_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Check_EndofTrack_Subfuction_Enhancements_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

