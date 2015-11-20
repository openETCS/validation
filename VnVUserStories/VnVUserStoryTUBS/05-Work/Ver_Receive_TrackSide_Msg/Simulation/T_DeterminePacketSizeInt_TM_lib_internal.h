/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _T_DeterminePacketSizeInt_TM_lib_internal_H_
#define _T_DeterminePacketSizeInt_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_lib_internal::T_DeterminePacketSizeInt::p_size */ p_size;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::T_DeterminePacketSizeInt::_L1 */ _L1;
  kcg_int /* TM_lib_internal::T_DeterminePacketSizeInt::_L2 */ _L2;
  kcg_int /* TM_lib_internal::T_DeterminePacketSizeInt::_L3 */ _L3;
  kcg_int /* TM_lib_internal::T_DeterminePacketSizeInt::_L6 */ _L6;
  kcg_int /* TM_lib_internal::T_DeterminePacketSizeInt::_L7 */ _L7;
} outC_T_DeterminePacketSizeInt_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_DeterminePacketSizeInt */
extern void T_DeterminePacketSizeInt_TM_lib_internal(
  /* TM_lib_internal::T_DeterminePacketSizeInt::n_iter */ kcg_int n_iter,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_body */ kcg_int size_body,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_section */ kcg_int size_section,
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void T_DeterminePacketSizeInt_reset_TM_lib_internal(
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void T_DeterminePacketSizeInt_init_TM_lib_internal(
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _T_DeterminePacketSizeInt_TM_lib_internal_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** T_DeterminePacketSizeInt_TM_lib_internal.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

