/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void checkMaxAbsOdoDistance_init_BasicLocationFunctions_Pkg(
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC)
{
  outC->_L10 = kcg_true;
  outC->_L9 = 0;
  outC->_L8.o_nominal = 0;
  outC->_L8.o_min = 0;
  outC->_L8.o_max = 0;
  outC->_L7 = 0;
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L4 = 0;
  outC->_L3.o_nominal = 0;
  outC->_L3.o_min = 0;
  outC->_L3.o_max = 0;
  outC->_L2.o_nominal = 0;
  outC->_L2.o_min = 0;
  outC->_L2.o_max = 0;
  outC->_L1_1 = kcg_true;
  outC->_L2_1 = 0;
  outC->_L3_1 = 0;
  outC->_L5_1 = 0;
  outC->_L8_1 = 0;
  outC->A_Input_1 = 0;
  outC->A_Output_1 = 0;
  outC->isLessThanOrEqual = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkMaxAbsOdoDistance_reset_BasicLocationFunctions_Pkg(
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance */
void checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_2 */ OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_1 */ OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::maxDelta */ OdometryLocations_T_Obu_BasicTypes_Pkg *maxDelta,
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L2, odo_2);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L3, odo_1);
  outC->_L4 = outC->_L2.o_nominal;
  outC->_L5 = outC->_L3.o_nominal;
  outC->_L6 = outC->_L4 - outC->_L5;
  outC->_L8_1 = 0;
  outC->A_Input_1 = outC->_L6;
  outC->_L5_1 = outC->A_Input_1;
  outC->_L1_1 = outC->_L8_1 <= outC->_L5_1;
  outC->_L3_1 = - outC->_L5_1;
  /* 2 */ if (outC->_L1_1) {
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

/* $**************** KCG Version 6.4 (build i21) ****************
** checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

