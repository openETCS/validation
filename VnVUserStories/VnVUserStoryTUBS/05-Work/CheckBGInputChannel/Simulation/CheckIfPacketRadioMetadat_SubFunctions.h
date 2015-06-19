/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckIfPacketRadioMetadat_SubFunctions_H_
#define _CheckIfPacketRadioMetadat_SubFunctions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::result */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L1 */ _L1;
  NID_PACKET /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L2 */ _L2;
  kcg_bool /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L3 */ _L3;
  kcg_int /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L4 */ _L4;
  kcg_bool /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L6 */ _L6;
  kcg_bool /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L8 */ _L8;
} outC_CheckIfPacketRadioMetadat_SubFunctions;

/* ===========  node initialization and cycle functions  =========== */
/* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15 */
extern void CheckIfPacketRadioMetadat_SubFunctions(
  /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::accumulatorInput */kcg_bool accumulatorInput,
  /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::metadataElement */MetadataElement_T_Common_Types_Pkg *metadataElement,
  outC_CheckIfPacketRadioMetadat_SubFunctions *outC);

extern void CheckIfPacketRadioMetadat_reset_SubFunctions(
  outC_CheckIfPacketRadioMetadat_SubFunctions *outC);

#endif /* _CheckIfPacketRadioMetadat_SubFunctions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfPacketRadioMetadat_SubFunctions.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

