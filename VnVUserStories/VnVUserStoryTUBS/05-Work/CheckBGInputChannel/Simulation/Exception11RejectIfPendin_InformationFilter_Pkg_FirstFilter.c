/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter.h"

void Exception11RejectIfPendin_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter *outC)
{
}

/* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition */
void Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inLevelTransitionInMessage */kcg_bool inLevelTransitionInMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inPendingL1Transtion */kcg_bool inPendingL1Transtion,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  outC_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L6 = inLevelTransitionInMessage;
  outC->_L7 = inPendingL1Transtion;
  outC->_L8 = inPendingL2L3Transition;
  outC->_L10 = outC->_L6 | outC->_L7 | outC->_L8;
  outC->_L11 = !outC->_L10;
  outC->_L2 = kcg_false;
  outC->outStoreInTransitionBuffer = outC->_L2;
  outC->outAcceptMessage = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

