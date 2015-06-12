/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _TransitionBuffer_InformationFilter_Pkg_Common_H_
#define _TransitionBuffer_InformationFilter_Pkg_Common_H_

#include "kcg_types.h"
#include "count_down_digital.h"
#include "_6_FIFO_InformationFilter_Pkg_Common_3.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::TransitionBuffer::outMessage */ outMessage;
  kcg_bool /* InformationFilter_Pkg::Common::TransitionBuffer::outMessageAvailable */ outMessageAvailable;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* InformationFilter_Pkg::Common::TransitionBuffer::_L10 */ _L10;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_count_down_digital /* 1 */ _1_Context_1;
  outC__6_FIFO_InformationFilter_Pkg_Common_3 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* InformationFilter_Pkg::Common::TransitionBuffer::messagesToFlush */ messagesToFlush;
  kcg_bool /* InformationFilter_Pkg::Common::TransitionBuffer::_L2 */ _L2;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::TransitionBuffer::_L1 */ _L1;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::TransitionBuffer::_L3 */ _L3;
  kcg_bool /* InformationFilter_Pkg::Common::TransitionBuffer::_L4 */ _L4;
  kcg_bool /* InformationFilter_Pkg::Common::TransitionBuffer::_L5 */ _L5;
  kcg_int /* InformationFilter_Pkg::Common::TransitionBuffer::_L6 */ _L6;
  kcg_bool /* InformationFilter_Pkg::Common::TransitionBuffer::_L11 */ _L11;
  kcg_bool /* InformationFilter_Pkg::Common::TransitionBuffer::_L12 */ _L12;
  kcg_bool /* InformationFilter_Pkg::Common::TransitionBuffer::_L13 */ _L13;
  kcg_bool /* InformationFilter_Pkg::Common::TransitionBuffer::_L14 */ _L14;
  kcg_int /* InformationFilter_Pkg::Common::TransitionBuffer::_L15 */ _L15;
} outC_TransitionBuffer_InformationFilter_Pkg_Common;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::Common::TransitionBuffer */
extern void TransitionBuffer_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::TransitionBuffer::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inStoreMessage */kcg_bool inStoreMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inFlushMessages */kcg_bool inFlushMessages,
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC);

extern void TransitionBuffer_reset_InformationFilter_Pkg_Common(
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC);

#endif /* _TransitionBuffer_InformationFilter_Pkg_Common_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransitionBuffer_InformationFilter_Pkg_Common.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

