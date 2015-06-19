/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MovementSimulation_Toolbox_BuildingBlocks.h"

void MovementSimulation_reset_Toolbox_BuildingBlocks(
  outC_MovementSimulation_Toolbox_BuildingBlocks *outC)
{
  outC->init = kcg_true;
  outC->init4 = kcg_true;
  /* 2 */ m_s_To_km_h_reset_Toolbox_Converters(&outC->_3_Context_2);
  /* 1 */ ODO_reset_Toolbox_TrainModules(&outC->_2_Context_1);
  /* 1 */ m_s_To_km_h_reset_Toolbox_Converters(&outC->_1_Context_1);
  /* 1 */ PHYSICS_calculatePosition_reset_Toolbox_Functions(&outC->Context_1);
  /* 2 */ TRAIN_systemTimeGenerator_reset_Toolbox_Functions(&outC->Context_2);
}

/* Toolbox::BuildingBlocks::MovementSimulation */
void MovementSimulation_Toolbox_BuildingBlocks(
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
  outC_MovementSimulation_Toolbox_BuildingBlocks *outC)
{
  /* Toolbox::BuildingBlocks::MovementSimulation::finalAccelerationInPercent */ kcg_real _1_finalAccelerationInPercent;
  /* Toolbox::BuildingBlocks::MovementSimulation::finalAccelerationInPercent */ kcg_real finalAccelerationInPercent;
  /* Toolbox::BuildingBlocks::MovementSimulation::finalAccelerationInPercent */ kcg_real _5_finalAccelerationInPercent;
  /* Toolbox::BuildingBlocks::MovementSimulation::finalAccelerationInPercent */ kcg_real _4_finalAccelerationInPercent;
  /* Toolbox::BuildingBlocks::MovementSimulation::finalAccelerationInPercent */ kcg_real _2_finalAccelerationInPercent;
  /* Toolbox::BuildingBlocks::MovementSimulation::finalAccelerationInPercent */ kcg_real _3_finalAccelerationInPercent;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SSM_TR_SM1 _12_SM1_fired;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ kcg_bool _11_SM1_reset_nxt;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SSM_ST_SM1 _10_SM1_state_nxt;
  /* Toolbox::BuildingBlocks::MovementSimulation::tmpPosition */ kcg_real _9_tmpPosition;
  /* Toolbox::BuildingBlocks::MovementSimulation::tmpVelocity */ kcg_real _8_tmpVelocity;
  /* Toolbox::BuildingBlocks::MovementSimulation::velocity */ kcg_real _7_velocity;
  /* Toolbox::BuildingBlocks::MovementSimulation::position */ kcg_real _6_position;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SSM_TR_SM1 SM1_fired;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ kcg_bool SM1_reset_nxt;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SSM_ST_SM1 SM1_state_nxt;
  /* Toolbox::BuildingBlocks::MovementSimulation::tmpPosition */ kcg_real tmpPosition;
  /* Toolbox::BuildingBlocks::MovementSimulation::tmpVelocity */ kcg_real tmpVelocity;
  /* Toolbox::BuildingBlocks::MovementSimulation::velocity */ kcg_real velocity;
  /* Toolbox::BuildingBlocks::MovementSimulation::position */ kcg_real position;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SSM_TR_SM1 _15_SM1_fired_strong;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ kcg_bool _14_SM1_reset_act;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SSM_ST_SM1 _13_SM1_state_act;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Reset */ kcg_bool br_1_guard_SM1_Reset;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SSM_TR_SM1 SM1_fired_strong;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ kcg_bool SM1_reset_act;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1::Driving */ kcg_bool br_1_guard_SM1_Driving;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ kcg_bool SM1_reset_sel;
  /* Toolbox::BuildingBlocks::MovementSimulation::SM1 */ kcg_bool SM1_reset_prv;
  
  if (outC->init4) {
    outC->SM1_state_sel = SSM_st_Reset_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Reset_SM1 :
      br_1_guard_SM1_Reset = kcg_true;
      if (br_1_guard_SM1_Reset) {
        _13_SM1_state_act = SSM_st_Driving_SM1;
      }
      else {
        _13_SM1_state_act = SSM_st_Reset_SM1;
      }
      outC->SM1_state_act = _13_SM1_state_act;
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
  if (outC->init4) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Reset_SM1 :
      _14_SM1_reset_act = br_1_guard_SM1_Reset;
      outC->SM1_reset_act = _14_SM1_reset_act;
      break;
    case SSM_st_Driving_SM1 :
      SM1_reset_act = br_1_guard_SM1_Driving;
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      break;
    
  }
  outC->Init_1 = kcg_false;
  outC->_L72 = accelerationPercent;
  outC->_L74 = 0.0;
  outC->_L73 = outC->_L72 <= outC->_L74;
  outC->Reset_1 = outC->_L73;
  outC->_L78 = deltaSimulationTime;
  outC->_L77 = activateEmergencyBrakeFromEVC;
  outC->_L76 = activateServiceBrakeFromEVC;
  outC->_L71 = tractionCutOffFromEVC;
  outC->_L75 = outC->_L71 | outC->_L76 | outC->_L77;
  outC->_L4_1 = outC->_L2_1;
  outC->_L10_1 = outC->Init_1;
  outC->Set_1 = outC->_L75;
  outC->_L5_1 = outC->Set_1;
  outC->_L6_1 = outC->Reset_1;
  outC->_L11_1 = !outC->_L6_1;
  outC->_L12_1 = outC->_L11_1 & outC->_L4_1;
  outC->_L13_1 = outC->_L5_1 | outC->_L12_1;
  if (outC->init4) {
    outC->_L2_1 = outC->_L10_1;
  }
  else {
    outC->_L2_1 = outC->_L13_1;
  }
  outC->FFS_Output_1 = outC->_L2_1;
  outC->_L70 = outC->FFS_Output_1;
  outC->needZeroPosition = outC->_L70;
  /* 2 */
  TRAIN_systemTimeGenerator_Toolbox_Functions(outC->_L78, &outC->Context_2);
  outC->_L67 = outC->Context_2.timestamp;
  outC->IfBlock1_clock = activateEmergencyBrakeFromEVC;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = - 300.0;
    _1_finalAccelerationInPercent = outC->_L2_IfBlock1;
    outC->finalAccelerationInPercent = _1_finalAccelerationInPercent;
  }
  else {
    outC->_5_else_clock_IfBlock1 = activateServiceBrakeFromEVC;
    if (outC->_5_else_clock_IfBlock1) {
      outC->_L1_IfBlock1 = - 100.0;
      _3_finalAccelerationInPercent = outC->_L1_IfBlock1;
      finalAccelerationInPercent = _3_finalAccelerationInPercent;
    }
    else {
      outC->else_clock_IfBlock1 = tractionCutOffFromEVC |
        outC->needZeroPosition;
      if (outC->else_clock_IfBlock1) {
        outC->_L16_IfBlock1 = 0.0;
        _5_finalAccelerationInPercent = outC->_L16_IfBlock1;
        _2_finalAccelerationInPercent = _5_finalAccelerationInPercent;
      }
      else {
        outC->_L17_IfBlock1 = accelerationPercent;
        _4_finalAccelerationInPercent = outC->_L17_IfBlock1;
        _2_finalAccelerationInPercent = _4_finalAccelerationInPercent;
      }
      finalAccelerationInPercent = _2_finalAccelerationInPercent;
    }
    outC->finalAccelerationInPercent = finalAccelerationInPercent;
  }
  outC->_L66 = 100.0;
  outC->_L18 = accelerationPercent;
  outC->_L16 = (kcg_real) outC->_L18;
  outC->_L17 = 100.0;
  outC->_L20 = outC->_L16 / outC->_L17;
  outC->_L19 = 0.5;
  outC->_L15 = outC->_L20 * outC->_L19;
  outC->_L65 = outC->_L15 * outC->_L66;
  outC->_L63 = 100.0;
  switch (outC->SM1_state_act) {
    case SSM_st_Reset_SM1 :
      outC->_L4_SM1_Reset = initialPosition;
      _9_tmpPosition = outC->_L4_SM1_Reset;
      outC->tmpPosition = _9_tmpPosition;
      break;
    case SSM_st_Driving_SM1 :
      outC->_L16_SM1_Driving = outC->finalAccelerationInPercent;
      outC->_L21_SM1_Driving = (kcg_real) outC->_L16_SM1_Driving;
      outC->_L22_SM1_Driving = deltaSimulationTime;
      outC->_L18_SM1_Driving = initialPosition;
      if (outC->init) {
        outC->_L6_SM1_Driving = outC->_L18_SM1_Driving;
      }
      else {
        outC->_L6_SM1_Driving = outC->_L14_SM1_Driving;
      }
      outC->_L19_SM1_Driving = initialVelocity;
      if (outC->init) {
        outC->_L8_SM1_Driving = outC->_L19_SM1_Driving;
      }
      else {
        outC->_L8_SM1_Driving = outC->_L15_SM1_Driving;
      }
      outC->_L24_SM1_Driving = activateBrakeBuildupTime;
      outC->_L25_SM1_Driving = activateAirResistance;
      if (outC->SM1_reset_act) {
        /* 1 */
        PHYSICS_calculatePosition_reset_Toolbox_Functions(&outC->Context_1);
      }
      /* 1 */
      PHYSICS_calculatePosition_Toolbox_Functions(
        outC->_L21_SM1_Driving,
        outC->_L22_SM1_Driving,
        outC->_L6_SM1_Driving,
        outC->_L8_SM1_Driving,
        outC->_L24_SM1_Driving,
        outC->_L25_SM1_Driving,
        &outC->Context_1);
      outC->_L1_SM1_Driving = outC->Context_1.position;
      outC->_L2_SM1_Driving = outC->Context_1.velocity;
      tmpPosition = outC->_L1_SM1_Driving;
      outC->tmpPosition = tmpPosition;
      break;
    
  }
  outC->_L21 = outC->tmpPosition;
  outC->_L62 = outC->_L63 * outC->_L21;
  outC->_L64 = (kcg_int) outC->_L62;
  outC->_L28 = reset;
  outC->resetOut = outC->_L28;
  switch (outC->SM1_state_act) {
    case SSM_st_Reset_SM1 :
      outC->_L2_SM1_Reset = 0.0;
      _8_tmpVelocity = outC->_L2_SM1_Reset;
      outC->tmpVelocity = _8_tmpVelocity;
      break;
    case SSM_st_Driving_SM1 :
      tmpVelocity = outC->_L2_SM1_Driving;
      outC->tmpVelocity = tmpVelocity;
      break;
    
  }
  outC->_L6 = outC->tmpVelocity;
  /* 1 */ m_s_To_km_h_Toolbox_Converters(outC->_L6, &outC->_1_Context_1);
  outC->_L26 = outC->_1_Context_1.km_h;
  outC->_L27 = (kcg_int) outC->_L26;
  outC->_L25 = (kcg_int) outC->_L65;
  outC->_L24 = cabAFirst_Obu_BasicTypes_Pkg;
  /* 1 */
  ODO_Toolbox_TrainModules(
    outC->_L67,
    outC->_L27,
    outC->_L25,
    outC->_L64,
    outC->_L24,
    &outC->_2_Context_1);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L5,
    &outC->_2_Context_1.odometry);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->odometry, &outC->_L5);
  outC->timestamp = outC->_L67;
  switch (outC->SM1_state_sel) {
    case SSM_st_Reset_SM1 :
      if (br_1_guard_SM1_Reset) {
        _15_SM1_fired_strong = SSM_TR_Reset_1_SM1;
      }
      else {
        _15_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _15_SM1_fired_strong;
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
  switch (outC->SM1_state_act) {
    case SSM_st_Reset_SM1 :
      _12_SM1_fired = outC->SM1_fired_strong;
      _11_SM1_reset_nxt = kcg_false;
      _10_SM1_state_nxt = SSM_st_Reset_SM1;
      _7_velocity = outC->_L2_SM1_Reset;
      _6_position = outC->_L4_SM1_Reset;
      outC->SM1_fired = _12_SM1_fired;
      break;
    case SSM_st_Driving_SM1 :
      SM1_fired = outC->SM1_fired_strong;
      SM1_reset_nxt = kcg_false;
      SM1_state_nxt = SSM_st_Driving_SM1;
      /* 2 */
      m_s_To_km_h_Toolbox_Converters(
        outC->_L2_SM1_Driving,
        &outC->_3_Context_2);
      outC->_L20_SM1_Driving = outC->_3_Context_2.km_h;
      outC->_L15_SM1_Driving = tmpVelocity;
      outC->_L14_SM1_Driving = tmpPosition;
      velocity = outC->_L20_SM1_Driving;
      position = outC->_L1_SM1_Driving;
      outC->SM1_fired = SM1_fired;
      break;
    
  }
  if (outC->init4) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Reset_SM1 :
      outC->SM1_reset_nxt = _11_SM1_reset_nxt;
      outC->SM1_state_nxt = _10_SM1_state_nxt;
      outC->velocity = _7_velocity;
      outC->position = _6_position;
      break;
    case SSM_st_Driving_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt;
      outC->SM1_state_nxt = SM1_state_nxt;
      outC->velocity = velocity;
      outC->position = position;
      outC->init = kcg_false;
      break;
    
  }
  outC->init4 = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MovementSimulation_Toolbox_BuildingBlocks.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

