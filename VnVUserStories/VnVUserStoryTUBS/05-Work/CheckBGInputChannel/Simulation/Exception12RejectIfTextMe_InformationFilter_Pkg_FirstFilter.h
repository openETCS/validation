/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter_H_
#define _Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outAcceptMessage */ outAcceptMessage;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outStoreInTransitionBuffer */ outStoreInTransitionBuffer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::_L2 */ _L2;
  kcg_int /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::_L3 */ _L3;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::_L4 */ _L4;
  kcg_int /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::_L5 */ _L5;
} outC_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending */
extern void Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inCurrentTextMessageId */kcg_int inCurrentTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  outC_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter *outC);

extern void Exception12RejectIfTextMe_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter *outC);

#endif /* _Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

