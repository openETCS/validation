/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _MapModeToColumn_InformationFilter_Pkg_H_
#define _MapModeToColumn_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::outColumn */ outColumn;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_MODE /* InformationFilter_Pkg::MapModeToColumn::_L1 */ _L1;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L2 */ _L2;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L10 */ _L10;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L11 */ _L11;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L12 */ _L12;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L13 */ _L13;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L14 */ _L14;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L15 */ _L15;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L16 */ _L16;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L17 */ _L17;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L18 */ _L18;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L19 */ _L19;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L20 */ _L20;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L21 */ _L21;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L22 */ _L22;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L23 */ _L23;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L24 */ _L24;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L25 */ _L25;
  kcg_int /* InformationFilter_Pkg::MapModeToColumn::_L28 */ _L28;
} outC_MapModeToColumn_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::MapModeToColumn */
extern void MapModeToColumn_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapModeToColumn::inMode */M_MODE inMode,
  outC_MapModeToColumn_InformationFilter_Pkg *outC);

extern void MapModeToColumn_reset_InformationFilter_Pkg(
  outC_MapModeToColumn_InformationFilter_Pkg *outC);

#endif /* _MapModeToColumn_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MapModeToColumn_InformationFilter_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

