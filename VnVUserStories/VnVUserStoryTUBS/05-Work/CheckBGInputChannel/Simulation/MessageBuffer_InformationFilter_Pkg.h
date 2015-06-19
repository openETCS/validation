/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _MessageBuffer_InformationFilter_Pkg_H_
#define _MessageBuffer_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "FIFO_InformationFilter_Pkg_Common_6.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::MessageBuffer::outMessage */ outMessage;
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::outMessageValid */ outMessageValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FIFO_InformationFilter_Pkg_Common_6 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::_L3 */ _L3;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::MessageBuffer::_L2 */ _L2;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::MessageBuffer::_L4 */ _L4;
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::_L6 */ _L6;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::MessageBuffer::_L7 */ _L7;
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::_L8 */ _L8;
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::_L9 */ _L9;
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::_L10 */ _L10;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::MessageBuffer::_L11 */ _L11;
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::_L12 */ _L12;
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::_L13 */ _L13;
  kcg_bool /* InformationFilter_Pkg::MessageBuffer::_L14 */ _L14;
  kcg_int /* InformationFilter_Pkg::MessageBuffer::_L15 */ _L15;
} outC_MessageBuffer_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::MessageBuffer */
extern void MessageBuffer_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromTrain */ReceivedMessage_T_Common_Types_Pkg *inMessageFromTrain,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromBuffer */ReceivedMessage_T_Common_Types_Pkg *inMessageFromBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromBufferValid */kcg_bool inMessageFromBufferValid,
  outC_MessageBuffer_InformationFilter_Pkg *outC);

extern void MessageBuffer_reset_InformationFilter_Pkg(
  outC_MessageBuffer_InformationFilter_Pkg *outC);

#endif /* _MessageBuffer_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MessageBuffer_InformationFilter_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

