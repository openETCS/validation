/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_calculatePosition_Toolbox_Functions.h"

void PHYSICS_calculatePosition_reset_Toolbox_Functions(
  outC_PHYSICS_calculatePosition_Toolbox_Functions *outC)
{
  /* 1 */ PHYSICS_simulateAccelerat_reset_Toolbox_Functions(&outC->Context_1);
}

/* Toolbox::Functions::PHYSICS_calculatePosition */
void PHYSICS_calculatePosition_Toolbox_Functions(
  /* Toolbox::Functions::PHYSICS_calculatePosition::accelerationPercent */kcg_real accelerationPercent,
  /* Toolbox::Functions::PHYSICS_calculatePosition::deltaTime */kcg_int deltaTime,
  /* Toolbox::Functions::PHYSICS_calculatePosition::positionIn */kcg_real positionIn,
  /* Toolbox::Functions::PHYSICS_calculatePosition::velocityIn */kcg_real velocityIn,
  /* Toolbox::Functions::PHYSICS_calculatePosition::activateBuilduptime */kcg_bool activateBuilduptime,
  /* Toolbox::Functions::PHYSICS_calculatePosition::activateAirResistance */kcg_bool activateAirResistance,
  outC_PHYSICS_calculatePosition_Toolbox_Functions *outC)
{
  kcg_real tmp;
  kcg_bool tmp1;
  
  outC->_L117 = activateAirResistance;
  outC->_L116 = activateBuilduptime;
  outC->tmp = outC->_L116;
  tmp1 = outC->_L117;
  outC->_L73 = accelerationPercent;
  outC->_L71 = (kcg_real) outC->_L73;
  outC->_L68 = 100.0;
  outC->_L69 = outC->_L71 / outC->_L68;
  outC->_L70 = 0.5;
  outC->_L72 = outC->_L69 * outC->_L70;
  outC->_L109 = 1.2;
  outC->_L110 = 0.2;
  outC->_L111 = 10.4;
  outC->_L112 = velocityIn;
  outC->_L108 = outC->_L109 * outC->_L110 * outC->_L111 * outC->_L112 *
    outC->_L112;
  outC->_L107 = 2.0;
  outC->_L106 = outC->_L108 / outC->_L107;
  outC->_L114 = 42000.0;
  outC->_L113 = outC->_L106 / outC->_L114;
  if (tmp1) {
    outC->_L105 = outC->_L72 - outC->_L113;
  }
  else {
    outC->_L105 = outC->_L72;
  }
  if (outC->tmp) {
    /* 1 */
    PHYSICS_simulateAccelerat_Toolbox_Functions(outC->_L105, &outC->Context_1);
    tmp = outC->Context_1.acceleration;
    outC->_L115 = tmp;
  }
  else {
    outC->_L115 = outC->_L105;
  }
  outC->accelerationInm_s_2 = outC->_L115;
  outC->_L104 = outC->accelerationInm_s_2;
  outC->_L103 = 0.5;
  outC->_L102 = deltaTime;
  outC->_L79 = outC->accelerationInm_s_2;
  outC->_L91 = 0.0;
  outC->_L78 = outC->_L79 < outC->_L91;
  outC->_L93 = velocityIn;
  outC->_L76 = 0.0;
  outC->_L83 = outC->_L93 == outC->_L76;
  outC->_L101 = outC->_L78 & outC->_L83;
  outC->_L100 = velocityIn;
  outC->_L99 = positionIn;
  outC->_L89 = positionIn;
  outC->_L98 = (kcg_real) outC->_L89;
  outC->_L97 = 0.0;
  outC->_L92 = velocityIn;
  outC->_L94 = (kcg_real) outC->_L102;
  outC->_L84 = 1000.0;
  outC->_L77 = outC->_L94 / outC->_L84;
  outC->timeInSeconds = outC->_L77;
  outC->_L86 = outC->timeInSeconds;
  outC->_L96 = outC->_L92 * outC->_L86;
  outC->_L90 = outC->_L79 / outC->_L103;
  outC->_L82 = outC->timeInSeconds;
  outC->_L95 = outC->_L90 * outC->_L82 * outC->_L82;
  outC->_L88 = outC->_L104 * outC->_L77;
  outC->_L80 = outC->_L88 + outC->_L100;
  outC->_L85 = outC->_L80 >= outC->_L97;
  outC->_L74 = 0.0;
  if (outC->_L85) {
    outC->_L81 = outC->_L80;
  }
  else {
    outC->_L81 = outC->_L74;
  }
  outC->velocity = outC->_L81;
  outC->_L75 = outC->_L95 + outC->_L96 + outC->_L98;
  if (outC->_L101) {
    outC->_L87 = outC->_L99;
  }
  else {
    outC->_L87 = outC->_L75;
  }
  outC->position = outC->_L87;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PHYSICS_calculatePosition_Toolbox_Functions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

