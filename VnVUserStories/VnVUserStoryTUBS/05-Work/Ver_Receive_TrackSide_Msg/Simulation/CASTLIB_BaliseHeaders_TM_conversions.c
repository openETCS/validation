/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"

#ifndef KCG_USER_DEFINED_INIT
void CASTLIB_BaliseHeaders_init_TM_conversions(
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC)
{
  outC->_L32 = Q_LINK_Unlinked;
  outC->_L31 = 0;
  outC->_L30 = 0;
  outC->_L29 = 0;
  outC->_L28 = M_DUP_No_duplicates;
  outC->_L27 = N_TOTAL_1_balise_in_the_group;
  outC->_L26 = N_PIG_I_am_the_1st;
  outC->_L25 = Q_MEDIA_Balise;
  outC->_L24 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23 = Q_UPDOWN_Down_link_telegram;
  outC->_L22.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L22.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.q_media = Q_MEDIA_Balise;
  outC->_L22.n_pig = N_PIG_I_am_the_1st;
  outC->_L22.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L22.m_dup = M_DUP_No_duplicates;
  outC->_L22.m_mcount = 0;
  outC->_L22.nid_c = 0;
  outC->_L22.nid_bg = 0;
  outC->_L22.q_link = Q_LINK_Unlinked;
  outC->_L2 = 0;
  outC->_L3 = 0;
  outC->_L4 = 0;
  outC->_L5 = 0;
  outC->_L6 = 0;
  outC->_L7 = 0;
  outC->_L8 = 0;
  outC->_L9 = 0;
  outC->_L10 = 0;
  outC->_L11 = 0;
  outC->_L1.q_updown = 0;
  outC->_L1.m_version = 0;
  outC->_L1.q_media = 0;
  outC->_L1.n_pig = 0;
  outC->_L1.n_total = 0;
  outC->_L1.m_dup = 0;
  outC->_L1.m_mcount = 0;
  outC->_L1.nid_c = 0;
  outC->_L1.nid_bg = 0;
  outC->_L1.q_link = 0;
  outC->Out.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->Out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Out.q_media = Q_MEDIA_Balise;
  outC->Out.n_pig = N_PIG_I_am_the_1st;
  outC->Out.n_total = N_TOTAL_1_balise_in_the_group;
  outC->Out.m_dup = M_DUP_No_duplicates;
  outC->Out.m_mcount = 0;
  outC->Out.nid_c = 0;
  outC->Out.nid_bg = 0;
  outC->Out.q_link = Q_LINK_Unlinked;
  /* 1 */ CAST_Int_to_Q_LINK_init_TM_conversions(&outC->_9_Context_1);
  /* 1 */ CAST_Int_to_NID_BG_init_TM_conversions(&outC->_8_Context_1);
  /* 1 */ CAST_Int_to_NID_C_init_TM_conversions(&outC->_7_Context_1);
  /* 1 */ CAST_Int_to_M_MCOUNT_init_TM_conversions(&outC->_6_Context_1);
  /* 1 */ CAST_Int_to_M_DUP_init_TM_conversions(&outC->_5_Context_1);
  /* 1 */ CAST_Int_to_N_TOTAL_init_TM_conversions(&outC->_4_Context_1);
  /* 1 */ CAST_Int_to_N_PIG_init_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_Int_to_Q_MEDIA_init_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_M_VERSION_init_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_Q_UPDOWN_init_TM_conversions(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CASTLIB_BaliseHeaders_reset_TM_conversions(
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC)
{
  /* 1 */ CAST_Int_to_Q_LINK_reset_TM_conversions(&outC->_9_Context_1);
  /* 1 */ CAST_Int_to_NID_BG_reset_TM_conversions(&outC->_8_Context_1);
  /* 1 */ CAST_Int_to_NID_C_reset_TM_conversions(&outC->_7_Context_1);
  /* 1 */ CAST_Int_to_M_MCOUNT_reset_TM_conversions(&outC->_6_Context_1);
  /* 1 */ CAST_Int_to_M_DUP_reset_TM_conversions(&outC->_5_Context_1);
  /* 1 */ CAST_Int_to_N_TOTAL_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */ CAST_Int_to_N_PIG_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_Int_to_Q_MEDIA_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_M_VERSION_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_Q_UPDOWN_reset_TM_conversions(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions::CASTLIB_BaliseHeaders */
void CASTLIB_BaliseHeaders_TM_conversions(
  /* TM_conversions::CASTLIB_BaliseHeaders::In */ BaliseTelegramHeader_int_T_TM *In,
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC)
{
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L1, In);
  outC->_L2 = outC->_L1.q_updown;
  /* 1 */ CAST_Int_to_Q_UPDOWN_TM_conversions(outC->_L2, &outC->Context_1);
  outC->_L23 = outC->Context_1.q_updown;
  outC->_L3 = outC->_L1.m_version;
  /* 1 */ CAST_Int_to_M_VERSION_TM_conversions(outC->_L3, &outC->_1_Context_1);
  outC->_L24 = outC->_1_Context_1.m_version;
  outC->_L4 = outC->_L1.q_media;
  /* 1 */ CAST_Int_to_Q_MEDIA_TM_conversions(outC->_L4, &outC->_2_Context_1);
  outC->_L25 = outC->_2_Context_1.q_media;
  outC->_L5 = outC->_L1.n_pig;
  /* 1 */ CAST_Int_to_N_PIG_TM_conversions(outC->_L5, &outC->_3_Context_1);
  outC->_L26 = outC->_3_Context_1.n_pig;
  outC->_L6 = outC->_L1.n_total;
  /* 1 */ CAST_Int_to_N_TOTAL_TM_conversions(outC->_L6, &outC->_4_Context_1);
  outC->_L27 = outC->_4_Context_1.n_pig;
  outC->_L7 = outC->_L1.m_dup;
  /* 1 */ CAST_Int_to_M_DUP_TM_conversions(outC->_L7, &outC->_5_Context_1);
  outC->_L28 = outC->_5_Context_1.m_dup;
  outC->_L8 = outC->_L1.m_mcount;
  /* 1 */ CAST_Int_to_M_MCOUNT_TM_conversions(outC->_L8, &outC->_6_Context_1);
  outC->_L29 = outC->_6_Context_1.m_mcount;
  outC->_L9 = outC->_L1.nid_c;
  /* 1 */ CAST_Int_to_NID_C_TM_conversions(outC->_L9, &outC->_7_Context_1);
  outC->_L30 = outC->_7_Context_1.nid_c;
  outC->_L10 = outC->_L1.nid_bg;
  /* 1 */ CAST_Int_to_NID_BG_TM_conversions(outC->_L10, &outC->_8_Context_1);
  outC->_L31 = outC->_8_Context_1.nid_bg;
  outC->_L11 = outC->_L1.q_link;
  /* 1 */ CAST_Int_to_Q_LINK_TM_conversions(outC->_L11, &outC->_9_Context_1);
  outC->_L32 = outC->_9_Context_1.q_link;
  outC->_L22.q_updown = outC->_L23;
  outC->_L22.m_version = outC->_L24;
  outC->_L22.q_media = outC->_L25;
  outC->_L22.n_pig = outC->_L26;
  outC->_L22.n_total = outC->_L27;
  outC->_L22.m_dup = outC->_L28;
  outC->_L22.m_mcount = outC->_L29;
  outC->_L22.nid_c = outC->_L30;
  outC->_L22.nid_bg = outC->_L31;
  outC->_L22.q_link = outC->_L32;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->Out, &outC->_L22);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CASTLIB_BaliseHeaders_TM_conversions.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

