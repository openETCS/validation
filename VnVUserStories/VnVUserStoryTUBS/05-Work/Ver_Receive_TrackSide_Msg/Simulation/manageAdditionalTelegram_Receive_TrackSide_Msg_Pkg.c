/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void manageAdditionalTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
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
  
  outC->_L55 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L9.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L9.odometerOfBaliseDetection.timestamp = 0;
  outC->_L9.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L9.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L9.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L9.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L9.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L9.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L9.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L9.odometerOfBaliseDetection.acceleration = 0;
  outC->_L9.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L9.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L9.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L17 = kcg_true;
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
  outC->_L19.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L19.odometerOfBaliseDetection.timestamp = 0;
  outC->_L19.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L19.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L19.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L19.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L19.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L19.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L19.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L19.odometerOfBaliseDetection.acceleration = 0;
  outC->_L19.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L19.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L19.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L46.valid = kcg_true;
  outC->_L46.telegram.valid = kcg_true;
  outC->_L46.telegram.checkResult = kcg_true;
  outC->_L46.telegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L46.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L46.telegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L46.telegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L46.telegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L46.telegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L46.telegram.telegramheader.m_mcount = 0;
  outC->_L46.telegram.telegramheader.nid_c = 0;
  outC->_L46.telegram.telegramheader.nid_bg = 0;
  outC->_L46.telegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L46.telegram.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L46.telegram.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L46.telegram.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L46.telegram.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L46.telegram.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L46.telegram.packets.PacketData[i3] = 0;
  }
  outC->_L46.position.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L46.position.odometerOfBaliseDetection.timestamp = 0;
  outC->_L46.position.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L46.position.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L46.position.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L46.position.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L46.position.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L46.position.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L46.position.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L46.position.odometerOfBaliseDetection.acceleration = 0;
  outC->_L46.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L46.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L46.position.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L46.position.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L46.position.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L22 = kcg_true;
  outC->_L20.valid = kcg_true;
  outC->_L20.checkResult = kcg_true;
  outC->_L20.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L20.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L20.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L20.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L20.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L20.telegramheader.m_mcount = 0;
  outC->_L20.telegramheader.nid_c = 0;
  outC->_L20.telegramheader.nid_bg = 0;
  outC->_L20.telegramheader.q_link = Q_LINK_Unlinked;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L20.packets.PacketHeaders[i4].nid_packet = 0;
    outC->_L20.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L20.packets.PacketHeaders[i4].valid = kcg_true;
    outC->_L20.packets.PacketHeaders[i4].startAddress = 0;
    outC->_L20.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L20.packets.PacketData[i5] = 0;
  }
  outC->_L26 = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.checkResult = kcg_true;
  outC->_L7.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L7.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L7.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L7.telegramheader.m_mcount = 0;
  outC->_L7.telegramheader.nid_c = 0;
  outC->_L7.telegramheader.nid_bg = 0;
  outC->_L7.telegramheader.q_link = Q_LINK_Unlinked;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L7.packets.PacketHeaders[i6].nid_packet = 0;
    outC->_L7.packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[i6].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[i6].startAddress = 0;
    outC->_L7.packets.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L7.packets.PacketData[i7] = 0;
  }
  outC->_L21.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L21.odometerOfBaliseDetection.timestamp = 0;
  outC->_L21.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L21.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L21.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L21.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L21.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L21.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L21.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L21.odometerOfBaliseDetection.acceleration = 0;
  outC->_L21.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L21.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L21.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L51 = kcg_true;
  outC->_L52 = kcg_true;
  outC->storeValid = kcg_true;
  outC->outNeedStore = kcg_true;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outcenterOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outcenterOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->outcenterOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->outDecodedTelegram.valid = kcg_true;
  outC->outDecodedTelegram.checkResult = kcg_true;
  outC->outDecodedTelegram.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->outDecodedTelegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outDecodedTelegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->outDecodedTelegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->outDecodedTelegram.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->outDecodedTelegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->outDecodedTelegram.telegramheader.m_mcount = 0;
  outC->outDecodedTelegram.telegramheader.nid_c = 0;
  outC->outDecodedTelegram.telegramheader.nid_bg = 0;
  outC->outDecodedTelegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (i8 = 0; i8 < 30; i8++) {
    outC->outDecodedTelegram.packets.PacketHeaders[i8].nid_packet = 0;
    outC->outDecodedTelegram.packets.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
    outC->outDecodedTelegram.packets.PacketHeaders[i8].valid = kcg_true;
    outC->outDecodedTelegram.packets.PacketHeaders[i8].startAddress = 0;
    outC->outDecodedTelegram.packets.PacketHeaders[i8].endAddress = 0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->outDecodedTelegram.packets.PacketData[i9] = 0;
  }
  outC->outputPresent = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageAdditionalTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram */
void manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inTelegramStore */ TelegramStore_T_Receive_TrackSide_Msg_Pkg *inTelegramStore,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inputTelegramPresent */ kcg_bool inputTelegramPresent,
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L46,
    inTelegramStore);
  outC->_L17 = outC->_L46.valid;
  outC->storeValid = outC->_L17;
  outC->_L51 = outC->storeValid;
  outC->_L55 = inputTelegramPresent;
  outC->_L52 = outC->_L51 & outC->_L55;
  outC->outNeedStore = outC->_L52;
  outC->_L22 = outC->storeValid;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L19,
    &outC->_L46.position);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L9,
    incenterOfBalisePosition);
  /* 2 */ if (outC->_L22) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L21, &outC->_L19);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L21, &outC->_L9);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L7, inDecodedTelegram);
  outC->_L26 = outC->storeValid;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18, &outC->_L46.telegram);
  /* 1 */ if (outC->_L26) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L20, &outC->_L18);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L20, &outC->_L7);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->outDecodedTelegram, &outC->_L20);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->outcenterOfBalisePosition,
    &outC->_L21);
  outC->_L28 = outC->storeValid;
  outC->_L27 = outC->_L55 | outC->_L28;
  outC->outputPresent = outC->_L27;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

