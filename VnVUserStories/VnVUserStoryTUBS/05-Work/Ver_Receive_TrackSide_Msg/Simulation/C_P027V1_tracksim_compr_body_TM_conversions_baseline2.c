/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_body_TM_conversions_baseline2.h"

#ifndef KCG_USER_DEFINED_INIT
void C_P027V1_tracksim_compr_body_init_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 *outC)
{
  kcg_int i16;
  kcg_int i15;
  kcg_int i14;
  kcg_int i13;
  kcg_int i12;
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
  
  outC->_L405 = 0;
  outC->_L403 = 0;
  outC->_L402 = Q_DIR_Reverse;
  outC->_L400 = 0;
  outC->_L396 = 0;
  outC->_L394.D_STATIC = 0;
  outC->_L394.V_STATIC = 0;
  outC->_L394.Q_FRONT = 0;
  outC->_L394.N_ITER = 0;
  for (i = 0; i < 32; i++) {
    outC->_L394.SECTIONS_q_diff[i].NC_DIFF = 0;
    outC->_L394.SECTIONS_q_diff[i].V_DIFF = 0;
  }
  outC->_L391 = 0;
  outC->_L387 = 0;
  for (i2 = 0; i2 < 33; i2++) {
    outC->_L385[i2].D_STATIC = 0;
    outC->_L385[i2].V_STATIC = 0;
    outC->_L385[i2].Q_FRONT = 0;
    outC->_L385[i2].N_ITER = 0;
    for (i1 = 0; i1 < 32; i1++) {
      outC->_L385[i2].SECTIONS_q_diff[i1].NC_DIFF = 0;
      outC->_L385[i2].SECTIONS_q_diff[i1].V_DIFF = 0;
    }
  }
  for (i4 = 0; i4 < 1; i4++) {
    outC->_L386[i4].D_STATIC = 0;
    outC->_L386[i4].V_STATIC = 0;
    outC->_L386[i4].Q_FRONT = 0;
    outC->_L386[i4].N_ITER = 0;
    for (i3 = 0; i3 < 32; i3++) {
      outC->_L386[i4].SECTIONS_q_diff[i3].NC_DIFF = 0;
      outC->_L386[i4].SECTIONS_q_diff[i3].V_DIFF = 0;
    }
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L383[i5] = 0;
  }
  for (i6 = 0; i6 < 6; i6++) {
    outC->_L373[i6] = 0;
  }
  for (i8 = 0; i8 < 32; i8++) {
    outC->_L367[i8].D_STATIC = 0;
    outC->_L367[i8].V_STATIC = 0;
    outC->_L367[i8].Q_FRONT = 0;
    outC->_L367[i8].N_ITER = 0;
    for (i7 = 0; i7 < 32; i7++) {
      outC->_L367[i8].SECTIONS_q_diff[i7].NC_DIFF = 0;
      outC->_L367[i8].SECTIONS_q_diff[i7].V_DIFF = 0;
    }
  }
  outC->_L368 = 0;
  for (i9 = 0; i9 < 32; i9++) {
    outC->_L369[i9].NC_DIFF = 0;
    outC->_L369[i9].V_DIFF = 0;
  }
  outC->_L370 = 0;
  outC->_L371 = 0;
  outC->_L214 = kcg_true;
  outC->_L215 = 0;
  outC->_L216 = 0;
  outC->_L217 = 0;
  outC->_L218 = 0;
  outC->_L219 = 0;
  outC->_L336 = 0;
  outC->_L213 = 0;
  outC->_L212 = 0;
  for (i10 = 0; i10 < 494; i10++) {
    outC->_L209[i10] = 0;
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
  outC->_L1.D_STATIC = 0;
  outC->_L1.V_STATIC = 0;
  outC->_L1.Q_FRONT = 0;
  outC->_L1.N_ITER_n = 0;
  for (i11 = 0; i11 < 32; i11++) {
    outC->_L1.SECTIONS_q_diff[i11].NC_DIFF = 0;
    outC->_L1.SECTIONS_q_diff[i11].V_DIFF = 0;
  }
  outC->_L1.N_ITER_k = 0;
  for (i13 = 0; i13 < 32; i13++) {
    outC->_L1.SECTIONS_SSP[i13].D_STATIC = 0;
    outC->_L1.SECTIONS_SSP[i13].V_STATIC = 0;
    outC->_L1.SECTIONS_SSP[i13].Q_FRONT = 0;
    outC->_L1.SECTIONS_SSP[i13].N_ITER = 0;
    for (i12 = 0; i12 < 32; i12++) {
      outC->_L1.SECTIONS_SSP[i13].SECTIONS_q_diff[i12].NC_DIFF = 0;
      outC->_L1.SECTIONS_SSP[i13].SECTIONS_q_diff[i12].V_DIFF = 0;
    }
  }
  outC->n_iter_k = 0;
  outC->_L5_14_IfBlock1 = kcg_true;
  outC->_L4_13_IfBlock1 = Q_DIR_Reverse;
  outC->_L4_1_IfBlock1 = kcg_true;
  outC->_L2_11_IfBlock1 = Q_DIR_Reverse;
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
  outC->_2_else_clock_1_IfBlock1 = kcg_true;
  outC->IfBlock1_clock_1 = kcg_true;
  outC->meta_first_section = 0;
  outC->n_iter_k_out = 0;
  for (i15 = 0; i15 < 33; i15++) {
    outC->P027V1_sections[i15].D_STATIC = 0;
    outC->P027V1_sections[i15].V_STATIC = 0;
    outC->P027V1_sections[i15].Q_FRONT = 0;
    outC->P027V1_sections[i15].N_ITER = 0;
    for (i14 = 0; i14 < 32; i14++) {
      outC->P027V1_sections[i15].SECTIONS_q_diff[i14].NC_DIFF = 0;
      outC->P027V1_sections[i15].SECTIONS_q_diff[i14].V_DIFF = 0;
    }
  }
  for (i16 = 0; i16 < 500; i16++) {
    outC->P027V1_body_compressed[i16] = 0;
  }
  outC->Header.nid_packet = 0;
  outC->Header.q_dir = Q_DIR_Reverse;
  outC->Header.valid = kcg_true;
  outC->Header.startAddress = 0;
  outC->Header.endAddress = 0;
  /* 1 */ T_Build_Metadata_Packet_ID_init_TM_lib_internal(&outC->Context_1);
  /* 3 */ T_Build_Metadata_Packet_ID_init_TM_lib_internal(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P027V1_tracksim_compr_body_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 *outC)
{
  /* 1 */ T_Build_Metadata_Packet_ID_reset_TM_lib_internal(&outC->Context_1);
  /* 3 */ T_Build_Metadata_Packet_ID_reset_TM_lib_internal(&outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body */
void C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::P027V1_from_track */ P027V1_trackside_int_T_TM_baseline2 *P027V1_from_track,
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 *outC)
{
  kcg_int i1;
  kcg_int i;
  kcg_bool noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _2_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _3_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _4_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _5_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _6_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _7_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _8_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _9_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _10_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _11_error_1;
  
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(&outC->_L1, P027V1_from_track);
  outC->_L387 = outC->_L1.NID_PACKET;
  outC->_L215 = outC->_L1.Q_DIR;
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L368 = outC->_L1.N_ITER_k;
  outC->n_iter_k = outC->_L368;
  outC->_L391 = outC->n_iter_k;
  /* 3 */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    100,
    27,
    INT_M_VERSION_1_0_TM,
    &outC->Context_3);
  outC->_L405 = outC->Context_3.nid_packet_meta;
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  outC->_L373[4] = outC->_L391;
  outC->_L373[5] = outC->_L405;
  outC->_L336 = 0;
  /* pow */ for (i1 = 0; i1 < 494; i1++) {
    outC->_L209[i1] = outC->_L336;
  }
  kcg_copy_array_int_6(&outC->_L383[0], &outC->_L373);
  kcg_copy_array_int_494(&outC->_L383[6], &outC->_L209);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P027V1_body_compressed,
    &outC->_L383);
  /* 1 */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    0,
    27,
    INT_M_VERSION_1_0_TM,
    &outC->Context_1);
  outC->_L403 = outC->Context_1.nid_packet_meta;
  outC->q_dir_int_1 = outC->_L215;
  outC->_L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_L12_1;
  outC->IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_ck_IfBlock1 */ if (outC->IfBlock1_clock_1) {
    outC->_L4_13_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _10_q_dir_1 = outC->_L4_13_IfBlock1;
    outC->q_dir_1 = _10_q_dir_1;
  }
  else {
    outC->_2_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (outC->_2_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_1_IfBlock1;
      _8_q_dir_1 = q_dir_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (outC->else_clock_1_IfBlock1) {
        outC->_L2_11_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _6_q_dir_1 = outC->_L2_11_IfBlock1;
        _3_q_dir_1 = _6_q_dir_1;
      }
      else {
        outC->_L2_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _4_q_dir_1 = outC->_L2_1_IfBlock1;
        _3_q_dir_1 = _4_q_dir_1;
      }
      _8_q_dir_1 = _3_q_dir_1;
    }
    outC->q_dir_1 = _8_q_dir_1;
  }
  outC->_L402 = outC->q_dir_1;
  outC->_L214 = outC->_L1.valid;
  outC->_L206 = 0;
  outC->_L396 = 6;
  outC->_L213 = 1;
  outC->_L212 = outC->_L396 - outC->_L213;
  outC->_L204.nid_packet = outC->_L403;
  outC->_L204.q_dir = outC->_L402;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(
    &outC->_L367,
    &outC->_L1.SECTIONS_SSP);
  kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
    &outC->_L369,
    &outC->_L1.SECTIONS_q_diff);
  outC->_L370 = outC->_L1.N_ITER_n;
  outC->_L371 = outC->_L1.Q_FRONT;
  outC->_L219 = outC->_L1.V_STATIC;
  outC->_L218 = outC->_L1.D_STATIC;
  outC->_L394.D_STATIC = outC->_L218;
  outC->_L394.V_STATIC = outC->_L219;
  outC->_L394.Q_FRONT = outC->_L371;
  outC->_L394.N_ITER = outC->_L370;
  kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
    &outC->_L394.SECTIONS_q_diff,
    &outC->_L369);
  /* pow */ for (i = 0; i < 1; i++) {
    kcg_copy_P027V1_section_int_T_TM_baseline2(&outC->_L386[i], &outC->_L394);
  }
  kcg_copy_array_10421(&outC->_L385[0], &outC->_L386);
  kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(
    &outC->_L385[1],
    &outC->_L367);
  kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(
    &outC->P027V1_sections,
    &outC->_L385);
  outC->_L400 = outC->n_iter_k;
  outC->n_iter_k_out = outC->_L400;
  outC->meta_first_section = outC->_L405;
  /* 1_ck_IfBlock1 */ if (outC->IfBlock1_clock_1) {
    outC->_L5_14_IfBlock1 = kcg_false;
    _11_error_1 = outC->_L5_14_IfBlock1;
    outC->error_1 = _11_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (outC->_2_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      error_1 = outC->_L5_1_IfBlock1;
      _9_error_1 = error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (outC->else_clock_1_IfBlock1) {
        outC->_L4_1_IfBlock1 = kcg_false;
        _7_error_1 = outC->_L4_1_IfBlock1;
        _2_error_1 = _7_error_1;
      }
      else {
        outC->_L1_1_IfBlock1 = kcg_true;
        _5_error_1 = outC->_L1_1_IfBlock1;
        _2_error_1 = _5_error_1;
      }
      _9_error_1 = _2_error_1;
    }
    outC->error_1 = _9_error_1;
  }
  outC->_L13_1 = outC->error_1;
  noname_1 = outC->_L13_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_tracksim_compr_body_TM_conversions_baseline2.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

