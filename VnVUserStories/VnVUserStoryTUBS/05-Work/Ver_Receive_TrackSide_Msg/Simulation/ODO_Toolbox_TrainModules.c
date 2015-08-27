/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_Toolbox_TrainModules.h"

#ifndef KCG_USER_DEFINED_INIT
void ODO_init_Toolbox_TrainModules(outC_ODO_Toolbox_TrainModules *outC)
{
  outC->_L21.o_nominal = 0.0;
  outC->_L21.o_min = 0.0;
  outC->_L21.o_max = 0.0;
  outC->_L20.v_safeNominal = 0;
  outC->_L20.v_rawNominal = 0;
  outC->_L20.v_lower = 0;
  outC->_L20.v_upper = 0;
  outC->_L19 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L17 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L16 = 0;
  outC->_L15 = 0;
  outC->_L14 = kcg_true;
  outC->_L13 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.o_nominal = 0.0;
  outC->_L11.o_min = 0.0;
  outC->_L11.o_max = 0.0;
  outC->_L10 = 0;
  outC->_L9.o_nominal = 0;
  outC->_L9.o_min = 0;
  outC->_L9.o_max = 0;
  outC->_L7 = 0;
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L4 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.timestamp = 0;
  outC->_L1.odo.o_nominal = 0;
  outC->_L1.odo.o_min = 0;
  outC->_L1.odo.o_max = 0;
  outC->_L1.speed.v_safeNominal = 0;
  outC->_L1.speed.v_rawNominal = 0;
  outC->_L1.speed.v_lower = 0;
  outC->_L1.speed.v_upper = 0;
  outC->_L1.acceleration = 0;
  outC->_L1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->odometry.valid = kcg_true;
  outC->odometry.timestamp = 0;
  outC->odometry.odo.o_nominal = 0;
  outC->odometry.odo.o_min = 0;
  outC->odometry.odo.o_max = 0;
  outC->odometry.speed.v_safeNominal = 0;
  outC->odometry.speed.v_rawNominal = 0;
  outC->odometry.speed.v_lower = 0;
  outC->odometry.speed.v_upper = 0;
  outC->odometry.acceleration = 0;
  outC->odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  /* 1 */ ODO_genSpeedInaccuracies_init_Toolbox_Functions(&outC->_1_Context_1);
  /* 1 */ ODO_genOdometryInaccuracies_init_Toolbox_Functions(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ODO_reset_Toolbox_TrainModules(outC_ODO_Toolbox_TrainModules *outC)
{
  /* 1 */ ODO_genSpeedInaccuracies_reset_Toolbox_Functions(&outC->_1_Context_1);
  /* 1 */ ODO_genOdometryInaccuracies_reset_Toolbox_Functions(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::TrainModules::ODO */
void ODO_Toolbox_TrainModules(
  /* Toolbox::TrainModules::ODO::timestamp */ T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* Toolbox::TrainModules::ODO::velocity */ Speed_T_Obu_BasicTypes_Pkg velocity,
  /* Toolbox::TrainModules::ODO::acceleration */ A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* Toolbox::TrainModules::ODO::position */ L_internal_Type_Obu_BasicTypes_Pkg position,
  /* Toolbox::TrainModules::ODO::motionDirection */ odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  outC_ODO_Toolbox_TrainModules *outC)
{
  outC->_L4 = kcg_true;
  outC->_L5 = timestamp;
  outC->_L10 = position;
  kcg_copy_odometryFactors_T_Toolbox(
    &outC->_L11,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox);
  /* 1 */
  ODO_genOdometryInaccuracies_Toolbox_Functions(
    outC->_L10,
    &outC->_L11,
    &outC->Context_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L9,
    &outC->Context_1.odometryLocations);
  outC->_L6 = velocity;
  kcg_copy_odometryFactors_T_Toolbox(
    &outC->_L21,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox);
  /* 1 */
  ODO_genSpeedInaccuracies_Toolbox_Functions(
    outC->_L6,
    &outC->_L21,
    &outC->_1_Context_1);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->_L20,
    &outC->_1_Context_1.odometrySpeeds);
  outC->_L7 = acceleration;
  outC->_L15 = velocity;
  outC->_L16 = 0;
  outC->_L14 = outC->_L15 > outC->_L16;
  outC->_L17 = Motion_Obu_BasicTypes_Pkg;
  outC->_L18 = noMotion_Obu_BasicTypes_Pkg;
  /* 1 */ if (outC->_L14) {
    outC->_L13 = outC->_L17;
  }
  else {
    outC->_L13 = outC->_L18;
  }
  outC->_L19 = motionDirection;
  outC->_L1.valid = outC->_L4;
  outC->_L1.timestamp = outC->_L5;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L1.odo, &outC->_L9);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->_L1.speed, &outC->_L20);
  outC->_L1.acceleration = outC->_L7;
  outC->_L1.motionState = outC->_L13;
  outC->_L1.motionDirection = outC->_L19;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->odometry, &outC->_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_Toolbox_TrainModules.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

