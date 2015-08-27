/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _CAST_Int_to_NID_C_TM_conversions_H_
#define _CAST_Int_to_NID_C_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_C /* TM_conversions::CAST_Int_to_NID_C::nid_c */ nid_c;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_NID_C::_L1 */ _L1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_C::_L9 */ _L9;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_C::_L8 */ _L8;
  kcg_int /* TM_conversions::CAST_Int_to_NID_C::_L10 */ _L10;
  kcg_int /* TM_conversions::CAST_Int_to_NID_C::_L11 */ _L11;
} outC_CAST_Int_to_NID_C_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_NID_C */
extern void CAST_Int_to_NID_C_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_C::nid_c_int */ kcg_int nid_c_int,
  outC_CAST_Int_to_NID_C_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_Int_to_NID_C_reset_TM_conversions(
  outC_CAST_Int_to_NID_C_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Int_to_NID_C_init_TM_conversions(
  outC_CAST_Int_to_NID_C_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CAST_Int_to_NID_C_TM_conversions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_C_TM_conversions.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

