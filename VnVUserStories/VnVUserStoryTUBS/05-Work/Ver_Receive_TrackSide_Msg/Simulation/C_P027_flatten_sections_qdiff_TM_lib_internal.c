/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027_flatten_sections_qdiff_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void C_P027_flatten_sections_qdiff_init_TM_lib_internal(
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC)
{
  kcg_int i9;
  kcg_int i10;
  kcg_int i8;
  kcg_int i7;
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  for (i2 = 0; i2 < 32; i2++) {
    for (i1 = 0; i1 < 32; i1++) {
      for (i = 0; i < 2; i++) {
        outC->_L84[i2][i1][i] = 0;
      }
    }
  }
  for (i3 = 0; i3 < 64; i3++) {
    outC->_L83[i3] = 0;
  }
  for (i5 = 0; i5 < 32; i5++) {
    for (i4 = 0; i4 < 2; i4++) {
      outC->_L74[i5][i4] = 0;
    }
  }
  for (i6 = 0; i6 < 32; i6++) {
    outC->_L75[i6].NC_DIFF = 0;
    outC->_L75[i6].V_DIFF = 0;
  }
  for (i7 = 0; i7 < 64; i7++) {
    outC->_L76[i7] = 0;
  }
  for (i8 = 0; i8 < 64; i8++) {
    outC->Flattened[i8] = 0;
  }
  for (i10 = 0; i10 < 32; i10++) {
    /* 1 */
    C_P027V1_fs_flatten_array_init_TM_lib_internal(&outC->_1_Context_1[i10]);
  }
  for (i9 = 0; i9 < 32; i9++) {
    /* 1 */
    C_P027V1_fs_struct_to_arr_init_TM_lib_internal(&outC->Context_1[i9]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P027_flatten_sections_qdiff_reset_TM_lib_internal(
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC)
{
  kcg_int i;
  kcg_int i1;
  
  for (i1 = 0; i1 < 32; i1++) {
    /* 1 */
    C_P027V1_fs_flatten_array_reset_TM_lib_internal(&outC->_1_Context_1[i1]);
  }
  for (i = 0; i < 32; i++) {
    /* 1 */
    C_P027V1_fs_struct_to_arr_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::C_P027_flatten_sections_qdiff */
void C_P027_flatten_sections_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::MergedSections */ P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 *MergedSections,
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC)
{
  kcg_int i2;
  kcg_int i1;
  /* TM_lib_internal::C_P027_flatten_sections_qdiff */ P027V1_sections_array_flat_qdiff_T_TM_baseline2 acc;
  kcg_int i;
  
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L76,
    (P027V1_sections_array_flat_qdiff_T_TM_baseline2 *)
      &DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2);
  kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(
    &outC->_L75,
    MergedSections);
  for (i2 = 0; i2 < 32; i2++) {
    /* 1 */
    C_P027V1_fs_struct_to_arr_TM_lib_internal(
      &outC->_L75[i2],
      &outC->Context_1[i2]);
    kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2(
      &outC->_L74[i2],
      &outC->Context_1[i2].section_arrays);
  }
  /* pow */ for (i1 = 0; i1 < 32; i1++) {
    kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(
      &outC->_L84[i1],
      &outC->_L74);
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L83,
    &outC->_L76);
  for (i = 0; i < 32; i++) {
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&acc, &outC->_L83);
    /* 1 */
    C_P027V1_fs_flatten_array_TM_lib_internal(
      i,
      &acc,
      &outC->_L84[i],
      &outC->_1_Context_1[i]);
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
      &outC->_L83,
      &outC->_1_Context_1[i].flat);
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->Flattened,
    &outC->_L83);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027_flatten_sections_qdiff_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

