/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

#ifndef KCG_USER_DEFINED_INIT
void setFirstFree_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int i7;
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
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
  for (i = 0; i < 30; i++) {
    outC->_L4.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L4.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[i].startAddress = 0;
    outC->_L4.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L4.packets.PacketData[i1] = 0;
  }
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
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L2.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L2.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L2.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L2.packets.PacketData[i3] = 0;
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
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L1.packets.PacketHeaders[i4].nid_packet = 0;
    outC->_L1.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[i4].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[i4].startAddress = 0;
    outC->_L1.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L1.packets.PacketData[i5] = 0;
  }
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
  for (i6 = 0; i6 < 30; i6++) {
    outC->outTelegrams.packets.PacketHeaders[i6].nid_packet = 0;
    outC->outTelegrams.packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->outTelegrams.packets.PacketHeaders[i6].valid = kcg_true;
    outC->outTelegrams.packets.PacketHeaders[i6].startAddress = 0;
    outC->outTelegrams.packets.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->outTelegrams.packets.PacketData[i7] = 0;
  }
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setFirstFree_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree */
void setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::inTelegramArray */ Telegram_T_BG_Types_Pkg *inTelegramArray,
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, newTelegram);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, inTelegramArray);
  outC->_L14 = outC->_L2.valid;
  outC->_L15 = !outC->_L14;
  /* 1 */ if (outC->_L15) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L1);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L2);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->outTelegrams, &outC->_L4);
  outC->cont = outC->_L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

