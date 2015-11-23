/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _PHYSICS_MovementSimulation_Toolbox_Physics_H_
#define _PHYSICS_MovementSimulation_Toolbox_Physics_H_

#include "kcg_types.h"
#include "ODO_Toolbox_TrainModules.h"
#include "TRAIN_systemTimeGenerator_Toolbox_Functions.h"
#include "PHYSICS_simulateAccelerat_Toolbox_Physics_Basic.h"
#include "PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.h"
#include "PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.h"
#include "m_s_To_km_h_Toolbox_Converters.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::position */ position;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::velocity */ velocity;
  T_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::Physics::PHYSICS_MovementSimulation::timestamp */ timestamp;
  odometry_T_Obu_BasicTypes_Pkg /* Toolbox::Physics::PHYSICS_MovementSimulation::odometry */ odometry;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::resetOut */ resetOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init6;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::FlipFlopSet::_L2 */ _L2_1;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L15 */ _L15_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L14 */ _L14_SM1_Driving;
  SSM_ST_SM1 /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SM1_state_nxt;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SM1_reset_act;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ODO_Toolbox_TrainModules /* 1 */ _5_Context_1;
  outC_m_s_To_km_h_Toolbox_Converters /* 1 */ _4_Context_1;
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions /* 1 */ _3_Context_1;
  outC_m_s_To_km_h_Toolbox_Converters /* 2 */ Context_2;
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic /* 1 */ _2_Context_1;
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic /* 1 */ _1_Context_1;
  outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else */ _8_else_clock_IfBlock1;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ _7_ck_every;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ ck_every;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1 */ IfBlock1_clock;
  SSM_ST_SM1 /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* digital::FlipFlopSet::FFS_Output */ FFS_Output_1;
  kcg_bool /* digital::FlipFlopSet::Init */ Init_1;
  kcg_bool /* digital::FlipFlopSet::Reset */ Reset_1;
  kcg_bool /* digital::FlipFlopSet::Set */ Set_1;
  kcg_bool /* digital::FlipFlopSet::_L13 */ _L13_1;
  kcg_bool /* digital::FlipFlopSet::_L12 */ _L12_1;
  kcg_bool /* digital::FlipFlopSet::_L11 */ _L11_1;
  kcg_bool /* digital::FlipFlopSet::_L6 */ _L6_1;
  kcg_bool /* digital::FlipFlopSet::_L5 */ _L5_1;
  kcg_bool /* digital::FlipFlopSet::_L4 */ _L4_1;
  kcg_bool /* digital::FlipFlopSet::_L10 */ _L10_1;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else::else::then::_L1 */ _L19_IfBlock1;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else::else::else::_L1 */ _L110_IfBlock1;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else::else */ else_clock_IfBlock1;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else::then::_L1 */ _L1_IfBlock1;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Reset::_L4 */ _L4_SM1_Reset;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Reset::_L2 */ _L2_SM1_Reset;
  kcg_int /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L35 */ _L35_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L33 */ _L33_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L34 */ _L34_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L32 */ _L32_SM1_Driving;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L31 */ _L31_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L30 */ _L30_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L29 */ _L29_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L28 */ _L28_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L27 */ _L27_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L26 */ _L26_SM1_Driving;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L25 */ _L25_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L21 */ _L21_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L20 */ _L20_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L19 */ _L19_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L18 */ _L18_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L16 */ _L16_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L8 */ _L8_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L6 */ _L6_SM1_Driving;
  SSM_ST_SM1 /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SM1_state_sel;
  SSM_TR_SM1 /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SM1_fired_strong;
  SSM_TR_SM1 /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SM1_fired;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpVelocity */ tmpVelocity;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpPosition */ tmpPosition;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */ finalAccelerationInPercent;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::needZeroPosition */ needZeroPosition;
  odometry_T_Obu_BasicTypes_Pkg /* Toolbox::Physics::PHYSICS_MovementSimulation::_L5 */ _L5;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L6 */ _L6;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L20 */ _L20;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L19 */ _L19;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L18 */ _L18;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L17 */ _L17;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L16 */ _L16;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L15 */ _L15;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L21 */ _L21;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Toolbox::Physics::PHYSICS_MovementSimulation::_L24 */ _L24;
  kcg_int /* Toolbox::Physics::PHYSICS_MovementSimulation::_L25 */ _L25;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L26 */ _L26;
  kcg_int /* Toolbox::Physics::PHYSICS_MovementSimulation::_L27 */ _L27;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::_L28 */ _L28;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L62 */ _L62;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L63 */ _L63;
  kcg_int /* Toolbox::Physics::PHYSICS_MovementSimulation::_L64 */ _L64;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L65 */ _L65;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L66 */ _L66;
  kcg_int /* Toolbox::Physics::PHYSICS_MovementSimulation::_L67 */ _L67;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::_L70 */ _L70;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::_L71 */ _L71;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L72 */ _L72;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::_L73 */ _L73;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::_L74 */ _L74;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::_L75 */ _L75;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::_L76 */ _L76;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::_L77 */ _L77;
  kcg_int /* Toolbox::Physics::PHYSICS_MovementSimulation::_L79 */ _L79;
} outC_PHYSICS_MovementSimulation_Toolbox_Physics;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::PHYSICS_MovementSimulation */
extern void PHYSICS_MovementSimulation_Toolbox_Physics(
  /* Toolbox::Physics::PHYSICS_MovementSimulation::reset */ kcg_bool reset,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::accelerationInPercent */ kcg_real accelerationInPercent,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tractionCutOffFromEVC */ kcg_bool tractionCutOffFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateServiceBrakeFromEVC */ kcg_bool activateServiceBrakeFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateEmergencyBrakeFromEVC */ kcg_bool activateEmergencyBrakeFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::initialPosition */ kcg_real initialPosition,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::initialVelocity */ kcg_real initialVelocity,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::timeSinceLastCycle */ kcg_int timeSinceLastCycle,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateBrakeBuildupTime */ kcg_bool activateBrakeBuildupTime,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateAirResistance */ kcg_bool activateAirResistance,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::maximumAcceleration */ kcg_real maximumAcceleration,
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PHYSICS_MovementSimulation_reset_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PHYSICS_MovementSimulation_init_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _PHYSICS_MovementSimulation_Toolbox_Physics_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_MovementSimulation_Toolbox_Physics.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

