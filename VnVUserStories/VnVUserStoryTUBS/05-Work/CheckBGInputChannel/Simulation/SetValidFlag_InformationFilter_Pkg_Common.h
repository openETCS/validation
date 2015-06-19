/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _SetValidFlag_InformationFilter_Pkg_Common_H_
#define _SetValidFlag_InformationFilter_Pkg_Common_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::SetValidFlag::outPacket */ outPacket;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::SetValidFlag::_L2 */ _L2;
  kcg_bool /* InformationFilter_Pkg::Common::SetValidFlag::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::SetValidFlag::_L3 */ _L3;
  NID_PACKET /* InformationFilter_Pkg::Common::SetValidFlag::_L4 */ _L4;
  Q_DIR /* InformationFilter_Pkg::Common::SetValidFlag::_L5 */ _L5;
  kcg_bool /* InformationFilter_Pkg::Common::SetValidFlag::_L6 */ _L6;
  kcg_int /* InformationFilter_Pkg::Common::SetValidFlag::_L8 */ _L8;
  kcg_int /* InformationFilter_Pkg::Common::SetValidFlag::_L7 */ _L7;
  kcg_bool /* InformationFilter_Pkg::Common::SetValidFlag::_L9 */ _L9;
} outC_SetValidFlag_InformationFilter_Pkg_Common;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::Common::SetValidFlag */
extern void SetValidFlag_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::SetValidFlag::inValidFlag */kcg_bool inValidFlag,
  /* InformationFilter_Pkg::Common::SetValidFlag::inPacket */MetadataElement_T_Common_Types_Pkg *inPacket,
  outC_SetValidFlag_InformationFilter_Pkg_Common *outC);

extern void SetValidFlag_reset_InformationFilter_Pkg_Common(
  outC_SetValidFlag_InformationFilter_Pkg_Common *outC);

#endif /* _SetValidFlag_InformationFilter_Pkg_Common_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SetValidFlag_InformationFilter_Pkg_Common.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

