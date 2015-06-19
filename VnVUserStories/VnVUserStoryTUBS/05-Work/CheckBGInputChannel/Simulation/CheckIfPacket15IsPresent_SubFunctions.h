/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckIfPacket15IsPresent_SubFunctions_H_
#define _CheckIfPacket15IsPresent_SubFunctions_H_

#include "kcg_types.h"
#include "CheckIfPacketRadioMetadat_SubFunctions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SubFunctions::CheckIfPacket15IsPresent::result */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckIfPacketRadioMetadat_SubFunctions /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* SubFunctions::CheckIfPacket15IsPresent::_L1 */ _L1;
  kcg_bool /* SubFunctions::CheckIfPacket15IsPresent::_L3 */ _L3;
  Metadata_T_Common_Types_Pkg /* SubFunctions::CheckIfPacket15IsPresent::_L4 */ _L4;
  kcg_bool /* SubFunctions::CheckIfPacket15IsPresent::_L5 */ _L5;
} outC_CheckIfPacket15IsPresent_SubFunctions;

/* ===========  node initialization and cycle functions  =========== */
/* SubFunctions::CheckIfPacket15IsPresent */
extern void CheckIfPacket15IsPresent_SubFunctions(
  /* SubFunctions::CheckIfPacket15IsPresent::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  outC_CheckIfPacket15IsPresent_SubFunctions *outC);

extern void CheckIfPacket15IsPresent_reset_SubFunctions(
  outC_CheckIfPacket15IsPresent_SubFunctions *outC);

#endif /* _CheckIfPacket15IsPresent_SubFunctions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfPacket15IsPresent_SubFunctions.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

