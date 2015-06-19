/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckIfSinglePacketIsAllo_SubFunctions_H_
#define _CheckIfSinglePacketIsAllo_SubFunctions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::valid */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock1::then::_L7 */ _L7_IfBlock1;
  kcg_bool /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock1::then::_L1 */ _L1_IfBlock1;
  MetadataTruthtable_T /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock1::then::_L2 */ _L2_IfBlock1;
  NID_MESSAGE /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock1::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_int /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock1::then::_L5 */ _L5_IfBlock1;
  kcg_bool /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock1::else::_L1 */ _L11_IfBlock1;
  kcg_bool /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock1 */ IfBlock1_clock;
  kcg_bool /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::present */ present;
  kcg_int /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_packet */ nid_packet;
  kcg_bool /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::validTmp */ validTmp;
  MetadataElement_T_Common_Types_Pkg /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L3 */ _L3;
  NID_PACKET /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L12 */ _L12;
  kcg_int /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L13 */ _L13;
  kcg_bool /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L14 */ _L14;
  kcg_bool /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L15 */ _L15;
  kcg_bool /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L16 */ _L16;
  kcg_bool /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L19 */ _L19;
} outC_CheckIfSinglePacketIsAllo_SubFunctions;

/* ===========  node initialization and cycle functions  =========== */
/* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
extern void CheckIfSinglePacketIsAllo_SubFunctions(
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::accumulator */kcg_bool accumulator,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::currentPacket */MetadataElement_T_Common_Types_Pkg *currentPacket,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_message */NID_MESSAGE nid_message,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::permittedPackets */MetadataTruthtable_T *permittedPackets,
  outC_CheckIfSinglePacketIsAllo_SubFunctions *outC);

extern void CheckIfSinglePacketIsAllo_reset_SubFunctions(
  outC_CheckIfSinglePacketIsAllo_SubFunctions *outC);

#endif /* _CheckIfSinglePacketIsAllo_SubFunctions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfSinglePacketIsAllo_SubFunctions.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

