/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_flatten_sections_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void C_P021_flatten_sections_init_TM_lib_internal(
  outC_C_P021_flatten_sections_TM_lib_internal *outC)
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
  
  for (i2 = 0; i2 < 231; i2++) {
    for (i1 = 0; i1 < 33; i1++) {
      for (i = 0; i < 3; i++) {
        outC->_L80[i2][i1][i] = 0;
      }
    }
  }
  for (i3 = 0; i3 < 99; i3++) {
    outC->_L78[i3] = 0;
  }
  for (i5 = 0; i5 < 33; i5++) {
    for (i4 = 0; i4 < 3; i4++) {
      outC->_L74[i5][i4] = 0;
    }
  }
  for (i6 = 0; i6 < 33; i6++) {
    outC->_L75[i6].D_GRADIENT = 0;
    outC->_L75[i6].Q_GDIR = 0;
    outC->_L75[i6].G_A = 0;
  }
  for (i7 = 0; i7 < 99; i7++) {
    outC->_L76[i7] = 0;
  }
  for (i8 = 0; i8 < 99; i8++) {
    outC->Flattened[i8] = 0;
  }
  for (i10 = 0; i10 < 231; i10++) {
    /* 1 */
    C_P021_fs_flatten_array_init_TM_lib_internal(&outC->_1_Context_1[i10]);
  }
  for (i9 = 0; i9 < 33; i9++) {
    /* 1 */
    C_P021_fs_struct_to_array_init_TM_lib_internal(&outC->Context_1[i9]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P021_flatten_sections_reset_TM_lib_internal(
  outC_C_P021_flatten_sections_TM_lib_internal *outC)
{
  kcg_int i;
  kcg_int i1;
  
  for (i1 = 0; i1 < 231; i1++) {
    /* 1 */
    C_P021_fs_flatten_array_reset_TM_lib_internal(&outC->_1_Context_1[i1]);
  }
  for (i = 0; i < 33; i++) {
    /* 1 */
    C_P021_fs_struct_to_array_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::C_P021_flatten_sections */
void C_P021_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P021_flatten_sections::MergedSections */ P021_OBU_sectionlist_int_T_TM *MergedSections,
  outC_C_P021_flatten_sections_TM_lib_internal *outC)
{
  kcg_int i2;
  kcg_int i1;
  /* TM_lib_internal::C_P021_flatten_sections */ P021_sections_array_flat_T_TM acc;
  kcg_int i;
  
  kcg_copy_P021_sections_array_flat_T_TM(
    &outC->_L76,
    (P021_sections_array_flat_T_TM *) &DEFAULT_P021_sections_array_flat_TM);
  kcg_copy_P021_OBU_sectionlist_int_T_TM(&outC->_L75, MergedSections);
  for (i2 = 0; i2 < 33; i2++) {
    /* 1 */
    C_P021_fs_struct_to_array_TM_lib_internal(
      &outC->_L75[i2],
      &outC->Context_1[i2]);
    kcg_copy_P021_section_array_T_TM(
      &outC->_L74[i2],
      &outC->Context_1[i2].section_arrays);
  }
  /* pow */ for (i1 = 0; i1 < 231; i1++) {
    kcg_copy_array_int_3_33(&outC->_L80[i1], &outC->_L74);
  }
  kcg_copy_P021_sections_array_flat_T_TM(&outC->_L78, &outC->_L76);
  for (i = 0; i < 231; i++) {
    kcg_copy_P021_sections_array_flat_T_TM(&acc, &outC->_L78);
    /* 1 */
    C_P021_fs_flatten_array_TM_lib_internal(
      i,
      &acc,
      &outC->_L80[i],
      &outC->_1_Context_1[i]);
    kcg_copy_P021_sections_array_flat_T_TM(
      &outC->_L78,
      &outC->_1_Context_1[i].flat);
  }
  kcg_copy_P021_sections_array_flat_T_TM(&outC->Flattened, &outC->_L78);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_flatten_sections_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

