/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

void checkMaxAbsOdoDistance_reset_BasicLocationFunctions_Pkg(
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC)
{
}

/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance */
void checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_2 */OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_1 */OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::maxDelta */OdometryLocations_T_Obu_BasicTypes_Pkg *maxDelta,
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC)
{
  outC->_L8_1 = 0;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L2, odo_2);
  outC->_L4 = outC->_L2.o_nominal;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L3, odo_1);
  outC->_L5 = outC->_L3.o_nominal;
  outC->_L6 = outC->_L4 - outC->_L5;
  outC->A_Input_1 = outC->_L6;
  outC->_L5_1 = outC->A_Input_1;
  outC->_L1_1 = outC->_L8_1 <= outC->_L5_1;
  outC->_L3_1 = - outC->_L5_1;
  if (outC->_L1_1) {
    outC->_L2_1 = outC->_L5_1;
  }
  else {
    outC->_L2_1 = outC->_L3_1;
  }
  outC->A_Output_1 = outC->_L2_1;
  outC->_L7 = outC->A_Output_1;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L8, maxDelta);
  outC->_L9 = outC->_L8.o_nominal;
  outC->_L10 = outC->_L7 <= outC->_L9;
  outC->isLessThanOrEqual = outC->_L10;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

