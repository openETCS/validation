/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_simulateAccelerat_Toolbox_Functions.h"

void PHYSICS_simulateAccelerat_reset_Toolbox_Functions(
  outC_PHYSICS_simulateAccelerat_Toolbox_Functions *outC)
{
  outC->init = kcg_true;
}

/* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime */
void PHYSICS_simulateAccelerat_Toolbox_Functions(
  /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::requestedAcceleration */kcg_real requestedAcceleration,
  outC_PHYSICS_simulateAccelerat_Toolbox_Functions *outC)
{
  /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::currentAcceleration */ kcg_real last_currentAcceleration;
  
  if (outC->init) {
    last_currentAcceleration = 0.0;
  }
  else {
    last_currentAcceleration = outC->currentAcceleration;
  }
  outC->_L1 = requestedAcceleration;
  outC->_L5 = requestedAcceleration;
  outC->_L3 = last_currentAcceleration;
  outC->_L6 = outC->_L5 - outC->_L3;
  outC->_L8 = 0.04;
  outC->_L7 = outC->_L6 * outC->_L8;
  outC->_L9 = outC->_L7 + outC->_L3;
  if (outC->init) {
    outC->_L2 = outC->_L1;
  }
  else {
    outC->_L2 = outC->_L9;
  }
  outC->acceleration = outC->_L2;
  outC->currentAcceleration = outC->_L2;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PHYSICS_simulateAccelerat_Toolbox_Functions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

