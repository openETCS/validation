/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAIN_systemTimeGenerator_Toolbox_Functions.h"

#ifndef KCG_USER_DEFINED_INIT
void TRAIN_systemTimeGenerator_init_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  outC->_L3 = 0;
  outC->_L4 = 0;
  outC->init = kcg_true;
  outC->_L2 = 0;
  outC->timestamp = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TRAIN_systemTimeGenerator_reset_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Functions::TRAIN_systemTimeGenerator */
void TRAIN_systemTimeGenerator_Toolbox_Functions(
  /* Toolbox::Functions::TRAIN_systemTimeGenerator::deltaTime */ kcg_int deltaTime,
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  /* fby_1_init_1 */ if (outC->init) {
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

/* $**************** KCG Version 6.4 (build i21) ****************
** TRAIN_systemTimeGenerator_Toolbox_Functions.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

