/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void setIntervalBGPosition_init_Receive_TrackSide_Msg_Pkg(
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->_L18 = kcg_true;
  outC->_L7.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L7.odometerOfBaliseDetection.timestamp = 0;
  outC->_L7.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L7.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L7.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L7.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L7.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L7.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L7.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L7.odometerOfBaliseDetection.acceleration = 0;
  outC->_L7.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L7.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L7.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L4.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L4.odometerOfBaliseDetection.timestamp = 0;
  outC->_L4.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L4.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L4.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L4.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L4.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L4.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L4.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L4.odometerOfBaliseDetection.acceleration = 0;
  outC->_L4.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L4.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L4.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L2.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.odometerOfBaliseDetection.timestamp = 0;
  outC->_L2.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L2.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L2.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L2.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L2.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L2.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L2.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L2.odometerOfBaliseDetection.acceleration = 0;
  outC->_L2.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L2.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L2.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.timestamp = 0;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.acceleration = 0;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outUpdateBGPosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->outUpdateBGPosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->outUpdateBGPosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setIntervalBGPosition_reset_Receive_TrackSide_Msg_Pkg(
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition */
void setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::inOldPosition */ centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L2, inOldPosition);
  outC->_L18 = outC->_L2.odometerOfBaliseDetection.valid;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L4,
    incenterOfBalisePosition);
  /* 1 */ if (outC->_L18) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L7, &outC->_L2);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L7, &outC->_L4);
  }
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->outUpdateBGPosition,
    &outC->_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

