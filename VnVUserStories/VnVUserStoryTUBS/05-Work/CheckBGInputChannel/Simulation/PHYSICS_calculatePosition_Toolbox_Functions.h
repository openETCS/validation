/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */
#ifndef _PHYSICS_calculatePosition_Toolbox_Functions_H_
#define _PHYSICS_calculatePosition_Toolbox_Functions_H_

#include "kcg_types.h"
#include "PHYSICS_simulateAccelerat_Toolbox_Functions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::position */ position;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::velocity */ velocity;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_PHYSICS_simulateAccelerat_Toolbox_Functions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::timeInSeconds */ timeInSeconds;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::accelerationInm_s_2 */ accelerationInm_s_2;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L73 */ _L73;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L72 */ _L72;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L71 */ _L71;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L70 */ _L70;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L69 */ _L69;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L68 */ _L68;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L103 */ _L103;
  kcg_int /* Toolbox::Functions::PHYSICS_calculatePosition::_L102 */ _L102;
  kcg_bool /* Toolbox::Functions::PHYSICS_calculatePosition::_L101 */ _L101;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L100 */ _L100;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L99 */ _L99;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L98 */ _L98;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L97 */ _L97;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L96 */ _L96;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L95 */ _L95;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L94 */ _L94;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L93 */ _L93;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L92 */ _L92;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L91 */ _L91;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L90 */ _L90;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L89 */ _L89;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L88 */ _L88;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L87 */ _L87;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L86 */ _L86;
  kcg_bool /* Toolbox::Functions::PHYSICS_calculatePosition::_L85 */ _L85;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L84 */ _L84;
  kcg_bool /* Toolbox::Functions::PHYSICS_calculatePosition::_L83 */ _L83;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L82 */ _L82;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L81 */ _L81;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L80 */ _L80;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L79 */ _L79;
  kcg_bool /* Toolbox::Functions::PHYSICS_calculatePosition::_L78 */ _L78;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L77 */ _L77;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L76 */ _L76;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L75 */ _L75;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L74 */ _L74;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L104 */ _L104;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L105 */ _L105;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L106 */ _L106;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L107 */ _L107;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L108 */ _L108;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L109 */ _L109;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L110 */ _L110;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L111 */ _L111;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L112 */ _L112;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L113 */ _L113;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L114 */ _L114;
  kcg_real /* Toolbox::Functions::PHYSICS_calculatePosition::_L115 */ _L115;
  kcg_bool /* Toolbox::Functions::PHYSICS_calculatePosition::_L116 */ _L116;
  kcg_bool /* Toolbox::Functions::PHYSICS_calculatePosition::_L117 */ _L117;
} outC_PHYSICS_calculatePosition_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::PHYSICS_calculatePosition */
extern void PHYSICS_calculatePosition_Toolbox_Functions(
  /* Toolbox::Functions::PHYSICS_calculatePosition::accelerationPercent */kcg_real accelerationPercent,
  /* Toolbox::Functions::PHYSICS_calculatePosition::deltaTime */kcg_int deltaTime,
  /* Toolbox::Functions::PHYSICS_calculatePosition::positionIn */kcg_real positionIn,
  /* Toolbox::Functions::PHYSICS_calculatePosition::velocityIn */kcg_real velocityIn,
  /* Toolbox::Functions::PHYSICS_calculatePosition::activateBuilduptime */kcg_bool activateBuilduptime,
  /* Toolbox::Functions::PHYSICS_calculatePosition::activateAirResistance */kcg_bool activateAirResistance,
  outC_PHYSICS_calculatePosition_Toolbox_Functions *outC);

extern void PHYSICS_calculatePosition_reset_Toolbox_Functions(
  outC_PHYSICS_calculatePosition_Toolbox_Functions *outC);

#endif /* _PHYSICS_calculatePosition_Toolbox_Functions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** PHYSICS_calculatePosition_Toolbox_Functions.h
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

