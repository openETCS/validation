/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"

void Exception02StoreOnboardIf_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter *outC)
{
}

/* InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition */
void Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  outC_Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L2 = kcg_false;
  outC->_L1 = inPendingL2L3Transition;
  outC->outStoreInTransitionBuffer = outC->_L1;
  outC->outAcceptMessage = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

