/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

#ifndef KCG_USER_DEFINED_INIT
void findTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int i7;
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L31 = kcg_true;
  for (i2 = 0; i2 < 8; i2++) {
    outC->_L30[i2].valid = kcg_true;
    outC->_L30[i2].checkResult = kcg_true;
    outC->_L30[i2].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L30[i2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L30[i2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L30[i2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L30[i2].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L30[i2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L30[i2].telegramheader.m_mcount = 0;
    outC->_L30[i2].telegramheader.nid_c = 0;
    outC->_L30[i2].telegramheader.nid_bg = 0;
    outC->_L30[i2].telegramheader.q_link = Q_LINK_Unlinked;
    for (i = 0; i < 30; i++) {
      outC->_L30[i2].packets.PacketHeaders[i].nid_packet = 0;
      outC->_L30[i2].packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
      outC->_L30[i2].packets.PacketHeaders[i].valid = kcg_true;
      outC->_L30[i2].packets.PacketHeaders[i].startAddress = 0;
      outC->_L30[i2].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->_L30[i2].packets.PacketData[i1] = 0;
    }
  }
  outC->valid = kcg_true;
  outC->_L21_IfBlock1 = kcg_true;
  outC->_L9_IfBlock1 = kcg_true;
  outC->_L7_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L6_IfBlock1 = kcg_true;
  outC->_L4_IfBlock1 = 0;
  outC->_L5_IfBlock1 = kcg_true;
  for (i3 = 0; i3 < 8; i3++) {
    outC->_L3_IfBlock1[i3] = N_PIG_I_am_the_1st;
  }
  for (i6 = 0; i6 < 8; i6++) {
    outC->_L2_IfBlock1[i6].valid = kcg_true;
    outC->_L2_IfBlock1[i6].checkResult = kcg_true;
    outC->_L2_IfBlock1[i6].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2_IfBlock1[i6].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2_IfBlock1[i6].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L2_IfBlock1[i6].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L2_IfBlock1[i6].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2_IfBlock1[i6].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L2_IfBlock1[i6].telegramheader.m_mcount = 0;
    outC->_L2_IfBlock1[i6].telegramheader.nid_c = 0;
    outC->_L2_IfBlock1[i6].telegramheader.nid_bg = 0;
    outC->_L2_IfBlock1[i6].telegramheader.q_link = Q_LINK_Unlinked;
    for (i4 = 0; i4 < 30; i4++) {
      outC->_L2_IfBlock1[i6].packets.PacketHeaders[i4].nid_packet = 0;
      outC->_L2_IfBlock1[i6].packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
      outC->_L2_IfBlock1[i6].packets.PacketHeaders[i4].valid = kcg_true;
      outC->_L2_IfBlock1[i6].packets.PacketHeaders[i4].startAddress = 0;
      outC->_L2_IfBlock1[i6].packets.PacketHeaders[i4].endAddress = 0;
    }
    for (i5 = 0; i5 < 500; i5++) {
      outC->_L2_IfBlock1[i6].packets.PacketData[i5] = 0;
    }
  }
  outC->IfBlock1_clock = kcg_true;
  outC->telegramAlreadyInGroup = kcg_true;
  for (i7 = 0; i7 < 8; i7++) {
    /* 7 */
    simpleTelegramCheck_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_7[i7]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void findTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 7 */
    simpleTelegramCheck_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_7[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram */
void findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::which_pig */ N_PIG which_pig,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::HeaderArray */ TelegramArray_T_BG_Types_Pkg *HeaderArray,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::doSearch */ kcg_bool doSearch,
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int i1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram */ kcg_bool acc;
  kcg_int i;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */ kcg_bool _2_telegramAlreadyInGroup;
  kcg_int noname;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */ kcg_bool telegramAlreadyInGroup;
  
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L30, HeaderArray);
  outC->_L31 = outC->_L30[0].valid;
  outC->valid = outC->_L31;
  outC->IfBlock1_clock = outC->valid;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L9_IfBlock1 = kcg_true;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L2_IfBlock1, HeaderArray);
    outC->_L7_IfBlock1 = which_pig;
    /* pow */ for (i1 = 0; i1 < 8; i1++) {
      outC->_L3_IfBlock1[i1] = outC->_L7_IfBlock1;
    }
    outC->_L6_IfBlock1 = doSearch;
    outC->_L5_IfBlock1 = outC->_L9_IfBlock1;
    if (outC->_L6_IfBlock1) {
      for (i = 0; i < 8; i++) {
        acc = outC->_L5_IfBlock1;
        /* 7 */
        simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          i,
          acc,
          &outC->_L2_IfBlock1[i],
          outC->_L3_IfBlock1[i],
          &outC->Context_7[i]);
        outC->_L5_IfBlock1 = outC->Context_7[i].telegramAlreadyInGroup;
        outC->_L4_IfBlock1 = i + 1;
        if (!outC->Context_7[i].cont) {
          break;
        }
      }
    }
    else {
      outC->_L4_IfBlock1 = 0;
    }
    _2_telegramAlreadyInGroup = outC->_L5_IfBlock1;
    outC->telegramAlreadyInGroup = _2_telegramAlreadyInGroup;
    noname = outC->_L4_IfBlock1;
  }
  else {
    outC->_L21_IfBlock1 = kcg_false;
    telegramAlreadyInGroup = outC->_L21_IfBlock1;
    outC->telegramAlreadyInGroup = telegramAlreadyInGroup;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

