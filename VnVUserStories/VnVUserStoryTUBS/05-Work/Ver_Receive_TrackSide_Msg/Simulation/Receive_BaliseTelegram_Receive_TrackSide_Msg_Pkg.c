/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Receive_BaliseTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
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
  
  outC->_L55.valid = kcg_true;
  outC->_L55.checkResult = kcg_true;
  outC->_L55.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L55.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L55.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L55.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L55.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L55.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L55.telegramheader.m_mcount = 0;
  outC->_L55.telegramheader.nid_c = 0;
  outC->_L55.telegramheader.nid_bg = 0;
  outC->_L55.telegramheader.q_link = Q_LINK_Unlinked;
  for (i = 0; i < 30; i++) {
    outC->_L55.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L55.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L55.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L55.packets.PacketHeaders[i].startAddress = 0;
    outC->_L55.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L55.packets.PacketData[i1] = 0;
  }
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L46.PacketHeaders[i2].nid_packet = 0;
    outC->_L46.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L46.PacketHeaders[i2].valid = kcg_true;
    outC->_L46.PacketHeaders[i2].startAddress = 0;
    outC->_L46.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L46.PacketData[i3] = 0;
  }
  outC->_L40 = 0;
  outC->_L38 = 0;
  outC->_L37 = msrc_undefined_Common_Types_Pkg;
  outC->_L35 = msrc_undefined_Common_Types_Pkg;
  outC->_L34 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L28.valid = kcg_true;
  outC->_L28.checkResult = kcg_true;
  outC->_L28.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L28.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L28.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L28.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L28.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L28.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L28.telegramheader.m_mcount = 0;
  outC->_L28.telegramheader.nid_c = 0;
  outC->_L28.telegramheader.nid_bg = 0;
  outC->_L28.telegramheader.q_link = Q_LINK_Unlinked;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L28.packets.PacketHeaders[i4].nid_packet = 0;
    outC->_L28.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L28.packets.PacketHeaders[i4].valid = kcg_true;
    outC->_L28.packets.PacketHeaders[i4].startAddress = 0;
    outC->_L28.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L28.packets.PacketData[i5] = 0;
  }
  outC->_L26.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L26.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L26.q_media = Q_MEDIA_Balise;
  outC->_L26.n_pig = N_PIG_I_am_the_1st;
  outC->_L26.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L26.m_dup = M_DUP_No_duplicates;
  outC->_L26.m_mcount = 0;
  outC->_L26.nid_c = 0;
  outC->_L26.nid_bg = 0;
  outC->_L26.q_link = Q_LINK_Unlinked;
  outC->_L25.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L25.odometerOfBaliseDetection.timestamp = 0;
  outC->_L25.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L25.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L25.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L25.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L25.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L25.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L25.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L25.odometerOfBaliseDetection.acceleration = 0;
  outC->_L25.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L25.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L25.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L25.BG_centerDetectionInaccuraccuracies.d_max = 0;
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
  outC->_L22 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17.valid = kcg_true;
  outC->_L17.systemTimeMsgReceived = 0;
  outC->_L17.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L17.btm_msg.present = kcg_true;
  outC->_L17.btm_msg.checkResult = kcg_true;
  outC->_L17.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L17.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L17.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L17.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L17.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L17.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L17.btm_msg.api_header.m_mcount = 0;
  outC->_L17.btm_msg.api_header.nid_c = 0;
  outC->_L17.btm_msg.api_header.nid_bg = 0;
  outC->_L17.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L17.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L17.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L17.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L17.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L17.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L17.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L17.rtm_msg.present = kcg_true;
  outC->_L17.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L17.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L17.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L17.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L17.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L17.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L17.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L17.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L17.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L17.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L17.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L17.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L17.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L17.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L17.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L17.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L17.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L17.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L17.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L17.packets.PacketHeaders[i6].nid_packet = 0;
    outC->_L17.packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L17.packets.PacketHeaders[i6].valid = kcg_true;
    outC->_L17.packets.PacketHeaders[i6].startAddress = 0;
    outC->_L17.packets.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L17.packets.PacketData[i7] = 0;
  }
  outC->_L13.present = kcg_true;
  outC->_L13.consistencyError = kcg_true;
  outC->_L13.header.radioDevice = 0;
  outC->_L13.header.receivedSystemTime = 0;
  outC->_L13.header.nid_message = 0;
  outC->_L13.header.t_train = 0.0;
  outC->_L13.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L13.header.nid_lrbg = 0;
  outC->_L13.header.t_train_reference = 0.0;
  outC->_L13.header.nid_em = 0;
  outC->_L13.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.header.d_sr = 0;
  outC->_L13.header.t_sh_rqst = 0.0;
  outC->_L13.header.d_ref = 0;
  outC->_L13.header.q_dir = Q_DIR_Reverse;
  outC->_L13.header.d_emergencystop = 0;
  outC->_L13.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.radioMetadata.t_train_reference = kcg_true;
  outC->_L13.radioMetadata.nid_em = kcg_true;
  outC->_L13.radioMetadata.q_scale = kcg_true;
  outC->_L13.radioMetadata.d_sr = kcg_true;
  outC->_L13.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L13.radioMetadata.d_ref = kcg_true;
  outC->_L13.radioMetadata.q_dir = kcg_true;
  outC->_L13.radioMetadata.d_emergencystop = kcg_true;
  outC->_L13.radioMetadata.m_version = kcg_true;
  for (i8 = 0; i8 < 30; i8++) {
    outC->_L13.packets.PacketHeaders[i8].nid_packet = 0;
    outC->_L13.packets.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[i8].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[i8].startAddress = 0;
    outC->_L13.packets.PacketHeaders[i8].endAddress = 0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->_L13.packets.PacketData[i9] = 0;
  }
  outC->_L13.sendingRBC.valid = kcg_true;
  outC->_L13.sendingRBC.nid_c = 0;
  outC->_L13.sendingRBC.rbc_id = 0;
  outC->_L13.sendingRBC.device_id = 0;
  outC->_L7.valid = kcg_true;
  outC->_L7.systemTime = 0;
  outC->_L7.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L7.telegramHeaders.present = kcg_true;
  for (i12 = 0; i12 < 8; i12++) {
    outC->_L7.telegramHeaders.Telegrams[i12].valid = kcg_true;
    outC->_L7.telegramHeaders.Telegrams[i12].checkResult = kcg_true;
    outC->_L7.telegramHeaders.Telegrams[i12].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L7.telegramHeaders.Telegrams[i12].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L7.telegramHeaders.Telegrams[i12].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L7.telegramHeaders.Telegrams[i12].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L7.telegramHeaders.Telegrams[i12].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L7.telegramHeaders.Telegrams[i12].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L7.telegramHeaders.Telegrams[i12].telegramheader.m_mcount = 0;
    outC->_L7.telegramHeaders.Telegrams[i12].telegramheader.nid_c = 0;
    outC->_L7.telegramHeaders.Telegrams[i12].telegramheader.nid_bg = 0;
    outC->_L7.telegramHeaders.Telegrams[i12].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (i10 = 0; i10 < 30; i10++) {
      outC->_L7.telegramHeaders.Telegrams[i12].packets.PacketHeaders[i10].nid_packet =
        0;
      outC->_L7.telegramHeaders.Telegrams[i12].packets.PacketHeaders[i10].q_dir =
        Q_DIR_Reverse;
      outC->_L7.telegramHeaders.Telegrams[i12].packets.PacketHeaders[i10].valid =
        kcg_true;
      outC->_L7.telegramHeaders.Telegrams[i12].packets.PacketHeaders[i10].startAddress =
        0;
      outC->_L7.telegramHeaders.Telegrams[i12].packets.PacketHeaders[i10].endAddress =
        0;
    }
    for (i11 = 0; i11 < 500; i11++) {
      outC->_L7.telegramHeaders.Telegrams[i12].packets.PacketData[i11] = 0;
    }
  }
  outC->_L7.telegramHeaders.numberBalises = 0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L7.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L7.radio_Msg.present = kcg_true;
  outC->_L7.radio_Msg.consistencyError = kcg_true;
  outC->_L7.radio_Msg.header.radioDevice = 0;
  outC->_L7.radio_Msg.header.receivedSystemTime = 0;
  outC->_L7.radio_Msg.header.nid_message = 0;
  outC->_L7.radio_Msg.header.t_train = 0.0;
  outC->_L7.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L7.radio_Msg.header.nid_lrbg = 0;
  outC->_L7.radio_Msg.header.t_train_reference = 0.0;
  outC->_L7.radio_Msg.header.nid_em = 0;
  outC->_L7.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.radio_Msg.header.d_sr = 0;
  outC->_L7.radio_Msg.header.t_sh_rqst = 0.0;
  outC->_L7.radio_Msg.header.d_ref = 0;
  outC->_L7.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L7.radio_Msg.header.d_emergencystop = 0;
  outC->_L7.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.m_version = kcg_true;
  for (i13 = 0; i13 < 30; i13++) {
    outC->_L7.radio_Msg.packets.PacketHeaders[i13].nid_packet = 0;
    outC->_L7.radio_Msg.packets.PacketHeaders[i13].q_dir = Q_DIR_Reverse;
    outC->_L7.radio_Msg.packets.PacketHeaders[i13].valid = kcg_true;
    outC->_L7.radio_Msg.packets.PacketHeaders[i13].startAddress = 0;
    outC->_L7.radio_Msg.packets.PacketHeaders[i13].endAddress = 0;
  }
  for (i14 = 0; i14 < 500; i14++) {
    outC->_L7.radio_Msg.packets.PacketData[i14] = 0;
  }
  outC->_L7.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L7.radio_Msg.sendingRBC.nid_c = 0;
  outC->_L7.radio_Msg.sendingRBC.rbc_id = 0;
  outC->_L7.radio_Msg.sendingRBC.device_id = 0;
  outC->_L6.present = kcg_true;
  for (i17 = 0; i17 < 8; i17++) {
    outC->_L6.Telegrams[i17].valid = kcg_true;
    outC->_L6.Telegrams[i17].checkResult = kcg_true;
    outC->_L6.Telegrams[i17].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L6.Telegrams[i17].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L6.Telegrams[i17].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L6.Telegrams[i17].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L6.Telegrams[i17].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L6.Telegrams[i17].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L6.Telegrams[i17].telegramheader.m_mcount = 0;
    outC->_L6.Telegrams[i17].telegramheader.nid_c = 0;
    outC->_L6.Telegrams[i17].telegramheader.nid_bg = 0;
    outC->_L6.Telegrams[i17].telegramheader.q_link = Q_LINK_Unlinked;
    for (i15 = 0; i15 < 30; i15++) {
      outC->_L6.Telegrams[i17].packets.PacketHeaders[i15].nid_packet = 0;
      outC->_L6.Telegrams[i17].packets.PacketHeaders[i15].q_dir = Q_DIR_Reverse;
      outC->_L6.Telegrams[i17].packets.PacketHeaders[i15].valid = kcg_true;
      outC->_L6.Telegrams[i17].packets.PacketHeaders[i15].startAddress = 0;
      outC->_L6.Telegrams[i17].packets.PacketHeaders[i15].endAddress = 0;
    }
    for (i16 = 0; i16 < 500; i16++) {
      outC->_L6.Telegrams[i17].packets.PacketData[i16] = 0;
    }
  }
  outC->_L6.numberBalises = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L5.valid = kcg_true;
  outC->_L5.timestamp = 0;
  outC->_L5.odo.o_nominal = 0;
  outC->_L5.odo.o_min = 0;
  outC->_L5.odo.o_max = 0;
  outC->_L5.speed.v_safeNominal = 0;
  outC->_L5.speed.v_rawNominal = 0;
  outC->_L5.speed.v_lower = 0;
  outC->_L5.speed.v_upper = 0;
  outC->_L5.acceleration = 0;
  outC->_L5.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1 = kcg_true;
  outC->systemTimeMsgReceived = 0;
  outC->msgType = msrc_undefined_Common_Types_Pkg;
  outC->decodedTelegram.valid = kcg_true;
  outC->decodedTelegram.checkResult = kcg_true;
  outC->decodedTelegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->decodedTelegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->decodedTelegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->decodedTelegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->decodedTelegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->decodedTelegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->decodedTelegram.telegramheader.m_mcount = 0;
  outC->decodedTelegram.telegramheader.nid_c = 0;
  outC->decodedTelegram.telegramheader.nid_bg = 0;
  outC->decodedTelegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (i18 = 0; i18 < 30; i18++) {
    outC->decodedTelegram.packets.PacketHeaders[i18].nid_packet = 0;
    outC->decodedTelegram.packets.PacketHeaders[i18].q_dir = Q_DIR_Reverse;
    outC->decodedTelegram.packets.PacketHeaders[i18].valid = kcg_true;
    outC->decodedTelegram.packets.PacketHeaders[i18].startAddress = 0;
    outC->decodedTelegram.packets.PacketHeaders[i18].endAddress = 0;
  }
  for (i19 = 0; i19 < 500; i19++) {
    outC->decodedTelegram.packets.PacketData[i19] = 0;
  }
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.valid = kcg_true;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.timestamp = 0;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.odo.o_min = 0;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.odo.o_max = 0;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.acceleration = 0;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->centerOfBaliseDetection.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->centerOfBaliseDetection.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->centerOfBaliseDetection.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->telegramPresent = kcg_true;
  outC->outTrackMessage_for_check.valid = kcg_true;
  outC->outTrackMessage_for_check.systemTime = 0;
  outC->outTrackMessage_for_check.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.present = kcg_true;
  for (i22 = 0; i22 < 8; i22++) {
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].valid =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].checkResult =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].telegramheader.m_mcount =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].telegramheader.nid_c =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].telegramheader.nid_bg =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (i20 = 0; i20 < 30; i20++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].packets.PacketHeaders[i20].nid_packet =
        0;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].packets.PacketHeaders[i20].q_dir =
        Q_DIR_Reverse;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].packets.PacketHeaders[i20].valid =
        kcg_true;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].packets.PacketHeaders[i20].startAddress =
        0;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].packets.PacketHeaders[i20].endAddress =
        0;
    }
    for (i21 = 0; i21 < 500; i21++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i22].packets.PacketData[i21] =
        0;
    }
  }
  outC->outTrackMessage_for_check.telegramHeaders.numberBalises = 0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outTrackMessage_for_check.radio_Msg.present = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.consistencyError = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.header.radioDevice = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.receivedSystemTime = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.nid_message = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.t_train = 0.0;
  outC->outTrackMessage_for_check.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outTrackMessage_for_check.radio_Msg.header.nid_lrbg = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.t_train_reference = 0.0;
  outC->outTrackMessage_for_check.radio_Msg.header.nid_em = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->outTrackMessage_for_check.radio_Msg.header.d_sr = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.t_sh_rqst = 0.0;
  outC->outTrackMessage_for_check.radio_Msg.header.d_ref = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->outTrackMessage_for_check.radio_Msg.header.d_emergencystop = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.t_train_reference =
    kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_emergencystop =
    kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.m_version = kcg_true;
  for (i23 = 0; i23 < 30; i23++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i23].nid_packet =
      0;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i23].q_dir =
      Q_DIR_Reverse;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i23].valid =
      kcg_true;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i23].startAddress =
      0;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i23].endAddress =
      0;
  }
  for (i24 = 0; i24 < 500; i24++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketData[i24] = 0;
  }
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.valid = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.nid_c = 0;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.rbc_id = 0;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.device_id = 0;
  /* 1 */ BuildBGMessage_init_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */ BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram */
void Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::API_TrackSide_Msg */ API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->_L1 = reset;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L5, inActualOdometry);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L17, API_TrackSide_Msg);
  outC->_L18 = outC->_L17.valid;
  outC->_L19 = outC->_L17.btm_msg.present;
  outC->_L20 = outC->_L18 & outC->_L19;
  outC->telegramPresent = outC->_L20;
  outC->_L22 = outC->telegramPresent;
  outC->_L30 = outC->telegramPresent;
  outC->_L31 = outC->_L17.btm_msg.checkResult;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L26,
    &outC->_L17.btm_msg.api_header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L46,
    &outC->_L17.packets);
  outC->_L55.valid = outC->_L30;
  outC->_L55.checkResult = outC->_L31;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L55.telegramheader,
    &outC->_L26);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L55.packets,
    &outC->_L46);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->decodedTelegram, &outC->_L55);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L28, &outC->decodedTelegram);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L23,
    &outC->_L17.btm_msg.centerOfBalisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->centerOfBaliseDetection,
    &outC->_L23);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L25,
    &outC->centerOfBaliseDetection);
  /* 1 */
  BuildBGMessage_Receive_TrackSide_Msg_Pkg(
    outC->_L1,
    outC->_L22,
    &outC->_L28,
    &outC->_L25,
    &outC->_L5,
    &outC->Context_1);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L6, &outC->Context_1.outBGMessage);
  outC->_L34 = outC->_L6.present;
  outC->_L38 = outC->_L17.systemTimeMsgReceived;
  outC->systemTimeMsgReceived = outC->_L38;
  outC->_L40 = outC->systemTimeMsgReceived;
  outC->_L35 = outC->_L17.msg_type;
  outC->msgType = outC->_L35;
  outC->_L37 = outC->msgType;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(
    &outC->_L13,
    (RadioMessage_T_Radio_Types_Pkg *) &cEmptyRadioMsg_Radio_Types_Pkg);
  outC->_L7.valid = outC->_L34;
  outC->_L7.systemTime = outC->_L40;
  outC->_L7.msg_type = outC->_L37;
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L7.telegramHeaders, &outC->_L6);
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&outC->_L7.radio_Msg, &outC->_L13);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->outTrackMessage_for_check,
    &outC->_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

