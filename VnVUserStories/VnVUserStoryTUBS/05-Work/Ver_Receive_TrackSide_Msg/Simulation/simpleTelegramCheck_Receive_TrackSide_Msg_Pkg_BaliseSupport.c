/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

#ifndef KCG_USER_DEFINED_INIT
void simpleTelegramCheck_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int i1;
  kcg_int i;
  
  outC->_L16 = kcg_true;
  outC->_L15 = N_PIG_I_am_the_1st;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L8 = 0;
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
  for (i = 0; i < 30; i++) {
    outC->_L1.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L1.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[i].startAddress = 0;
    outC->_L1.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L1.packets.PacketData[i1] = 0;
  }
  outC->_L3 = N_PIG_I_am_the_1st;
  outC->_L2 = kcg_true;
  outC->_L5 = kcg_true;
  outC->telegramAlreadyInGroup = kcg_true;
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void simpleTelegramCheck_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck */
void simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::iteratorIndex */ kcg_int iteratorIndex,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::accu */ kcg_bool accu,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::telegram */ Telegram_T_BG_Types_Pkg *telegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::which_pig */ N_PIG which_pig,
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int noname;
  kcg_bool _1_noname;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, telegram);
  outC->_L15 = outC->_L1.telegramheader.n_pig;
  outC->_L3 = which_pig;
  outC->_L5 = outC->_L15 == outC->_L3;
  outC->_L2 = outC->_L1.valid;
  outC->_L8 = iteratorIndex;
  outC->_L12 = outC->_L2 & outC->_L5;
  outC->telegramAlreadyInGroup = outC->_L12;
  outC->_L14 = !outC->_L12;
  outC->_L13 = outC->_L2 & outC->_L14;
  outC->cont = outC->_L13;
  noname = outC->_L8;
  outC->_L16 = accu;
  _1_noname = outC->_L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

