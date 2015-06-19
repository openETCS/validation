/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg_H_
#define _checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::isLessThanOrEqual */ isLessThanOrEqual;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* math::Abs::_L1 */ _L1_1;
  kcg_int /* math::Abs::_L2 */ _L2_1;
  kcg_int /* math::Abs::_L3 */ _L3_1;
  kcg_int /* math::Abs::_L5 */ _L5_1;
  kcg_int /* math::Abs::_L8 */ _L8_1;
  kcg_int /* math::Abs::A_Output */ A_Output_1;
  kcg_int /* math::Abs::A_Input */ A_Input_1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L2 */ _L2;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L3 */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L4 */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L5 */ _L5;
  kcg_int /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L6 */ _L6;
  kcg_int /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L7 */ _L7;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L8 */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L9 */ _L9;
  kcg_bool /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L10 */ _L10;
} outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance */
extern void checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_2 */OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_1 */OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::maxDelta */OdometryLocations_T_Obu_BasicTypes_Pkg *maxDelta,
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC);

extern void checkMaxAbsOdoDistance_reset_BasicLocationFunctions_Pkg(
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC);

#endif /* _checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

