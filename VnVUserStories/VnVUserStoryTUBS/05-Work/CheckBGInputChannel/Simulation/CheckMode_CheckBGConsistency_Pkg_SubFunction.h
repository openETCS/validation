/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckMode_CheckBGConsistency_Pkg_SubFunction_H_
#define _CheckMode_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::bgConsistansyIsActive */ bgConsistansyIsActive;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L37 */ _L37;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L36 */ _L36;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L35 */ _L35;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L34 */ _L34;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L33 */ _L33;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L32 */ _L32;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L31 */ _L31;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L30 */ _L30;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L29 */ _L29;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L28 */ _L28;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L27 */ _L27;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L26 */ _L26;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L25 */ _L25;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L24 */ _L24;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L23 */ _L23;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L22 */ _L22;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L21 */ _L21;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L20 */ _L20;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L19 */ _L19;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L18 */ _L18;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L17 */ _L17;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L16 */ _L16;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L15 */ _L15;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L14 */ _L14;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L52 */ _L52;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L51 */ _L51;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L50 */ _L50;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L49 */ _L49;
  M_MODE /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L48 */ _L48;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L46 */ _L46;
} outC_CheckMode_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::CheckMode */
extern void CheckMode_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::currentMode */M_MODE currentMode,
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction *outC);

extern void CheckMode_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _CheckMode_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckMode_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

