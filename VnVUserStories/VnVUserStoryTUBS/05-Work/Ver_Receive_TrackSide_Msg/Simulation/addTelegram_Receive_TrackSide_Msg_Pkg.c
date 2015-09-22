/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addTelegram_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void addTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_int i32;
  kcg_int i33;
  kcg_int i31;
  kcg_int i30;
  kcg_int i29;
  kcg_int i28;
  kcg_int i27;
  kcg_int i26;
  kcg_int i25;
  kcg_int i24;
  kcg_int i23;
  kcg_int i22;
  kcg_int i21;
  kcg_int i20;
  kcg_int i19;
  kcg_int i18;
  kcg_int i17;
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
  
  outC->_L19_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L19_IfBlock1.BGMessageSent = kcg_true;
  outC->_L19_IfBlock1.C_ID = 0;
  outC->_L19_IfBlock1.BG_ID = 0;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L19_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L19_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L19_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L19_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L19_IfBlock1.collectedTelegrams = 0;
  outC->_L19_IfBlock1.totalTelegrams = 0;
  outC->_L4_IfBlock1 = 0;
  outC->_L5_IfBlock1 = 0;
  outC->_L87_IfBlock1 = kcg_true;
  outC->_L96_IfBlock1 = kcg_true;
  outC->_L10_IfBlock1 = kcg_true;
  outC->_L11_IfBlock1 = kcg_true;
  for (i2 = 0; i2 < 8; i2++) {
    outC->_L13_IfBlock1[i2].valid = kcg_true;
    outC->_L13_IfBlock1[i2].checkResult = kcg_true;
    outC->_L13_IfBlock1[i2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L13_IfBlock1[i2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L13_IfBlock1[i2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L13_IfBlock1[i2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L13_IfBlock1[i2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L13_IfBlock1[i2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L13_IfBlock1[i2].telegramheader.m_mcount = 0;
    outC->_L13_IfBlock1[i2].telegramheader.nid_c = 0;
    outC->_L13_IfBlock1[i2].telegramheader.nid_bg = 0;
    outC->_L13_IfBlock1[i2].telegramheader.q_link = Q_LINK_Unlinked;
    for (i = 0; i < 30; i++) {
      outC->_L13_IfBlock1[i2].packets.PacketHeaders[i].nid_packet = 0;
      outC->_L13_IfBlock1[i2].packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
      outC->_L13_IfBlock1[i2].packets.PacketHeaders[i].valid = kcg_true;
      outC->_L13_IfBlock1[i2].packets.PacketHeaders[i].startAddress = 0;
      outC->_L13_IfBlock1[i2].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->_L13_IfBlock1[i2].packets.PacketData[i1] = 0;
    }
  }
  outC->_L14_IfBlock1 = 0;
  for (i5 = 0; i5 < 8; i5++) {
    outC->_L155_IfBlock1[i5].valid = kcg_true;
    outC->_L155_IfBlock1[i5].checkResult = kcg_true;
    outC->_L155_IfBlock1[i5].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L155_IfBlock1[i5].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L155_IfBlock1[i5].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L155_IfBlock1[i5].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L155_IfBlock1[i5].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L155_IfBlock1[i5].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L155_IfBlock1[i5].telegramheader.m_mcount = 0;
    outC->_L155_IfBlock1[i5].telegramheader.nid_c = 0;
    outC->_L155_IfBlock1[i5].telegramheader.nid_bg = 0;
    outC->_L155_IfBlock1[i5].telegramheader.q_link = Q_LINK_Unlinked;
    for (i3 = 0; i3 < 30; i3++) {
      outC->_L155_IfBlock1[i5].packets.PacketHeaders[i3].nid_packet = 0;
      outC->_L155_IfBlock1[i5].packets.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
      outC->_L155_IfBlock1[i5].packets.PacketHeaders[i3].valid = kcg_true;
      outC->_L155_IfBlock1[i5].packets.PacketHeaders[i3].startAddress = 0;
      outC->_L155_IfBlock1[i5].packets.PacketHeaders[i3].endAddress = 0;
    }
    for (i4 = 0; i4 < 500; i4++) {
      outC->_L155_IfBlock1[i5].packets.PacketData[i4] = 0;
    }
  }
  outC->_L174_IfBlock1.valid = kcg_true;
  outC->_L174_IfBlock1.checkResult = kcg_true;
  outC->_L174_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L174_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L174_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L174_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L174_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L174_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L174_IfBlock1.telegramheader.m_mcount = 0;
  outC->_L174_IfBlock1.telegramheader.nid_c = 0;
  outC->_L174_IfBlock1.telegramheader.nid_bg = 0;
  outC->_L174_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L174_IfBlock1.packets.PacketHeaders[i6].nid_packet = 0;
    outC->_L174_IfBlock1.packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L174_IfBlock1.packets.PacketHeaders[i6].valid = kcg_true;
    outC->_L174_IfBlock1.packets.PacketHeaders[i6].startAddress = 0;
    outC->_L174_IfBlock1.packets.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L174_IfBlock1.packets.PacketData[i7] = 0;
  }
  for (i10 = 0; i10 < 8; i10++) {
    outC->_L16_IfBlock1[i10].valid = kcg_true;
    outC->_L16_IfBlock1[i10].checkResult = kcg_true;
    outC->_L16_IfBlock1[i10].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L16_IfBlock1[i10].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L16_IfBlock1[i10].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L16_IfBlock1[i10].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L16_IfBlock1[i10].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L16_IfBlock1[i10].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L16_IfBlock1[i10].telegramheader.m_mcount = 0;
    outC->_L16_IfBlock1[i10].telegramheader.nid_c = 0;
    outC->_L16_IfBlock1[i10].telegramheader.nid_bg = 0;
    outC->_L16_IfBlock1[i10].telegramheader.q_link = Q_LINK_Unlinked;
    for (i8 = 0; i8 < 30; i8++) {
      outC->_L16_IfBlock1[i10].packets.PacketHeaders[i8].nid_packet = 0;
      outC->_L16_IfBlock1[i10].packets.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
      outC->_L16_IfBlock1[i10].packets.PacketHeaders[i8].valid = kcg_true;
      outC->_L16_IfBlock1[i10].packets.PacketHeaders[i8].startAddress = 0;
      outC->_L16_IfBlock1[i10].packets.PacketHeaders[i8].endAddress = 0;
    }
    for (i9 = 0; i9 < 500; i9++) {
      outC->_L16_IfBlock1[i10].packets.PacketData[i9] = 0;
    }
  }
  outC->_L18_IfBlock1 = kcg_true;
  outC->_L20_IfBlock1.valid = kcg_true;
  outC->_L20_IfBlock1.checkResult = kcg_true;
  outC->_L20_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L20_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L20_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L20_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L20_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L20_IfBlock1.telegramheader.m_mcount = 0;
  outC->_L20_IfBlock1.telegramheader.nid_c = 0;
  outC->_L20_IfBlock1.telegramheader.nid_bg = 0;
  outC->_L20_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (i11 = 0; i11 < 30; i11++) {
    outC->_L20_IfBlock1.packets.PacketHeaders[i11].nid_packet = 0;
    outC->_L20_IfBlock1.packets.PacketHeaders[i11].q_dir = Q_DIR_Reverse;
    outC->_L20_IfBlock1.packets.PacketHeaders[i11].valid = kcg_true;
    outC->_L20_IfBlock1.packets.PacketHeaders[i11].startAddress = 0;
    outC->_L20_IfBlock1.packets.PacketHeaders[i11].endAddress = 0;
  }
  for (i12 = 0; i12 < 500; i12++) {
    outC->_L20_IfBlock1.packets.PacketData[i12] = 0;
  }
  for (i13 = 0; i13 < 8; i13++) {
    outC->_L213_IfBlock1[i13] = kcg_true;
  }
  outC->_L22_IfBlock1 = kcg_true;
  outC->_L27_IfBlock1 = kcg_true;
  outC->_L29_IfBlock1 = 0;
  outC->_L30_IfBlock1 = 0;
  outC->_L31_IfBlock1 = kcg_true;
  outC->_L32_IfBlock1 = kcg_true;
  outC->_L33_IfBlock1 = kcg_true;
  outC->_L9_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L9_IfBlock1.BGMessageSent = kcg_true;
  outC->_L9_IfBlock1.C_ID = 0;
  outC->_L9_IfBlock1.BG_ID = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L9_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L9_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L9_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L9_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L9_IfBlock1.collectedTelegrams = 0;
  outC->_L9_IfBlock1.totalTelegrams = 0;
  outC->_L8_IfBlock1 = 0;
  outC->_L6_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L6_IfBlock1.BGMessageSent = kcg_true;
  outC->_L6_IfBlock1.C_ID = 0;
  outC->_L6_IfBlock1.BG_ID = 0;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L6_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L6_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L6_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L6_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L6_IfBlock1.collectedTelegrams = 0;
  outC->_L6_IfBlock1.totalTelegrams = 0;
  outC->_L3_IfBlock1 = kcg_true;
  outC->_L1_IfBlock1 = 0;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.timestamp = 0;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.acceleration = 0;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L15_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L15_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.timestamp = 0;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.acceleration = 0;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L17_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L17_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L21_IfBlock1 = kcg_true;
  outC->_L41_IfBlock1.valid = kcg_true;
  outC->_L41_IfBlock1.checkResult = kcg_true;
  outC->_L41_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L41_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L41_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L41_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L41_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L41_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L41_IfBlock1.telegramheader.m_mcount = 0;
  outC->_L41_IfBlock1.telegramheader.nid_c = 0;
  outC->_L41_IfBlock1.telegramheader.nid_bg = 0;
  outC->_L41_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (i14 = 0; i14 < 30; i14++) {
    outC->_L41_IfBlock1.packets.PacketHeaders[i14].nid_packet = 0;
    outC->_L41_IfBlock1.packets.PacketHeaders[i14].q_dir = Q_DIR_Reverse;
    outC->_L41_IfBlock1.packets.PacketHeaders[i14].valid = kcg_true;
    outC->_L41_IfBlock1.packets.PacketHeaders[i14].startAddress = 0;
    outC->_L41_IfBlock1.packets.PacketHeaders[i14].endAddress = 0;
  }
  for (i15 = 0; i15 < 500; i15++) {
    outC->_L41_IfBlock1.packets.PacketData[i15] = 0;
  }
  outC->_L40_IfBlock1 = kcg_true;
  for (i18 = 0; i18 < 8; i18++) {
    outC->_L39_IfBlock1[i18].valid = kcg_true;
    outC->_L39_IfBlock1[i18].checkResult = kcg_true;
    outC->_L39_IfBlock1[i18].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L39_IfBlock1[i18].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L39_IfBlock1[i18].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L39_IfBlock1[i18].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L39_IfBlock1[i18].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L39_IfBlock1[i18].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L39_IfBlock1[i18].telegramheader.m_mcount = 0;
    outC->_L39_IfBlock1[i18].telegramheader.nid_c = 0;
    outC->_L39_IfBlock1[i18].telegramheader.nid_bg = 0;
    outC->_L39_IfBlock1[i18].telegramheader.q_link = Q_LINK_Unlinked;
    for (i16 = 0; i16 < 30; i16++) {
      outC->_L39_IfBlock1[i18].packets.PacketHeaders[i16].nid_packet = 0;
      outC->_L39_IfBlock1[i18].packets.PacketHeaders[i16].q_dir = Q_DIR_Reverse;
      outC->_L39_IfBlock1[i18].packets.PacketHeaders[i16].valid = kcg_true;
      outC->_L39_IfBlock1[i18].packets.PacketHeaders[i16].startAddress = 0;
      outC->_L39_IfBlock1[i18].packets.PacketHeaders[i16].endAddress = 0;
    }
    for (i17 = 0; i17 < 500; i17++) {
      outC->_L39_IfBlock1[i18].packets.PacketData[i17] = 0;
    }
  }
  for (i21 = 0; i21 < 8; i21++) {
    outC->_L37_IfBlock1[i21].valid = kcg_true;
    outC->_L37_IfBlock1[i21].checkResult = kcg_true;
    outC->_L37_IfBlock1[i21].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L37_IfBlock1[i21].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L37_IfBlock1[i21].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L37_IfBlock1[i21].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L37_IfBlock1[i21].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L37_IfBlock1[i21].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L37_IfBlock1[i21].telegramheader.m_mcount = 0;
    outC->_L37_IfBlock1[i21].telegramheader.nid_c = 0;
    outC->_L37_IfBlock1[i21].telegramheader.nid_bg = 0;
    outC->_L37_IfBlock1[i21].telegramheader.q_link = Q_LINK_Unlinked;
    for (i19 = 0; i19 < 30; i19++) {
      outC->_L37_IfBlock1[i21].packets.PacketHeaders[i19].nid_packet = 0;
      outC->_L37_IfBlock1[i21].packets.PacketHeaders[i19].q_dir = Q_DIR_Reverse;
      outC->_L37_IfBlock1[i21].packets.PacketHeaders[i19].valid = kcg_true;
      outC->_L37_IfBlock1[i21].packets.PacketHeaders[i19].startAddress = 0;
      outC->_L37_IfBlock1[i21].packets.PacketHeaders[i19].endAddress = 0;
    }
    for (i20 = 0; i20 < 500; i20++) {
      outC->_L37_IfBlock1[i21].packets.PacketData[i20] = 0;
    }
  }
  outC->_L35_IfBlock1 = 0;
  for (i24 = 0; i24 < 8; i24++) {
    outC->_L36_IfBlock1[i24].valid = kcg_true;
    outC->_L36_IfBlock1[i24].checkResult = kcg_true;
    outC->_L36_IfBlock1[i24].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L36_IfBlock1[i24].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L36_IfBlock1[i24].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L36_IfBlock1[i24].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L36_IfBlock1[i24].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L36_IfBlock1[i24].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L36_IfBlock1[i24].telegramheader.m_mcount = 0;
    outC->_L36_IfBlock1[i24].telegramheader.nid_c = 0;
    outC->_L36_IfBlock1[i24].telegramheader.nid_bg = 0;
    outC->_L36_IfBlock1[i24].telegramheader.q_link = Q_LINK_Unlinked;
    for (i22 = 0; i22 < 30; i22++) {
      outC->_L36_IfBlock1[i24].packets.PacketHeaders[i22].nid_packet = 0;
      outC->_L36_IfBlock1[i24].packets.PacketHeaders[i22].q_dir = Q_DIR_Reverse;
      outC->_L36_IfBlock1[i24].packets.PacketHeaders[i22].valid = kcg_true;
      outC->_L36_IfBlock1[i24].packets.PacketHeaders[i22].startAddress = 0;
      outC->_L36_IfBlock1[i24].packets.PacketHeaders[i22].endAddress = 0;
    }
    for (i23 = 0; i23 < 500; i23++) {
      outC->_L36_IfBlock1[i24].packets.PacketData[i23] = 0;
    }
  }
  outC->_L45_IfBlock1.valid = kcg_true;
  outC->_L45_IfBlock1.checkResult = kcg_true;
  outC->_L45_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L45_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L45_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L45_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L45_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L45_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L45_IfBlock1.telegramheader.m_mcount = 0;
  outC->_L45_IfBlock1.telegramheader.nid_c = 0;
  outC->_L45_IfBlock1.telegramheader.nid_bg = 0;
  outC->_L45_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (i25 = 0; i25 < 30; i25++) {
    outC->_L45_IfBlock1.packets.PacketHeaders[i25].nid_packet = 0;
    outC->_L45_IfBlock1.packets.PacketHeaders[i25].q_dir = Q_DIR_Reverse;
    outC->_L45_IfBlock1.packets.PacketHeaders[i25].valid = kcg_true;
    outC->_L45_IfBlock1.packets.PacketHeaders[i25].startAddress = 0;
    outC->_L45_IfBlock1.packets.PacketHeaders[i25].endAddress = 0;
  }
  for (i26 = 0; i26 < 500; i26++) {
    outC->_L45_IfBlock1.packets.PacketData[i26] = 0;
  }
  outC->_L46_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L46_IfBlock1.odometerOfBaliseDetection.timestamp = 0;
  outC->_L46_IfBlock1.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L46_IfBlock1.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L46_IfBlock1.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L46_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L46_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L46_IfBlock1.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L46_IfBlock1.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L46_IfBlock1.odometerOfBaliseDetection.acceleration = 0;
  outC->_L46_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L46_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L46_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L46_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L46_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.timestamp = 0;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.acceleration = 0;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L47_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L47_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L47_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L47_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L54_IfBlock1 = kcg_true;
  outC->_L53_IfBlock1 = 0;
  outC->_L52_IfBlock1 = 0;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.timestamp = 0;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.acceleration = 0;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L51_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L51_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L51_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L51_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.timestamp = 0;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.acceleration = 0;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L50_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L50_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L50_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L50_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L49_IfBlock1 = 0;
  outC->_L48_IfBlock1 = 0;
  outC->_L55_IfBlock1.valid = kcg_true;
  outC->_L55_IfBlock1.checkResult = kcg_true;
  outC->_L55_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L55_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L55_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L55_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L55_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L55_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L55_IfBlock1.telegramheader.m_mcount = 0;
  outC->_L55_IfBlock1.telegramheader.nid_c = 0;
  outC->_L55_IfBlock1.telegramheader.nid_bg = 0;
  outC->_L55_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (i27 = 0; i27 < 30; i27++) {
    outC->_L55_IfBlock1.packets.PacketHeaders[i27].nid_packet = 0;
    outC->_L55_IfBlock1.packets.PacketHeaders[i27].q_dir = Q_DIR_Reverse;
    outC->_L55_IfBlock1.packets.PacketHeaders[i27].valid = kcg_true;
    outC->_L55_IfBlock1.packets.PacketHeaders[i27].startAddress = 0;
    outC->_L55_IfBlock1.packets.PacketHeaders[i27].endAddress = 0;
  }
  for (i28 = 0; i28 < 500; i28++) {
    outC->_L55_IfBlock1.packets.PacketData[i28] = 0;
  }
  outC->IfBlock1_clock = kcg_true;
  outC->outIsDuplicate = kcg_true;
  outC->outBGisComplete = kcg_true;
  for (i31 = 0; i31 < 8; i31++) {
    outC->outTelegramArray[i31].valid = kcg_true;
    outC->outTelegramArray[i31].checkResult = kcg_true;
    outC->outTelegramArray[i31].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTelegramArray[i31].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTelegramArray[i31].telegramheader.q_media = Q_MEDIA_Balise;
    outC->outTelegramArray[i31].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->outTelegramArray[i31].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTelegramArray[i31].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->outTelegramArray[i31].telegramheader.m_mcount = 0;
    outC->outTelegramArray[i31].telegramheader.nid_c = 0;
    outC->outTelegramArray[i31].telegramheader.nid_bg = 0;
    outC->outTelegramArray[i31].telegramheader.q_link = Q_LINK_Unlinked;
    for (i29 = 0; i29 < 30; i29++) {
      outC->outTelegramArray[i31].packets.PacketHeaders[i29].nid_packet = 0;
      outC->outTelegramArray[i31].packets.PacketHeaders[i29].q_dir =
        Q_DIR_Reverse;
      outC->outTelegramArray[i31].packets.PacketHeaders[i29].valid = kcg_true;
      outC->outTelegramArray[i31].packets.PacketHeaders[i29].startAddress = 0;
      outC->outTelegramArray[i31].packets.PacketHeaders[i29].endAddress = 0;
    }
    for (i30 = 0; i30 < 500; i30++) {
      outC->outTelegramArray[i31].packets.PacketData[i30] = 0;
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
  for (i33 = 0; i33 < 8; i33++) {
    /* 3 */
    setFirstFree_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_3[i33]);
  }
  for (i32 = 0; i32 < 8; i32++) {
    /* 1 */
    replaceTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_2_Context_1[i32]);
  }
  /* 1 */
  setIntervalBGPosition_init_Receive_TrackSide_Msg_Pkg(&outC->_1_Context_1);
  /* 1 */
  setCoordinateSystemPosition_init_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void addTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_int i;
  kcg_int i1;
  
  for (i1 = 0; i1 < 8; i1++) {
    /* 3 */
    setFirstFree_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_3[i1]);
  }
  for (i = 0; i < 8; i++) {
    /* 1 */
    replaceTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_2_Context_1[i]);
  }
  /* 1 */
  setIntervalBGPosition_reset_Receive_TrackSide_Msg_Pkg(&outC->_1_Context_1);
  /* 1 */
  setCoordinateSystemPosition_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::addTelegram */
void addTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::addTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inoldTelegramArray */ TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::doUpdate */ kcg_bool doUpdate,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inPosition */ centerOfBalisePosition_T_BG_Types_Pkg *inPosition,
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */ kcg_bool _7_outIsDuplicate;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */ kcg_bool _6_outBGisComplete;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg _5_outTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _4_outCollector;
  kcg_int noname;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */ kcg_bool outIsDuplicate;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */ kcg_bool outBGisComplete;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg outTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector;
  
  outC->IfBlock1_clock = doUpdate;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L9_IfBlock1,
      inCollector);
    outC->_L3_IfBlock1 = outC->_L9_IfBlock1.badBaliseFlag;
    outC->_L54_IfBlock1 = outC->_L9_IfBlock1.BGMessageSent;
    outC->_L53_IfBlock1 = outC->_L9_IfBlock1.C_ID;
    outC->_L52_IfBlock1 = outC->_L9_IfBlock1.BG_ID;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L51_IfBlock1,
      &outC->_L9_IfBlock1.balisePosition);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L45_IfBlock1, newTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L17_IfBlock1,
      inPosition);
    /* 1 */
    setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(
      &outC->_L51_IfBlock1,
      &outC->_L45_IfBlock1,
      &outC->_L17_IfBlock1,
      &outC->Context_1);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L15_IfBlock1,
      &outC->Context_1.outUpdateBGPosition);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L50_IfBlock1,
      &outC->_L9_IfBlock1.positionFirstContact);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L47_IfBlock1,
      inPosition);
    /* 1 */
    setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
      &outC->_L50_IfBlock1,
      &outC->_L47_IfBlock1,
      &outC->_1_Context_1);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L46_IfBlock1,
      &outC->_1_Context_1.outUpdateBGPosition);
    outC->_L49_IfBlock1 = outC->_L9_IfBlock1.collectedTelegrams;
    outC->_L8_IfBlock1 = 1;
    outC->_L1_IfBlock1 = outC->_L49_IfBlock1 + outC->_L8_IfBlock1;
    outC->_L48_IfBlock1 = outC->_L9_IfBlock1.totalTelegrams;
    outC->_L6_IfBlock1.badBaliseFlag = outC->_L3_IfBlock1;
    outC->_L6_IfBlock1.BGMessageSent = outC->_L54_IfBlock1;
    outC->_L6_IfBlock1.C_ID = outC->_L53_IfBlock1;
    outC->_L6_IfBlock1.BG_ID = outC->_L52_IfBlock1;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L6_IfBlock1.balisePosition,
      &outC->_L15_IfBlock1);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L6_IfBlock1.positionFirstContact,
      &outC->_L46_IfBlock1);
    outC->_L6_IfBlock1.collectedTelegrams = outC->_L1_IfBlock1;
    outC->_L6_IfBlock1.totalTelegrams = outC->_L48_IfBlock1;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_4_outCollector,
      &outC->_L6_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &_4_outCollector);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L41_IfBlock1, newTelegram);
    /* pow */ for (i1 = 0; i1 < 8; i1++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L37_IfBlock1[i1],
        &outC->_L41_IfBlock1);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L39_IfBlock1,
      inoldTelegramArray);
    outC->_L40_IfBlock1 = doUpdate;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L55_IfBlock1,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    if (outC->_L40_IfBlock1) {
      for (i = 0; i < 8; i++) {
        /* 3 */
        setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          &outC->_L37_IfBlock1[i],
          &outC->_L39_IfBlock1[i],
          &outC->Context_3[i]);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L36_IfBlock1[i],
          &outC->Context_3[i].outTelegrams);
        outC->_L35_IfBlock1 = i + 1;
        if (!outC->Context_3[i].cont) {
          break;
        }
      }
    }
    else {
      outC->_L35_IfBlock1 = 0;
    }
#ifdef KCG_MAPW_CPY
    
    for (i = outC->_L35_IfBlock1; i < 8; i++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L36_IfBlock1[i],
        &outC->_L55_IfBlock1);
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_5_outTelegramArray,
      &outC->_L36_IfBlock1);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outTelegramArray,
      &_5_outTelegramArray);
    outC->_L21_IfBlock1 = outC->_L1_IfBlock1 >= outC->_L48_IfBlock1;
    _6_outBGisComplete = outC->_L21_IfBlock1;
    outC->outBGisComplete = _6_outBGisComplete;
    _7_outIsDuplicate = kcg_false;
    outC->outIsDuplicate = _7_outIsDuplicate;
    noname = outC->_L35_IfBlock1;
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L19_IfBlock1,
      inCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector,
      &outC->_L19_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &outCollector);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L174_IfBlock1, newTelegram);
    /* pow */ for (i3 = 0; i3 < 8; i3++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L16_IfBlock1[i3],
        &outC->_L174_IfBlock1);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L13_IfBlock1,
      inoldTelegramArray);
    outC->_L18_IfBlock1 = kcg_true;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L20_IfBlock1,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    outC->_L22_IfBlock1 = kcg_false;
    if (outC->_L18_IfBlock1) {
      for (i2 = 0; i2 < 8; i2++) {
        /* 1 */
        replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          &outC->_L16_IfBlock1[i2],
          &outC->_L13_IfBlock1[i2],
          &outC->_2_Context_1[i2]);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L155_IfBlock1[i2],
          &outC->_2_Context_1[i2].outTelegrams);
        outC->_L213_IfBlock1[i2] = outC->_2_Context_1[i2].outIsDuplicate;
        outC->_L14_IfBlock1 = i2 + 1;
        if (!outC->_2_Context_1[i2].cont) {
          break;
        }
      }
    }
    else {
      outC->_L14_IfBlock1 = 0;
    }
#ifdef KCG_MAPW_CPY
    
    for (i2 = outC->_L14_IfBlock1; i2 < 8; i2++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L155_IfBlock1[i2],
        &outC->_L20_IfBlock1);
      outC->_L213_IfBlock1[i2] = outC->_L22_IfBlock1;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outTelegramArray,
      &outC->_L155_IfBlock1);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outTelegramArray,
      &outTelegramArray);
    outC->_L31_IfBlock1 = kcg_false;
    outC->_L30_IfBlock1 = 1;
    outC->_L29_IfBlock1 = outC->_L14_IfBlock1 - outC->_L30_IfBlock1;
    if ((0 <= outC->_L29_IfBlock1) & (outC->_L29_IfBlock1 < 8)) {
      outC->_L27_IfBlock1 = outC->_L213_IfBlock1[outC->_L29_IfBlock1];
    }
    else {
      outC->_L27_IfBlock1 = outC->_L31_IfBlock1;
    }
    outC->_L33_IfBlock1 = !outC->_L27_IfBlock1;
    outC->_L4_IfBlock1 = outC->_L19_IfBlock1.collectedTelegrams;
    outC->_L5_IfBlock1 = outC->_L19_IfBlock1.totalTelegrams;
    outC->_L87_IfBlock1 = outC->_L4_IfBlock1 >= outC->_L5_IfBlock1;
    outC->_L96_IfBlock1 = outC->_L19_IfBlock1.BGMessageSent;
    outC->_L10_IfBlock1 = !outC->_L96_IfBlock1;
    outC->_L11_IfBlock1 = outC->_L87_IfBlock1 & outC->_L10_IfBlock1;
    outC->_L32_IfBlock1 = outC->_L33_IfBlock1 & outC->_L11_IfBlock1;
    outBGisComplete = outC->_L32_IfBlock1;
    outC->outBGisComplete = outBGisComplete;
    outIsDuplicate = outC->_L27_IfBlock1;
    outC->outIsDuplicate = outIsDuplicate;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** addTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

