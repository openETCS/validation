/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P072V1_tracksim_compr_TM_conversions_baseline2.h"

#ifndef KCG_USER_DEFINED_INIT
void C_P072V1_tracksim_compr_init_TM_conversions_baseline2(
  outC_C_P072V1_tracksim_compr_TM_conversions_baseline2 *outC)
{
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L393 = Q_DIR_Reverse;
  for (i = 0; i < 255; i++) {
    outC->_L388[i] = 0;
  }
  outC->_L389 = 0;
  outC->_L390 = 0;
  outC->_L391 = 0;
  outC->_L392 = 0;
  outC->_L387 = 0;
  for (i1 = 0; i1 < 272; i1++) {
    outC->_L384[i1] = 0;
  }
  for (i2 = 0; i2 < 500; i2++) {
    outC->_L383[i2] = 0;
  }
  outC->_L379 = 0;
  outC->_L378 = 0;
  for (i3 = 0; i3 < 17; i3++) {
    outC->_L373[i3] = 0;
  }
  outC->_L365 = 0;
  outC->_L366 = 0;
  outC->_L367 = 0;
  outC->_L368 = 0;
  outC->_L369 = 0;
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
  for (i4 = 0; i4 < 228; i4++) {
    outC->_L209[i4] = 0;
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
  outC->_L1.Q_TEXTCLASS = 0;
  outC->_L1.Q_TEXTDISPLAY = 0;
  outC->_L1.D_TEXTDISPLAY_start = 0;
  outC->_L1.M_MODETEXTDISPLAY_start = 0;
  outC->_L1.M_LEVELTEXTDISPLAY_start = 0;
  outC->_L1.NID_NTC_start = 0;
  outC->_L1.L_TEXTDISPLAY_end = 0;
  outC->_L1.T_TEXTDISPLAY_end = 0;
  outC->_L1.M_MODETEXTDISPLAY_end = 0;
  outC->_L1.M_LEVELTEXTDISPLAY_end = 0;
  outC->_L1.NID_NTC_end = 0;
  outC->_L1.Q_TEXTCONFIRM = 0;
  outC->_L1.L_TEXT = 0;
  for (i5 = 0; i5 < 255; i5++) {
    outC->_L1.X_TEXT[i5] = 0;
  }
  outC->p_size = 0;
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
  for (i6 = 0; i6 < 500; i6++) {
    outC->P005_compressed[i6] = 0;
  }
  outC->Header.nid_packet = 0;
  outC->Header.q_dir = Q_DIR_Reverse;
  outC->Header.valid = kcg_true;
  outC->Header.startAddress = 0;
  outC->Header.endAddress = 0;
  /* 1 */ T_DeterminePacketSizeInt_init_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P072V1_tracksim_compr_reset_TM_conversions_baseline2(
  outC_C_P072V1_tracksim_compr_TM_conversions_baseline2 *outC)
{
  /* 1 */ T_DeterminePacketSizeInt_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions_baseline2::C_P072V1_tracksim_compr */
void C_P072V1_tracksim_compr_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P072V1_tracksim_compr::P072_from_track */ P072V1_trackside_int_T_TM_baseline2 *P072_from_track,
  outC_C_P072V1_tracksim_compr_TM_conversions_baseline2 *outC)
{
  kcg_int i;
  kcg_bool noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _1_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _2_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _3_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _4_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _5_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _6_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _7_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _8_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _9_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _10_error_1;
  
  kcg_copy_P072V1_trackside_int_T_TM_baseline2(&outC->_L1, P072_from_track);
  outC->_L387 = outC->_L1.NID_PACKET;
  outC->_L215 = outC->_L1.Q_DIR;
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L218 = outC->_L1.Q_TEXTCLASS;
  outC->_L219 = outC->_L1.Q_TEXTDISPLAY;
  outC->_L371 = outC->_L1.D_TEXTDISPLAY_start;
  outC->_L370 = outC->_L1.M_MODETEXTDISPLAY_start;
  outC->_L369 = outC->_L1.M_LEVELTEXTDISPLAY_start;
  outC->_L368 = outC->_L1.NID_NTC_start;
  outC->_L367 = outC->_L1.L_TEXTDISPLAY_end;
  outC->_L366 = outC->_L1.T_TEXTDISPLAY_end;
  outC->_L365 = outC->_L1.M_MODETEXTDISPLAY_end;
  outC->_L392 = outC->_L1.M_LEVELTEXTDISPLAY_end;
  outC->_L391 = outC->_L1.NID_NTC_end;
  outC->_L390 = outC->_L1.Q_TEXTCONFIRM;
  outC->_L389 = outC->_L1.L_TEXT;
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  outC->_L373[4] = outC->_L218;
  outC->_L373[5] = outC->_L219;
  outC->_L373[6] = outC->_L371;
  outC->_L373[7] = outC->_L370;
  outC->_L373[8] = outC->_L369;
  outC->_L373[9] = outC->_L368;
  outC->_L373[10] = outC->_L367;
  outC->_L373[11] = outC->_L366;
  outC->_L373[12] = outC->_L365;
  outC->_L373[13] = outC->_L392;
  outC->_L373[14] = outC->_L391;
  outC->_L373[15] = outC->_L390;
  outC->_L373[16] = outC->_L389;
  kcg_copy_X_TEXT_trackside_T_TM(&outC->_L388, &outC->_L1.X_TEXT);
  kcg_copy_array_int_17(&outC->_L384[0], &outC->_L373);
  kcg_copy_X_TEXT_trackside_T_TM(&outC->_L384[17], &outC->_L388);
  outC->_L336 = 0;
  /* pow */ for (i = 0; i < 228; i++) {
    outC->_L209[i] = outC->_L336;
  }
  kcg_copy_array_int_272(&outC->_L383[0], &outC->_L384);
  kcg_copy_array_int_228(&outC->_L383[272], &outC->_L209);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P005_compressed,
    &outC->_L383);
  outC->q_dir_int_1 = outC->_L215;
  outC->_L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_L12_1;
  outC->IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_ck_IfBlock1 */ if (outC->IfBlock1_clock_1) {
    outC->_L4_13_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _9_q_dir_1 = outC->_L4_13_IfBlock1;
    outC->q_dir_1 = _9_q_dir_1;
  }
  else {
    outC->_2_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (outC->_2_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_1_IfBlock1;
      _7_q_dir_1 = q_dir_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (outC->else_clock_1_IfBlock1) {
        outC->_L2_11_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _5_q_dir_1 = outC->_L2_11_IfBlock1;
        _2_q_dir_1 = _5_q_dir_1;
      }
      else {
        outC->_L2_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _3_q_dir_1 = outC->_L2_1_IfBlock1;
        _2_q_dir_1 = _3_q_dir_1;
      }
      _7_q_dir_1 = _2_q_dir_1;
    }
    outC->q_dir_1 = _7_q_dir_1;
  }
  outC->_L393 = outC->q_dir_1;
  outC->_L214 = outC->_L1.valid;
  outC->_L206 = 0;
  /* 1 */
  T_DeterminePacketSizeInt_TM_lib_internal(
    outC->_L389,
    16 + 1,
    1,
    &outC->Context_1);
  outC->_L379 = outC->Context_1.p_size;
  outC->p_size = outC->_L379;
  outC->_L378 = outC->p_size;
  outC->_L213 = 1;
  outC->_L212 = outC->_L378 - outC->_L213;
  outC->_L204.nid_packet = outC->_L387;
  outC->_L204.q_dir = outC->_L393;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  /* 1_ck_IfBlock1 */ if (outC->IfBlock1_clock_1) {
    outC->_L5_14_IfBlock1 = kcg_false;
    _10_error_1 = outC->_L5_14_IfBlock1;
    outC->error_1 = _10_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (outC->_2_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      error_1 = outC->_L5_1_IfBlock1;
      _8_error_1 = error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (outC->else_clock_1_IfBlock1) {
        outC->_L4_1_IfBlock1 = kcg_false;
        _6_error_1 = outC->_L4_1_IfBlock1;
        _1_error_1 = _6_error_1;
      }
      else {
        outC->_L1_1_IfBlock1 = kcg_true;
        _4_error_1 = outC->_L1_1_IfBlock1;
        _1_error_1 = _4_error_1;
      }
      _8_error_1 = _1_error_1;
    }
    outC->error_1 = _8_error_1;
  }
  outC->_L13_1 = outC->error_1;
  noname_1 = outC->_L13_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P072V1_tracksim_compr_TM_conversions_baseline2.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

