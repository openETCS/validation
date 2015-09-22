/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genOdometryInaccuracies_Toolbox_Functions.h"

#ifndef KCG_USER_DEFINED_INIT
void ODO_genOdometryInaccuracies_init_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC)
{
  outC->_L34 = 0.0;
  outC->_L35 = 0.0;
  outC->_L36 = 0.0;
  outC->_L33.o_nominal = 0.0;
  outC->_L33.o_min = 0.0;
  outC->_L33.o_max = 0.0;
  outC->_L22 = 0.0;
  outC->_L21 = 0.0;
  outC->_L20 = 0.0;
  outC->_L19 = 0;
  outC->_L18 = 0;
  outC->_L17 = 0;
  outC->_L16 = 0.0;
  outC->_L8.o_nominal = 0;
  outC->_L8.o_min = 0;
  outC->_L8.o_max = 0;
  outC->_L1 = 0;
  outC->odometryLocations.o_nominal = 0;
  outC->odometryLocations.o_min = 0;
  outC->odometryLocations.o_max = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ODO_genOdometryInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Functions::ODO_genOdometryInaccuracies */
void ODO_genOdometryInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::trueLocation */ L_internal_Type_Obu_BasicTypes_Pkg trueLocation,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryProperties */ odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC)
{
  outC->_L1 = trueLocation;
  kcg_copy_odometryFactors_T_Toolbox(&outC->_L33, odometryProperties);
  outC->_L36 = outC->_L33.o_nominal;
  outC->_L16 = (kcg_real) outC->_L1;
  outC->_L20 = outC->_L36 * outC->_L16;
  outC->_L17 = (kcg_int) outC->_L20;
  outC->_L35 = outC->_L33.o_min;
  outC->_L21 = outC->_L35 * outC->_L16;
  outC->_L18 = (kcg_int) outC->_L21;
  outC->_L34 = outC->_L33.o_max;
  outC->_L22 = outC->_L34 * outC->_L16;
  outC->_L19 = (kcg_int) outC->_L22;
  outC->_L8.o_nominal = outC->_L17;
  outC->_L8.o_min = outC->_L18;
  outC->_L8.o_max = outC->_L19;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->odometryLocations,
    &outC->_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_genOdometryInaccuracies_Toolbox_Functions.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

