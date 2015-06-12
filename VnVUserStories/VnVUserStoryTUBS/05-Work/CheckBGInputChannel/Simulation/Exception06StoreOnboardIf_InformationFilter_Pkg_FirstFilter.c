/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"

void Exception06StoreOnboardIf_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter *outC)
{
}

/* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition */
void Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  outC_Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L2 = kcg_false;
  outC->_L1 = inPendingNTCTransition;
  outC->outStoreInTransitionBuffer = outC->_L1;
  outC->outAcceptMessage = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

