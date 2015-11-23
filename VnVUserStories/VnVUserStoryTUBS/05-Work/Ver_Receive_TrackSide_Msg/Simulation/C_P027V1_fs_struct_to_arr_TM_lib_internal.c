/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_fs_struct_to_arr_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void C_P027V1_fs_struct_to_arr_init_TM_lib_internal(
  outC_C_P027V1_fs_struct_to_arr_TM_lib_internal *outC)
{
  kcg_int i1;
  kcg_int i;
  
  outC->_L3 = 0;
  outC->_L4 = 0;
  for (i = 0; i < 2; i++) {
    outC->_L2[i] = 0;
  }
  outC->_L1.NC_DIFF = 0;
  outC->_L1.V_DIFF = 0;
  for (i1 = 0; i1 < 2; i1++) {
    outC->section_arrays[i1] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P027V1_fs_struct_to_arr_reset_TM_lib_internal(
  outC_C_P027V1_fs_struct_to_arr_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff */
void C_P027V1_fs_struct_to_arr_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::section */ P027V1_section_int_qdiff_T_TM_baseline2 *section,
  outC_C_P027V1_fs_struct_to_arr_TM_lib_internal *outC)
{
  kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2(&outC->_L1, section);
  outC->_L3 = outC->_L1.NC_DIFF;
  outC->_L4 = outC->_L1.V_DIFF;
  outC->_L2[0] = outC->_L3;
  outC->_L2[1] = outC->_L4;
  kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2(
    &outC->section_arrays,
    &outC->_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_fs_struct_to_arr_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

