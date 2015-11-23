/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _SEND_WriteBaliseMessageHeader_TM_lib_internal_H_
#define _SEND_WriteBaliseMessageHeader_TM_lib_internal_H_

#include "kcg_types.h"
#include "SEND_FindSlot_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteBaliseMessageHeader::HeadersOut */ HeadersOut;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewStartAddr */ NewStartAddr;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewEndAddr */ NewEndAddr;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_FindSlot_TM_lib_internal /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L1 */ _L1;
  kcg_bool /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L4 */ _L4;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L5 */ _L5;
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L8 */ _L8;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L9 */ _L9;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L16 */ _L16;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L17 */ _L17;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L18 */ _L18;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L22 */ _L22;
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L23 */ _L23;
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L24 */ _L24;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L31 */ _L31;
  kcg_bool /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L32 */ _L32;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L33 */ _L33;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L34 */ _L34;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L35 */ _L35;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L36 */ _L36;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L37 */ _L37;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L43 */ _L43;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L44 */ _L44;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */ _L7;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */ _L3;
} outC_SEND_WriteBaliseMessageHeader_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::SEND_WriteBaliseMessageHeader */
extern void SEND_WriteBaliseMessageHeader_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::HeadersIn */ Metadata_T_Common_Types_Pkg *HeadersIn,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewHeader */ MetadataElement_T_Common_Types_Pkg *NewHeader,
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SEND_WriteBaliseMessageHeader_reset_TM_lib_internal(
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SEND_WriteBaliseMessageHeader_init_TM_lib_internal(
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SEND_WriteBaliseMessageHeader_TM_lib_internal_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_WriteBaliseMessageHeader_TM_lib_internal.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

