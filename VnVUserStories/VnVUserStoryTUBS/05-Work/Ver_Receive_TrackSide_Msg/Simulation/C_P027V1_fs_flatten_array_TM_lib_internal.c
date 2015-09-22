/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_fs_flatten_array_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void C_P027V1_fs_flatten_array_init_TM_lib_internal(
  outC_C_P027V1_fs_flatten_array_TM_lib_internal *outC)
{
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L154 = 0;
  outC->_L10 = 0;
  for (i1 = 0; i1 < 32; i1++) {
    for (i = 0; i < 2; i++) {
      outC->_L2[i1][i] = 0;
    }
  }
  outC->_L8 = 0;
  for (i2 = 0; i2 < 64; i2++) {
    outC->_L7[i2] = 0;
  }
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L3 = 0;
  for (i3 = 0; i3 < 64; i3++) {
    outC->_L1[i3] = 0;
  }
  for (i4 = 0; i4 < 64; i4++) {
    outC->flat[i4] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P027V1_fs_flatten_array_reset_TM_lib_internal(
  outC_C_P027V1_fs_flatten_array_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff */
void C_P027V1_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::i */ kcg_int i,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::Acc */ P027V1_sections_array_flat_qdiff_T_TM_baseline2 *Acc,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::section_arrays */ _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 *section_arrays,
  outC_C_P027V1_fs_flatten_array_TM_lib_internal *outC)
{
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&outC->_L1, Acc);
  kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(
    &outC->_L2,
    section_arrays);
  outC->_L3 = i;
  outC->_L5 = 2;
  outC->_L6 = outC->_L3 % outC->_L5;
  outC->_L154 = outC->_L3 / outC->_L5;
  if ((0 <= outC->_L154) & (outC->_L154 < 32) & ((0 <= outC->_L6) & (outC->_L6 <
        2))) {
    outC->_L10 = outC->_L2[outC->_L154][outC->_L6];
  }
  else {
    outC->_L10 = 0;
  }
  outC->_L8 = i;
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L7,
    &outC->_L1);
  if ((0 <= outC->_L8) & (outC->_L8 < 64)) {
    outC->_L7[outC->_L8] = outC->_L10;
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->flat,
    &outC->_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_fs_flatten_array_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

