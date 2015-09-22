/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

#ifndef KCG_USER_DEFINED_INIT
void compareTelegrams_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
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
  
  outC->_L5 = kcg_true;
  outC->_L4.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.q_media = Q_MEDIA_Balise;
  outC->_L4.n_pig = N_PIG_I_am_the_1st;
  outC->_L4.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.m_dup = M_DUP_No_duplicates;
  outC->_L4.m_mcount = 0;
  outC->_L4.nid_c = 0;
  outC->_L4.nid_bg = 0;
  outC->_L4.q_link = Q_LINK_Unlinked;
  outC->_L3.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.q_media = Q_MEDIA_Balise;
  outC->_L3.n_pig = N_PIG_I_am_the_1st;
  outC->_L3.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3.m_dup = M_DUP_No_duplicates;
  outC->_L3.m_mcount = 0;
  outC->_L3.nid_c = 0;
  outC->_L3.nid_bg = 0;
  outC->_L3.q_link = Q_LINK_Unlinked;
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
  for (i = 0; i < 30; i++) {
    outC->_L2.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L2.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[i].startAddress = 0;
    outC->_L2.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L2.packets.PacketData[i1] = 0;
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
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L1.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L1.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L1.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L1.packets.PacketData[i3] = 0;
  }
  outC->HeaderIsEqual = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L11_IfBlock1 = kcg_true;
  outC->_L5_IfBlock1.valid = kcg_true;
  outC->_L5_IfBlock1.checkResult = kcg_true;
  outC->_L5_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L5_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L5_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L5_IfBlock1.telegramheader.m_mcount = 0;
  outC->_L5_IfBlock1.telegramheader.nid_c = 0;
  outC->_L5_IfBlock1.telegramheader.nid_bg = 0;
  outC->_L5_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L5_IfBlock1.packets.PacketHeaders[i4].nid_packet = 0;
    outC->_L5_IfBlock1.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L5_IfBlock1.packets.PacketHeaders[i4].valid = kcg_true;
    outC->_L5_IfBlock1.packets.PacketHeaders[i4].startAddress = 0;
    outC->_L5_IfBlock1.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L5_IfBlock1.packets.PacketData[i5] = 0;
  }
  outC->_L4_IfBlock1.valid = kcg_true;
  outC->_L4_IfBlock1.checkResult = kcg_true;
  outC->_L4_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L4_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L4_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L4_IfBlock1.telegramheader.m_mcount = 0;
  outC->_L4_IfBlock1.telegramheader.nid_c = 0;
  outC->_L4_IfBlock1.telegramheader.nid_bg = 0;
  outC->_L4_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L4_IfBlock1.packets.PacketHeaders[i6].nid_packet = 0;
    outC->_L4_IfBlock1.packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L4_IfBlock1.packets.PacketHeaders[i6].valid = kcg_true;
    outC->_L4_IfBlock1.packets.PacketHeaders[i6].startAddress = 0;
    outC->_L4_IfBlock1.packets.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L4_IfBlock1.packets.PacketData[i7] = 0;
  }
  for (i8 = 0; i8 < 30; i8++) {
    outC->_L3_IfBlock1.PacketHeaders[i8].nid_packet = 0;
    outC->_L3_IfBlock1.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
    outC->_L3_IfBlock1.PacketHeaders[i8].valid = kcg_true;
    outC->_L3_IfBlock1.PacketHeaders[i8].startAddress = 0;
    outC->_L3_IfBlock1.PacketHeaders[i8].endAddress = 0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->_L3_IfBlock1.PacketData[i9] = 0;
  }
  for (i10 = 0; i10 < 30; i10++) {
    outC->_L2_IfBlock1.PacketHeaders[i10].nid_packet = 0;
    outC->_L2_IfBlock1.PacketHeaders[i10].q_dir = Q_DIR_Reverse;
    outC->_L2_IfBlock1.PacketHeaders[i10].valid = kcg_true;
    outC->_L2_IfBlock1.PacketHeaders[i10].startAddress = 0;
    outC->_L2_IfBlock1.PacketHeaders[i10].endAddress = 0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->_L2_IfBlock1.PacketData[i11] = 0;
  }
  outC->_L1_IfBlock1 = kcg_true;
  outC->isEqual = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void compareTelegrams_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams */
void compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram1 */ Telegram_T_BG_Types_Pkg *inTelegram1,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram2 */ Telegram_T_BG_Types_Pkg *inTelegram2,
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::isEqual */ kcg_bool _1_isEqual;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::isEqual */ kcg_bool isEqual;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, inTelegram1);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, inTelegram2);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L3, &outC->_L1.telegramheader);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L4, &outC->_L2.telegramheader);
  outC->_L5 = kcg_comp_TelegramHeader_T_BG_Types_Pkg(&outC->_L3, &outC->_L4);
  outC->HeaderIsEqual = outC->_L5;
  outC->IfBlock1_clock = outC->HeaderIsEqual;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L5_IfBlock1, inTelegram1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L2_IfBlock1,
      &outC->_L5_IfBlock1.packets);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4_IfBlock1, inTelegram2);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L3_IfBlock1,
      &outC->_L4_IfBlock1.packets);
    outC->_L1_IfBlock1 = kcg_comp_CompressedPackets_T_Common_Types_Pkg(
        &outC->_L2_IfBlock1,
        &outC->_L3_IfBlock1);
    _1_isEqual = outC->_L1_IfBlock1;
    outC->isEqual = _1_isEqual;
  }
  else {
    outC->_L11_IfBlock1 = kcg_false;
    isEqual = outC->_L11_IfBlock1;
    outC->isEqual = isEqual;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

