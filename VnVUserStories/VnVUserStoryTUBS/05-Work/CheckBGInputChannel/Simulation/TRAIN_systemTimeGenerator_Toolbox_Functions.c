/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAIN_systemTimeGenerator_Toolbox_Functions.h"

void TRAIN_systemTimeGenerator_reset_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  outC->init = kcg_true;
}

/* Toolbox::Functions::TRAIN_systemTimeGenerator */
void TRAIN_systemTimeGenerator_Toolbox_Functions(
  /* Toolbox::Functions::TRAIN_systemTimeGenerator::deltaTime */kcg_int deltaTime,
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  if (outC->init) {
    outC->_L4 = 0;
  }
  else {
    outC->_L4 = outC->_L2;
  }
  outC->_L3 = deltaTime;
  outC->_L2 = outC->_L3 + outC->_L4;
  outC->timestamp = outC->_L2;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TRAIN_systemTimeGenerator_Toolbox_Functions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

