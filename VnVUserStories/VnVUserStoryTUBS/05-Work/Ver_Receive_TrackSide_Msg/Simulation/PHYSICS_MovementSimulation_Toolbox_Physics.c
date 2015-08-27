/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_MovementSimulation_Toolbox_Physics.h"

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_MovementSimulation_init_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
{
  outC->_L79 = 0;
  outC->_L77 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L75 = kcg_true;
  outC->_L74 = 0.0;
  outC->_L73 = kcg_true;
  outC->_L72 = 0.0;
  outC->_L71 = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L67 = 0;
  outC->_L66 = 0.0;
  outC->_L65 = 0.0;
  outC->_L64 = 0;
  outC->_L63 = 0.0;
  outC->_L62 = 0.0;
  outC->_L28 = kcg_true;
  outC->_L27 = 0;
  outC->_L26 = 0.0;
  outC->_L25 = 0;
  outC->_L24 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21 = 0.0;
  outC->_L15 = 0.0;
  outC->_L16 = 0.0;
  outC->_L17 = 0.0;
  outC->_L18 = 0.0;
  outC->_L19 = 0.0;
  outC->_L20 = 0.0;
  outC->_L6 = 0.0;
  outC->_L5.valid = kcg_true;
  outC->_L5.timestamp = 0;
  outC->_L5.odo.o_nominal = 0;
  outC->_L5.odo.o_min = 0;
  outC->_L5.odo.o_max = 0;
  outC->_L5.speed.v_safeNominal = 0;
  outC->_L5.speed.v_rawNominal = 0;
  outC->_L5.speed.v_lower = 0;
  outC->_L5.speed.v_upper = 0;
  outC->_L5.acceleration = 0;
  outC->_L5.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->needZeroPosition = kcg_true;
  outC->finalAccelerationInPercent = 0.0;
  outC->tmpPosition = 0.0;
  outC->tmpVelocity = 0.0;
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_sel = SSM_st_Reset_SM1;
  outC->_L6_SM1_Driving = 0.0;
  outC->_L8_SM1_Driving = 0.0;
  outC->_L16_SM1_Driving = 0.0;
  outC->_L18_SM1_Driving = 0.0;
  outC->_L19_SM1_Driving = 0.0;
  outC->_L20_SM1_Driving = 0.0;
  outC->_L21_SM1_Driving = 0.0;
  outC->_L25_SM1_Driving = kcg_true;
  outC->_L26_SM1_Driving = 0.0;
  outC->_L27_SM1_Driving = 0.0;
  outC->_L28_SM1_Driving = 0.0;
  outC->_L29_SM1_Driving = 0.0;
  outC->_L30_SM1_Driving = 0.0;
  outC->_L31_SM1_Driving = kcg_true;
  outC->_L32_SM1_Driving = 0.0;
  outC->_L34_SM1_Driving = 0.0;
  outC->_L33_SM1_Driving = 0.0;
  outC->_L35_SM1_Driving = 0;
  outC->_L2_SM1_Reset = 0.0;
  outC->_L4_SM1_Reset = 0.0;
  outC->_L1_IfBlock1 = 0.0;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L110_IfBlock1 = 0.0;
  outC->_L19_IfBlock1 = 0.0;
  outC->_L2_IfBlock1 = 0.0;
  outC->_L10_1 = kcg_true;
  outC->_L4_1 = kcg_true;
  outC->_L5_1 = kcg_true;
  outC->_L6_1 = kcg_true;
  outC->_L11_1 = kcg_true;
  outC->_L12_1 = kcg_true;
  outC->_L13_1 = kcg_true;
  outC->Set_1 = kcg_true;
  outC->Reset_1 = kcg_true;
  outC->Init_1 = kcg_true;
  outC->FFS_Output_1 = kcg_true;
  outC->SM1_state_act = SSM_st_Reset_SM1;
  outC->IfBlock1_clock = kcg_true;
  outC->ck_every = kcg_true;
  outC->_7_ck_every = kcg_true;
  outC->_8_else_clock_IfBlock1 = kcg_true;
  outC->init = kcg_true;
  outC->init6 = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_Reset_SM1;
  outC->_L14_SM1_Driving = 0.0;
  outC->_L15_SM1_Driving = 0.0;
  outC->_L2_1 = kcg_true;
  outC->resetOut = kcg_true;
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
  outC->timestamp = 0;
  outC->velocity = 0.0;
  outC->position = 0.0;
  /* 1 */ ODO_init_Toolbox_TrainModules(&outC->_5_Context_1);
  /* 1 */ m_s_To_km_h_init_Toolbox_Converters(&outC->_4_Context_1);
  /* 1 */ TRAIN_systemTimeGenerator_init_Toolbox_Functions(&outC->_3_Context_1);
  /* 2 */ m_s_To_km_h_init_Toolbox_Converters(&outC->Context_2);
  /* 1 */
  PHYSICS_acceleratedMotion_init_Toolbox_Physics_Basic(&outC->_2_Context_1);
  /* 1 */
  PHYSICS_simulateAirResistance_init_Toolbox_Physics_Basic(&outC->_1_Context_1);
  /* 1 */
  PHYSICS_simulateAccelerat_init_Toolbox_Physics_Basic(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PHYSICS_MovementSimulation_reset_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
{
  outC->init = kcg_true;
  outC->init6 = kcg_true;
  /* 1 */ ODO_reset_Toolbox_TrainModules(&outC->_5_Context_1);
  /* 1 */ m_s_To_km_h_reset_Toolbox_Converters(&outC->_4_Context_1);
  /* 1 */
  TRAIN_systemTimeGenerator_reset_Toolbox_Functions(&outC->_3_Context_1);
  /* 2 */ m_s_To_km_h_reset_Toolbox_Converters(&outC->Context_2);
  /* 1 */
  PHYSICS_acceleratedMotion_reset_Toolbox_Physics_Basic(&outC->_2_Context_1);
  /* 1 */
  PHYSICS_simulateAirResistance_reset_Toolbox_Physics_Basic(
    &outC->_1_Context_1);
  /* 1 */
  PHYSICS_simulateAccelerat_reset_Toolbox_Physics_Basic(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Physics::PHYSICS_MovementSimulation */
void PHYSICS_MovementSimulation_Toolbox_Physics(
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
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
{
  /* Toolbox::Physics::PHYSICS_MovementSimulation */ kcg_real _1_op_call;
  /* Toolbox::Physics::PHYSICS_MovementSimulation */ kcg_real op_call;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */ kcg_real _2_finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */ kcg_real finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */ kcg_real _6_finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */ kcg_real _5_finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */ kcg_real _3_finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */ kcg_real _4_finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SSM_TR_SM1 _13_SM1_fired;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ kcg_bool _12_SM1_reset_nxt;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SSM_ST_SM1 _11_SM1_state_nxt;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpPosition */ kcg_real _10_tmpPosition;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpVelocity */ kcg_real _9_tmpVelocity;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::velocity */ kcg_real _8_velocity;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::position */ kcg_real _7_position;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SSM_TR_SM1 SM1_fired;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ kcg_bool SM1_reset_nxt;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SSM_ST_SM1 SM1_state_nxt;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpPosition */ kcg_real tmpPosition;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpVelocity */ kcg_real tmpVelocity;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::velocity */ kcg_real velocity;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::position */ kcg_real position;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SSM_TR_SM1 _16_SM1_fired_strong;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ kcg_bool _15_SM1_reset_act;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SSM_ST_SM1 _14_SM1_state_act;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Reset */ kcg_bool br_1_guard_SM1_Reset;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SSM_TR_SM1 SM1_fired_strong;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ kcg_bool SM1_reset_act;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving */ kcg_bool br_1_guard_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ kcg_bool SM1_reset_sel;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ kcg_bool SM1_reset_prv;
  
  /* init_SM1 */ if (outC->init6) {
    outC->SM1_state_sel = SSM_st_Reset_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  /* sel_SM1 */ switch (outC->SM1_state_sel) {
    case SSM_st_Reset_SM1 :
      br_1_guard_SM1_Reset = kcg_true;
      if (br_1_guard_SM1_Reset) {
        _14_SM1_state_act = SSM_st_Driving_SM1;
      }
      else {
        _14_SM1_state_act = SSM_st_Reset_SM1;
      }
      outC->SM1_state_act = _14_SM1_state_act;
      break;
    case SSM_st_Driving_SM1 :
      br_1_guard_SM1_Driving = reset;
      if (br_1_guard_SM1_Driving) {
        SM1_state_act = SSM_st_Reset_SM1;
      }
      else {
        SM1_state_act = SSM_st_Driving_SM1;
      }
      outC->SM1_state_act = SM1_state_act;
      break;
    
  }
  /* init_SM1 */ if (outC->init6) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  /* sel_SM1 */ switch (outC->SM1_state_sel) {
    case SSM_st_Reset_SM1 :
      _15_SM1_reset_act = br_1_guard_SM1_Reset;
      outC->SM1_reset_act = _15_SM1_reset_act;
      break;
    case SSM_st_Driving_SM1 :
      SM1_reset_act = br_1_guard_SM1_Driving;
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  /* act_SM1 */ switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      outC->_L25_SM1_Driving = activateAirResistance;
      outC->ck_every = outC->_L25_SM1_Driving;
      outC->_L19_SM1_Driving = initialVelocity;
      /* fby_1_init_2 */ if (outC->init) {
        outC->_L8_SM1_Driving = outC->_L19_SM1_Driving;
      }
      else {
        outC->_L8_SM1_Driving = outC->_L15_SM1_Driving;
      }
      outC->_L31_SM1_Driving = activateBrakeBuildupTime;
      outC->_7_ck_every = outC->_L31_SM1_Driving;
      outC->_L29_SM1_Driving = maximumAcceleration;
      break;
    
  }
  outC->IfBlock1_clock = activateEmergencyBrakeFromEVC;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
  }
  else {
    outC->_8_else_clock_IfBlock1 = activateServiceBrakeFromEVC;
  }
  outC->_L4_1 = outC->_L2_1;
  outC->Init_1 = kcg_false;
  outC->_L10_1 = outC->Init_1;
  outC->_L71 = tractionCutOffFromEVC;
  outC->_L76 = activateServiceBrakeFromEVC;
  outC->_L77 = activateEmergencyBrakeFromEVC;
  outC->_L75 = outC->_L71 | outC->_L76 | outC->_L77;
  outC->Set_1 = outC->_L75;
  outC->_L5_1 = outC->Set_1;
  outC->_L72 = accelerationInPercent;
  outC->_L74 = 0.0;
  outC->_L73 = outC->_L72 <= outC->_L74;
  outC->Reset_1 = outC->_L73;
  outC->_L6_1 = outC->Reset_1;
  outC->_L11_1 = !outC->_L6_1;
  outC->_L12_1 = outC->_L11_1 & outC->_L4_1;
  outC->_L13_1 = outC->_L5_1 | outC->_L12_1;
  /* 1_1 */ if (outC->init6) {
    outC->_L2_1 = outC->_L10_1;
  }
  else {
    outC->_L2_1 = outC->_L13_1;
  }
  outC->FFS_Output_1 = outC->_L2_1;
  outC->_L70 = outC->FFS_Output_1;
  outC->needZeroPosition = outC->_L70;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = - 300.0;
    _2_finalAccelerationInPercent = outC->_L2_IfBlock1;
    outC->finalAccelerationInPercent = _2_finalAccelerationInPercent;
  }
  else {
    /* ck_anon_activ */ if (outC->_8_else_clock_IfBlock1) {
      outC->_L1_IfBlock1 = - 100.0;
      _4_finalAccelerationInPercent = outC->_L1_IfBlock1;
      finalAccelerationInPercent = _4_finalAccelerationInPercent;
    }
    else {
      outC->else_clock_IfBlock1 = tractionCutOffFromEVC |
        outC->needZeroPosition;
      /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
        outC->_L19_IfBlock1 = 0.0;
        _6_finalAccelerationInPercent = outC->_L19_IfBlock1;
        _3_finalAccelerationInPercent = _6_finalAccelerationInPercent;
      }
      else {
        outC->_L110_IfBlock1 = accelerationInPercent;
        _5_finalAccelerationInPercent = outC->_L110_IfBlock1;
        _3_finalAccelerationInPercent = _5_finalAccelerationInPercent;
      }
      finalAccelerationInPercent = _3_finalAccelerationInPercent;
    }
    outC->finalAccelerationInPercent = finalAccelerationInPercent;
  }
  /* act_SM1 */ switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      outC->_L16_SM1_Driving = outC->finalAccelerationInPercent;
      outC->_L21_SM1_Driving = (kcg_real) outC->_L16_SM1_Driving;
      outC->_L27_SM1_Driving = 100.0;
      outC->_L26_SM1_Driving = outC->_L21_SM1_Driving / outC->_L27_SM1_Driving;
      outC->_L28_SM1_Driving = outC->_L29_SM1_Driving * outC->_L26_SM1_Driving;
      if (outC->SM1_reset_act) {
        /* 1 */
        PHYSICS_simulateAccelerat_reset_Toolbox_Physics_Basic(&outC->Context_1);
      }
      /* ck_SM1 */ if (outC->_7_ck_every) {
        /* 1 */
        PHYSICS_simulateAccelerat_Toolbox_Physics_Basic(
          outC->_L28_SM1_Driving,
          &outC->Context_1);
        op_call = outC->Context_1.acceleration;
        outC->_L30_SM1_Driving = op_call;
      }
      else {
        outC->_L30_SM1_Driving = outC->_L28_SM1_Driving;
      }
      /* ck_SM1 */ if (outC->ck_every) {
        /* 1 */
        PHYSICS_simulateAirResistance_Toolbox_Physics_Basic(
          outC->_L8_SM1_Driving,
          outC->_L30_SM1_Driving,
          &outC->_1_Context_1);
        _1_op_call = outC->_1_Context_1.newAcceleration;
      }
      break;
    
  }
  /* init_SM1 */ if (outC->init6) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* sel_SM1 */ switch (outC->SM1_state_sel) {
    case SSM_st_Reset_SM1 :
      if (br_1_guard_SM1_Reset) {
        _16_SM1_fired_strong = SSM_TR_Reset_1_SM1;
      }
      else {
        _16_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _16_SM1_fired_strong;
      break;
    case SSM_st_Driving_SM1 :
      if (br_1_guard_SM1_Driving) {
        SM1_fired_strong = SSM_TR_Driving_1_SM1;
      }
      else {
        SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (outC->SM1_state_act) {
    case SSM_st_Reset_SM1 :
      outC->_L4_SM1_Reset = initialPosition;
      _7_position = outC->_L4_SM1_Reset;
      outC->position = _7_position;
      outC->_L2_SM1_Reset = 0.0;
      _8_velocity = outC->_L2_SM1_Reset;
      outC->velocity = _8_velocity;
      _9_tmpVelocity = outC->_L2_SM1_Reset;
      outC->tmpVelocity = _9_tmpVelocity;
      _10_tmpPosition = outC->_L4_SM1_Reset;
      outC->tmpPosition = _10_tmpPosition;
      _11_SM1_state_nxt = SSM_st_Reset_SM1;
      outC->SM1_state_nxt = _11_SM1_state_nxt;
      _12_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _12_SM1_reset_nxt;
      _13_SM1_fired = outC->SM1_fired_strong;
      outC->SM1_fired = _13_SM1_fired;
      break;
    case SSM_st_Driving_SM1 :
      /* ck_SM1 */ if (outC->ck_every) {
        outC->_L32_SM1_Driving = _1_op_call;
      }
      else {
        outC->_L32_SM1_Driving = outC->_L30_SM1_Driving;
      }
      outC->_L18_SM1_Driving = initialPosition;
      /* fby_1_init_1 */ if (outC->init) {
        outC->_L6_SM1_Driving = outC->_L18_SM1_Driving;
      }
      else {
        outC->_L6_SM1_Driving = outC->_L14_SM1_Driving;
      }
      outC->_L35_SM1_Driving = timeSinceLastCycle;
      /* 1 */
      PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
        outC->_L32_SM1_Driving,
        outC->_L6_SM1_Driving,
        outC->_L8_SM1_Driving,
        outC->_L35_SM1_Driving,
        &outC->_2_Context_1);
      outC->_L33_SM1_Driving = outC->_2_Context_1.newPosition;
      outC->_L34_SM1_Driving = outC->_2_Context_1.newVelocity;
      position = outC->_L33_SM1_Driving;
      outC->position = position;
      /* 2 */
      m_s_To_km_h_Toolbox_Converters(outC->_L34_SM1_Driving, &outC->Context_2);
      outC->_L20_SM1_Driving = outC->Context_2.km_h;
      velocity = outC->_L20_SM1_Driving;
      outC->velocity = velocity;
      tmpVelocity = outC->_L34_SM1_Driving;
      outC->tmpVelocity = tmpVelocity;
      tmpPosition = outC->_L33_SM1_Driving;
      outC->tmpPosition = tmpPosition;
      SM1_state_nxt = SSM_st_Driving_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = outC->SM1_fired_strong;
      outC->SM1_fired = SM1_fired;
      outC->_L14_SM1_Driving = tmpPosition;
      outC->_L15_SM1_Driving = tmpVelocity;
      break;
    
  }
  outC->_L79 = timeSinceLastCycle;
  /* 1 */
  TRAIN_systemTimeGenerator_Toolbox_Functions(outC->_L79, &outC->_3_Context_1);
  outC->_L67 = outC->_3_Context_1.timestamp;
  outC->timestamp = outC->_L67;
  outC->_L6 = outC->tmpVelocity;
  /* 1 */ m_s_To_km_h_Toolbox_Converters(outC->_L6, &outC->_4_Context_1);
  outC->_L26 = outC->_4_Context_1.km_h;
  outC->_L27 = (kcg_int) outC->_L26;
  outC->_L18 = accelerationInPercent;
  outC->_L16 = (kcg_real) outC->_L18;
  outC->_L17 = 100.0;
  outC->_L20 = outC->_L16 / outC->_L17;
  outC->_L19 = cMaximumAcceleration_Toolbox;
  outC->_L15 = outC->_L20 * outC->_L19;
  outC->_L66 = 100.0;
  outC->_L65 = outC->_L15 * outC->_L66;
  outC->_L25 = (kcg_int) outC->_L65;
  outC->_L63 = 100.0;
  outC->_L21 = outC->tmpPosition;
  outC->_L62 = outC->_L63 * outC->_L21;
  outC->_L64 = (kcg_int) outC->_L62;
  outC->_L24 = cabAFirst_Obu_BasicTypes_Pkg;
  /* 1 */
  ODO_Toolbox_TrainModules(
    outC->_L67,
    outC->_L27,
    outC->_L25,
    outC->_L64,
    outC->_L24,
    &outC->_5_Context_1);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L5,
    &outC->_5_Context_1.odometry);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->odometry, &outC->_L5);
  outC->_L28 = reset;
  outC->resetOut = outC->_L28;
  /* act_SM1 */ switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      outC->init = kcg_false;
      break;
    
  }
  outC->init6 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_MovementSimulation_Toolbox_Physics.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

