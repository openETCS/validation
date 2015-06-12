/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter.h"

void Exception05RejectIfEmerge_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter *outC)
{
}

/* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted */
void Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted::inEmergencyStopAccepted */kcg_bool inEmergencyStopAccepted,
  outC_Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L1 = inEmergencyStopAccepted;
  outC->_L3 = !outC->_L1;
  outC->_L2 = kcg_false;
  outC->outStoreInTransitionBuffer = outC->_L2;
  outC->outAcceptMessage = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

