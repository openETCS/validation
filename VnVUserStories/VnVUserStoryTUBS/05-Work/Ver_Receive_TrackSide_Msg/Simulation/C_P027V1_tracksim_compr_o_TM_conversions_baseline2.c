/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_o_TM_conversions_baseline2.h"

#ifndef KCG_USER_DEFINED_INIT
void C_P027V1_tracksim_compr_o_init_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2 *outC)
{
  kcg_int i7;
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L431 = 0;
  outC->_L430 = 0;
  outC->_L429 = 0;
  outC->_L426 = 0;
  for (i = 0; i < 64; i++) {
    outC->_L425[i] = 0;
  }
  outC->_L424 = 0;
  outC->_L423 = kcg_true;
  outC->_L422 = Q_DIR_Reverse;
  outC->_L387 = 0;
  for (i1 = 0; i1 < 68; i1++) {
    outC->_L385[i1] = 0;
  }
  for (i2 = 0; i2 < 500; i2++) {
    outC->_L383[i2] = 0;
  }
  for (i3 = 0; i3 < 4; i3++) {
    outC->_L373[i3] = 0;
  }
  outC->_L214 = 0;
  outC->_L215 = 0;
  outC->_L216 = 0;
  for (i4 = 0; i4 < 32; i4++) {
    outC->_L217[i4].NC_DIFF = 0;
    outC->_L217[i4].V_DIFF = 0;
  }
  outC->_L336 = 0;
  outC->_L213 = 0;
  outC->_L212 = 0;
  for (i5 = 0; i5 < 432; i5++) {
    outC->_L209[i5] = 0;
  }
  outC->_L206 = 0;
  outC->_L204.nid_packet = 0;
  outC->_L204.q_dir = Q_DIR_Reverse;
  outC->_L204.valid = kcg_true;
  outC->_L204.startAddress = 0;
  outC->_L204.endAddress = 0;
  outC->_L1.D_STATIC = 0;
  outC->_L1.V_STATIC = 0;
  outC->_L1.Q_FRONT = 0;
  outC->_L1.N_ITER = 0;
  for (i6 = 0; i6 < 32; i6++) {
    outC->_L1.SECTIONS_q_diff[i6].NC_DIFF = 0;
    outC->_L1.SECTIONS_q_diff[i6].V_DIFF = 0;
  }
  outC->p_size = 0;
  for (i7 = 0; i7 < 500; i7++) {
    outC->P027V1_sections_compressed[i7] = 0;
  }
  outC->Header.nid_packet = 0;
  outC->Header.q_dir = Q_DIR_Reverse;
  outC->Header.valid = kcg_true;
  outC->Header.startAddress = 0;
  outC->Header.endAddress = 0;
  /* 1 */ T_DeterminePacketSizeInt_init_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ C_P027_flatten_sections_qdiff_init_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P027V1_tracksim_compr_o_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2 *outC)
{
  /* 1 */ T_DeterminePacketSizeInt_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ C_P027_flatten_sections_qdiff_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section */
void C_P027V1_tracksim_compr_o_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::i */ kcg_int i1,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::P027V1_sections_from_track */ P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::meta_first_section_in */ kcg_int meta_first_section_in,
  outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2 *outC)
{
  kcg_int i;
  
  kcg_copy_P027V1_section_int_T_TM_baseline2(
    &outC->_L1,
    P027V1_sections_from_track);
  outC->_L214 = outC->_L1.D_STATIC;
  outC->_L387 = outC->_L1.V_STATIC;
  outC->_L215 = outC->_L1.Q_FRONT;
  outC->_L216 = outC->_L1.N_ITER;
  outC->_L373[0] = outC->_L214;
  outC->_L373[1] = outC->_L387;
  outC->_L373[2] = outC->_L215;
  outC->_L373[3] = outC->_L216;
  kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
    &outC->_L217,
    &outC->_L1.SECTIONS_q_diff);
  /* 1 */
  C_P027_flatten_sections_qdiff_TM_lib_internal(&outC->_L217, &outC->Context_1);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L425,
    &outC->Context_1.Flattened);
  kcg_copy_array_int_4(&outC->_L385[0], &outC->_L373);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L385[4],
    &outC->_L425);
  outC->_L336 = 0;
  /* pow */ for (i = 0; i < 432; i++) {
    outC->_L209[i] = outC->_L336;
  }
  kcg_copy_array_int_68(&outC->_L383[0], &outC->_L385);
  kcg_copy_array_int_432(&outC->_L383[68], &outC->_L209);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P027V1_sections_compressed,
    &outC->_L383);
  outC->_L431 = meta_first_section_in;
  outC->_L429 = i1;
  outC->_L430 = outC->_L431 + outC->_L429;
  outC->_L422 = ENUM_Q_DIR_both_QDIR_TM;
  outC->_L423 = kcg_true;
  outC->_L206 = 0;
  /* 1 */
  T_DeterminePacketSizeInt_TM_lib_internal(
    outC->_L216,
    4,
    2,
    &outC->_1_Context_1);
  outC->_L426 = outC->_1_Context_1.p_size;
  outC->p_size = outC->_L426;
  outC->_L424 = outC->p_size;
  outC->_L213 = 1;
  outC->_L212 = outC->_L424 - outC->_L213;
  outC->_L204.nid_packet = outC->_L430;
  outC->_L204.q_dir = outC->_L422;
  outC->_L204.valid = outC->_L423;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_tracksim_compr_o_TM_conversions_baseline2.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

