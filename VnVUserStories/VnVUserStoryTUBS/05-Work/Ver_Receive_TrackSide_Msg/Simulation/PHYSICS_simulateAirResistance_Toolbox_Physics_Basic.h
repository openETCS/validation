/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _PHYSICS_simulateAirResistance_Toolbox_Physics_Basic_H_
#define _PHYSICS_simulateAirResistance_Toolbox_Physics_Basic_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::newAcceleration */ newAcceleration;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L16 */ _L16;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L15 */ _L15;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L14 */ _L14;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L13 */ _L13;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L12 */ _L12;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L10 */ _L10;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L8 */ _L8;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L6 */ _L6;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L4 */ _L4;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L3 */ _L3;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L1 */ _L1;
} outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance */
extern void PHYSICS_simulateAirResistance_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::currentVelocity */ kcg_real currentVelocity,
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::currentAcceleration */ kcg_real currentAcceleration,
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PHYSICS_simulateAirResistance_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PHYSICS_simulateAirResistance_init_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _PHYSICS_simulateAirResistance_Toolbox_Physics_Basic_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

