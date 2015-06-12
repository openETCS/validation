/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genSpeedInaccuracies_Toolbox_Functions.h"

void ODO_genSpeedInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC)
{
}

/* Toolbox::Functions::ODO_genSpeedInaccuracies */
void ODO_genSpeedInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::trueVelocity */Speed_T_Obu_BasicTypes_Pkg trueVelocity,
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometryProperties */odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC)
{
  kcg_copy_odometryFactors_T_Toolbox(&outC->_L14, odometryProperties);
  outC->_L19 = outC->_L14.o_max;
  outC->_L20 = outC->_L14.o_min;
  outC->_L21 = outC->_L14.o_nominal;
  outC->_L17 = 0.99;
  outC->_L15 = trueVelocity;
  outC->_L8 = (kcg_real) outC->_L15;
  outC->_L12 = outC->_L19 * outC->_L8;
  outC->_L16 = outC->_L17 * outC->_L12;
  outC->_L18 = (kcg_int) outC->_L16;
  outC->_L6 = outC->_L21 * outC->_L8;
  outC->_L11 = (kcg_int) outC->_L6;
  outC->_L2 = outC->_L20 * outC->_L8;
  outC->_L1 = (kcg_int) outC->_L2;
  outC->_L7 = (kcg_int) outC->_L12;
  outC->_L13.v_safeNominal = outC->_L18;
  outC->_L13.v_rawNominal = outC->_L11;
  outC->_L13.v_lower = outC->_L1;
  outC->_L13.v_upper = outC->_L7;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->odometrySpeeds,
    &outC->_L13);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_genSpeedInaccuracies_Toolbox_Functions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

