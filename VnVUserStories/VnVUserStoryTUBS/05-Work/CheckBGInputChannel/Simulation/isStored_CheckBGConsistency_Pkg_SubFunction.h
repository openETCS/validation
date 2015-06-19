/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _isStored_CheckBGConsistency_Pkg_SubFunction_H_
#define _isStored_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::isStored::go_on */ go_on;
  BG_Header_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::isStored::acc_out */ acc_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::SubFunction::isStored::_L4 */ _L4;
  NID_BG /* CheckBGConsistency_Pkg::SubFunction::isStored::_L5 */ _L5;
  NID_C /* CheckBGConsistency_Pkg::SubFunction::isStored::_L6 */ _L6;
  BG_Header_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::isStored::_L7 */ _L7;
  NID_BG /* CheckBGConsistency_Pkg::SubFunction::isStored::_L9 */ _L9;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::isStored::_L10 */ _L10;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::isStored::_L11 */ _L11;
  NID_C /* CheckBGConsistency_Pkg::SubFunction::isStored::_L12 */ _L12;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::isStored::_L13 */ _L13;
  BG_Header_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::isStored::_L14 */ _L14;
} outC_isStored_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::isStored */
extern void isStored_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::isStored::recivedBG_header */BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::isStored::storedBG */positionedBG_T_TrainPosition_Types_Pck *storedBG,
  outC_isStored_CheckBGConsistency_Pkg_SubFunction *outC);

extern void isStored_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _isStored_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** isStored_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

