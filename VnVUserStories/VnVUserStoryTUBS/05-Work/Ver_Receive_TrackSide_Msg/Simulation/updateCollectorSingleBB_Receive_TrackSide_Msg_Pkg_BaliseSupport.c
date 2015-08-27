/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

#ifndef KCG_USER_DEFINED_INIT
void updateCollectorSingleBB_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L4 = 0;
  outC->_L5 = 0;
  outC->_L6.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L6.odometerOfBaliseDetection.timestamp = 0;
  outC->_L6.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L6.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L6.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L6.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L6.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L6.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L6.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L6.odometerOfBaliseDetection.acceleration = 0;
  outC->_L6.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L6.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L6.BG_centerDetectionInaccuraccuracies.d_max = 0;
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
  outC->_L8 = 0;
  outC->_L9 = 0;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L3.badBaliseFlag = kcg_true;
  outC->_L3.BGMessageSent = kcg_true;
  outC->_L3.C_ID = 0;
  outC->_L3.BG_ID = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L3.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L3.collectedTelegrams = 0;
  outC->_L3.totalTelegrams = 0;
  outC->_L2.badBaliseFlag = kcg_true;
  outC->_L2.BGMessageSent = kcg_true;
  outC->_L2.C_ID = 0;
  outC->_L2.BG_ID = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L2.collectedTelegrams = 0;
  outC->_L2.totalTelegrams = 0;
  outC->_L1 = kcg_true;
  outC->outCollector.badBaliseFlag = kcg_true;
  outC->outCollector.BGMessageSent = kcg_true;
  outC->outCollector.C_ID = 0;
  outC->outCollector.BG_ID = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outCollector.collectedTelegrams = 0;
  outC->outCollector.totalTelegrams = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void updateCollectorSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB */
void updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::inSingleBadBalise */ kcg_bool inSingleBadBalise,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  outC->_L1 = inSingleBadBalise;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L2, inCollector);
  outC->_L13 = kcg_false;
  outC->_L11 = outC->_L2.badBaliseFlag;
  /* 1 */ if (outC->_L1) {
    outC->_L12 = outC->_L13;
  }
  else {
    outC->_L12 = outC->_L11;
  }
  outC->_L10 = outC->_L2.BGMessageSent;
  outC->_L9 = outC->_L2.C_ID;
  outC->_L8 = outC->_L2.BG_ID;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L7,
    &outC->_L2.balisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L6,
    &outC->_L2.positionFirstContact);
  outC->_L5 = outC->_L2.collectedTelegrams;
  outC->_L4 = outC->_L2.totalTelegrams;
  outC->_L3.badBaliseFlag = outC->_L12;
  outC->_L3.BGMessageSent = outC->_L10;
  outC->_L3.C_ID = outC->_L9;
  outC->_L3.BG_ID = outC->_L8;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.balisePosition,
    &outC->_L7);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.positionFirstContact,
    &outC->_L6);
  outC->_L3.collectedTelegrams = outC->_L5;
  outC->_L3.totalTelegrams = outC->_L4;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

