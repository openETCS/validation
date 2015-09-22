/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _C_P041_flatten_sections_TM_lib_internal_H_
#define _C_P041_flatten_sections_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P041_fs_flatten_array_TM_lib_internal.h"
#include "C_P041_fs_struct_to_array_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P041_sections_array_flat_T_TM /* TM_lib_internal::C_P041_flatten_sections::Flattened */ Flattened;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P041_fs_flatten_array_TM_lib_internal /* 1 */ _1_Context_1[99];
  outC_C_P041_fs_struct_to_array_TM_lib_internal /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P041_sections_array_flat_T_TM /* TM_lib_internal::C_P041_flatten_sections::_L76 */ _L76;
  P041_OBU_sectionlist_int_T_TM /* TM_lib_internal::C_P041_flatten_sections::_L75 */ _L75;
  array_int_3_33 /* TM_lib_internal::C_P041_flatten_sections::_L74 */ _L74;
  P041_sections_array_flat_T_TM /* TM_lib_internal::C_P041_flatten_sections::_L78 */ _L78;
  array_int_3_33_99 /* TM_lib_internal::C_P041_flatten_sections::_L80 */ _L80;
} outC_C_P041_flatten_sections_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P041_flatten_sections */
extern void C_P041_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P041_flatten_sections::MergedSections */ P041_OBU_sectionlist_int_T_TM *MergedSections,
  outC_C_P041_flatten_sections_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P041_flatten_sections_reset_TM_lib_internal(
  outC_C_P041_flatten_sections_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P041_flatten_sections_init_TM_lib_internal(
  outC_C_P041_flatten_sections_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _C_P041_flatten_sections_TM_lib_internal_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** C_P041_flatten_sections_TM_lib_internal.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

