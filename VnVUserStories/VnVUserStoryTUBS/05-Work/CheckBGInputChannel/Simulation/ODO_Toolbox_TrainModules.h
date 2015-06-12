/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */
#ifndef _ODO_Toolbox_TrainModules_H_
#define _ODO_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "ODO_genOdometryInaccuracies_Toolbox_Functions.h"
#include "ODO_genSpeedInaccuracies_Toolbox_Functions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::odometry */ odometry;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions /* 1 */ _1_Context_1;
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L1 */ _L1;
  kcg_bool /* Toolbox::TrainModules::ODO::_L4 */ _L4;
  T_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L5 */ _L5;
  Speed_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L6 */ _L6;
  A_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L7 */ _L7;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L9 */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L10 */ _L10;
  odometryFactors_T_Toolbox /* Toolbox::TrainModules::ODO::_L11 */ _L11;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L13 */ _L13;
  kcg_bool /* Toolbox::TrainModules::ODO::_L14 */ _L14;
  Speed_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L15 */ _L15;
  kcg_int /* Toolbox::TrainModules::ODO::_L16 */ _L16;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L17 */ _L17;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L18 */ _L18;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L19 */ _L19;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::ODO::_L20 */ _L20;
  odometryFactors_T_Toolbox /* Toolbox::TrainModules::ODO::_L21 */ _L21;
} outC_ODO_Toolbox_TrainModules;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TrainModules::ODO */
extern void ODO_Toolbox_TrainModules(
  /* Toolbox::TrainModules::ODO::timestamp */T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* Toolbox::TrainModules::ODO::velocity */Speed_T_Obu_BasicTypes_Pkg velocity,
  /* Toolbox::TrainModules::ODO::acceleration */A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* Toolbox::TrainModules::ODO::position */L_internal_Type_Obu_BasicTypes_Pkg position,
  /* Toolbox::TrainModules::ODO::motionDirection */odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  outC_ODO_Toolbox_TrainModules *outC);

extern void ODO_reset_Toolbox_TrainModules(outC_ODO_Toolbox_TrainModules *outC);

#endif /* _ODO_Toolbox_TrainModules_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_Toolbox_TrainModules.h
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

