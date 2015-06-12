/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter.h"

void Exception09RejectIfNoL2L3_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter *outC)
{
}

/* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored */
void Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored::inL2L3TransitionInTransitionBuffer */kcg_bool inL2L3TransitionInTransitionBuffer,
  outC_Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L2 = kcg_false;
  outC->_L1 = inL2L3TransitionInTransitionBuffer;
  outC->outStoreInTransitionBuffer = outC->_L2;
  outC->outAcceptMessage = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

