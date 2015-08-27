/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _m_s_To_km_h_Toolbox_Converters_H_
#define _m_s_To_km_h_Toolbox_Converters_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Converters::m_s_To_km_h::km_h */ km_h;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Converters::m_s_To_km_h::_L1 */ _L1;
  kcg_real /* Toolbox::Converters::m_s_To_km_h::_L2 */ _L2;
  kcg_real /* Toolbox::Converters::m_s_To_km_h::_L3 */ _L3;
} outC_m_s_To_km_h_Toolbox_Converters;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Converters::m_s_To_km_h */
extern void m_s_To_km_h_Toolbox_Converters(
  /* Toolbox::Converters::m_s_To_km_h::m_s */ kcg_real m_s,
  outC_m_s_To_km_h_Toolbox_Converters *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void m_s_To_km_h_reset_Toolbox_Converters(
  outC_m_s_To_km_h_Toolbox_Converters *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void m_s_To_km_h_init_Toolbox_Converters(
  outC_m_s_To_km_h_Toolbox_Converters *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _m_s_To_km_h_Toolbox_Converters_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** m_s_To_km_h_Toolbox_Converters.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

