/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter.h"

void Exception07RejectIfNoPend_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter *outC)
{
}

/* InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition */
void Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  outC_Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L2 = kcg_false;
  outC->_L1 = inPendingNTCTransition;
  outC->outStoreInTransitionBuffer = outC->_L2;
  outC->outAcceptMessage = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

