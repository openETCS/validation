/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _ModeFilter_InformationFilter_Pkg_ThirdFilter_H_
#define _ModeFilter_InformationFilter_Pkg_ThirdFilter_H_

#include "kcg_types.h"
#include "MapPacketIdToRow_InformationFilter_Pkg.h"
#include "MapModeToColumn_InformationFilter_Pkg.h"
#include "CheckModeExceptions_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::ThirdFilter::ModeFilter::outPacketAccept */ outPacketAccept;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckModeExceptions_InformationFilter_Pkg /* 1 */ _2_Context_1;
  outC_MapModeToColumn_InformationFilter_Pkg /* 1 */ _1_Context_1;
  outC_MapPacketIdToRow_InformationFilter_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ModeDecisionTableType_DataDictionary_Pkg /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L249 */ _L249;
  ModeDecisionTableActionKind_DataDictionary_Pkg /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L256 */ _L256;
  M_MODE /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L259 */ _L259;
  kcg_int /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L261 */ _L261;
  kcg_int /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L262 */ _L262;
  kcg_bool /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L263 */ _L263;
  kcg_int /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L268 */ _L268;
} outC_ModeFilter_InformationFilter_Pkg_ThirdFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::ThirdFilter::ModeFilter */
extern void ModeFilter_InformationFilter_Pkg_ThirdFilter(
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inOperationModus */M_MODE inOperationModus,
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inPacketId */kcg_int inPacketId,
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter *outC);

extern void ModeFilter_reset_InformationFilter_Pkg_ThirdFilter(
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter *outC);

#endif /* _ModeFilter_InformationFilter_Pkg_ThirdFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ModeFilter_InformationFilter_Pkg_ThirdFilter.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

