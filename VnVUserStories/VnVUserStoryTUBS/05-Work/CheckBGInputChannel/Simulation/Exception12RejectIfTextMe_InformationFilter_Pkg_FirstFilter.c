/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter.h"

void Exception12RejectIfTextMe_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter *outC)
{
}

/* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending */
void Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inCurrentTextMessageId */kcg_int inCurrentTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  outC_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L5 = inLastAckTextMessageId;
  outC->_L3 = inCurrentTextMessageId;
  outC->_L4 = outC->_L5 == outC->_L3;
  outC->_L2 = kcg_false;
  outC->outStoreInTransitionBuffer = outC->_L2;
  outC->outAcceptMessage = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

