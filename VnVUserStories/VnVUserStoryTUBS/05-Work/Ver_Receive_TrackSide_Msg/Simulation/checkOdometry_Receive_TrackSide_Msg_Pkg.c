/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkOdometry_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void checkOdometry_init_Receive_TrackSide_Msg_Pkg(
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->_L30.badBaliseFlag = kcg_true;
  outC->_L30.BGMessageSent = kcg_true;
  outC->_L30.C_ID = 0;
  outC->_L30.BG_ID = 0;
  outC->_L30.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L30.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L30.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L30.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L30.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L30.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L30.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L30.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L30.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L30.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L30.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L30.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L30.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L30.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L30.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L30.collectedTelegrams = 0;
  outC->_L30.totalTelegrams = 0;
  outC->_L22 = kcg_true;
  outC->_L21 = 0;
  outC->_L20 = kcg_true;
  outC->_L19 = 0;
  outC->_L12 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.timestamp = 0;
  outC->_L11.odo.o_nominal = 0;
  outC->_L11.odo.o_min = 0;
  outC->_L11.odo.o_max = 0;
  outC->_L11.speed.v_safeNominal = 0;
  outC->_L11.speed.v_rawNominal = 0;
  outC->_L11.speed.v_lower = 0;
  outC->_L11.speed.v_upper = 0;
  outC->_L11.acceleration = 0;
  outC->_L11.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->isValid = kcg_true;
  outC->_L1_IfBlock1 = kcg_true;
  outC->_L2_IfBlock1 = kcg_true;
  outC->_L31_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L31_IfBlock1.BGMessageSent = kcg_true;
  outC->_L31_IfBlock1.C_ID = 0;
  outC->_L31_IfBlock1.BG_ID = 0;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L31_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L31_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L31_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L31_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L31_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L31_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L31_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L31_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L31_IfBlock1.collectedTelegrams = 0;
  outC->_L31_IfBlock1.totalTelegrams = 0;
  outC->_L7_IfBlock1.valid = kcg_true;
  outC->_L7_IfBlock1.timestamp = 0;
  outC->_L7_IfBlock1.odo.o_nominal = 0;
  outC->_L7_IfBlock1.odo.o_min = 0;
  outC->_L7_IfBlock1.odo.o_max = 0;
  outC->_L7_IfBlock1.speed.v_safeNominal = 0;
  outC->_L7_IfBlock1.speed.v_rawNominal = 0;
  outC->_L7_IfBlock1.speed.v_lower = 0;
  outC->_L7_IfBlock1.speed.v_upper = 0;
  outC->_L7_IfBlock1.acceleration = 0;
  outC->_L7_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_IfBlock1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_IfBlock1.o_nominal = 0;
  outC->_L6_IfBlock1.o_min = 0;
  outC->_L6_IfBlock1.o_max = 0;
  outC->_L5_IfBlock1 = kcg_true;
  outC->_L3_IfBlock1 = kcg_true;
  outC->_L10_IfBlock1.o_nominal = 0;
  outC->_L10_IfBlock1.o_min = 0;
  outC->_L10_IfBlock1.o_max = 0;
  outC->_L9_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L9_IfBlock1.BGMessageSent = kcg_true;
  outC->_L9_IfBlock1.C_ID = 0;
  outC->_L9_IfBlock1.BG_ID = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L9_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L9_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L9_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L9_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L9_IfBlock1.collectedTelegrams = 0;
  outC->_L9_IfBlock1.totalTelegrams = 0;
  outC->_L11_IfBlock1.o_nominal = 0;
  outC->_L11_IfBlock1.o_min = 0;
  outC->_L11_IfBlock1.o_max = 0;
  outC->_L12_IfBlock1 = 0;
  outC->_L13_IfBlock1 = 0;
  outC->_L14_IfBlock1 = kcg_true;
  outC->_L15_IfBlock1 = kcg_true;
  outC->_L16_IfBlock1 = kcg_true;
  outC->_L17_IfBlock1 = kcg_true;
  outC->_L18_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L18_IfBlock1.BGMessageSent = kcg_true;
  outC->_L18_IfBlock1.C_ID = 0;
  outC->_L18_IfBlock1.BG_ID = 0;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L18_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L18_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L18_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L18_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L18_IfBlock1.collectedTelegrams = 0;
  outC->_L18_IfBlock1.totalTelegrams = 0;
  outC->_L19_IfBlock1 = kcg_true;
  outC->_L20_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L20_IfBlock1.BGMessageSent = kcg_true;
  outC->_L20_IfBlock1.C_ID = 0;
  outC->_L20_IfBlock1.BG_ID = 0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L20_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L20_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L20_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L20_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L20_IfBlock1.collectedTelegrams = 0;
  outC->_L20_IfBlock1.totalTelegrams = 0;
  outC->_L21_IfBlock1 = kcg_true;
  outC->_L22_IfBlock1 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
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
  outC->outBGIsChangedEarly = kcg_true;
  outC->outMessageComplete = kcg_true;
  /* 1 */
  updateCollectorSingleBB_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_1);
  /* 2 */
  checkMaxAbsOdoDistance_init_BasicLocationFunctions_Pkg(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkOdometry_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */
  updateCollectorSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_1);
  /* 2 */
  checkMaxAbsOdoDistance_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::checkOdometry */
void checkOdometry_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::actualOdometry */ odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _3_outCollector;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */ kcg_bool _2_outBGIsChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */ kcg_bool _1_outMessageComplete;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */ kcg_bool outBGIsChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */ kcg_bool outMessageComplete;
  
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L11, actualOdometry);
  outC->_L12 = outC->_L11.valid;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L30, inCollector);
  outC->_L19 = outC->_L30.totalTelegrams;
  outC->_L21 = 0;
  outC->_L20 = outC->_L19 > outC->_L21;
  outC->_L22 = outC->_L12 & outC->_L20;
  outC->isValid = outC->_L22;
  outC->IfBlock1_clock = outC->isValid;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L20_IfBlock1,
      inCollector);
    outC->_L19_IfBlock1 = outC->_L20_IfBlock1.BGMessageSent;
    outC->_L21_IfBlock1 = !outC->_L19_IfBlock1;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L7_IfBlock1, actualOdometry);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L6_IfBlock1,
      &outC->_L7_IfBlock1.odo);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L9_IfBlock1,
      inCollector);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L10_IfBlock1,
      &outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L11_IfBlock1,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cMaxDistanceBalisesInGroup_BG_Types_Pkg);
    /* 2 */
    checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
      &outC->_L6_IfBlock1,
      &outC->_L10_IfBlock1,
      &outC->_L11_IfBlock1,
      &outC->Context_2);
    outC->_L5_IfBlock1 = outC->Context_2.isLessThanOrEqual;
    outC->_L3_IfBlock1 = !outC->_L5_IfBlock1;
    outC->_L22_IfBlock1 = outC->_L21_IfBlock1 & outC->_L3_IfBlock1;
    _1_outMessageComplete = outC->_L22_IfBlock1;
    outC->outMessageComplete = _1_outMessageComplete;
    outC->_L12_IfBlock1 = outC->_L9_IfBlock1.collectedTelegrams;
    outC->_L13_IfBlock1 = outC->_L9_IfBlock1.collectedTelegrams;
    outC->_L14_IfBlock1 = outC->_L12_IfBlock1 < outC->_L13_IfBlock1;
    outC->_L15_IfBlock1 = outC->_L3_IfBlock1 & outC->_L14_IfBlock1;
    _2_outBGIsChangedEarly = outC->_L15_IfBlock1;
    outC->outBGIsChangedEarly = _2_outBGIsChangedEarly;
    outC->_L16_IfBlock1 = outC->_L9_IfBlock1.badBaliseFlag;
    outC->_L17_IfBlock1 = outC->_L15_IfBlock1 & outC->_L16_IfBlock1;
    /* 1 */
    updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      outC->_L17_IfBlock1,
      &outC->_L9_IfBlock1,
      &outC->Context_1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L18_IfBlock1,
      &outC->Context_1.outCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_3_outCollector,
      &outC->_L18_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &_3_outCollector);
  }
  else {
    outC->_L1_IfBlock1 = kcg_false;
    outMessageComplete = outC->_L1_IfBlock1;
    outC->outMessageComplete = outMessageComplete;
    outC->_L2_IfBlock1 = kcg_false;
    outBGIsChangedEarly = outC->_L2_IfBlock1;
    outC->outBGIsChangedEarly = outBGIsChangedEarly;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L31_IfBlock1,
      inCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector,
      &outC->_L31_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &outCollector);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkOdometry_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

