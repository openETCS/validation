/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Convert_CompressedBalise__Subfuction_Enhancements_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Convert_CompressedBalise__init_Subfuction_Enhancements_Pkg(
  outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg *outC)
{
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L5.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.q_media = Q_MEDIA_Balise;
  outC->_L5.n_pig = N_PIG_I_am_the_1st;
  outC->_L5.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5.m_dup = M_DUP_No_duplicates;
  outC->_L5.m_mcount = 0;
  outC->_L5.nid_c = 0;
  outC->_L5.nid_bg = 0;
  outC->_L5.q_link = Q_LINK_Unlinked;
  for (i = 0; i < 30; i++) {
    outC->_L4.PacketHeaders[i].nid_packet = 0;
    outC->_L4.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L4.PacketHeaders[i].valid = kcg_true;
    outC->_L4.PacketHeaders[i].startAddress = 0;
    outC->_L4.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L4.PacketData[i1] = 0;
  }
  outC->_L3.q_updown = 0;
  outC->_L3.m_version = 0;
  outC->_L3.q_media = 0;
  outC->_L3.n_pig = 0;
  outC->_L3.n_total = 0;
  outC->_L3.m_dup = 0;
  outC->_L3.m_mcount = 0;
  outC->_L3.nid_c = 0;
  outC->_L3.nid_bg = 0;
  outC->_L3.q_link = 0;
  outC->_L1.Header.q_updown = 0;
  outC->_L1.Header.m_version = 0;
  outC->_L1.Header.q_media = 0;
  outC->_L1.Header.n_pig = 0;
  outC->_L1.Header.n_total = 0;
  outC->_L1.Header.m_dup = 0;
  outC->_L1.Header.m_mcount = 0;
  outC->_L1.Header.nid_c = 0;
  outC->_L1.Header.nid_bg = 0;
  outC->_L1.Header.q_link = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L1.Messages.PacketHeaders[i2].nid_packet = 0;
    outC->_L1.Messages.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L1.Messages.PacketHeaders[i2].valid = kcg_true;
    outC->_L1.Messages.PacketHeaders[i2].startAddress = 0;
    outC->_L1.Messages.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L1.Messages.PacketData[i3] = 0;
  }
  outC->out_TelegramHeader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->out_TelegramHeader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->out_TelegramHeader.q_media = Q_MEDIA_Balise;
  outC->out_TelegramHeader.n_pig = N_PIG_I_am_the_1st;
  outC->out_TelegramHeader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->out_TelegramHeader.m_dup = M_DUP_No_duplicates;
  outC->out_TelegramHeader.m_mcount = 0;
  outC->out_TelegramHeader.nid_c = 0;
  outC->out_TelegramHeader.nid_bg = 0;
  outC->out_TelegramHeader.q_link = Q_LINK_Unlinked;
  for (i4 = 0; i4 < 30; i4++) {
    outC->out_CompressedPackets.PacketHeaders[i4].nid_packet = 0;
    outC->out_CompressedPackets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->out_CompressedPackets.PacketHeaders[i4].valid = kcg_true;
    outC->out_CompressedPackets.PacketHeaders[i4].startAddress = 0;
    outC->out_CompressedPackets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->out_CompressedPackets.PacketData[i5] = 0;
  }
  /* 1 */ CASTLIB_BaliseHeaders_init_TM_conversions(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Convert_CompressedBalise__reset_Subfuction_Enhancements_Pkg(
  outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg *outC)
{
  /* 1 */ CASTLIB_BaliseHeaders_reset_TM_conversions(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader */
void Convert_CompressedBalise__Subfuction_Enhancements_Pkg(
  /* Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader::in_CompressedBaliseMessage */ CompressedBaliseMessage_TM *in_CompressedBaliseMessage,
  outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg *outC)
{
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L1, in_CompressedBaliseMessage);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L3, &outC->_L1.Header);
  /* 1 */ CASTLIB_BaliseHeaders_TM_conversions(&outC->_L3, &outC->Context_1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L5, &outC->Context_1.Out);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->out_TelegramHeader, &outC->_L5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->_L1.Messages);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->out_CompressedPackets,
    &outC->_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Convert_CompressedBalise__Subfuction_Enhancements_Pkg.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

