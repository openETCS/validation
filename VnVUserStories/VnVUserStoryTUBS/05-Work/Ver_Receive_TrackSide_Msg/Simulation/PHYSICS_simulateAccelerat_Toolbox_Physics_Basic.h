/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _PHYSICS_simulateAccelerat_Toolbox_Physics_Basic_H_
#define _PHYSICS_simulateAccelerat_Toolbox_Physics_Basic_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::acceleration */ acceleration;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::currentAcceleration */ currentAcceleration;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L1 */ _L1;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L2 */ _L2;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L3 */ _L3;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L5 */ _L5;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L6 */ _L6;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L7 */ _L7;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L8 */ _L8;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L9 */ _L9;
} outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime */
extern void PHYSICS_simulateAccelerat_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::requestedAcceleration */ kcg_real requestedAcceleration,
  outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic *outC);

extern void PHYSICS_simulateAccelerat_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void PHYSICS_simulateAccelerat_init_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _PHYSICS_simulateAccelerat_Toolbox_Physics_Basic_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_simulateAccelerat_Toolbox_Physics_Basic.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

