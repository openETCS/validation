/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _GetPacketId_InformationFilter_Pkg_Common_H_
#define _GetPacketId_InformationFilter_Pkg_Common_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* InformationFilter_Pkg::Common::GetPacketId::outPacketId */ outPacketId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::GetPacketId::_L1 */ _L1;
  NID_PACKET /* InformationFilter_Pkg::Common::GetPacketId::_L4 */ _L4;
} outC_GetPacketId_InformationFilter_Pkg_Common;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::Common::GetPacketId */
extern void GetPacketId_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::GetPacketId::inPacket */MetadataElement_T_Common_Types_Pkg *inPacket,
  outC_GetPacketId_InformationFilter_Pkg_Common *outC);

extern void GetPacketId_reset_InformationFilter_Pkg_Common(
  outC_GetPacketId_InformationFilter_Pkg_Common *outC);

#endif /* _GetPacketId_InformationFilter_Pkg_Common_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GetPacketId_InformationFilter_Pkg_Common.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

