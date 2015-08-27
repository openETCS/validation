/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genSpeedInaccuracies_Toolbox_Functions.h"

#ifndef KCG_USER_DEFINED_INIT
void ODO_genSpeedInaccuracies_init_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC)
{
  outC->_L19 = 0.0;
  outC->_L20 = 0.0;
  outC->_L21 = 0.0;
  outC->_L18 = 0;
  outC->_L17 = 0.0;
  outC->_L16 = 0.0;
  outC->_L15 = 0;
  outC->_L14.o_nominal = 0.0;
  outC->_L14.o_min = 0.0;
  outC->_L14.o_max = 0.0;
  outC->_L13.v_safeNominal = 0;
  outC->_L13.v_rawNominal = 0;
  outC->_L13.v_lower = 0;
  outC->_L13.v_upper = 0;
  outC->_L1 = 0;
  outC->_L2 = 0.0;
  outC->_L6 = 0.0;
  outC->_L7 = 0;
  outC->_L8 = 0.0;
  outC->_L11 = 0;
  outC->_L12 = 0.0;
  outC->odometrySpeeds.v_safeNominal = 0;
  outC->odometrySpeeds.v_rawNominal = 0;
  outC->odometrySpeeds.v_lower = 0;
  outC->odometrySpeeds.v_upper = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ODO_genSpeedInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Functions::ODO_genSpeedInaccuracies */
void ODO_genSpeedInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::trueVelocity */ Speed_T_Obu_BasicTypes_Pkg trueVelocity,
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometryProperties */ odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC)
{
  kcg_copy_odometryFactors_T_Toolbox(&outC->_L14, odometryProperties);
  outC->_L20 = outC->_L14.o_min;
  outC->_L15 = trueVelocity;
  outC->_L8 = (kcg_real) outC->_L15;
  outC->_L2 = outC->_L20 * outC->_L8;
  outC->_L1 = (kcg_int) outC->_L2;
  outC->_L21 = outC->_L14.o_nominal;
  outC->_L6 = outC->_L21 * outC->_L8;
  outC->_L19 = outC->_L14.o_max;
  outC->_L12 = outC->_L19 * outC->_L8;
  outC->_L7 = (kcg_int) outC->_L12;
  outC->_L11 = (kcg_int) outC->_L6;
  outC->_L17 = 0.99;
  outC->_L16 = outC->_L17 * outC->_L12;
  outC->_L18 = (kcg_int) outC->_L16;
  outC->_L13.v_safeNominal = outC->_L18;
  outC->_L13.v_rawNominal = outC->_L11;
  outC->_L13.v_lower = outC->_L1;
  outC->_L13.v_upper = outC->_L7;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->odometrySpeeds,
    &outC->_L13);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_genSpeedInaccuracies_Toolbox_Functions.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

