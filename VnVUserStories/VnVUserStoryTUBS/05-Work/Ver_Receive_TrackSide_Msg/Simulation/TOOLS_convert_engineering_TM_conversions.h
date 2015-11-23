/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _TOOLS_convert_engineering_TM_conversions_H_
#define _TOOLS_convert_engineering_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* TM_conversions::TOOLS_convert_engineering_location::Loc_real */ Loc_real;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::TOOLS_convert_engineering_location::_L1 */ _L1;
  kcg_real /* TM_conversions::TOOLS_convert_engineering_location::_L2 */ _L2;
  kcg_real /* TM_conversions::TOOLS_convert_engineering_location::_L3 */ _L3;
  kcg_real /* TM_conversions::TOOLS_convert_engineering_location::_L4 */ _L4;
} outC_TOOLS_convert_engineering_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::TOOLS_convert_engineering_location */
extern void TOOLS_convert_engineering_TM_conversions(
  /* TM_conversions::TOOLS_convert_engineering_location::Loc_int */ kcg_int Loc_int,
  outC_TOOLS_convert_engineering_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TOOLS_convert_engineering_reset_TM_conversions(
  outC_TOOLS_convert_engineering_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TOOLS_convert_engineering_init_TM_conversions(
  outC_TOOLS_convert_engineering_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TOOLS_convert_engineering_TM_conversions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TOOLS_convert_engineering_TM_conversions.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

