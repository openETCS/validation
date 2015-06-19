/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _checkOdometry_Receive_TrackSide_Msg_Pkg_H_
#define _checkOdometry_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */ outMessageComplete;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */ outBGIsChangedEarly;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */ outCollector;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport /* 1 */ Context_1;
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg /* 2 */ Context_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L22 */ _L22_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L21 */ _L21_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L20 */ _L20_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L19 */ _L19_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L18 */ _L18_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L17 */ _L17_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L16 */ _L16_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L15 */ _L15_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L14 */ _L14_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L13 */ _L13_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L12 */ _L12_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L11 */ _L11_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L9 */ _L9_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L10 */ _L10_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L5 */ _L5_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L6 */ _L6_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L7 */ _L7_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::else::_L3 */ _L31_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::else::_L2 */ _L2_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::else::_L1 */ _L1_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::isValid */ isValid;
  odometry_T_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L11 */ _L11;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L12 */ _L12;
  kcg_int /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L19 */ _L19;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L20 */ _L20;
  kcg_int /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L21 */ _L21;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L22 */ _L22;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L30 */ _L30;
} outC_checkOdometry_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::checkOdometry */
extern void checkOdometry_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::actualOdometry */odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC);

extern void checkOdometry_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC);

#endif /* _checkOdometry_Receive_TrackSide_Msg_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkOdometry_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

