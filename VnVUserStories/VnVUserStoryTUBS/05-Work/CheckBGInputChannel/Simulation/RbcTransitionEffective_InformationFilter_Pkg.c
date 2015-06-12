/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RbcTransitionEffective_InformationFilter_Pkg.h"

void RbcTransitionEffective_reset_InformationFilter_Pkg(
  outC_RbcTransitionEffective_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
}

/* InformationFilter_Pkg::RbcTransitionEffective */
void RbcTransitionEffective_InformationFilter_Pkg(
  /* InformationFilter_Pkg::RbcTransitionEffective::inSupervisingDevice */kcg_int inSupervisingDevice,
  outC_RbcTransitionEffective_InformationFilter_Pkg *outC)
{
  if (outC->init) {
    outC->_L3 = 0;
  }
  else {
    outC->_L3 = outC->_L1;
  }
  outC->oldSupervisingDevice = outC->_L3;
  outC->_L4 = inSupervisingDevice == outC->oldSupervisingDevice;
  outC->_L5 = !outC->_L4;
  outC->outRbcTransition = outC->_L5;
  outC->_L1 = inSupervisingDevice;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RbcTransitionEffective_InformationFilter_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

