/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _LevelFilter_InformationFilter_Pkg_FirstFilter_H_
#define _LevelFilter_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "MapPacketIdToRow_InformationFilter_Pkg.h"
#include "MapLevelToColumn_InformationFilter_Pkg.h"
#include "CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::FirstFilter::LevelFilter::outPacketAccept */ outPacketAccept;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter /* 1 */ _2_Context_1;
  outC_MapLevelToColumn_InformationFilter_Pkg /* 1 */ _1_Context_1;
  outC_MapPacketIdToRow_InformationFilter_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* InformationFilter_Pkg::FirstFilter::LevelFilter::row */ row;
  kcg_int /* InformationFilter_Pkg::FirstFilter::LevelFilter::column */ column;
  M_LEVEL /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L2 */ _L2;
  LevelDecisionTableActionKind_DataDictionary_Pkg /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L3 */ _L3;
  LevelDecisionTableType_DataDictionary_Pkg /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L4 */ _L4;
  LevelDecisionTableType_DataDictionary_Pkg /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L5 */ _L5;
  LevelDecisionTableActionKind_DataDictionary_Pkg /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L6 */ _L6;
  LevelDecisionTableActionKind_DataDictionary_Pkg /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L10 */ _L10;
  MsgSource_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L14 */ _L14;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L11 */ _L11;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L16 */ _L16;
  kcg_int /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L17 */ _L17;
  kcg_int /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L18 */ _L18;
  kcg_int /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L20 */ _L20;
  kcg_int /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L21 */ _L21;
  kcg_int /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L22 */ _L22;
  kcg_int /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L23 */ _L23;
  kcg_int /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L24 */ _L24;
  MsgSource_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L25 */ _L25;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L26 */ _L26;
  kcg_int /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L27 */ _L27;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L28 */ _L28;
} outC_LevelFilter_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::LevelFilter */
extern void LevelFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketId */kcg_int inPacketId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketOrigin */MsgSource_T_Common_Types_Pkg inPacketOrigin,
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter *outC);

extern void LevelFilter_reset_InformationFilter_Pkg_FirstFilter(
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter *outC);

#endif /* _LevelFilter_InformationFilter_Pkg_FirstFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelFilter_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

