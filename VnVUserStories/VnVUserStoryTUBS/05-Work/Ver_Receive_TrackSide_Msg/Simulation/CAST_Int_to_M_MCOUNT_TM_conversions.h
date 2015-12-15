/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _CAST_Int_to_M_MCOUNT_TM_conversions_H_
#define _CAST_Int_to_M_MCOUNT_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_MCOUNT /* TM_conversions::CAST_Int_to_M_MCOUNT::m_mcount */ m_mcount;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_M_MCOUNT::_L1 */ _L1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_MCOUNT::_L9 */ _L9;
  kcg_bool /* TM_conversions::CAST_Int_to_M_MCOUNT::_L8 */ _L8;
  kcg_int /* TM_conversions::CAST_Int_to_M_MCOUNT::_L10 */ _L10;
  kcg_int /* TM_conversions::CAST_Int_to_M_MCOUNT::_L11 */ _L11;
} outC_CAST_Int_to_M_MCOUNT_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_M_MCOUNT */
extern void CAST_Int_to_M_MCOUNT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_MCOUNT::m_mcount_int */ kcg_int m_mcount_int,
  outC_CAST_Int_to_M_MCOUNT_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_Int_to_M_MCOUNT_reset_TM_conversions(
  outC_CAST_Int_to_M_MCOUNT_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Int_to_M_MCOUNT_init_TM_conversions(
  outC_CAST_Int_to_M_MCOUNT_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CAST_Int_to_M_MCOUNT_TM_conversions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_MCOUNT_TM_conversions.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

