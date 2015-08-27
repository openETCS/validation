/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildBGMessage_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void BuildBGMessage_init_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_int i64;
  kcg_int i63;
  kcg_int i62;
  kcg_int i61;
  kcg_int i60;
  kcg_int i59;
  kcg_int i58;
  kcg_int i57;
  kcg_int i56;
  kcg_int i55;
  kcg_int i54;
  kcg_int i53;
  kcg_int i52;
  kcg_int i51;
  kcg_int i50;
  kcg_int i49;
  kcg_int i48;
  kcg_int i47;
  kcg_int i46;
  kcg_int i45;
  kcg_int i44;
  kcg_int i43;
  kcg_int i42;
  kcg_int i41;
  kcg_int i40;
  kcg_int i39;
  kcg_int i38;
  kcg_int i37;
  kcg_int i36;
  kcg_int i35;
  kcg_int i34;
  kcg_int i33;
  kcg_int i32;
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
  
  outC->_L48.present = kcg_true;
  for (i2 = 0; i2 < 8; i2++) {
    outC->_L48.Telegrams[i2].valid = kcg_true;
    outC->_L48.Telegrams[i2].checkResult = kcg_true;
    outC->_L48.Telegrams[i2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L48.Telegrams[i2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L48.Telegrams[i2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L48.Telegrams[i2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L48.Telegrams[i2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L48.Telegrams[i2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L48.Telegrams[i2].telegramheader.m_mcount = 0;
    outC->_L48.Telegrams[i2].telegramheader.nid_c = 0;
    outC->_L48.Telegrams[i2].telegramheader.nid_bg = 0;
    outC->_L48.Telegrams[i2].telegramheader.q_link = Q_LINK_Unlinked;
    for (i = 0; i < 30; i++) {
      outC->_L48.Telegrams[i2].packets.PacketHeaders[i].nid_packet = 0;
      outC->_L48.Telegrams[i2].packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
      outC->_L48.Telegrams[i2].packets.PacketHeaders[i].valid = kcg_true;
      outC->_L48.Telegrams[i2].packets.PacketHeaders[i].startAddress = 0;
      outC->_L48.Telegrams[i2].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->_L48.Telegrams[i2].packets.PacketData[i1] = 0;
    }
  }
  outC->_L48.numberBalises = 0;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L48.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L48.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L48.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L47.valid = kcg_true;
  outC->_L47.telegram.valid = kcg_true;
  outC->_L47.telegram.checkResult = kcg_true;
  outC->_L47.telegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L47.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L47.telegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L47.telegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L47.telegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L47.telegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L47.telegram.telegramheader.m_mcount = 0;
  outC->_L47.telegram.telegramheader.nid_c = 0;
  outC->_L47.telegram.telegramheader.nid_bg = 0;
  outC->_L47.telegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (i3 = 0; i3 < 30; i3++) {
    outC->_L47.telegram.packets.PacketHeaders[i3].nid_packet = 0;
    outC->_L47.telegram.packets.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
    outC->_L47.telegram.packets.PacketHeaders[i3].valid = kcg_true;
    outC->_L47.telegram.packets.PacketHeaders[i3].startAddress = 0;
    outC->_L47.telegram.packets.PacketHeaders[i3].endAddress = 0;
  }
  for (i4 = 0; i4 < 500; i4++) {
    outC->_L47.telegram.packets.PacketData[i4] = 0;
  }
  outC->_L47.position.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L47.position.odometerOfBaliseDetection.timestamp = 0;
  outC->_L47.position.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L47.position.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L47.position.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L47.position.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L47.position.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L47.position.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L47.position.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L47.position.odometerOfBaliseDetection.acceleration = 0;
  outC->_L47.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L47.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L47.position.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L47.position.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L47.position.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L23.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L23.odometerOfBaliseDetection.timestamp = 0;
  outC->_L23.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L23.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L23.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L23.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L23.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L23.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L23.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L23.odometerOfBaliseDetection.acceleration = 0;
  outC->_L23.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L23.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L23.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L25 = kcg_true;
  outC->_L26.valid = kcg_true;
  outC->_L26.telegram.valid = kcg_true;
  outC->_L26.telegram.checkResult = kcg_true;
  outC->_L26.telegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L26.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L26.telegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L26.telegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L26.telegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L26.telegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L26.telegram.telegramheader.m_mcount = 0;
  outC->_L26.telegram.telegramheader.nid_c = 0;
  outC->_L26.telegram.telegramheader.nid_bg = 0;
  outC->_L26.telegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (i5 = 0; i5 < 30; i5++) {
    outC->_L26.telegram.packets.PacketHeaders[i5].nid_packet = 0;
    outC->_L26.telegram.packets.PacketHeaders[i5].q_dir = Q_DIR_Reverse;
    outC->_L26.telegram.packets.PacketHeaders[i5].valid = kcg_true;
    outC->_L26.telegram.packets.PacketHeaders[i5].startAddress = 0;
    outC->_L26.telegram.packets.PacketHeaders[i5].endAddress = 0;
  }
  for (i6 = 0; i6 < 500; i6++) {
    outC->_L26.telegram.packets.PacketData[i6] = 0;
  }
  outC->_L26.position.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L26.position.odometerOfBaliseDetection.timestamp = 0;
  outC->_L26.position.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L26.position.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L26.position.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L26.position.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L26.position.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L26.position.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L26.position.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L26.position.odometerOfBaliseDetection.acceleration = 0;
  outC->_L26.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L26.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26.position.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L26.position.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L26.position.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L27.valid = kcg_true;
  outC->_L27.checkResult = kcg_true;
  outC->_L27.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L27.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L27.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L27.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L27.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L27.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L27.telegramheader.m_mcount = 0;
  outC->_L27.telegramheader.nid_c = 0;
  outC->_L27.telegramheader.nid_bg = 0;
  outC->_L27.telegramheader.q_link = Q_LINK_Unlinked;
  for (i7 = 0; i7 < 30; i7++) {
    outC->_L27.packets.PacketHeaders[i7].nid_packet = 0;
    outC->_L27.packets.PacketHeaders[i7].q_dir = Q_DIR_Reverse;
    outC->_L27.packets.PacketHeaders[i7].valid = kcg_true;
    outC->_L27.packets.PacketHeaders[i7].startAddress = 0;
    outC->_L27.packets.PacketHeaders[i7].endAddress = 0;
  }
  for (i8 = 0; i8 < 500; i8++) {
    outC->_L27.packets.PacketData[i8] = 0;
  }
  outC->_L30.valid = kcg_true;
  outC->_L30.telegram.valid = kcg_true;
  outC->_L30.telegram.checkResult = kcg_true;
  outC->_L30.telegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L30.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L30.telegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L30.telegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L30.telegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L30.telegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L30.telegram.telegramheader.m_mcount = 0;
  outC->_L30.telegram.telegramheader.nid_c = 0;
  outC->_L30.telegram.telegramheader.nid_bg = 0;
  outC->_L30.telegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (i9 = 0; i9 < 30; i9++) {
    outC->_L30.telegram.packets.PacketHeaders[i9].nid_packet = 0;
    outC->_L30.telegram.packets.PacketHeaders[i9].q_dir = Q_DIR_Reverse;
    outC->_L30.telegram.packets.PacketHeaders[i9].valid = kcg_true;
    outC->_L30.telegram.packets.PacketHeaders[i9].startAddress = 0;
    outC->_L30.telegram.packets.PacketHeaders[i9].endAddress = 0;
  }
  for (i10 = 0; i10 < 500; i10++) {
    outC->_L30.telegram.packets.PacketData[i10] = 0;
  }
  outC->_L30.position.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L30.position.odometerOfBaliseDetection.timestamp = 0;
  outC->_L30.position.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L30.position.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L30.position.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L30.position.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L30.position.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L30.position.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L30.position.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L30.position.odometerOfBaliseDetection.acceleration = 0;
  outC->_L30.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30.position.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L30.position.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L30.position.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->testBG.present = kcg_true;
  for (i13 = 0; i13 < 8; i13++) {
    outC->testBG.Telegrams[i13].valid = kcg_true;
    outC->testBG.Telegrams[i13].checkResult = kcg_true;
    outC->testBG.Telegrams[i13].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->testBG.Telegrams[i13].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->testBG.Telegrams[i13].telegramheader.q_media = Q_MEDIA_Balise;
    outC->testBG.Telegrams[i13].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->testBG.Telegrams[i13].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->testBG.Telegrams[i13].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->testBG.Telegrams[i13].telegramheader.m_mcount = 0;
    outC->testBG.Telegrams[i13].telegramheader.nid_c = 0;
    outC->testBG.Telegrams[i13].telegramheader.nid_bg = 0;
    outC->testBG.Telegrams[i13].telegramheader.q_link = Q_LINK_Unlinked;
    for (i11 = 0; i11 < 30; i11++) {
      outC->testBG.Telegrams[i13].packets.PacketHeaders[i11].nid_packet = 0;
      outC->testBG.Telegrams[i13].packets.PacketHeaders[i11].q_dir =
        Q_DIR_Reverse;
      outC->testBG.Telegrams[i13].packets.PacketHeaders[i11].valid = kcg_true;
      outC->testBG.Telegrams[i13].packets.PacketHeaders[i11].startAddress = 0;
      outC->testBG.Telegrams[i13].packets.PacketHeaders[i11].endAddress = 0;
    }
    for (i12 = 0; i12 < 500; i12++) {
      outC->testBG.Telegrams[i13].packets.PacketData[i12] = 0;
    }
  }
  outC->testBG.numberBalises = 0;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->testBG.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->testBG.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->testBG.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storeIsChanged = kcg_true;
  for (i16 = 0; i16 < 8; i16++) {
    outC->tempBGTelegramArray[i16].valid = kcg_true;
    outC->tempBGTelegramArray[i16].checkResult = kcg_true;
    outC->tempBGTelegramArray[i16].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->tempBGTelegramArray[i16].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->tempBGTelegramArray[i16].telegramheader.q_media = Q_MEDIA_Balise;
    outC->tempBGTelegramArray[i16].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->tempBGTelegramArray[i16].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->tempBGTelegramArray[i16].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->tempBGTelegramArray[i16].telegramheader.m_mcount = 0;
    outC->tempBGTelegramArray[i16].telegramheader.nid_c = 0;
    outC->tempBGTelegramArray[i16].telegramheader.nid_bg = 0;
    outC->tempBGTelegramArray[i16].telegramheader.q_link = Q_LINK_Unlinked;
    for (i14 = 0; i14 < 30; i14++) {
      outC->tempBGTelegramArray[i16].packets.PacketHeaders[i14].nid_packet = 0;
      outC->tempBGTelegramArray[i16].packets.PacketHeaders[i14].q_dir =
        Q_DIR_Reverse;
      outC->tempBGTelegramArray[i16].packets.PacketHeaders[i14].valid =
        kcg_true;
      outC->tempBGTelegramArray[i16].packets.PacketHeaders[i14].startAddress =
        0;
      outC->tempBGTelegramArray[i16].packets.PacketHeaders[i14].endAddress = 0;
    }
    for (i15 = 0; i15 < 500; i15++) {
      outC->tempBGTelegramArray[i16].packets.PacketData[i15] = 0;
    }
  }
  outC->tempCollectorStore.badBaliseFlag = kcg_true;
  outC->tempCollectorStore.BGMessageSent = kcg_true;
  outC->tempCollectorStore.C_ID = 0;
  outC->tempCollectorStore.BG_ID = 0;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->tempCollectorStore.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->tempCollectorStore.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->tempCollectorStore.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->tempCollectorStore.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->tempCollectorStore.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->tempCollectorStore.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->tempCollectorStore.collectedTelegrams = 0;
  outC->tempCollectorStore.totalTelegrams = 0;
  outC->needTelegramStore = kcg_true;
  outC->positionToUse.odometerOfBaliseDetection.valid = kcg_true;
  outC->positionToUse.odometerOfBaliseDetection.timestamp = 0;
  outC->positionToUse.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->positionToUse.odometerOfBaliseDetection.odo.o_min = 0;
  outC->positionToUse.odometerOfBaliseDetection.odo.o_max = 0;
  outC->positionToUse.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->positionToUse.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->positionToUse.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->positionToUse.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->positionToUse.odometerOfBaliseDetection.acceleration = 0;
  outC->positionToUse.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->positionToUse.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->positionToUse.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->positionToUse.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->positionToUse.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->telegramPresent = kcg_true;
  outC->telegramToUse.valid = kcg_true;
  outC->telegramToUse.checkResult = kcg_true;
  outC->telegramToUse.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->telegramToUse.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->telegramToUse.telegramheader.q_media = Q_MEDIA_Balise;
  outC->telegramToUse.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->telegramToUse.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->telegramToUse.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->telegramToUse.telegramheader.m_mcount = 0;
  outC->telegramToUse.telegramheader.nid_c = 0;
  outC->telegramToUse.telegramheader.nid_bg = 0;
  outC->telegramToUse.telegramheader.q_link = Q_LINK_Unlinked;
  for (i17 = 0; i17 < 30; i17++) {
    outC->telegramToUse.packets.PacketHeaders[i17].nid_packet = 0;
    outC->telegramToUse.packets.PacketHeaders[i17].q_dir = Q_DIR_Reverse;
    outC->telegramToUse.packets.PacketHeaders[i17].valid = kcg_true;
    outC->telegramToUse.packets.PacketHeaders[i17].startAddress = 0;
    outC->telegramToUse.packets.PacketHeaders[i17].endAddress = 0;
  }
  for (i18 = 0; i18 < 500; i18++) {
    outC->telegramToUse.packets.PacketData[i18] = 0;
  }
  outC->BGisChangedEarly = kcg_true;
  outC->BGisComplete = kcg_true;
  for (i21 = 0; i21 < 8; i21++) {
    outC->_L11_IfBlock1_IfBlock3[i21].valid = kcg_true;
    outC->_L11_IfBlock1_IfBlock3[i21].checkResult = kcg_true;
    outC->_L11_IfBlock1_IfBlock3[i21].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L11_IfBlock1_IfBlock3[i21].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L11_IfBlock1_IfBlock3[i21].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L11_IfBlock1_IfBlock3[i21].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L11_IfBlock1_IfBlock3[i21].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L11_IfBlock1_IfBlock3[i21].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L11_IfBlock1_IfBlock3[i21].telegramheader.m_mcount = 0;
    outC->_L11_IfBlock1_IfBlock3[i21].telegramheader.nid_c = 0;
    outC->_L11_IfBlock1_IfBlock3[i21].telegramheader.nid_bg = 0;
    outC->_L11_IfBlock1_IfBlock3[i21].telegramheader.q_link = Q_LINK_Unlinked;
    for (i19 = 0; i19 < 30; i19++) {
      outC->_L11_IfBlock1_IfBlock3[i21].packets.PacketHeaders[i19].nid_packet =
        0;
      outC->_L11_IfBlock1_IfBlock3[i21].packets.PacketHeaders[i19].q_dir =
        Q_DIR_Reverse;
      outC->_L11_IfBlock1_IfBlock3[i21].packets.PacketHeaders[i19].valid =
        kcg_true;
      outC->_L11_IfBlock1_IfBlock3[i21].packets.PacketHeaders[i19].startAddress =
        0;
      outC->_L11_IfBlock1_IfBlock3[i21].packets.PacketHeaders[i19].endAddress =
        0;
    }
    for (i20 = 0; i20 < 500; i20++) {
      outC->_L11_IfBlock1_IfBlock3[i21].packets.PacketData[i20] = 0;
    }
  }
  outC->_L9_IfBlock1_IfBlock3.badBaliseFlag = kcg_true;
  outC->_L9_IfBlock1_IfBlock3.BGMessageSent = kcg_true;
  outC->_L9_IfBlock1_IfBlock3.C_ID = 0;
  outC->_L9_IfBlock1_IfBlock3.BG_ID = 0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L9_IfBlock1_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L9_IfBlock1_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L9_IfBlock1_IfBlock3.collectedTelegrams = 0;
  outC->_L9_IfBlock1_IfBlock3.totalTelegrams = 0;
  outC->_L7_IfBlock1_IfBlock3 = kcg_true;
  outC->_L4_IfBlock1_IfBlock3.badBaliseFlag = kcg_true;
  outC->_L4_IfBlock1_IfBlock3.BGMessageSent = kcg_true;
  outC->_L4_IfBlock1_IfBlock3.C_ID = 0;
  outC->_L4_IfBlock1_IfBlock3.BG_ID = 0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L4_IfBlock1_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L4_IfBlock1_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L4_IfBlock1_IfBlock3.collectedTelegrams = 0;
  outC->_L4_IfBlock1_IfBlock3.totalTelegrams = 0;
  outC->_L5_IfBlock1_IfBlock3.valid = kcg_true;
  outC->_L5_IfBlock1_IfBlock3.timestamp = 0;
  outC->_L5_IfBlock1_IfBlock3.odo.o_nominal = 0;
  outC->_L5_IfBlock1_IfBlock3.odo.o_min = 0;
  outC->_L5_IfBlock1_IfBlock3.odo.o_max = 0;
  outC->_L5_IfBlock1_IfBlock3.speed.v_safeNominal = 0;
  outC->_L5_IfBlock1_IfBlock3.speed.v_rawNominal = 0;
  outC->_L5_IfBlock1_IfBlock3.speed.v_lower = 0;
  outC->_L5_IfBlock1_IfBlock3.speed.v_upper = 0;
  outC->_L5_IfBlock1_IfBlock3.acceleration = 0;
  outC->_L5_IfBlock1_IfBlock3.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_IfBlock1_IfBlock3.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_IfBlock1_IfBlock3 = kcg_true;
  outC->_L2_IfBlock1_IfBlock3 = kcg_true;
  outC->_L1_IfBlock1_IfBlock3 = kcg_true;
  outC->_L5_IfBlock1 = kcg_true;
  outC->_L4_IfBlock1 = kcg_true;
  outC->_L10_IfBlock1.valid = kcg_true;
  outC->_L10_IfBlock1.checkResult = kcg_true;
  outC->_L10_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L10_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L10_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L10_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L10_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L10_IfBlock1.telegramheader.m_mcount = 0;
  outC->_L10_IfBlock1.telegramheader.nid_c = 0;
  outC->_L10_IfBlock1.telegramheader.nid_bg = 0;
  outC->_L10_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (i22 = 0; i22 < 30; i22++) {
    outC->_L10_IfBlock1.packets.PacketHeaders[i22].nid_packet = 0;
    outC->_L10_IfBlock1.packets.PacketHeaders[i22].q_dir = Q_DIR_Reverse;
    outC->_L10_IfBlock1.packets.PacketHeaders[i22].valid = kcg_true;
    outC->_L10_IfBlock1.packets.PacketHeaders[i22].startAddress = 0;
    outC->_L10_IfBlock1.packets.PacketHeaders[i22].endAddress = 0;
  }
  for (i23 = 0; i23 < 500; i23++) {
    outC->_L10_IfBlock1.packets.PacketData[i23] = 0;
  }
  outC->_L11_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L11_IfBlock1.odometerOfBaliseDetection.timestamp = 0;
  outC->_L11_IfBlock1.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L11_IfBlock1.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L11_IfBlock1.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L11_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L11_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L11_IfBlock1.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L11_IfBlock1.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L11_IfBlock1.odometerOfBaliseDetection.acceleration = 0;
  outC->_L11_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L11_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L11_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L12_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L12_IfBlock1.BGMessageSent = kcg_true;
  outC->_L12_IfBlock1.C_ID = 0;
  outC->_L12_IfBlock1.BG_ID = 0;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L12_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L12_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L12_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L12_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L12_IfBlock1.collectedTelegrams = 0;
  outC->_L12_IfBlock1.totalTelegrams = 0;
  outC->_L14_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L14_IfBlock1.BGMessageSent = kcg_true;
  outC->_L14_IfBlock1.C_ID = 0;
  outC->_L14_IfBlock1.BG_ID = 0;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L14_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L14_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L14_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L14_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L14_IfBlock1.collectedTelegrams = 0;
  outC->_L14_IfBlock1.totalTelegrams = 0;
  for (i26 = 0; i26 < 8; i26++) {
    outC->_L18_IfBlock1[i26].valid = kcg_true;
    outC->_L18_IfBlock1[i26].checkResult = kcg_true;
    outC->_L18_IfBlock1[i26].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L18_IfBlock1[i26].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L18_IfBlock1[i26].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L18_IfBlock1[i26].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L18_IfBlock1[i26].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L18_IfBlock1[i26].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L18_IfBlock1[i26].telegramheader.m_mcount = 0;
    outC->_L18_IfBlock1[i26].telegramheader.nid_c = 0;
    outC->_L18_IfBlock1[i26].telegramheader.nid_bg = 0;
    outC->_L18_IfBlock1[i26].telegramheader.q_link = Q_LINK_Unlinked;
    for (i24 = 0; i24 < 30; i24++) {
      outC->_L18_IfBlock1[i26].packets.PacketHeaders[i24].nid_packet = 0;
      outC->_L18_IfBlock1[i26].packets.PacketHeaders[i24].q_dir = Q_DIR_Reverse;
      outC->_L18_IfBlock1[i26].packets.PacketHeaders[i24].valid = kcg_true;
      outC->_L18_IfBlock1[i26].packets.PacketHeaders[i24].startAddress = 0;
      outC->_L18_IfBlock1[i26].packets.PacketHeaders[i24].endAddress = 0;
    }
    for (i25 = 0; i25 < 500; i25++) {
      outC->_L18_IfBlock1[i26].packets.PacketData[i25] = 0;
    }
  }
  for (i29 = 0; i29 < 8; i29++) {
    outC->_L20_IfBlock1[i29].valid = kcg_true;
    outC->_L20_IfBlock1[i29].checkResult = kcg_true;
    outC->_L20_IfBlock1[i29].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L20_IfBlock1[i29].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L20_IfBlock1[i29].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L20_IfBlock1[i29].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L20_IfBlock1[i29].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L20_IfBlock1[i29].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L20_IfBlock1[i29].telegramheader.m_mcount = 0;
    outC->_L20_IfBlock1[i29].telegramheader.nid_c = 0;
    outC->_L20_IfBlock1[i29].telegramheader.nid_bg = 0;
    outC->_L20_IfBlock1[i29].telegramheader.q_link = Q_LINK_Unlinked;
    for (i27 = 0; i27 < 30; i27++) {
      outC->_L20_IfBlock1[i29].packets.PacketHeaders[i27].nid_packet = 0;
      outC->_L20_IfBlock1[i29].packets.PacketHeaders[i27].q_dir = Q_DIR_Reverse;
      outC->_L20_IfBlock1[i29].packets.PacketHeaders[i27].valid = kcg_true;
      outC->_L20_IfBlock1[i29].packets.PacketHeaders[i27].startAddress = 0;
      outC->_L20_IfBlock1[i29].packets.PacketHeaders[i27].endAddress = 0;
    }
    for (i28 = 0; i28 < 500; i28++) {
      outC->_L20_IfBlock1[i29].packets.PacketData[i28] = 0;
    }
  }
  outC->_L22_IfBlock1 = kcg_true;
  for (i32 = 0; i32 < 8; i32++) {
    outC->_L2_IfBlock2_IfBlock3[i32].valid = kcg_true;
    outC->_L2_IfBlock2_IfBlock3[i32].checkResult = kcg_true;
    outC->_L2_IfBlock2_IfBlock3[i32].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2_IfBlock2_IfBlock3[i32].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2_IfBlock2_IfBlock3[i32].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L2_IfBlock2_IfBlock3[i32].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L2_IfBlock2_IfBlock3[i32].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2_IfBlock2_IfBlock3[i32].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L2_IfBlock2_IfBlock3[i32].telegramheader.m_mcount = 0;
    outC->_L2_IfBlock2_IfBlock3[i32].telegramheader.nid_c = 0;
    outC->_L2_IfBlock2_IfBlock3[i32].telegramheader.nid_bg = 0;
    outC->_L2_IfBlock2_IfBlock3[i32].telegramheader.q_link = Q_LINK_Unlinked;
    for (i30 = 0; i30 < 30; i30++) {
      outC->_L2_IfBlock2_IfBlock3[i32].packets.PacketHeaders[i30].nid_packet =
        0;
      outC->_L2_IfBlock2_IfBlock3[i32].packets.PacketHeaders[i30].q_dir =
        Q_DIR_Reverse;
      outC->_L2_IfBlock2_IfBlock3[i32].packets.PacketHeaders[i30].valid =
        kcg_true;
      outC->_L2_IfBlock2_IfBlock3[i32].packets.PacketHeaders[i30].startAddress =
        0;
      outC->_L2_IfBlock2_IfBlock3[i32].packets.PacketHeaders[i30].endAddress =
        0;
    }
    for (i31 = 0; i31 < 500; i31++) {
      outC->_L2_IfBlock2_IfBlock3[i32].packets.PacketData[i31] = 0;
    }
  }
  outC->_L1_IfBlock2_IfBlock3.badBaliseFlag = kcg_true;
  outC->_L1_IfBlock2_IfBlock3.BGMessageSent = kcg_true;
  outC->_L1_IfBlock2_IfBlock3.C_ID = 0;
  outC->_L1_IfBlock2_IfBlock3.BG_ID = 0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1_IfBlock2_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1_IfBlock2_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1_IfBlock2_IfBlock3.collectedTelegrams = 0;
  outC->_L1_IfBlock2_IfBlock3.totalTelegrams = 0;
  outC->_L23_IfBlock2_IfBlock3.badBaliseFlag = kcg_true;
  outC->_L23_IfBlock2_IfBlock3.BGMessageSent = kcg_true;
  outC->_L23_IfBlock2_IfBlock3.C_ID = 0;
  outC->_L23_IfBlock2_IfBlock3.BG_ID = 0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L23_IfBlock2_IfBlock3.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L23_IfBlock2_IfBlock3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L23_IfBlock2_IfBlock3.collectedTelegrams = 0;
  outC->_L23_IfBlock2_IfBlock3.totalTelegrams = 0;
  for (i35 = 0; i35 < 8; i35++) {
    outC->_L14_IfBlock2_IfBlock3[i35].valid = kcg_true;
    outC->_L14_IfBlock2_IfBlock3[i35].checkResult = kcg_true;
    outC->_L14_IfBlock2_IfBlock3[i35].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L14_IfBlock2_IfBlock3[i35].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L14_IfBlock2_IfBlock3[i35].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L14_IfBlock2_IfBlock3[i35].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L14_IfBlock2_IfBlock3[i35].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L14_IfBlock2_IfBlock3[i35].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L14_IfBlock2_IfBlock3[i35].telegramheader.m_mcount = 0;
    outC->_L14_IfBlock2_IfBlock3[i35].telegramheader.nid_c = 0;
    outC->_L14_IfBlock2_IfBlock3[i35].telegramheader.nid_bg = 0;
    outC->_L14_IfBlock2_IfBlock3[i35].telegramheader.q_link = Q_LINK_Unlinked;
    for (i33 = 0; i33 < 30; i33++) {
      outC->_L14_IfBlock2_IfBlock3[i35].packets.PacketHeaders[i33].nid_packet =
        0;
      outC->_L14_IfBlock2_IfBlock3[i35].packets.PacketHeaders[i33].q_dir =
        Q_DIR_Reverse;
      outC->_L14_IfBlock2_IfBlock3[i35].packets.PacketHeaders[i33].valid =
        kcg_true;
      outC->_L14_IfBlock2_IfBlock3[i35].packets.PacketHeaders[i33].startAddress =
        0;
      outC->_L14_IfBlock2_IfBlock3[i35].packets.PacketHeaders[i33].endAddress =
        0;
    }
    for (i34 = 0; i34 < 500; i34++) {
      outC->_L14_IfBlock2_IfBlock3[i35].packets.PacketData[i34] = 0;
    }
  }
  outC->IfBlock3_clock_IfBlock2 = kcg_true;
  outC->_L1_IfBlock2 = kcg_true;
  outC->_L3_IfBlock2.present = kcg_true;
  for (i38 = 0; i38 < 8; i38++) {
    outC->_L3_IfBlock2.Telegrams[i38].valid = kcg_true;
    outC->_L3_IfBlock2.Telegrams[i38].checkResult = kcg_true;
    outC->_L3_IfBlock2.Telegrams[i38].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L3_IfBlock2.Telegrams[i38].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L3_IfBlock2.Telegrams[i38].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L3_IfBlock2.Telegrams[i38].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L3_IfBlock2.Telegrams[i38].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L3_IfBlock2.Telegrams[i38].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L3_IfBlock2.Telegrams[i38].telegramheader.m_mcount = 0;
    outC->_L3_IfBlock2.Telegrams[i38].telegramheader.nid_c = 0;
    outC->_L3_IfBlock2.Telegrams[i38].telegramheader.nid_bg = 0;
    outC->_L3_IfBlock2.Telegrams[i38].telegramheader.q_link = Q_LINK_Unlinked;
    for (i36 = 0; i36 < 30; i36++) {
      outC->_L3_IfBlock2.Telegrams[i38].packets.PacketHeaders[i36].nid_packet =
        0;
      outC->_L3_IfBlock2.Telegrams[i38].packets.PacketHeaders[i36].q_dir =
        Q_DIR_Reverse;
      outC->_L3_IfBlock2.Telegrams[i38].packets.PacketHeaders[i36].valid =
        kcg_true;
      outC->_L3_IfBlock2.Telegrams[i38].packets.PacketHeaders[i36].startAddress =
        0;
      outC->_L3_IfBlock2.Telegrams[i38].packets.PacketHeaders[i36].endAddress =
        0;
    }
    for (i37 = 0; i37 < 500; i37++) {
      outC->_L3_IfBlock2.Telegrams[i38].packets.PacketData[i37] = 0;
    }
  }
  outC->_L3_IfBlock2.numberBalises = 0;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L3_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L3_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L6_IfBlock2 = 0;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.timestamp = 0;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.acceleration = 0;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11_IfBlock2.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11_IfBlock2.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L11_IfBlock2.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L11_IfBlock2.BG_centerDetectionInaccuraccuracies.d_max = 0;
  for (i41 = 0; i41 < 8; i41++) {
    outC->_L12_IfBlock2[i41].valid = kcg_true;
    outC->_L12_IfBlock2[i41].checkResult = kcg_true;
    outC->_L12_IfBlock2[i41].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L12_IfBlock2[i41].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L12_IfBlock2[i41].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L12_IfBlock2[i41].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L12_IfBlock2[i41].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L12_IfBlock2[i41].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L12_IfBlock2[i41].telegramheader.m_mcount = 0;
    outC->_L12_IfBlock2[i41].telegramheader.nid_c = 0;
    outC->_L12_IfBlock2[i41].telegramheader.nid_bg = 0;
    outC->_L12_IfBlock2[i41].telegramheader.q_link = Q_LINK_Unlinked;
    for (i39 = 0; i39 < 30; i39++) {
      outC->_L12_IfBlock2[i41].packets.PacketHeaders[i39].nid_packet = 0;
      outC->_L12_IfBlock2[i41].packets.PacketHeaders[i39].q_dir = Q_DIR_Reverse;
      outC->_L12_IfBlock2[i41].packets.PacketHeaders[i39].valid = kcg_true;
      outC->_L12_IfBlock2[i41].packets.PacketHeaders[i39].startAddress = 0;
      outC->_L12_IfBlock2[i41].packets.PacketHeaders[i39].endAddress = 0;
    }
    for (i40 = 0; i40 < 500; i40++) {
      outC->_L12_IfBlock2[i41].packets.PacketData[i40] = 0;
    }
  }
  outC->_L7_IfBlock2.present = kcg_true;
  for (i44 = 0; i44 < 8; i44++) {
    outC->_L7_IfBlock2.Telegrams[i44].valid = kcg_true;
    outC->_L7_IfBlock2.Telegrams[i44].checkResult = kcg_true;
    outC->_L7_IfBlock2.Telegrams[i44].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L7_IfBlock2.Telegrams[i44].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L7_IfBlock2.Telegrams[i44].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L7_IfBlock2.Telegrams[i44].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L7_IfBlock2.Telegrams[i44].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L7_IfBlock2.Telegrams[i44].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L7_IfBlock2.Telegrams[i44].telegramheader.m_mcount = 0;
    outC->_L7_IfBlock2.Telegrams[i44].telegramheader.nid_c = 0;
    outC->_L7_IfBlock2.Telegrams[i44].telegramheader.nid_bg = 0;
    outC->_L7_IfBlock2.Telegrams[i44].telegramheader.q_link = Q_LINK_Unlinked;
    for (i42 = 0; i42 < 30; i42++) {
      outC->_L7_IfBlock2.Telegrams[i44].packets.PacketHeaders[i42].nid_packet =
        0;
      outC->_L7_IfBlock2.Telegrams[i44].packets.PacketHeaders[i42].q_dir =
        Q_DIR_Reverse;
      outC->_L7_IfBlock2.Telegrams[i44].packets.PacketHeaders[i42].valid =
        kcg_true;
      outC->_L7_IfBlock2.Telegrams[i44].packets.PacketHeaders[i42].startAddress =
        0;
      outC->_L7_IfBlock2.Telegrams[i44].packets.PacketHeaders[i42].endAddress =
        0;
    }
    for (i43 = 0; i43 < 500; i43++) {
      outC->_L7_IfBlock2.Telegrams[i44].packets.PacketData[i43] = 0;
    }
  }
  outC->_L7_IfBlock2.numberBalises = 0;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L7_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L7_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L14_IfBlock2 = kcg_true;
  outC->_L23_IfBlock2.badBaliseFlag = kcg_true;
  outC->_L23_IfBlock2.BGMessageSent = kcg_true;
  outC->_L23_IfBlock2.C_ID = 0;
  outC->_L23_IfBlock2.BG_ID = 0;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23_IfBlock2.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L23_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L23_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L23_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L23_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L23_IfBlock2.collectedTelegrams = 0;
  outC->_L23_IfBlock2.totalTelegrams = 0;
  for (i47 = 0; i47 < 8; i47++) {
    outC->_L29_IfBlock2[i47].valid = kcg_true;
    outC->_L29_IfBlock2[i47].checkResult = kcg_true;
    outC->_L29_IfBlock2[i47].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L29_IfBlock2[i47].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L29_IfBlock2[i47].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L29_IfBlock2[i47].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L29_IfBlock2[i47].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L29_IfBlock2[i47].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L29_IfBlock2[i47].telegramheader.m_mcount = 0;
    outC->_L29_IfBlock2[i47].telegramheader.nid_c = 0;
    outC->_L29_IfBlock2[i47].telegramheader.nid_bg = 0;
    outC->_L29_IfBlock2[i47].telegramheader.q_link = Q_LINK_Unlinked;
    for (i45 = 0; i45 < 30; i45++) {
      outC->_L29_IfBlock2[i47].packets.PacketHeaders[i45].nid_packet = 0;
      outC->_L29_IfBlock2[i47].packets.PacketHeaders[i45].q_dir = Q_DIR_Reverse;
      outC->_L29_IfBlock2[i47].packets.PacketHeaders[i45].valid = kcg_true;
      outC->_L29_IfBlock2[i47].packets.PacketHeaders[i45].startAddress = 0;
      outC->_L29_IfBlock2[i47].packets.PacketHeaders[i45].endAddress = 0;
    }
    for (i46 = 0; i46 < 500; i46++) {
      outC->_L29_IfBlock2[i47].packets.PacketData[i46] = 0;
    }
  }
  for (i50 = 0; i50 < 8; i50++) {
    outC->_L41_IfBlock2[i50].valid = kcg_true;
    outC->_L41_IfBlock2[i50].checkResult = kcg_true;
    outC->_L41_IfBlock2[i50].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L41_IfBlock2[i50].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L41_IfBlock2[i50].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L41_IfBlock2[i50].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L41_IfBlock2[i50].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L41_IfBlock2[i50].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L41_IfBlock2[i50].telegramheader.m_mcount = 0;
    outC->_L41_IfBlock2[i50].telegramheader.nid_c = 0;
    outC->_L41_IfBlock2[i50].telegramheader.nid_bg = 0;
    outC->_L41_IfBlock2[i50].telegramheader.q_link = Q_LINK_Unlinked;
    for (i48 = 0; i48 < 30; i48++) {
      outC->_L41_IfBlock2[i50].packets.PacketHeaders[i48].nid_packet = 0;
      outC->_L41_IfBlock2[i50].packets.PacketHeaders[i48].q_dir = Q_DIR_Reverse;
      outC->_L41_IfBlock2[i50].packets.PacketHeaders[i48].valid = kcg_true;
      outC->_L41_IfBlock2[i50].packets.PacketHeaders[i48].startAddress = 0;
      outC->_L41_IfBlock2[i50].packets.PacketHeaders[i48].endAddress = 0;
    }
    for (i49 = 0; i49 < 500; i49++) {
      outC->_L41_IfBlock2[i50].packets.PacketData[i49] = 0;
    }
  }
  outC->_L45_IfBlock2.badBaliseFlag = kcg_true;
  outC->_L45_IfBlock2.BGMessageSent = kcg_true;
  outC->_L45_IfBlock2.C_ID = 0;
  outC->_L45_IfBlock2.BG_ID = 0;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L45_IfBlock2.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L45_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L45_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L45_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L45_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L45_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L45_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L45_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L45_IfBlock2.collectedTelegrams = 0;
  outC->_L45_IfBlock2.totalTelegrams = 0;
  outC->_L46_IfBlock2 = 0;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.timestamp = 0;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.acceleration = 0;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L48_IfBlock2.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L48_IfBlock2.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L48_IfBlock2.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L48_IfBlock2.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.timestamp = 0;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.acceleration = 0;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_IfBlock4.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_IfBlock4.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L7_IfBlock4.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L7_IfBlock4.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L6_IfBlock4.valid = kcg_true;
  outC->_L6_IfBlock4.checkResult = kcg_true;
  outC->_L6_IfBlock4.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6_IfBlock4.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_IfBlock4.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L6_IfBlock4.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L6_IfBlock4.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6_IfBlock4.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L6_IfBlock4.telegramheader.m_mcount = 0;
  outC->_L6_IfBlock4.telegramheader.nid_c = 0;
  outC->_L6_IfBlock4.telegramheader.nid_bg = 0;
  outC->_L6_IfBlock4.telegramheader.q_link = Q_LINK_Unlinked;
  for (i51 = 0; i51 < 30; i51++) {
    outC->_L6_IfBlock4.packets.PacketHeaders[i51].nid_packet = 0;
    outC->_L6_IfBlock4.packets.PacketHeaders[i51].q_dir = Q_DIR_Reverse;
    outC->_L6_IfBlock4.packets.PacketHeaders[i51].valid = kcg_true;
    outC->_L6_IfBlock4.packets.PacketHeaders[i51].startAddress = 0;
    outC->_L6_IfBlock4.packets.PacketHeaders[i51].endAddress = 0;
  }
  for (i52 = 0; i52 < 500; i52++) {
    outC->_L6_IfBlock4.packets.PacketData[i52] = 0;
  }
  outC->_L5_IfBlock4.valid = kcg_true;
  outC->_L5_IfBlock4.telegram.valid = kcg_true;
  outC->_L5_IfBlock4.telegram.checkResult = kcg_true;
  outC->_L5_IfBlock4.telegram.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5_IfBlock4.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_IfBlock4.telegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L5_IfBlock4.telegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L5_IfBlock4.telegram.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5_IfBlock4.telegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L5_IfBlock4.telegram.telegramheader.m_mcount = 0;
  outC->_L5_IfBlock4.telegram.telegramheader.nid_c = 0;
  outC->_L5_IfBlock4.telegram.telegramheader.nid_bg = 0;
  outC->_L5_IfBlock4.telegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (i53 = 0; i53 < 30; i53++) {
    outC->_L5_IfBlock4.telegram.packets.PacketHeaders[i53].nid_packet = 0;
    outC->_L5_IfBlock4.telegram.packets.PacketHeaders[i53].q_dir =
      Q_DIR_Reverse;
    outC->_L5_IfBlock4.telegram.packets.PacketHeaders[i53].valid = kcg_true;
    outC->_L5_IfBlock4.telegram.packets.PacketHeaders[i53].startAddress = 0;
    outC->_L5_IfBlock4.telegram.packets.PacketHeaders[i53].endAddress = 0;
  }
  for (i54 = 0; i54 < 500; i54++) {
    outC->_L5_IfBlock4.telegram.packets.PacketData[i54] = 0;
  }
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.timestamp = 0;
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.acceleration = 0;
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_IfBlock4.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_IfBlock4.position.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L5_IfBlock4.position.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L5_IfBlock4.position.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L9_IfBlock4 = kcg_true;
  outC->_L13_IfBlock4 = kcg_true;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.timestamp = 0;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.acceleration = 0;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_IfBlock4.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_IfBlock4.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L12_IfBlock4.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L12_IfBlock4.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L11_IfBlock4.valid = kcg_true;
  outC->_L11_IfBlock4.checkResult = kcg_true;
  outC->_L11_IfBlock4.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L11_IfBlock4.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11_IfBlock4.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L11_IfBlock4.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L11_IfBlock4.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L11_IfBlock4.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L11_IfBlock4.telegramheader.m_mcount = 0;
  outC->_L11_IfBlock4.telegramheader.nid_c = 0;
  outC->_L11_IfBlock4.telegramheader.nid_bg = 0;
  outC->_L11_IfBlock4.telegramheader.q_link = Q_LINK_Unlinked;
  for (i55 = 0; i55 < 30; i55++) {
    outC->_L11_IfBlock4.packets.PacketHeaders[i55].nid_packet = 0;
    outC->_L11_IfBlock4.packets.PacketHeaders[i55].q_dir = Q_DIR_Reverse;
    outC->_L11_IfBlock4.packets.PacketHeaders[i55].valid = kcg_true;
    outC->_L11_IfBlock4.packets.PacketHeaders[i55].startAddress = 0;
    outC->_L11_IfBlock4.packets.PacketHeaders[i55].endAddress = 0;
  }
  for (i56 = 0; i56 < 500; i56++) {
    outC->_L11_IfBlock4.packets.PacketData[i56] = 0;
  }
  outC->_L10_IfBlock4 = kcg_true;
  outC->_L1_IfBlock4 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->IfBlock2_clock = kcg_true;
  outC->IfBlock4_clock = kcg_true;
  outC->IfBlock3_clock_IfBlock1 = kcg_true;
  outC->init = kcg_true;
  for (i59 = 0; i59 < 8; i59++) {
    outC->storeBGTelegramArray[i59].valid = kcg_true;
    outC->storeBGTelegramArray[i59].checkResult = kcg_true;
    outC->storeBGTelegramArray[i59].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->storeBGTelegramArray[i59].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->storeBGTelegramArray[i59].telegramheader.q_media = Q_MEDIA_Balise;
    outC->storeBGTelegramArray[i59].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->storeBGTelegramArray[i59].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->storeBGTelegramArray[i59].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->storeBGTelegramArray[i59].telegramheader.m_mcount = 0;
    outC->storeBGTelegramArray[i59].telegramheader.nid_c = 0;
    outC->storeBGTelegramArray[i59].telegramheader.nid_bg = 0;
    outC->storeBGTelegramArray[i59].telegramheader.q_link = Q_LINK_Unlinked;
    for (i57 = 0; i57 < 30; i57++) {
      outC->storeBGTelegramArray[i59].packets.PacketHeaders[i57].nid_packet = 0;
      outC->storeBGTelegramArray[i59].packets.PacketHeaders[i57].q_dir =
        Q_DIR_Reverse;
      outC->storeBGTelegramArray[i59].packets.PacketHeaders[i57].valid =
        kcg_true;
      outC->storeBGTelegramArray[i59].packets.PacketHeaders[i57].startAddress =
        0;
      outC->storeBGTelegramArray[i59].packets.PacketHeaders[i57].endAddress = 0;
    }
    for (i58 = 0; i58 < 500; i58++) {
      outC->storeBGTelegramArray[i59].packets.PacketData[i58] = 0;
    }
  }
  outC->storeCollector.badBaliseFlag = kcg_true;
  outC->storeCollector.BGMessageSent = kcg_true;
  outC->storeCollector.C_ID = 0;
  outC->storeCollector.BG_ID = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storeCollector.collectedTelegrams = 0;
  outC->storeCollector.totalTelegrams = 0;
  outC->storeAdditionalTelegram.valid = kcg_true;
  outC->storeAdditionalTelegram.telegram.valid = kcg_true;
  outC->storeAdditionalTelegram.telegram.checkResult = kcg_true;
  outC->storeAdditionalTelegram.telegram.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->storeAdditionalTelegram.telegram.telegramheader.q_media =
    Q_MEDIA_Balise;
  outC->storeAdditionalTelegram.telegram.telegramheader.n_pig =
    N_PIG_I_am_the_1st;
  outC->storeAdditionalTelegram.telegram.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_dup =
    M_DUP_No_duplicates;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_mcount = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.nid_c = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.nid_bg = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.q_link =
    Q_LINK_Unlinked;
  for (i60 = 0; i60 < 30; i60++) {
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i60].nid_packet =
      0;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i60].q_dir =
      Q_DIR_Reverse;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i60].valid =
      kcg_true;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i60].startAddress =
      0;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i60].endAddress =
      0;
  }
  for (i61 = 0; i61 < 500; i61++) {
    outC->storeAdditionalTelegram.telegram.packets.PacketData[i61] = 0;
  }
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.timestamp =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outBGMessage.present = kcg_true;
  for (i64 = 0; i64 < 8; i64++) {
    outC->outBGMessage.Telegrams[i64].valid = kcg_true;
    outC->outBGMessage.Telegrams[i64].checkResult = kcg_true;
    outC->outBGMessage.Telegrams[i64].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outBGMessage.Telegrams[i64].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outBGMessage.Telegrams[i64].telegramheader.q_media = Q_MEDIA_Balise;
    outC->outBGMessage.Telegrams[i64].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->outBGMessage.Telegrams[i64].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outBGMessage.Telegrams[i64].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->outBGMessage.Telegrams[i64].telegramheader.m_mcount = 0;
    outC->outBGMessage.Telegrams[i64].telegramheader.nid_c = 0;
    outC->outBGMessage.Telegrams[i64].telegramheader.nid_bg = 0;
    outC->outBGMessage.Telegrams[i64].telegramheader.q_link = Q_LINK_Unlinked;
    for (i62 = 0; i62 < 30; i62++) {
      outC->outBGMessage.Telegrams[i64].packets.PacketHeaders[i62].nid_packet =
        0;
      outC->outBGMessage.Telegrams[i64].packets.PacketHeaders[i62].q_dir =
        Q_DIR_Reverse;
      outC->outBGMessage.Telegrams[i64].packets.PacketHeaders[i62].valid =
        kcg_true;
      outC->outBGMessage.Telegrams[i64].packets.PacketHeaders[i62].startAddress =
        0;
      outC->outBGMessage.Telegrams[i64].packets.PacketHeaders[i62].endAddress =
        0;
    }
    for (i63 = 0; i63 < 500; i63++) {
      outC->outBGMessage.Telegrams[i64].packets.PacketData[i63] = 0;
    }
  }
  outC->outBGMessage.numberBalises = 0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  /* 1 */
  updateCollectorSendMessage_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_2_Context_1);
  /* 1 */ manageTelegram_init_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
  /* 3 */ checkOdometry_init_Receive_TrackSide_Msg_Pkg(&outC->_1_Context_3);
  /* 3 */
  manageAdditionalTelegram_init_Receive_TrackSide_Msg_Pkg(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  updateCollectorSendMessage_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_2_Context_1);
  /* 1 */ manageTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
  /* 3 */ checkOdometry_reset_Receive_TrackSide_Msg_Pkg(&outC->_1_Context_3);
  /* 3 */
  manageAdditionalTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
void BuildBGMessage_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inTelegramPresent */ kcg_bool inTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::needTelegramStore */ kcg_bool _4_needTelegramStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::positionToUse */ centerOfBalisePosition_T_BG_Types_Pkg _3_positionToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramPresent */ kcg_bool _2_telegramPresent;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramToUse */ Telegram_T_BG_Types_Pkg _1_telegramToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::needTelegramStore */ kcg_bool needTelegramStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::positionToUse */ centerOfBalisePosition_T_BG_Types_Pkg positionToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramPresent */ kcg_bool telegramPresent;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramToUse */ Telegram_T_BG_Types_Pkg telegramToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::testBG */ BG_Message_T_BG_Types_Pkg _7_testBG;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _6_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _5_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::testBG */ BG_Message_T_BG_Types_Pkg testBG;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ TelegramArray_T_BG_Types_Pkg storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _8_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _9_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _10_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _11_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */ kcg_bool _16_storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _15_tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */ BGCollector_T_Receive_TrackSide_Msg_Pkg _14_tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */ kcg_bool _13_BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */ kcg_bool _12_BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */ kcg_bool storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */ TelegramArray_T_BG_Types_Pkg tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */ BGCollector_T_Receive_TrackSide_Msg_Pkg tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */ kcg_bool BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */ kcg_bool BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */ kcg_bool _17_BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */ kcg_bool _18_BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */ BGCollector_T_Receive_TrackSide_Msg_Pkg _19_tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _20_tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */ kcg_bool _21_storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */ kcg_bool _22_BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */ kcg_bool _23_BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */ BGCollector_T_Receive_TrackSide_Msg_Pkg _24_tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _25_tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */ kcg_bool _26_storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ TelegramArray_T_BG_Types_Pkg last_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg last_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeAdditionalTelegram */ TelegramStore_T_Receive_TrackSide_Msg_Pkg last_storeAdditionalTelegram;
  
  outC->IfBlock4_clock = reset;
  /* ck_IfBlock4 */ if (outC->IfBlock4_clock) {
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L6_IfBlock4, inDecodedTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L7_IfBlock4,
      incenterOfBalisePosition);
  }
  /* last_init_ck_storeAdditionalTelegram */ if (outC->init) {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &last_storeAdditionalTelegram,
      (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
        &cEmptyStore_Receive_TrackSide_Msg_Pkg);
  }
  else {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &last_storeAdditionalTelegram,
      &outC->storeAdditionalTelegram);
  }
  /* ck_IfBlock4 */ if (outC->IfBlock4_clock) {
    outC->_L1_IfBlock4 = kcg_false;
    _2_telegramPresent = outC->_L1_IfBlock4;
    outC->telegramPresent = _2_telegramPresent;
  }
  else {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L5_IfBlock4,
      &last_storeAdditionalTelegram);
    outC->_L9_IfBlock4 = inTelegramPresent;
    /* 3 */
    manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
      &outC->_L6_IfBlock4,
      &outC->_L7_IfBlock4,
      &outC->_L5_IfBlock4,
      outC->_L9_IfBlock4,
      &outC->Context_3);
    outC->_L10_IfBlock4 = outC->Context_3.outputPresent;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L11_IfBlock4,
      &outC->Context_3.outDecodedTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L12_IfBlock4,
      &outC->Context_3.outcenterOfBalisePosition);
    outC->_L13_IfBlock4 = outC->Context_3.outNeedStore;
    telegramPresent = outC->_L10_IfBlock4;
    outC->telegramPresent = telegramPresent;
  }
  outC->IfBlock1_clock = outC->telegramPresent;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
  }
  else {
    outC->IfBlock3_clock_IfBlock1 = !reset;
    /* ck_IfBlock3 */ if (outC->IfBlock3_clock_IfBlock1) {
      kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
        &outC->_L5_IfBlock1_IfBlock3,
        inActualOdometry);
    }
    else {
      outC->_L2_IfBlock1_IfBlock3 = kcg_false;
      _17_BGisComplete = outC->_L2_IfBlock1_IfBlock3;
    }
  }
  /* last_init_ck_storeCollector */ if (outC->init) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &last_storeCollector,
      (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
        &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &last_storeCollector,
      &outC->storeCollector);
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
  }
  else /* ck_IfBlock3 */ if (outC->IfBlock3_clock_IfBlock1) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L4_IfBlock1_IfBlock3,
      &last_storeCollector);
    /* 3 */
    checkOdometry_Receive_TrackSide_Msg_Pkg(
      &outC->_L5_IfBlock1_IfBlock3,
      &outC->_L4_IfBlock1_IfBlock3,
      &outC->_1_Context_3);
    outC->_L6_IfBlock1_IfBlock3 = outC->_1_Context_3.outMessageComplete;
    outC->_L7_IfBlock1_IfBlock3 = outC->_1_Context_3.outBGIsChangedEarly;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L9_IfBlock1_IfBlock3,
      &outC->_1_Context_3.outCollector);
    _22_BGisComplete = outC->_L6_IfBlock1_IfBlock3;
    BGisComplete = _22_BGisComplete;
  }
  else {
    BGisComplete = _17_BGisComplete;
  }
  /* ck_IfBlock4 */ if (outC->IfBlock4_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &_1_telegramToUse,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegramToUse, &_1_telegramToUse);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&telegramToUse, &outC->_L11_IfBlock4);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegramToUse, &telegramToUse);
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L10_IfBlock1,
      &outC->telegramToUse);
  }
  /* ck_IfBlock4 */ if (outC->IfBlock4_clock) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_3_positionToUse,
      (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->positionToUse,
      &_3_positionToUse);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &positionToUse,
      &outC->_L12_IfBlock4);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->positionToUse,
      &positionToUse);
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L11_IfBlock1,
      &outC->positionToUse);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L14_IfBlock1,
      &last_storeCollector);
  }
  /* last_init_ck_storeBGTelegramArray */ if (outC->init) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
  }
  else {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      &outC->storeBGTelegramArray);
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L20_IfBlock1,
      &last_storeBGTelegramArray);
    /* 1 */
    manageTelegram_Receive_TrackSide_Msg_Pkg(
      &outC->_L10_IfBlock1,
      &outC->_L11_IfBlock1,
      &outC->_L14_IfBlock1,
      &outC->_L20_IfBlock1,
      &outC->Context_1);
    outC->_L4_IfBlock1 = outC->Context_1.outBGisComplete;
    outC->_L5_IfBlock1 = outC->Context_1.outBGisChangedEarly;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L12_IfBlock1,
      &outC->Context_1.outCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L18_IfBlock1,
      &outC->Context_1.outTelegramArray);
    outC->_L22_IfBlock1 = outC->Context_1.outStoresChanged;
    _12_BGisComplete = outC->_L4_IfBlock1;
    outC->BGisComplete = _12_BGisComplete;
    _13_BGisChangedEarly = outC->_L5_IfBlock1;
    outC->BGisChangedEarly = _13_BGisChangedEarly;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_14_tempCollectorStore,
      &outC->_L12_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->tempCollectorStore,
      &_14_tempCollectorStore);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_15_tempBGTelegramArray,
      &outC->_L18_IfBlock1);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->tempBGTelegramArray,
      &_15_tempBGTelegramArray);
    _16_storeIsChanged = outC->_L22_IfBlock1;
    outC->storeIsChanged = _16_storeIsChanged;
  }
  else {
    outC->BGisComplete = BGisComplete;
    /* ck_IfBlock3 */ if (outC->IfBlock3_clock_IfBlock1) {
      _23_BGisChangedEarly = outC->_L7_IfBlock1_IfBlock3;
      BGisChangedEarly = _23_BGisChangedEarly;
    }
    else {
      _18_BGisChangedEarly = kcg_false;
      BGisChangedEarly = _18_BGisChangedEarly;
    }
    outC->BGisChangedEarly = BGisChangedEarly;
    /* ck_IfBlock3 */ if (outC->IfBlock3_clock_IfBlock1) {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_24_tempCollectorStore,
        &outC->_L9_IfBlock1_IfBlock3);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &tempCollectorStore,
        &_24_tempCollectorStore);
    }
    else {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_19_tempCollectorStore,
        (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
          &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &tempCollectorStore,
        &_19_tempCollectorStore);
    }
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->tempCollectorStore,
      &tempCollectorStore);
    /* ck_IfBlock3 */ if (outC->IfBlock3_clock_IfBlock1) {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->_L11_IfBlock1_IfBlock3,
        &last_storeBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_25_tempBGTelegramArray,
        &outC->_L11_IfBlock1_IfBlock3);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        &_25_tempBGTelegramArray);
    }
    else {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_20_tempBGTelegramArray,
        (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        &_20_tempBGTelegramArray);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->tempBGTelegramArray,
      &tempBGTelegramArray);
    /* ck_IfBlock3 */ if (outC->IfBlock3_clock_IfBlock1) {
      _26_storeIsChanged = kcg_false;
      storeIsChanged = _26_storeIsChanged;
    }
    else {
      outC->_L1_IfBlock1_IfBlock3 = kcg_true;
      _21_storeIsChanged = outC->_L1_IfBlock1_IfBlock3;
      storeIsChanged = _21_storeIsChanged;
    }
    outC->storeIsChanged = storeIsChanged;
  }
  outC->IfBlock2_clock = outC->BGisComplete;
  /* ck_IfBlock2 */ if (outC->IfBlock2_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L23_IfBlock2,
      &outC->tempCollectorStore);
    /* 1 */
    updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_L23_IfBlock2,
      &outC->_2_Context_1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L45_IfBlock2,
      &outC->_2_Context_1.outCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_5_storeCollector,
      &outC->_L45_IfBlock2);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->storeCollector,
      &_5_storeCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L41_IfBlock2,
      &outC->tempBGTelegramArray);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_6_storeBGTelegramArray,
      &outC->_L41_IfBlock2);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->storeBGTelegramArray,
      &_6_storeBGTelegramArray);
    outC->_L14_IfBlock2 = kcg_true;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L29_IfBlock2,
      &outC->tempBGTelegramArray);
    outC->_L46_IfBlock2 = outC->_L45_IfBlock2.collectedTelegrams;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L48_IfBlock2,
      &outC->_L45_IfBlock2.balisePosition);
    outC->_L7_IfBlock2.present = outC->_L14_IfBlock2;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L7_IfBlock2.Telegrams,
      &outC->_L29_IfBlock2);
    outC->_L7_IfBlock2.numberBalises = outC->_L46_IfBlock2;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L7_IfBlock2.centerOfBalisePosition,
      &outC->_L48_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&_7_testBG, &outC->_L7_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->testBG, &_7_testBG);
  }
  else {
    outC->IfBlock3_clock_IfBlock2 = outC->storeIsChanged;
    /* ck_IfBlock3 */ if (outC->IfBlock3_clock_IfBlock2) {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->_L1_IfBlock2_IfBlock3,
        &outC->tempCollectorStore);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_10_storeCollector,
        &outC->_L1_IfBlock2_IfBlock3);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &storeCollector,
        &_10_storeCollector);
    }
    else {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->_L23_IfBlock2_IfBlock3,
        &last_storeCollector);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_8_storeCollector,
        &outC->_L23_IfBlock2_IfBlock3);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &storeCollector,
        &_8_storeCollector);
    }
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->storeCollector,
      &storeCollector);
    /* ck_IfBlock3 */ if (outC->IfBlock3_clock_IfBlock2) {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->_L2_IfBlock2_IfBlock3,
        &outC->tempBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_11_storeBGTelegramArray,
        &outC->_L2_IfBlock2_IfBlock3);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &storeBGTelegramArray,
        &_11_storeBGTelegramArray);
    }
    else {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->_L14_IfBlock2_IfBlock3,
        &last_storeBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_9_storeBGTelegramArray,
        &outC->_L14_IfBlock2_IfBlock3);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &storeBGTelegramArray,
        &_9_storeBGTelegramArray);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->storeBGTelegramArray,
      &storeBGTelegramArray);
    outC->_L1_IfBlock2 = kcg_false;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L12_IfBlock2,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
    outC->_L6_IfBlock2 = 0;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L11_IfBlock2,
      (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    outC->_L3_IfBlock2.present = outC->_L1_IfBlock2;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L3_IfBlock2.Telegrams,
      &outC->_L12_IfBlock2);
    outC->_L3_IfBlock2.numberBalises = outC->_L6_IfBlock2;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L3_IfBlock2.centerOfBalisePosition,
      &outC->_L11_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&testBG, &outC->_L3_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->testBG, &testBG);
  }
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L23,
    incenterOfBalisePosition);
  outC->_L25 = kcg_true;
  outC->_L46 = inTelegramPresent;
  /* ck_IfBlock4 */ if (outC->IfBlock4_clock) {
    _4_needTelegramStore = kcg_false;
    outC->needTelegramStore = _4_needTelegramStore;
  }
  else {
    needTelegramStore = outC->_L13_IfBlock4;
    outC->needTelegramStore = needTelegramStore;
  }
  outC->_L31 = outC->needTelegramStore;
  outC->_L44 = outC->BGisChangedEarly;
  outC->_L45 = outC->_L31 | outC->_L44;
  outC->_L42 = reset;
  outC->_L43 = !outC->_L42;
  outC->_L34 = outC->_L46 & outC->_L45 & outC->_L43;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L27, inDecodedTelegram);
  outC->_L30.valid = outC->_L25;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L30.telegram, &outC->_L27);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L30.position,
    &outC->_L23);
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L47,
    (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
      &cEmptyStore_Receive_TrackSide_Msg_Pkg);
  /* 3 */ if (outC->_L34) {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L26,
      &outC->_L30);
  }
  else {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L26,
      &outC->_L47);
  }
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->storeAdditionalTelegram,
    &outC->_L26);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L48, &outC->testBG);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->outBGMessage, &outC->_L48);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BuildBGMessage_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

