/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_fs_flatten_array_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void C_P041_fs_flatten_array_init_TM_lib_internal(
  outC_C_P041_fs_flatten_array_TM_lib_internal *outC)
{
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L154 = 0;
  outC->_L10 = 0;
  for (i1 = 0; i1 < 33; i1++) {
    for (i = 0; i < 3; i++) {
      outC->_L2[i1][i] = 0;
    }
  }
  outC->_L8 = 0;
  for (i2 = 0; i2 < 99; i2++) {
    outC->_L7[i2] = 0;
  }
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L3 = 0;
  for (i3 = 0; i3 < 99; i3++) {
    outC->_L1[i3] = 0;
  }
  for (i4 = 0; i4 < 99; i4++) {
    outC->flat[i4] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P041_fs_flatten_array_reset_TM_lib_internal(
  outC_C_P041_fs_flatten_array_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::C_P041_fs_flatten_array */
void C_P041_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P041_fs_flatten_array::i */ kcg_int i,
  /* TM_lib_internal::C_P041_fs_flatten_array::Acc */ P041_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P041_fs_flatten_array::section_arrays */ P041_OBU_sectionlist_array_T_TM *section_arrays,
  outC_C_P041_fs_flatten_array_TM_lib_internal *outC)
{
  kcg_copy_P041_sections_array_flat_T_TM(&outC->_L1, Acc);
  kcg_copy_P041_OBU_sectionlist_array_T_TM(&outC->_L2, section_arrays);
  outC->_L3 = i;
  outC->_L5 = 3;
  outC->_L6 = outC->_L3 % outC->_L5;
  outC->_L154 = outC->_L3 / outC->_L5;
  if ((0 <= outC->_L154) & (outC->_L154 < 33) & ((0 <= outC->_L6) & (outC->_L6 <
        3))) {
    outC->_L10 = outC->_L2[outC->_L154][outC->_L6];
  }
  else {
    outC->_L10 = 0;
  }
  outC->_L8 = i;
  kcg_copy_P041_sections_array_flat_T_TM(&outC->_L7, &outC->_L1);
  if ((0 <= outC->_L8) & (outC->_L8 < 99)) {
    outC->_L7[outC->_L8] = outC->_L10;
  }
  kcg_copy_P041_sections_array_flat_T_TM(&outC->flat, &outC->_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P041_fs_flatten_array_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

