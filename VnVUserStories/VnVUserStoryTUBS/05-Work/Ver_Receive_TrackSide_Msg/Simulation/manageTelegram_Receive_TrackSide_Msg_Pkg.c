/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTelegram_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void manageTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
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
  
  outC->_L73 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66.badBaliseFlag = kcg_true;
  outC->_L66.BGMessageSent = kcg_true;
  outC->_L66.C_ID = 0;
  outC->_L66.BG_ID = 0;
  outC->_L66.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L66.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L66.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L66.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L66.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L66.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L66.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L66.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L66.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L66.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L66.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L66.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L66.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L66.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L66.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L66.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L66.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L66.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L66.collectedTelegrams = 0;
  outC->_L66.totalTelegrams = 0;
  outC->_L65 = kcg_true;
  for (i2 = 0; i2 < 8; i2++) {
    outC->_L64[i2].valid = kcg_true;
    outC->_L64[i2].checkResult = kcg_true;
    outC->_L64[i2].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L64[i2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L64[i2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L64[i2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L64[i2].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L64[i2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L64[i2].telegramheader.m_mcount = 0;
    outC->_L64[i2].telegramheader.nid_c = 0;
    outC->_L64[i2].telegramheader.nid_bg = 0;
    outC->_L64[i2].telegramheader.q_link = Q_LINK_Unlinked;
    for (i = 0; i < 30; i++) {
      outC->_L64[i2].packets.PacketHeaders[i].nid_packet = 0;
      outC->_L64[i2].packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
      outC->_L64[i2].packets.PacketHeaders[i].valid = kcg_true;
      outC->_L64[i2].packets.PacketHeaders[i].startAddress = 0;
      outC->_L64[i2].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->_L64[i2].packets.PacketData[i1] = 0;
    }
  }
  outC->_L63.badBaliseFlag = kcg_true;
  outC->_L63.BGMessageSent = kcg_true;
  outC->_L63.C_ID = 0;
  outC->_L63.BG_ID = 0;
  outC->_L63.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L63.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L63.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L63.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L63.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L63.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L63.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L63.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L63.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L63.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L63.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L63.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L63.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L63.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L63.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L63.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L63.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L63.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L63.collectedTelegrams = 0;
  outC->_L63.totalTelegrams = 0;
  for (i5 = 0; i5 < 8; i5++) {
    outC->_L60[i5].valid = kcg_true;
    outC->_L60[i5].checkResult = kcg_true;
    outC->_L60[i5].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L60[i5].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L60[i5].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L60[i5].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L60[i5].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L60[i5].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L60[i5].telegramheader.m_mcount = 0;
    outC->_L60[i5].telegramheader.nid_c = 0;
    outC->_L60[i5].telegramheader.nid_bg = 0;
    outC->_L60[i5].telegramheader.q_link = Q_LINK_Unlinked;
    for (i3 = 0; i3 < 30; i3++) {
      outC->_L60[i5].packets.PacketHeaders[i3].nid_packet = 0;
      outC->_L60[i5].packets.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
      outC->_L60[i5].packets.PacketHeaders[i3].valid = kcg_true;
      outC->_L60[i5].packets.PacketHeaders[i3].startAddress = 0;
      outC->_L60[i5].packets.PacketHeaders[i3].endAddress = 0;
    }
    for (i4 = 0; i4 < 500; i4++) {
      outC->_L60[i5].packets.PacketData[i4] = 0;
    }
  }
  for (i8 = 0; i8 < 8; i8++) {
    outC->_L58[i8].valid = kcg_true;
    outC->_L58[i8].checkResult = kcg_true;
    outC->_L58[i8].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L58[i8].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L58[i8].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L58[i8].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L58[i8].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L58[i8].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L58[i8].telegramheader.m_mcount = 0;
    outC->_L58[i8].telegramheader.nid_c = 0;
    outC->_L58[i8].telegramheader.nid_bg = 0;
    outC->_L58[i8].telegramheader.q_link = Q_LINK_Unlinked;
    for (i6 = 0; i6 < 30; i6++) {
      outC->_L58[i8].packets.PacketHeaders[i6].nid_packet = 0;
      outC->_L58[i8].packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
      outC->_L58[i8].packets.PacketHeaders[i6].valid = kcg_true;
      outC->_L58[i8].packets.PacketHeaders[i6].startAddress = 0;
      outC->_L58[i8].packets.PacketHeaders[i6].endAddress = 0;
    }
    for (i7 = 0; i7 < 500; i7++) {
      outC->_L58[i8].packets.PacketData[i7] = 0;
    }
  }
  outC->_L53 = kcg_true;
  outC->_L54.badBaliseFlag = kcg_true;
  outC->_L54.BGMessageSent = kcg_true;
  outC->_L54.C_ID = 0;
  outC->_L54.BG_ID = 0;
  outC->_L54.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L54.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L54.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L54.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L54.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L54.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L54.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L54.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L54.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L54.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L54.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L54.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L54.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L54.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L54.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L54.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L54.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L54.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L54.collectedTelegrams = 0;
  outC->_L54.totalTelegrams = 0;
  outC->_L51.badBaliseFlag = kcg_true;
  outC->_L51.BGMessageSent = kcg_true;
  outC->_L51.C_ID = 0;
  outC->_L51.BG_ID = 0;
  outC->_L51.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L51.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L51.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L51.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L51.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L51.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L51.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L51.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L51.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L51.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L51.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L51.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L51.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L51.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L51.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L51.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L51.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L51.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L51.collectedTelegrams = 0;
  outC->_L51.totalTelegrams = 0;
  outC->_L47.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L47.odometerOfBaliseDetection.timestamp = 0;
  outC->_L47.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L47.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L47.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L47.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L47.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L47.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L47.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L47.odometerOfBaliseDetection.acceleration = 0;
  outC->_L47.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L47.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L47.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L47.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L47.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L6.valid = kcg_true;
  outC->_L6.checkResult = kcg_true;
  outC->_L6.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L6.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L6.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L6.telegramheader.m_mcount = 0;
  outC->_L6.telegramheader.nid_c = 0;
  outC->_L6.telegramheader.nid_bg = 0;
  outC->_L6.telegramheader.q_link = Q_LINK_Unlinked;
  for (i9 = 0; i9 < 30; i9++) {
    outC->_L6.packets.PacketHeaders[i9].nid_packet = 0;
    outC->_L6.packets.PacketHeaders[i9].q_dir = Q_DIR_Reverse;
    outC->_L6.packets.PacketHeaders[i9].valid = kcg_true;
    outC->_L6.packets.PacketHeaders[i9].startAddress = 0;
    outC->_L6.packets.PacketHeaders[i9].endAddress = 0;
  }
  for (i10 = 0; i10 < 500; i10++) {
    outC->_L6.packets.PacketData[i10] = 0;
  }
  outC->needsReplace = kcg_true;
  outC->isNotReceivedAlready = kcg_true;
  outC->outStoresChanged = kcg_true;
  for (i13 = 0; i13 < 8; i13++) {
    outC->outTelegramArray[i13].valid = kcg_true;
    outC->outTelegramArray[i13].checkResult = kcg_true;
    outC->outTelegramArray[i13].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTelegramArray[i13].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTelegramArray[i13].telegramheader.q_media = Q_MEDIA_Balise;
    outC->outTelegramArray[i13].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->outTelegramArray[i13].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTelegramArray[i13].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->outTelegramArray[i13].telegramheader.m_mcount = 0;
    outC->outTelegramArray[i13].telegramheader.nid_c = 0;
    outC->outTelegramArray[i13].telegramheader.nid_bg = 0;
    outC->outTelegramArray[i13].telegramheader.q_link = Q_LINK_Unlinked;
    for (i11 = 0; i11 < 30; i11++) {
      outC->outTelegramArray[i13].packets.PacketHeaders[i11].nid_packet = 0;
      outC->outTelegramArray[i13].packets.PacketHeaders[i11].q_dir =
        Q_DIR_Reverse;
      outC->outTelegramArray[i13].packets.PacketHeaders[i11].valid = kcg_true;
      outC->outTelegramArray[i13].packets.PacketHeaders[i11].startAddress = 0;
      outC->outTelegramArray[i13].packets.PacketHeaders[i11].endAddress = 0;
    }
    for (i12 = 0; i12 < 500; i12++) {
      outC->outTelegramArray[i13].packets.PacketData[i12] = 0;
    }
  }
  outC->outCollector.badBaliseFlag = kcg_true;
  outC->outCollector.BGMessageSent = kcg_true;
  outC->outCollector.C_ID = 0;
  outC->outCollector.BG_ID = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outCollector.collectedTelegrams = 0;
  outC->outCollector.totalTelegrams = 0;
  outC->outBGisChangedEarly = kcg_true;
  outC->outBGisComplete = kcg_true;
  /* 4 */ addTelegram_init_Receive_TrackSide_Msg_Pkg(&outC->Context_4);
  /* 1 */ checkTelegram_init_Receive_TrackSide_Msg_Pkg(&outC->_1_Context_1);
  /* 1 */ checkInit_init_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 4 */ addTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_4);
  /* 1 */ checkTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->_1_Context_1);
  /* 1 */ checkInit_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::manageTelegram */
void manageTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inoldTelegramArray */ TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L6, newTelegram);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L60, inoldTelegramArray);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L51, inCollector);
  /* 1 */
  checkInit_Receive_TrackSide_Msg_Pkg(
    &outC->_L6,
    &outC->_L51,
    &outC->Context_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L66,
    &outC->Context_1.outCollector);
  /* 1 */
  checkTelegram_Receive_TrackSide_Msg_Pkg(
    &outC->_L6,
    &outC->_L60,
    &outC->_L66,
    &outC->_1_Context_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L63,
    &outC->_1_Context_1.outCollector);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &outC->_L64,
    &outC->_1_Context_1.outTelegramArray);
  outC->_L10 = outC->_1_Context_1.outTelegramNotInGroup;
  outC->_L11 = outC->_1_Context_1.outBGchangedEarly;
  outC->isNotReceivedAlready = outC->_L10;
  outC->_L69 = outC->isNotReceivedAlready;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L47,
    incenterOfBalisePosition);
  /* 4 */
  addTelegram_Receive_TrackSide_Msg_Pkg(
    &outC->_L6,
    &outC->_L63,
    &outC->_L64,
    outC->_L69,
    &outC->_L47,
    &outC->Context_4);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L54,
    &outC->Context_4.outCollector);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &outC->_L58,
    &outC->Context_4.outTelegramArray);
  outC->_L53 = outC->Context_4.outBGisComplete;
  outC->_L67 = outC->Context_4.outIsDuplicate;
  outC->_L65 = outC->_L53 | outC->_L11;
  outC->outBGisComplete = outC->_L65;
  outC->outBGisChangedEarly = outC->_L11;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L54);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->outTelegramArray, &outC->_L58);
  outC->_L70 = outC->isNotReceivedAlready;
  outC->_L73 = !outC->_L67;
  outC->needsReplace = outC->_L73;
  outC->_L72 = outC->needsReplace;
  outC->_L68 = outC->_L70 | outC->_L72;
  outC->outStoresChanged = outC->_L68;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

