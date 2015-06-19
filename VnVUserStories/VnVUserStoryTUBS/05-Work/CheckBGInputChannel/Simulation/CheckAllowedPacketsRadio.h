/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckAllowedPacketsRadio_H_
#define _CheckAllowedPacketsRadio_H_

#include "kcg_types.h"
#include "CheckIfSinglePacketIsAllo_SubFunctions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckAllowedPacketsRadio::valid */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckIfSinglePacketIsAllo_SubFunctions /* 3 */ Context_3[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckAllowedPacketsRadio::_L6 */ _L6;
  Metadata_T_Common_Types_Pkg /* CheckAllowedPacketsRadio::_L7 */ _L7;
  NID_MESSAGE /* CheckAllowedPacketsRadio::_L8 */ _L8;
  MetadataTruthtable_T /* CheckAllowedPacketsRadio::_L9 */ _L9;
  kcg_bool /* CheckAllowedPacketsRadio::_L11 */ _L11;
  array_int_30 /* CheckAllowedPacketsRadio::_L12 */ _L12;
  array_bool_256_46_30 /* CheckAllowedPacketsRadio::_L13 */ _L13;
  kcg_bool /* CheckAllowedPacketsRadio::_L14 */ _L14;
} outC_CheckAllowedPacketsRadio;

/* ===========  node initialization and cycle functions  =========== */
/* CheckAllowedPacketsRadio */
extern void CheckAllowedPacketsRadio(
  /* CheckAllowedPacketsRadio::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  outC_CheckAllowedPacketsRadio *outC);

extern void CheckAllowedPacketsRadio_reset(outC_CheckAllowedPacketsRadio *outC);

#endif /* _CheckAllowedPacketsRadio_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckAllowedPacketsRadio.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

