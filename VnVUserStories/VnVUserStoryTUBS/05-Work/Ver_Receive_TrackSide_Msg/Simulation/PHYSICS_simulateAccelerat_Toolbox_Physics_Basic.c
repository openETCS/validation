/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_simulateAccelerat_Toolbox_Physics_Basic.h"

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_simulateAccelerat_init_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic *outC)
{
  outC->_L9 = 0.0;
  outC->_L8 = 0.0;
  outC->_L7 = 0.0;
  outC->_L6 = 0.0;
  outC->_L5 = 0.0;
  outC->_L3 = 0.0;
  outC->_L2 = 0.0;
  outC->_L1 = 0.0;
  outC->init = kcg_true;
  outC->currentAcceleration = 0.0;
  outC->acceleration = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


void PHYSICS_simulateAccelerat_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic *outC)
{
  outC->init = kcg_true;
}

/* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime */
void PHYSICS_simulateAccelerat_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::requestedAcceleration */ kcg_real requestedAcceleration,
  outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic *outC)
{
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::currentAcceleration */ kcg_real last_currentAcceleration;
  
  outC->_L1 = requestedAcceleration;
  /* last_init_ck_currentAcceleration */ if (outC->init) {
    last_currentAcceleration = 0.0;
  }
  else {
    last_currentAcceleration = outC->currentAcceleration;
  }
  outC->_L5 = requestedAcceleration;
  outC->_L3 = last_currentAcceleration;
  outC->_L6 = outC->_L5 - outC->_L3;
  outC->_L8 = 0.04;
  outC->_L7 = outC->_L6 * outC->_L8;
  outC->_L9 = outC->_L7 + outC->_L3;
  /* 1 */ if (outC->init) {
    outC->_L2 = outC->_L1;
  }
  else {
    outC->_L2 = outC->_L9;
  }
  outC->currentAcceleration = outC->_L2;
  outC->acceleration = outC->_L2;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_simulateAccelerat_Toolbox_Physics_Basic.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

