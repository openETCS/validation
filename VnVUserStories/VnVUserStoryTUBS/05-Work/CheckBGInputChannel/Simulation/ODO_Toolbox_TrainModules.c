/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_Toolbox_TrainModules.h"

void ODO_reset_Toolbox_TrainModules(outC_ODO_Toolbox_TrainModules *outC)
{
  /* 1 */
  ODO_genOdometryInaccuracies_reset_Toolbox_Functions(&outC->_1_Context_1);
  /* 1 */ ODO_genSpeedInaccuracies_reset_Toolbox_Functions(&outC->Context_1);
}

/* Toolbox::TrainModules::ODO */
void ODO_Toolbox_TrainModules(
  /* Toolbox::TrainModules::ODO::timestamp */T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* Toolbox::TrainModules::ODO::velocity */Speed_T_Obu_BasicTypes_Pkg velocity,
  /* Toolbox::TrainModules::ODO::acceleration */A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* Toolbox::TrainModules::ODO::position */L_internal_Type_Obu_BasicTypes_Pkg position,
  /* Toolbox::TrainModules::ODO::motionDirection */odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  outC_ODO_Toolbox_TrainModules *outC)
{
  kcg_copy_odometryFactors_T_Toolbox(
    &outC->_L21,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox);
  outC->_L6 = velocity;
  /* 1 */
  ODO_genSpeedInaccuracies_Toolbox_Functions(
    outC->_L6,
    &outC->_L21,
    &outC->Context_1);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->_L20,
    &outC->Context_1.odometrySpeeds);
  outC->_L19 = motionDirection;
  outC->_L18 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L17 = Motion_Obu_BasicTypes_Pkg;
  outC->_L16 = 0;
  outC->_L15 = velocity;
  outC->_L14 = outC->_L15 > outC->_L16;
  if (outC->_L14) {
    outC->_L13 = outC->_L17;
  }
  else {
    outC->_L13 = outC->_L18;
  }
  kcg_copy_odometryFactors_T_Toolbox(
    &outC->_L11,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox);
  outC->_L10 = position;
  /* 1 */
  ODO_genOdometryInaccuracies_Toolbox_Functions(
    outC->_L10,
    &outC->_L11,
    &outC->_1_Context_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L9,
    &outC->_1_Context_1.odometryLocations);
  outC->_L7 = acceleration;
  outC->_L5 = timestamp;
  outC->_L4 = kcg_true;
  outC->_L1.valid = outC->_L4;
  outC->_L1.timestamp = outC->_L5;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L1.odo, &outC->_L9);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->_L1.speed, &outC->_L20);
  outC->_L1.acceleration = outC->_L7;
  outC->_L1.motionState = outC->_L13;
  outC->_L1.motionDirection = outC->_L19;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->odometry, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_Toolbox_TrainModules.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

