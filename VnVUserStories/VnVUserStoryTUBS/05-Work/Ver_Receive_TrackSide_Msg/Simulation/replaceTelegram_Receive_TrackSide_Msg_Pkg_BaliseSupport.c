/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

#ifndef KCG_USER_DEFINED_INIT
void replaceTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
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
  
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18.valid = kcg_true;
  outC->_L18.checkResult = kcg_true;
  outC->_L18.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L18.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L18.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L18.telegramheader.m_mcount = 0;
  outC->_L18.telegramheader.nid_c = 0;
  outC->_L18.telegramheader.nid_bg = 0;
  outC->_L18.telegramheader.q_link = Q_LINK_Unlinked;
  for (i = 0; i < 30; i++) {
    outC->_L18.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L18.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L18.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L18.packets.PacketHeaders[i].startAddress = 0;
    outC->_L18.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L18.packets.PacketData[i1] = 0;
  }
  outC->_L17.valid = kcg_true;
  outC->_L17.checkResult = kcg_true;
  outC->_L17.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L17.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L17.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L17.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L17.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L17.telegramheader.m_mcount = 0;
  outC->_L17.telegramheader.nid_c = 0;
  outC->_L17.telegramheader.nid_bg = 0;
  outC->_L17.telegramheader.q_link = Q_LINK_Unlinked;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L17.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L17.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L17.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L17.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L17.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L17.packets.PacketData[i3] = 0;
  }
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = N_PIG_I_am_the_1st;
  outC->_L6 = N_PIG_I_am_the_1st;
  outC->_L4.valid = kcg_true;
  outC->_L4.checkResult = kcg_true;
  outC->_L4.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L4.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L4.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L4.telegramheader.m_mcount = 0;
  outC->_L4.telegramheader.nid_c = 0;
  outC->_L4.telegramheader.nid_bg = 0;
  outC->_L4.telegramheader.q_link = Q_LINK_Unlinked;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L4.packets.PacketHeaders[i4].nid_packet = 0;
    outC->_L4.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[i4].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[i4].startAddress = 0;
    outC->_L4.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L4.packets.PacketData[i5] = 0;
  }
  outC->_L3 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.checkResult = kcg_true;
  outC->_L2.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L2.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L2.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L2.telegramheader.m_mcount = 0;
  outC->_L2.telegramheader.nid_c = 0;
  outC->_L2.telegramheader.nid_bg = 0;
  outC->_L2.telegramheader.q_link = Q_LINK_Unlinked;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L2.packets.PacketHeaders[i6].nid_packet = 0;
    outC->_L2.packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[i6].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[i6].startAddress = 0;
    outC->_L2.packets.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L2.packets.PacketData[i7] = 0;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.checkResult = kcg_true;
  outC->_L1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L1.telegramheader.m_mcount = 0;
  outC->_L1.telegramheader.nid_c = 0;
  outC->_L1.telegramheader.nid_bg = 0;
  outC->_L1.telegramheader.q_link = Q_LINK_Unlinked;
  for (i8 = 0; i8 < 30; i8++) {
    outC->_L1.packets.PacketHeaders[i8].nid_packet = 0;
    outC->_L1.packets.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[i8].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[i8].startAddress = 0;
    outC->_L1.packets.PacketHeaders[i8].endAddress = 0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->_L1.packets.PacketData[i9] = 0;
  }
  outC->doReplace = kcg_true;
  outC->ck_every = kcg_true;
  outC->outIsDuplicate = kcg_true;
  outC->outTelegrams.valid = kcg_true;
  outC->outTelegrams.checkResult = kcg_true;
  outC->outTelegrams.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outTelegrams.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outTelegrams.telegramheader.q_media = Q_MEDIA_Balise;
  outC->outTelegrams.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->outTelegrams.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outTelegrams.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->outTelegrams.telegramheader.m_mcount = 0;
  outC->outTelegrams.telegramheader.nid_c = 0;
  outC->outTelegrams.telegramheader.nid_bg = 0;
  outC->outTelegrams.telegramheader.q_link = Q_LINK_Unlinked;
  for (i10 = 0; i10 < 30; i10++) {
    outC->outTelegrams.packets.PacketHeaders[i10].nid_packet = 0;
    outC->outTelegrams.packets.PacketHeaders[i10].q_dir = Q_DIR_Reverse;
    outC->outTelegrams.packets.PacketHeaders[i10].valid = kcg_true;
    outC->outTelegrams.packets.PacketHeaders[i10].startAddress = 0;
    outC->outTelegrams.packets.PacketHeaders[i10].endAddress = 0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->outTelegrams.packets.PacketData[i11] = 0;
  }
  outC->cont = kcg_true;
  /* 1 */
  compareTelegrams_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void replaceTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  /* 1 */
  compareTelegrams_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram */
void replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::inTelegramArray */ Telegram_T_BG_Types_Pkg *inTelegramArray,
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram */ kcg_bool op_call;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, inTelegramArray);
  outC->_L3 = outC->_L2.valid;
  outC->_L7 = outC->_L2.telegramheader.n_pig;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, newTelegram);
  outC->_L6 = outC->_L1.telegramheader.n_pig;
  outC->_L8 = outC->_L7 == outC->_L6;
  outC->_L9 = outC->_L3 & outC->_L8;
  outC->doReplace = outC->_L9;
  outC->_L19 = outC->doReplace;
  outC->ck_every = outC->_L19;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L17, newTelegram);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18, inTelegramArray);
  /* ck_replaceTelegram */ if (outC->ck_every) {
    /* 1 */
    compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_L17,
      &outC->_L18,
      &outC->Context_1);
    op_call = outC->Context_1.isEqual;
  }
  outC->_L10 = outC->doReplace;
  outC->_L11 = !outC->_L10;
  /* 1 */ if (outC->_L11) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L2);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L1);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->outTelegrams, &outC->_L4);
  outC->_L12 = outC->_L2.valid;
  outC->_L13 = outC->doReplace;
  outC->_L14 = !outC->_L13;
  outC->_L15 = outC->_L12 & outC->_L14;
  outC->cont = outC->_L15;
  outC->_L20 = kcg_false;
  /* ck_replaceTelegram */ if (outC->ck_every) {
    outC->_L16 = op_call;
  }
  else {
    outC->_L16 = outC->_L20;
  }
  outC->outIsDuplicate = outC->_L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

