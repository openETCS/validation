/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genOdometryInaccuracies_Toolbox_Functions.h"

void ODO_genOdometryInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC)
{
}

/* Toolbox::Functions::ODO_genOdometryInaccuracies */
void ODO_genOdometryInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::trueLocation */L_internal_Type_Obu_BasicTypes_Pkg trueLocation,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryProperties */odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC)
{
  kcg_copy_odometryFactors_T_Toolbox(&outC->_L33, odometryProperties);
  outC->_L34 = outC->_L33.o_max;
  outC->_L35 = outC->_L33.o_min;
  outC->_L36 = outC->_L33.o_nominal;
  outC->_L1 = trueLocation;
  outC->_L16 = (kcg_real) outC->_L1;
  outC->_L20 = outC->_L36 * outC->_L16;
  outC->_L17 = (kcg_int) outC->_L20;
  outC->_L21 = outC->_L35 * outC->_L16;
  outC->_L18 = (kcg_int) outC->_L21;
  outC->_L22 = outC->_L34 * outC->_L16;
  outC->_L19 = (kcg_int) outC->_L22;
  outC->_L8.o_nominal = outC->_L17;
  outC->_L8.o_min = outC->_L18;
  outC->_L8.o_max = outC->_L19;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->odometryLocations,
    &outC->_L8);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_genOdometryInaccuracies_Toolbox_Functions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

