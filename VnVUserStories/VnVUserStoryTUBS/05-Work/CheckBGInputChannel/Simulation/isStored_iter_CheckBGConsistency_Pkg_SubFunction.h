/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _isStored_iter_CheckBGConsistency_Pkg_SubFunction_H_
#define _isStored_iter_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "isStored_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::index */ index;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::isStored */ isStored;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isStored_CheckBGConsistency_Pkg_SubFunction /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BG_Header_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L9 */ _L9;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L11 */ _L11;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L13 */ _L13;
  BG_Header_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L14 */ _L14;
  positionedBGs_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L15 */ _L15;
  positionedBGs_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L21 */ _L21;
  positionedBG_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L24 */ _L24;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L25 */ _L25;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L26 */ _L26;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L27 */ _L27;
} outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::isStored_iter */
extern void isStored_iter_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::bgHeader */BG_Header_T_BG_Types_Pkg *bgHeader,
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction *outC);

extern void isStored_iter_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _isStored_iter_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** isStored_iter_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

