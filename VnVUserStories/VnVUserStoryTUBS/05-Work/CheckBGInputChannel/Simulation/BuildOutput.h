/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _BuildOutput_H_
#define _BuildOutput_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* BuildOutput::ReceivedMessage */ ReceivedMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* BuildOutput::_L1 */ _L1;
  kcg_bool /* BuildOutput::_L2 */ _L2;
  kcg_bool /* BuildOutput::_L10 */ _L10;
  ReceivedMessage_T_Common_Types_Pkg /* BuildOutput::_L11 */ _L11;
  kcg_bool /* BuildOutput::_L12 */ _L12;
  kcg_bool /* BuildOutput::_L19 */ _L19;
  MsgSource_T_Common_Types_Pkg /* BuildOutput::_L18 */ _L18;
  RadioMetadata_T_Common_Types_Pkg /* BuildOutput::_L17 */ _L17;
  BG_Header_T_BG_Types_Pkg /* BuildOutput::_L16 */ _L16;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* BuildOutput::_L15 */ _L15;
  CompressedPackets_T_Common_Types_Pkg /* BuildOutput::_L14 */ _L14;
} outC_BuildOutput;

/* ===========  node initialization and cycle functions  =========== */
/* BuildOutput */
extern void BuildOutput(
  /* BuildOutput::message */ReceivedMessage_T_Common_Types_Pkg *message,
  /* BuildOutput::valid */kcg_bool valid,
  outC_BuildOutput *outC);

extern void BuildOutput_reset(outC_BuildOutput *outC);

#endif /* _BuildOutput_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildOutput.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

