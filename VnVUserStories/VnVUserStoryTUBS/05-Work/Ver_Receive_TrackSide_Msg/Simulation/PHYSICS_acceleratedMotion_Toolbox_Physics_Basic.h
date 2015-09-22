/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _PHYSICS_acceleratedMotion_Toolbox_Physics_Basic_H_
#define _PHYSICS_acceleratedMotion_Toolbox_Physics_Basic_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::newPosition */ newPosition;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::newVelocity */ newVelocity;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::timeInSeconds */ timeInSeconds;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L30 */ _L30;
  kcg_bool /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L29 */ _L29;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L28 */ _L28;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L27 */ _L27;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L26 */ _L26;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L25 */ _L25;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L24 */ _L24;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L23 */ _L23;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L17 */ _L17;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L16 */ _L16;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L15 */ _L15;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L14 */ _L14;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L12 */ _L12;
  kcg_bool /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L11 */ _L11;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L10 */ _L10;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L7 */ _L7;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L6 */ _L6;
  kcg_bool /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L5 */ _L5;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L4 */ _L4;
  kcg_bool /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L3 */ _L3;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L2 */ _L2;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L1 */ _L1;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L32 */ _L32;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L33 */ _L33;
  kcg_int /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L34 */ _L34;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L35 */ _L35;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L36 */ _L36;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L37 */ _L37;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L38 */ _L38;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L39 */ _L39;
} outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion */
extern void PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::acceleration */ kcg_real acceleration,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentPosition */ kcg_real currentPosition,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentVelocity */ kcg_real currentVelocity,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::timeSinceLastCycle */ kcg_int timeSinceLastCycle,
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PHYSICS_acceleratedMotion_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PHYSICS_acceleratedMotion_init_Toolbox_Physics_Basic(
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _PHYSICS_acceleratedMotion_Toolbox_Physics_Basic_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

