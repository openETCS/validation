/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.h"

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_simulateAirResistance_init_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC)
{
  outC->_L1 = 0.0;
  outC->_L3 = 0.0;
  outC->_L4 = 0.0;
  outC->_L6 = 0.0;
  outC->_L8 = 0.0;
  outC->_L10 = 0.0;
  outC->_L12 = 0.0;
  outC->_L13 = 0.0;
  outC->_L14 = 0.0;
  outC->_L15 = 0.0;
  outC->_L16 = 0.0;
  outC->newAcceleration = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PHYSICS_simulateAirResistance_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance */
void PHYSICS_simulateAirResistance_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::currentVelocity */ kcg_real currentVelocity,
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::currentAcceleration */ kcg_real currentAcceleration,
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC)
{
  outC->_L1 = 42000.0;
  outC->_L3 = 0.2;
  outC->_L6 = 1.2;
  outC->_L13 = 10.4;
  outC->_L16 = currentVelocity;
  outC->_L8 = outC->_L6 * outC->_L3 * outC->_L13 * outC->_L16 * outC->_L16;
  outC->_L10 = 2.0;
  outC->_L12 = outC->_L8 / outC->_L10;
  outC->_L4 = outC->_L12 / outC->_L1;
  outC->_L15 = currentAcceleration;
  outC->_L14 = outC->_L15 - outC->_L4;
  outC->newAcceleration = outC->_L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

