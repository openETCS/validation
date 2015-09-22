/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_fs_struct_to_array_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void C_P041_fs_struct_to_array_init_TM_lib_internal(
  outC_C_P041_fs_struct_to_array_TM_lib_internal *outC)
{
  kcg_int i1;
  kcg_int i;
  
  outC->_L11 = 0;
  for (i = 0; i < 3; i++) {
    outC->_L10[i] = 0;
  }
  outC->_L3 = 0;
  outC->_L4 = 0;
  outC->_L1.M_LEVELTR = 0;
  outC->_L1.NID_NTC = 0;
  outC->_L1.L_ACKLEVELTR = 0;
  for (i1 = 0; i1 < 3; i1++) {
    outC->section_arrays[i1] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P041_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P041_fs_struct_to_array_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::C_P041_fs_struct_to_array */
void C_P041_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P041_fs_struct_to_array::section */ P041_section_int_T_TM *section,
  outC_C_P041_fs_struct_to_array_TM_lib_internal *outC)
{
  kcg_copy_P041_section_int_T_TM(&outC->_L1, section);
  outC->_L3 = outC->_L1.M_LEVELTR;
  outC->_L4 = outC->_L1.NID_NTC;
  outC->_L11 = outC->_L1.L_ACKLEVELTR;
  outC->_L10[0] = outC->_L3;
  outC->_L10[1] = outC->_L4;
  outC->_L10[2] = outC->_L11;
  kcg_copy_P041_section_array_T_TM(&outC->section_arrays, &outC->_L10);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P041_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

