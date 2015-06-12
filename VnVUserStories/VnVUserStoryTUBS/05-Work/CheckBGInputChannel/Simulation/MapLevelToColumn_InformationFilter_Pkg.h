/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _MapLevelToColumn_InformationFilter_Pkg_H_
#define _MapLevelToColumn_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* InformationFilter_Pkg::MapLevelToColumn::outColumn */ outColumn;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVEL /* InformationFilter_Pkg::MapLevelToColumn::_L1 */ _L1;
  kcg_int /* InformationFilter_Pkg::MapLevelToColumn::_L2 */ _L2;
  kcg_int /* InformationFilter_Pkg::MapLevelToColumn::_L3 */ _L3;
  kcg_int /* InformationFilter_Pkg::MapLevelToColumn::_L4 */ _L4;
  kcg_int /* InformationFilter_Pkg::MapLevelToColumn::_L5 */ _L5;
  kcg_int /* InformationFilter_Pkg::MapLevelToColumn::_L6 */ _L6;
  kcg_int /* InformationFilter_Pkg::MapLevelToColumn::_L7 */ _L7;
} outC_MapLevelToColumn_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::MapLevelToColumn */
extern void MapLevelToColumn_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapLevelToColumn::inLevel */M_LEVEL inLevel,
  outC_MapLevelToColumn_InformationFilter_Pkg *outC);

extern void MapLevelToColumn_reset_InformationFilter_Pkg(
  outC_MapLevelToColumn_InformationFilter_Pkg *outC);

#endif /* _MapLevelToColumn_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MapLevelToColumn_InformationFilter_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

