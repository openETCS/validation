/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check_EndofTrack_Subfuction_Enhancements_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Check_EndofTrack_init_Subfuction_Enhancements_Pkg(
  outC_Check_EndofTrack_Subfuction_Enhancements_Pkg *outC)
{
  outC->_L3 = kcg_true;
  outC->_L1 = 0.0;
  outC->_L2 = 0.0;
  outC->out_TracksFinished = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Check_EndofTrack_reset_Subfuction_Enhancements_Pkg(
  outC_Check_EndofTrack_Subfuction_Enhancements_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Subfuction_Enhancements_Pkg::Check_EndofTrack */
void Check_EndofTrack_Subfuction_Enhancements_Pkg(
  /* Subfuction_Enhancements_Pkg::Check_EndofTrack::in_currentPosition */ kcg_real in_currentPosition,
  /* Subfuction_Enhancements_Pkg::Check_EndofTrack::in_EndofStory */ kcg_real in_EndofStory,
  outC_Check_EndofTrack_Subfuction_Enhancements_Pkg *outC)
{
  outC->_L2 = in_EndofStory;
  outC->_L1 = in_currentPosition;
  outC->_L3 = outC->_L1 >= outC->_L2;
  outC->out_TracksFinished = outC->_L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Check_EndofTrack_Subfuction_Enhancements_Pkg.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

