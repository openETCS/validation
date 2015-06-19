/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h"

void setIntervalBGPosition_reset_Receive_TrackSide_Msg_Pkg(
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC)
{
}

/* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition */
void setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::inOldPosition */centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L2, inOldPosition);
  outC->_L18 = outC->_L2.odometerOfBaliseDetection.valid;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L4,
    incenterOfBalisePosition);
  if (outC->_L18) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L7, &outC->_L2);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L7, &outC->_L4);
  }
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->outUpdateBGPosition,
    &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

