/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */
#ifndef _MovementSimulation_Toolbox_BuildingBlocks_H_
#define _MovementSimulation_Toolbox_BuildingBlocks_H_

#include "kcg_types.h"
#include "ODO_Toolbox_TrainModules.h"
#include "PHYSICS_calculatePosition_Toolbox_Functions.h"
#include "TRAIN_systemTimeGenerator_Toolbox_Functions.h"
#include "m_s_To_km_h_Toolbox_Converters.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::position */ position;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::velocity */ velocity;
  T_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::BuildingBlocks::MovementSimulation::timestamp */ timestamp;
  odometry_T_Obu_BasicTypes_Pkg /* Toolbox::BuildingBlocks::MovementSimulation::odometry */ odometry;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::resetOut */ resetOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init4;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::FlipFlopSet::_L2 */ _L2_1;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L15 */ _L15_SM1_Driving;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L14 */ _L14_SM1_Driving;
  SSM_ST_SM1 /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SM1_state_nxt;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SM1_reset_act;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_m_s_To_km_h_Toolbox_Converters /* 2 */ _3_Context_2;
  outC_ODO_Toolbox_TrainModules /* 1 */ _2_Context_1;
  outC_m_s_To_km_h_Toolbox_Converters /* 1 */ _1_Context_1;
  outC_PHYSICS_calculatePosition_Toolbox_Functions /* 1 */ Context_1;
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions /* 2 */ Context_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::IfBlock1::else */ _5_else_clock_IfBlock1;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::IfBlock1 */ IfBlock1_clock;
  SSM_ST_SM1 /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* digital::FlipFlopSet::_L10 */ _L10_1;
  kcg_bool /* digital::FlipFlopSet::_L4 */ _L4_1;
  kcg_bool /* digital::FlipFlopSet::_L5 */ _L5_1;
  kcg_bool /* digital::FlipFlopSet::_L6 */ _L6_1;
  kcg_bool /* digital::FlipFlopSet::_L11 */ _L11_1;
  kcg_bool /* digital::FlipFlopSet::_L12 */ _L12_1;
  kcg_bool /* digital::FlipFlopSet::_L13 */ _L13_1;
  kcg_bool /* digital::FlipFlopSet::FFS_Output */ FFS_Output_1;
  kcg_bool /* digital::FlipFlopSet::Init */ Init_1;
  kcg_bool /* digital::FlipFlopSet::Reset */ Reset_1;
  kcg_bool /* digital::FlipFlopSet::Set */ Set_1;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::IfBlock1::else::else::then::_L1 */ _L16_IfBlock1;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::IfBlock1::else::else::else::_L1 */ _L17_IfBlock1;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::IfBlock1::else::else */ else_clock_IfBlock1;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::IfBlock1::else::then::_L1 */ _L1_IfBlock1;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Reset::_L4 */ _L4_SM1_Reset;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Reset::_L2 */ _L2_SM1_Reset;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L25 */ _L25_SM1_Driving;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L24 */ _L24_SM1_Driving;
  kcg_int /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L22 */ _L22_SM1_Driving;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L21 */ _L21_SM1_Driving;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L20 */ _L20_SM1_Driving;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L19 */ _L19_SM1_Driving;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L18 */ _L18_SM1_Driving;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L16 */ _L16_SM1_Driving;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L8 */ _L8_SM1_Driving;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L6 */ _L6_SM1_Driving;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L1 */ _L1_SM1_Driving;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving::_L2 */ _L2_SM1_Driving;
  SSM_ST_SM1 /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SM1_state_sel;
  SSM_TR_SM1 /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SM1_fired_strong;
  SSM_TR_SM1 /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SM1_fired;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::tmpVelocity */ tmpVelocity;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::tmpPosition */ tmpPosition;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::finalAccelerationInPercent */ finalAccelerationInPercent;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::needZeroPosition */ needZeroPosition;
  odometry_T_Obu_BasicTypes_Pkg /* Toolbox::BuildingBlocks::MovementSimulation::_L5 */ _L5;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L6 */ _L6;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L20 */ _L20;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L19 */ _L19;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L18 */ _L18;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L17 */ _L17;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L16 */ _L16;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L15 */ _L15;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L21 */ _L21;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Toolbox::BuildingBlocks::MovementSimulation::_L24 */ _L24;
  kcg_int /* Toolbox::BuildingBlocks::MovementSimulation::_L25 */ _L25;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L26 */ _L26;
  kcg_int /* Toolbox::BuildingBlocks::MovementSimulation::_L27 */ _L27;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::_L28 */ _L28;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L62 */ _L62;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L63 */ _L63;
  kcg_int /* Toolbox::BuildingBlocks::MovementSimulation::_L64 */ _L64;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L65 */ _L65;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L66 */ _L66;
  kcg_int /* Toolbox::BuildingBlocks::MovementSimulation::_L67 */ _L67;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::_L70 */ _L70;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::_L71 */ _L71;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L72 */ _L72;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::_L73 */ _L73;
  kcg_real /* Toolbox::BuildingBlocks::MovementSimulation::_L74 */ _L74;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::_L75 */ _L75;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::_L76 */ _L76;
  kcg_bool /* Toolbox::BuildingBlocks::MovementSimulation::_L77 */ _L77;
  kcg_int /* Toolbox::BuildingBlocks::MovementSimulation::_L78 */ _L78;
} outC_MovementSimulation_Toolbox_BuildingBlocks;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::BuildingBlocks::MovementSimulation */
extern void MovementSimulation_Toolbox_BuildingBlocks(
  /* Toolbox::BuildingBlocks::MovementSimulation::reset */kcg_bool reset,
  /* Toolbox::BuildingBlocks::MovementSimulation::accelerationPercent */kcg_real accelerationPercent,
  /* Toolbox::BuildingBlocks::MovementSimulation::activateServiceBrakeFromEVC */kcg_bool activateServiceBrakeFromEVC,
  /* Toolbox::BuildingBlocks::MovementSimulation::activateEmergencyBrakeFromEVC */kcg_bool activateEmergencyBrakeFromEVC,
  /* Toolbox::BuildingBlocks::MovementSimulation::initialPosition */kcg_real initialPosition,
  /* Toolbox::BuildingBlocks::MovementSimulation::initialVelocity */kcg_real initialVelocity,
  /* Toolbox::BuildingBlocks::MovementSimulation::tractionCutOffFromEVC */kcg_bool tractionCutOffFromEVC,
  /* Toolbox::BuildingBlocks::MovementSimulation::deltaSimulationTime */kcg_int deltaSimulationTime,
  /* Toolbox::BuildingBlocks::MovementSimulation::activateBrakeBuildupTime */kcg_bool activateBrakeBuildupTime,
  /* Toolbox::BuildingBlocks::MovementSimulation::activateAirResistance */kcg_bool activateAirResistance,
  outC_MovementSimulation_Toolbox_BuildingBlocks *outC);

extern void MovementSimulation_reset_Toolbox_BuildingBlocks(
  outC_MovementSimulation_Toolbox_BuildingBlocks *outC);

#endif /* _MovementSimulation_Toolbox_BuildingBlocks_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MovementSimulation_Toolbox_BuildingBlocks.h
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

