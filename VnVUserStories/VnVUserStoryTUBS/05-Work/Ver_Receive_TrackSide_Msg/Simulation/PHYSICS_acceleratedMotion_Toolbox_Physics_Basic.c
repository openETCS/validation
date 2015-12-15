/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.h"

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_acceleratedMotion_init_Toolbox_Physics_Basic(
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC)
{
  outC->_L39 = 0.0;
  outC->_L38 = 0.0;
  outC->_L37 = 0.0;
  outC->_L36 = 0.0;
  outC->_L35 = 0.0;
  outC->_L34 = 0;
  outC->_L33 = 0.0;
  outC->_L32 = 0.0;
  outC->_L1 = 0.0;
  outC->_L2 = 0.0;
  outC->_L3 = kcg_true;
  outC->_L4 = 0.0;
  outC->_L5 = kcg_true;
  outC->_L6 = 0.0;
  outC->_L7 = 0.0;
  outC->_L10 = 0.0;
  outC->_L11 = kcg_true;
  outC->_L12 = 0.0;
  outC->_L14 = 0.0;
  outC->_L15 = 0.0;
  outC->_L16 = 0.0;
  outC->_L17 = 0.0;
  outC->_L23 = 0.0;
  outC->_L24 = 0.0;
  outC->_L25 = 0.0;
  outC->_L26 = 0.0;
  outC->_L27 = 0.0;
  outC->_L28 = 0.0;
  outC->_L29 = kcg_true;
  outC->_L30 = 0.0;
  outC->timeInSeconds = 0.0;
  outC->newVelocity = 0.0;
  outC->newPosition = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PHYSICS_acceleratedMotion_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion */
void PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::acceleration */ kcg_real acceleration,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentPosition */ kcg_real currentPosition,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentVelocity */ kcg_real currentVelocity,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::timeSinceLastCycle */ kcg_int timeSinceLastCycle,
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC)
{
  outC->_L34 = timeSinceLastCycle;
  outC->_L10 = (kcg_real) outC->_L34;
  outC->_L7 = 1000.0;
  outC->_L26 = outC->_L10 / outC->_L7;
  outC->timeInSeconds = outC->_L26;
  outC->_L1 = outC->timeInSeconds;
  outC->_L32 = acceleration;
  outC->_L27 = 0.0;
  outC->_L29 = outC->_L32 < outC->_L27;
  outC->_L36 = currentVelocity;
  outC->_L28 = 0.0;
  outC->_L5 = outC->_L36 == outC->_L28;
  outC->_L3 = outC->_L29 & outC->_L5;
  outC->_L39 = currentPosition;
  outC->_L23 = 0.5;
  outC->_L25 = outC->_L32 / outC->_L23;
  outC->_L12 = outC->_L25 * outC->_L1 * outC->_L1;
  outC->_L35 = currentVelocity;
  outC->_L30 = outC->timeInSeconds;
  outC->_L15 = outC->_L35 * outC->_L30;
  outC->_L38 = currentPosition;
  outC->_L24 = outC->_L12 + outC->_L15 + outC->_L38;
  /* 1 */ if (outC->_L3) {
    outC->_L2 = outC->_L39;
  }
  else {
    outC->_L2 = outC->_L24;
  }
  outC->_L33 = acceleration;
  outC->_L4 = outC->_L33 * outC->_L26;
  outC->_L6 = 0.0;
  outC->_L37 = currentVelocity;
  outC->_L14 = outC->_L4 + outC->_L37;
  outC->_L17 = 0.0;
  outC->_L11 = outC->_L14 >= outC->_L17;
  /* 2 */ if (outC->_L11) {
    outC->_L16 = outC->_L14;
  }
  else {
    outC->_L16 = outC->_L6;
  }
  outC->newPosition = outC->_L2;
  outC->newVelocity = outC->_L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

