/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _RbcTransitionEffective_InformationFilter_Pkg_H_
#define _RbcTransitionEffective_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::RbcTransitionEffective::outRbcTransition */ outRbcTransition;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* InformationFilter_Pkg::RbcTransitionEffective::_L1 */ _L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* InformationFilter_Pkg::RbcTransitionEffective::oldSupervisingDevice */ oldSupervisingDevice;
  kcg_int /* InformationFilter_Pkg::RbcTransitionEffective::_L3 */ _L3;
  kcg_bool /* InformationFilter_Pkg::RbcTransitionEffective::_L4 */ _L4;
  kcg_bool /* InformationFilter_Pkg::RbcTransitionEffective::_L5 */ _L5;
} outC_RbcTransitionEffective_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::RbcTransitionEffective */
extern void RbcTransitionEffective_InformationFilter_Pkg(
  /* InformationFilter_Pkg::RbcTransitionEffective::inSupervisingDevice */kcg_int inSupervisingDevice,
  outC_RbcTransitionEffective_InformationFilter_Pkg *outC);

extern void RbcTransitionEffective_reset_InformationFilter_Pkg(
  outC_RbcTransitionEffective_InformationFilter_Pkg *outC);

#endif /* _RbcTransitionEffective_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RbcTransitionEffective_InformationFilter_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

