/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _PHYSICS_simulateAccelerat_Toolbox_Functions_H_
#define _PHYSICS_simulateAccelerat_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::acceleration */ acceleration;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_real /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::currentAcceleration */ currentAcceleration;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::_L1 */ _L1;
  kcg_real /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::_L2 */ _L2;
  kcg_real /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::_L3 */ _L3;
  kcg_real /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::_L5 */ _L5;
  kcg_real /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::_L6 */ _L6;
  kcg_real /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::_L7 */ _L7;
  kcg_real /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::_L8 */ _L8;
  kcg_real /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::_L9 */ _L9;
} outC_PHYSICS_simulateAccelerat_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime */
extern void PHYSICS_simulateAccelerat_Toolbox_Functions(
  /* Toolbox::Functions::PHYSICS_simulateAccelerationBuildupTime::requestedAcceleration */kcg_real requestedAcceleration,
  outC_PHYSICS_simulateAccelerat_Toolbox_Functions *outC);

extern void PHYSICS_simulateAccelerat_reset_Toolbox_Functions(
  outC_PHYSICS_simulateAccelerat_Toolbox_Functions *outC);

#endif /* _PHYSICS_simulateAccelerat_Toolbox_Functions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** PHYSICS_simulateAccelerat_Toolbox_Functions.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

