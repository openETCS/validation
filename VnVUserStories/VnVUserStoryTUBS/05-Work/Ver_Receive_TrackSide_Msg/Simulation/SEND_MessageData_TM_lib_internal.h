/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _SEND_MessageData_TM_lib_internal_H_
#define _SEND_MessageData_TM_lib_internal_H_

#include "kcg_types.h"
#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::SEND_MessageData::DataOut */ DataOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_WriteBaliseDataElement_TM_lib_internal /* 1 */ Context_1[500];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::SEND_MessageData::_L1 */ _L1;
  kcg_int /* TM_lib_internal::SEND_MessageData::_L402 */ _L402;
  kcg_bool /* TM_lib_internal::SEND_MessageData::_L403 */ _L403;
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::SEND_MessageData::_L404 */ _L404;
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::SEND_MessageData::_L406 */ _L406;
  kcg_int /* TM_lib_internal::SEND_MessageData::_L407 */ _L407;
  kcg_int /* TM_lib_internal::SEND_MessageData::_L408 */ _L408;
  array_int_500_500 /* TM_lib_internal::SEND_MessageData::_L413 */ _L413;
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::SEND_MessageData::_L414 */ _L414;
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::SEND_MessageData::_L415 */ _L415;
} outC_SEND_MessageData_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::SEND_MessageData */
extern void SEND_MessageData_TM_lib_internal(
  /* TM_lib_internal::SEND_MessageData::StartAddress */ kcg_int StartAddress,
  /* TM_lib_internal::SEND_MessageData::EndAddress */ kcg_int EndAddress,
  /* TM_lib_internal::SEND_MessageData::DataIn */ CompressedPacketData_T_Common_Types_Pkg *DataIn,
  /* TM_lib_internal::SEND_MessageData::DataElementIn */ CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  outC_SEND_MessageData_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SEND_MessageData_reset_TM_lib_internal(
  outC_SEND_MessageData_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SEND_MessageData_init_TM_lib_internal(
  outC_SEND_MessageData_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SEND_MessageData_TM_lib_internal_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_MessageData_TM_lib_internal.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

