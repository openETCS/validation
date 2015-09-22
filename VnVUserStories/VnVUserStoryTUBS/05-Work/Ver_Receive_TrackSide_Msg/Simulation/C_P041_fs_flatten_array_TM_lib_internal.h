/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _C_P041_fs_flatten_array_TM_lib_internal_H_
#define _C_P041_fs_flatten_array_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P041_sections_array_flat_T_TM /* TM_lib_internal::C_P041_fs_flatten_array::flat */ flat;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P041_sections_array_flat_T_TM /* TM_lib_internal::C_P041_fs_flatten_array::_L1 */ _L1;
  kcg_int /* TM_lib_internal::C_P041_fs_flatten_array::_L3 */ _L3;
  kcg_int /* TM_lib_internal::C_P041_fs_flatten_array::_L5 */ _L5;
  kcg_int /* TM_lib_internal::C_P041_fs_flatten_array::_L6 */ _L6;
  P041_sections_array_flat_T_TM /* TM_lib_internal::C_P041_fs_flatten_array::_L7 */ _L7;
  kcg_int /* TM_lib_internal::C_P041_fs_flatten_array::_L8 */ _L8;
  P041_OBU_sectionlist_array_T_TM /* TM_lib_internal::C_P041_fs_flatten_array::_L2 */ _L2;
  kcg_int /* TM_lib_internal::C_P041_fs_flatten_array::_L10 */ _L10;
  kcg_int /* TM_lib_internal::C_P041_fs_flatten_array::_L154 */ _L154;
} outC_C_P041_fs_flatten_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P041_fs_flatten_array */
extern void C_P041_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P041_fs_flatten_array::i */ kcg_int i,
  /* TM_lib_internal::C_P041_fs_flatten_array::Acc */ P041_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P041_fs_flatten_array::section_arrays */ P041_OBU_sectionlist_array_T_TM *section_arrays,
  outC_C_P041_fs_flatten_array_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P041_fs_flatten_array_reset_TM_lib_internal(
  outC_C_P041_fs_flatten_array_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P041_fs_flatten_array_init_TM_lib_internal(
  outC_C_P041_fs_flatten_array_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _C_P041_fs_flatten_array_TM_lib_internal_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** C_P041_fs_flatten_array_TM_lib_internal.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

