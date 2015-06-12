/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _MapPacketIdToRow_InformationFilter_Pkg_H_
#define _MapPacketIdToRow_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* InformationFilter_Pkg::MapPacketIdToRow::outRow */ outRow;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* InformationFilter_Pkg::MapPacketIdToRow::_L1 */ _L1;
} outC_MapPacketIdToRow_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::MapPacketIdToRow */
extern void MapPacketIdToRow_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapPacketIdToRow::inPacketId */kcg_int inPacketId,
  outC_MapPacketIdToRow_InformationFilter_Pkg *outC);

extern void MapPacketIdToRow_reset_InformationFilter_Pkg(
  outC_MapPacketIdToRow_InformationFilter_Pkg *outC);

#endif /* _MapPacketIdToRow_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MapPacketIdToRow_InformationFilter_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

