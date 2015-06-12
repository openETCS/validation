/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckModeExceptions_InformationFilter_Pkg_H_
#define _CheckModeExceptions_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::CheckModeExceptions::outAccept */ outAccept;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ModeDecisionTableActionKind_DataDictionary_Pkg /* InformationFilter_Pkg::CheckModeExceptions::_L1 */ _L1;
  kcg_bool /* InformationFilter_Pkg::CheckModeExceptions::_L2 */ _L2;
} outC_CheckModeExceptions_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::CheckModeExceptions */
extern void CheckModeExceptions_InformationFilter_Pkg(
  /* InformationFilter_Pkg::CheckModeExceptions::inAction */ModeDecisionTableActionKind_DataDictionary_Pkg inAction,
  outC_CheckModeExceptions_InformationFilter_Pkg *outC);

extern void CheckModeExceptions_reset_InformationFilter_Pkg(
  outC_CheckModeExceptions_InformationFilter_Pkg *outC);

#endif /* _CheckModeExceptions_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckModeExceptions_InformationFilter_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

