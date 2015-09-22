/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_tracksim_compr_TM_conversions.h"

#ifndef KCG_USER_DEFINED_INIT
void C_P021_tracksim_compr_init_TM_conversions(
  outC_C_P021_tracksim_compr_TM_conversions *outC)
{
  kcg_int i11;
  kcg_int i10;
  kcg_int i9;
  kcg_int i8;
  kcg_int i7;
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L388 = 0;
  for (i = 0; i < 1; i++) {
    outC->_L386[i].D_GRADIENT = 0;
    outC->_L386[i].Q_GDIR = 0;
    outC->_L386[i].G_A = 0;
  }
  outC->_L387 = 0;
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L385[i1].D_GRADIENT = 0;
    outC->_L385[i1].Q_GDIR = 0;
    outC->_L385[i1].G_A = 0;
  }
  for (i2 = 0; i2 < 104; i2++) {
    outC->_L384[i2] = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L383[i3] = 0;
  }
  for (i4 = 0; i4 < 5; i4++) {
    outC->_L381[i4] = 0;
  }
  for (i5 = 0; i5 < 99; i5++) {
    outC->_L380[i5] = 0;
  }
  outC->_L379 = 0;
  outC->_L378 = 0;
  for (i6 = 0; i6 < 1; i6++) {
    outC->_L376[i6] = 0;
  }
  outC->_L375.D_GRADIENT = 0;
  outC->_L375.Q_GDIR = 0;
  outC->_L375.G_A = 0;
  for (i7 = 0; i7 < 4; i7++) {
    outC->_L373[i7] = 0;
  }
  for (i8 = 0; i8 < 32; i8++) {
    outC->_L369[i8].D_GRADIENT = 0;
    outC->_L369[i8].Q_GDIR = 0;
    outC->_L369[i8].G_A = 0;
  }
  outC->_L370 = 0;
  outC->_L371 = 0;
  outC->_L356 = Q_DIR_Reverse;
  outC->_L214 = kcg_true;
  outC->_L215 = 0;
  outC->_L216 = 0;
  outC->_L217 = 0;
  outC->_L218 = 0;
  outC->_L219 = 0;
  outC->_L336 = 0;
  outC->_L213 = 0;
  outC->_L212 = 0;
  for (i9 = 0; i9 < 396; i9++) {
    outC->_L209[i9] = 0;
  }
  outC->_L206 = 0;
  outC->_L204.nid_packet = 0;
  outC->_L204.q_dir = Q_DIR_Reverse;
  outC->_L204.valid = kcg_true;
  outC->_L204.startAddress = 0;
  outC->_L204.endAddress = 0;
  outC->_L1.valid = kcg_true;
  outC->_L1.NID_PACKET = 0;
  outC->_L1.Q_DIR = 0;
  outC->_L1.L_PACKET = 0;
  outC->_L1.Q_SCALE = 0;
  outC->_L1.D_GRADIENT = 0;
  outC->_L1.Q_GDIR = 0;
  outC->_L1.G_A = 0;
  outC->_L1.N_ITER = 0;
  for (i10 = 0; i10 < 32; i10++) {
    outC->_L1.SECTIONS[i10].D_GRADIENT = 0;
    outC->_L1.SECTIONS[i10].Q_GDIR = 0;
    outC->_L1.SECTIONS[i10].G_A = 0;
  }
  outC->p_size = 0;
  outC->_L5_16_IfBlock1 = kcg_true;
  outC->_L4_15_IfBlock1 = Q_DIR_Reverse;
  outC->_L4_1_IfBlock1 = kcg_true;
  outC->_L2_13_IfBlock1 = Q_DIR_Reverse;
  outC->_L1_1_IfBlock1 = kcg_true;
  outC->_L2_1_IfBlock1 = Q_DIR_Reverse;
  outC->else_clock_1_IfBlock1 = kcg_true;
  outC->_L3_1_IfBlock1 = Q_DIR_Reverse;
  outC->_L5_1_IfBlock1 = kcg_true;
  outC->error_1 = kcg_true;
  outC->q_dir_in_1 = 0;
  outC->_L13_1 = kcg_true;
  outC->_L12_1 = 0;
  outC->q_dir_int_1 = 0;
  outC->q_dir_1 = Q_DIR_Reverse;
  outC->_4_else_clock_1_IfBlock1 = kcg_true;
  outC->IfBlock1_clock_1 = kcg_true;
  for (i11 = 0; i11 < 500; i11++) {
    outC->P005_compressed[i11] = 0;
  }
  outC->Header.nid_packet = 0;
  outC->Header.q_dir = Q_DIR_Reverse;
  outC->Header.valid = kcg_true;
  outC->Header.startAddress = 0;
  outC->Header.endAddress = 0;
  /* 1 */ T_DeterminePacketSizeInt_init_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */ T_Build_Metadata_Packet_ID_init_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ C_P021_flatten_sections_init_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P021_tracksim_compr_reset_TM_conversions(
  outC_C_P021_tracksim_compr_TM_conversions *outC)
{
  /* 1 */ T_DeterminePacketSizeInt_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */ T_Build_Metadata_Packet_ID_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ C_P021_flatten_sections_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions::C_P021_tracksim_compr */
void C_P021_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P021_tracksim_compr::P021_from_track */ P021_trackside_int_T_TM *P021_from_track,
  outC_C_P021_tracksim_compr_TM_conversions *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_bool noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _3_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _4_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _5_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _6_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _7_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _8_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _9_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _10_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _11_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _12_error_1;
  
  kcg_copy_P021_trackside_int_T_TM(&outC->_L1, P021_from_track);
  outC->_L387 = outC->_L1.NID_PACKET;
  outC->_L215 = outC->_L1.Q_DIR;
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  outC->_L370 = outC->_L1.N_ITER;
  /* pow */ for (i2 = 0; i2 < 1; i2++) {
    outC->_L376[i2] = outC->_L370;
  }
  kcg_copy_array_int_4(&outC->_L381[0], &outC->_L373);
  kcg_copy_array_int_1(&outC->_L381[4], &outC->_L376);
  outC->_L218 = outC->_L1.D_GRADIENT;
  outC->_L219 = outC->_L1.Q_GDIR;
  outC->_L371 = outC->_L1.G_A;
  outC->_L375.D_GRADIENT = outC->_L218;
  outC->_L375.Q_GDIR = outC->_L219;
  outC->_L375.G_A = outC->_L371;
  /* pow */ for (i1 = 0; i1 < 1; i1++) {
    kcg_copy_P021_section_int_T_TM(&outC->_L386[i1], &outC->_L375);
  }
  kcg_copy_P021_trackide_sectionlist_T_TM(&outC->_L369, &outC->_L1.SECTIONS);
  kcg_copy_array_10565(&outC->_L385[0], &outC->_L386);
  kcg_copy_P021_trackide_sectionlist_T_TM(&outC->_L385[1], &outC->_L369);
  /* 1 */
  C_P021_flatten_sections_TM_lib_internal(&outC->_L385, &outC->Context_1);
  kcg_copy_P021_sections_array_flat_T_TM(
    &outC->_L380,
    &outC->Context_1.Flattened);
  kcg_copy_array_int_5(&outC->_L384[0], &outC->_L381);
  kcg_copy_P021_sections_array_flat_T_TM(&outC->_L384[5], &outC->_L380);
  outC->_L336 = 0;
  /* pow */ for (i = 0; i < 396; i++) {
    outC->_L209[i] = outC->_L336;
  }
  kcg_copy_array_int_104(&outC->_L383[0], &outC->_L384);
  kcg_copy_array_int_396(&outC->_L383[104], &outC->_L209);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P005_compressed,
    &outC->_L383);
  /* 1 */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    0,
    21,
    INT_M_VERSION_2_0_TM,
    &outC->_1_Context_1);
  outC->_L388 = outC->_1_Context_1.nid_packet_meta;
  outC->q_dir_int_1 = outC->_L215;
  outC->_L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_L12_1;
  outC->IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_ck_IfBlock1 */ if (outC->IfBlock1_clock_1) {
    outC->_L4_15_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _11_q_dir_1 = outC->_L4_15_IfBlock1;
    outC->q_dir_1 = _11_q_dir_1;
  }
  else {
    outC->_4_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (outC->_4_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_1_IfBlock1;
      _9_q_dir_1 = q_dir_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (outC->else_clock_1_IfBlock1) {
        outC->_L2_13_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _7_q_dir_1 = outC->_L2_13_IfBlock1;
        _4_q_dir_1 = _7_q_dir_1;
      }
      else {
        outC->_L2_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _5_q_dir_1 = outC->_L2_1_IfBlock1;
        _4_q_dir_1 = _5_q_dir_1;
      }
      _9_q_dir_1 = _4_q_dir_1;
    }
    outC->q_dir_1 = _9_q_dir_1;
  }
  outC->_L356 = outC->q_dir_1;
  outC->_L214 = outC->_L1.valid;
  outC->_L206 = 0;
  /* 1 */
  T_DeterminePacketSizeInt_TM_lib_internal(
    outC->_L370,
    4 + 1 + 3,
    3,
    &outC->_2_Context_1);
  outC->_L379 = outC->_2_Context_1.p_size;
  outC->p_size = outC->_L379;
  outC->_L378 = outC->p_size;
  outC->_L213 = 1;
  outC->_L212 = outC->_L378 - outC->_L213;
  outC->_L204.nid_packet = outC->_L388;
  outC->_L204.q_dir = outC->_L356;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  /* 1_ck_IfBlock1 */ if (outC->IfBlock1_clock_1) {
    outC->_L5_16_IfBlock1 = kcg_false;
    _12_error_1 = outC->_L5_16_IfBlock1;
    outC->error_1 = _12_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (outC->_4_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      error_1 = outC->_L5_1_IfBlock1;
      _10_error_1 = error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (outC->else_clock_1_IfBlock1) {
        outC->_L4_1_IfBlock1 = kcg_false;
        _8_error_1 = outC->_L4_1_IfBlock1;
        _3_error_1 = _8_error_1;
      }
      else {
        outC->_L1_1_IfBlock1 = kcg_true;
        _6_error_1 = outC->_L1_1_IfBlock1;
        _3_error_1 = _6_error_1;
      }
      _10_error_1 = _3_error_1;
    }
    outC->error_1 = _10_error_1;
  }
  outC->_L13_1 = outC->error_1;
  noname_1 = outC->_L13_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_tracksim_compr_TM_conversions.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

