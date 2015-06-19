/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _N_PIG2int_CheckBGConsistency_Pkg_SubFunction_H_
#define _N_PIG2int_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig2int */ n_pig2int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L1 */ _L1;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L2 */ _L2;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L3 */ _L3;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L4 */ _L4;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L5 */ _L5;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L6 */ _L6;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L7 */ _L7;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L8 */ _L8;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L9 */ _L9;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::_L10 */ _L10;
} outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::N_PIG2int */
extern void N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig */N_PIG n_pig,
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction *outC);

extern void N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _N_PIG2int_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

