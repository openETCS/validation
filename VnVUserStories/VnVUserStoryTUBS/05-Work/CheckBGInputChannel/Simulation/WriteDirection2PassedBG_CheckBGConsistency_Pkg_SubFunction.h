/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction_H_
#define _WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_out */ passedBG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L1 */ _L1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L14 */ _L14;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L15 */ _L15;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L16 */ _L16;
  Q_DIRLRBG /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L18 */ _L18;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L19 */ _L19;
  Q_DIRTRAIN /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L21 */ _L21;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L25 */ _L25;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L23 */ _L23;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L22 */ _L22;
  Q_DIRTRAIN /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L27 */ _L27;
  Q_DIRLRBG /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L28 */ _L28;
} outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG */
extern void WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::isNominal */kcg_bool isNominal,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_in */ReceivedMessage_T_Common_Types_Pkg *passedBG_in,
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction *outC);

extern void WriteDirection2PassedBG_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

