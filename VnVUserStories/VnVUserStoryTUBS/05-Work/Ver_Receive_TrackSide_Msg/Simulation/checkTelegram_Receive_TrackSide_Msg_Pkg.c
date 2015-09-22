/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkTelegram_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void checkTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC)
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
  
  for (i2 = 0; i2 < 8; i2++) {
    outC->_L94[i2].valid = kcg_true;
    outC->_L94[i2].checkResult = kcg_true;
    outC->_L94[i2].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L94[i2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L94[i2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L94[i2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L94[i2].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L94[i2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L94[i2].telegramheader.m_mcount = 0;
    outC->_L94[i2].telegramheader.nid_c = 0;
    outC->_L94[i2].telegramheader.nid_bg = 0;
    outC->_L94[i2].telegramheader.q_link = Q_LINK_Unlinked;
    for (i = 0; i < 30; i++) {
      outC->_L94[i2].packets.PacketHeaders[i].nid_packet = 0;
      outC->_L94[i2].packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
      outC->_L94[i2].packets.PacketHeaders[i].valid = kcg_true;
      outC->_L94[i2].packets.PacketHeaders[i].startAddress = 0;
      outC->_L94[i2].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->_L94[i2].packets.PacketData[i1] = 0;
    }
  }
  outC->_L93.badBaliseFlag = kcg_true;
  outC->_L93.BGMessageSent = kcg_true;
  outC->_L93.C_ID = 0;
  outC->_L93.BG_ID = 0;
  outC->_L93.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L93.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L93.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L93.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L93.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L93.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L93.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L93.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L93.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L93.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L93.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L93.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L93.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L93.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L93.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L93.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L93.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L93.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L93.collectedTelegrams = 0;
  outC->_L93.totalTelegrams = 0;
  outC->_L92.badBaliseFlag = kcg_true;
  outC->_L92.BGMessageSent = kcg_true;
  outC->_L92.C_ID = 0;
  outC->_L92.BG_ID = 0;
  outC->_L92.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L92.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L92.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L92.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L92.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L92.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L92.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L92.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L92.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L92.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L92.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L92.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L92.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L92.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L92.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L92.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L92.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L92.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L92.collectedTelegrams = 0;
  outC->_L92.totalTelegrams = 0;
  outC->_L88 = kcg_true;
  outC->_L87 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L74.badBaliseFlag = kcg_true;
  outC->_L74.BGMessageSent = kcg_true;
  outC->_L74.C_ID = 0;
  outC->_L74.BG_ID = 0;
  outC->_L74.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L74.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L74.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L74.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L74.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L74.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L74.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L74.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L74.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L74.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L74.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L74.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L74.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L74.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L74.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L74.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L74.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L74.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L74.collectedTelegrams = 0;
  outC->_L74.totalTelegrams = 0;
  outC->_L72.badBaliseFlag = kcg_true;
  outC->_L72.BGMessageSent = kcg_true;
  outC->_L72.C_ID = 0;
  outC->_L72.BG_ID = 0;
  outC->_L72.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L72.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L72.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L72.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L72.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L72.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L72.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L72.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L72.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L72.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L72.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L72.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L72.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L72.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L72.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L72.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L72.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L72.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L72.collectedTelegrams = 0;
  outC->_L72.totalTelegrams = 0;
  outC->_L73 = kcg_true;
  outC->_L70 = kcg_true;
  for (i5 = 0; i5 < 8; i5++) {
    outC->_L69[i5].valid = kcg_true;
    outC->_L69[i5].checkResult = kcg_true;
    outC->_L69[i5].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L69[i5].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L69[i5].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L69[i5].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L69[i5].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L69[i5].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L69[i5].telegramheader.m_mcount = 0;
    outC->_L69[i5].telegramheader.nid_c = 0;
    outC->_L69[i5].telegramheader.nid_bg = 0;
    outC->_L69[i5].telegramheader.q_link = Q_LINK_Unlinked;
    for (i3 = 0; i3 < 30; i3++) {
      outC->_L69[i5].packets.PacketHeaders[i3].nid_packet = 0;
      outC->_L69[i5].packets.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
      outC->_L69[i5].packets.PacketHeaders[i3].valid = kcg_true;
      outC->_L69[i5].packets.PacketHeaders[i3].startAddress = 0;
      outC->_L69[i5].packets.PacketHeaders[i3].endAddress = 0;
    }
    for (i4 = 0; i4 < 500; i4++) {
      outC->_L69[i5].packets.PacketData[i4] = 0;
    }
  }
  outC->_L68 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66 = 0;
  outC->_L65 = kcg_true;
  outC->_L64 = 0;
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L61 = 0;
  outC->_L56.badBaliseFlag = kcg_true;
  outC->_L56.BGMessageSent = kcg_true;
  outC->_L56.C_ID = 0;
  outC->_L56.BG_ID = 0;
  outC->_L56.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L56.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L56.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L56.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L56.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L56.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L56.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L56.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L56.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L56.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L56.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L56.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L56.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L56.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L56.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L56.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L56.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L56.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L56.collectedTelegrams = 0;
  outC->_L56.totalTelegrams = 0;
  outC->_L55 = N_PIG_I_am_the_1st;
  outC->_L41 = kcg_true;
  for (i8 = 0; i8 < 8; i8++) {
    outC->_L40[i8].valid = kcg_true;
    outC->_L40[i8].checkResult = kcg_true;
    outC->_L40[i8].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L40[i8].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L40[i8].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L40[i8].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L40[i8].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L40[i8].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L40[i8].telegramheader.m_mcount = 0;
    outC->_L40[i8].telegramheader.nid_c = 0;
    outC->_L40[i8].telegramheader.nid_bg = 0;
    outC->_L40[i8].telegramheader.q_link = Q_LINK_Unlinked;
    for (i6 = 0; i6 < 30; i6++) {
      outC->_L40[i8].packets.PacketHeaders[i6].nid_packet = 0;
      outC->_L40[i8].packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
      outC->_L40[i8].packets.PacketHeaders[i6].valid = kcg_true;
      outC->_L40[i8].packets.PacketHeaders[i6].startAddress = 0;
      outC->_L40[i8].packets.PacketHeaders[i6].endAddress = 0;
    }
    for (i7 = 0; i7 < 500; i7++) {
      outC->_L40[i8].packets.PacketData[i7] = 0;
    }
  }
  outC->_L36 = kcg_true;
  outC->_L32 = 0;
  outC->_L31 = kcg_true;
  outC->_L4 = kcg_true;
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
  for (i9 = 0; i9 < 30; i9++) {
    outC->_L2.packets.PacketHeaders[i9].nid_packet = 0;
    outC->_L2.packets.PacketHeaders[i9].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[i9].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[i9].startAddress = 0;
    outC->_L2.packets.PacketHeaders[i9].endAddress = 0;
  }
  for (i10 = 0; i10 < 500; i10++) {
    outC->_L2.packets.PacketData[i10] = 0;
  }
  outC->newBGInitNeeded = kcg_true;
  outC->outBGchangedEarly = kcg_true;
  outC->outTelegramNotInGroup = kcg_true;
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
  /* 1 */
  checkSingleBB_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_2_Context_1);
  /* 1 */
  initCollector_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_1_Context_1);
  /* 1 */
  findTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */
  checkSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_2_Context_1);
  /* 1 */
  initCollector_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_1_Context_1);
  /* 1 */
  findTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::checkTelegram */
void checkTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::inTelegramArray */ TelegramArray_T_BG_Types_Pkg *inTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::BGCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *BGCollector,
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, newTelegram);
  outC->_L4 = outC->_L2.valid;
  outC->_L32 = outC->_L2.telegramheader.nid_bg;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L56, BGCollector);
  outC->_L61 = outC->_L56.BG_ID;
  outC->_L36 = outC->_L32 == outC->_L61;
  outC->_L31 = outC->_L4 & outC->_L36;
  outC->_L55 = outC->_L2.telegramheader.n_pig;
  outC->_L62 = !outC->_L36;
  outC->_L64 = outC->_L56.totalTelegrams;
  outC->_L66 = 0;
  outC->_L65 = outC->_L64 > outC->_L66;
  outC->_L63 = outC->_L62 & outC->_L65;
  outC->_L67 = outC->_L56.BGMessageSent;
  outC->_L68 = outC->_L63 & outC->_L67;
  outC->newBGInitNeeded = outC->_L68;
  outC->_L70 = outC->newBGInitNeeded;
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &outC->_L94,
    (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L40, inTelegramArray);
  /* 1 */ if (outC->_L70) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L69, &outC->_L94);
  }
  else {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L69, &outC->_L40);
  }
  /* 1 */
  findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    outC->_L55,
    &outC->_L69,
    outC->_L31,
    &outC->Context_1);
  outC->_L41 = outC->Context_1.telegramAlreadyInGroup;
  outC->_L86 = !outC->_L41;
  outC->outTelegramNotInGroup = outC->_L86;
  outC->_L87 = !outC->_L67;
  outC->_L88 = outC->_L63 & outC->_L87;
  outC->outBGchangedEarly = outC->_L88;
  outC->_L73 = outC->newBGInitNeeded;
  /* 1 */
  initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_L2,
    &outC->_1_Context_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L92,
    &outC->_1_Context_1.outCollector);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L74, BGCollector);
  /* 2 */ if (outC->_L73) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L72, &outC->_L92);
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L72, &outC->_L74);
  }
  /* 1 */
  checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_L2,
    &outC->_L72,
    &outC->_2_Context_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L93,
    &outC->_2_Context_1.outCollector);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L93);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->outTelegramArray, &outC->_L69);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

