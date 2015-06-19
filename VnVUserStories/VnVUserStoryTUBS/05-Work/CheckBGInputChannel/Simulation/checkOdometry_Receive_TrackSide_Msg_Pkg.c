/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkOdometry_Receive_TrackSide_Msg_Pkg.h"

void checkOdometry_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */
  updateCollectorSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_1);
  /* 2 */
  checkMaxAbsOdoDistance_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
}

/* Receive_TrackSide_Msg_Pkg::checkOdometry */
void checkOdometry_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::actualOdometry */odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */ kcg_bool _3_outMessageComplete;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */ kcg_bool _2_outBGIsChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _1_outCollector;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */ kcg_bool outMessageComplete;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */ kcg_bool outBGIsChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector;
  
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L30, inCollector);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L11, actualOdometry);
  outC->_L12 = outC->_L11.valid;
  outC->_L19 = outC->_L30.totalTelegrams;
  outC->_L21 = 0;
  outC->_L20 = outC->_L19 > outC->_L21;
  outC->_L22 = outC->_L12 & outC->_L20;
  outC->isValid = outC->_L22;
  outC->IfBlock1_clock = outC->isValid;
  if (outC->IfBlock1_clock) {
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
    outC->_L12_IfBlock1 = outC->_L9_IfBlock1.collectedTelegrams;
    outC->_L13_IfBlock1 = outC->_L9_IfBlock1.collectedTelegrams;
    outC->_L14_IfBlock1 = outC->_L12_IfBlock1 < outC->_L13_IfBlock1;
    outC->_L15_IfBlock1 = outC->_L3_IfBlock1 & outC->_L14_IfBlock1;
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
      &_1_outCollector,
      &outC->_L18_IfBlock1);
    _2_outBGIsChangedEarly = outC->_L15_IfBlock1;
    _3_outMessageComplete = outC->_L22_IfBlock1;
    outC->outMessageComplete = _3_outMessageComplete;
    outC->outBGIsChangedEarly = _2_outBGIsChangedEarly;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &_1_outCollector);
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L31_IfBlock1,
      inCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector,
      &outC->_L31_IfBlock1);
    outC->_L2_IfBlock1 = kcg_false;
    outBGIsChangedEarly = outC->_L2_IfBlock1;
    outC->_L1_IfBlock1 = kcg_false;
    outMessageComplete = outC->_L1_IfBlock1;
    outC->outMessageComplete = outMessageComplete;
    outC->outBGIsChangedEarly = outBGIsChangedEarly;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &outCollector);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkOdometry_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

