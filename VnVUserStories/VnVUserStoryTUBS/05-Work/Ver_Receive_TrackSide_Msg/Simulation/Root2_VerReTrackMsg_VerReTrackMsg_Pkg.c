/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Root2_VerReTrackMsg_VerReTrackMsg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Root2_VerReTrackMsg_init_VerReTrackMsg_Pkg(
  outC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg *outC)
{
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
  
  outC->_L51.valid = kcg_true;
  outC->_L51.timestamp = 0;
  outC->_L51.odo.o_nominal = 0;
  outC->_L51.odo.o_min = 0;
  outC->_L51.odo.o_max = 0;
  outC->_L51.speed.v_safeNominal = 0;
  outC->_L51.speed.v_rawNominal = 0;
  outC->_L51.speed.v_lower = 0;
  outC->_L51.speed.v_upper = 0;
  outC->_L51.acceleration = 0;
  outC->_L51.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L51.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L45 = kcg_true;
  outC->_L50.present = kcg_true;
  outC->_L50.consistencyError = kcg_true;
  outC->_L50.header.radioDevice = 0;
  outC->_L50.header.receivedSystemTime = 0;
  outC->_L50.header.nid_message = 0;
  outC->_L50.header.t_train = 0.0;
  outC->_L50.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L50.header.nid_lrbg = 0;
  outC->_L50.header.t_train_reference = 0.0;
  outC->_L50.header.nid_em = 0;
  outC->_L50.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L50.header.d_sr = 0;
  outC->_L50.header.t_sh_rqst = 0.0;
  outC->_L50.header.d_ref = 0;
  outC->_L50.header.q_dir = Q_DIR_Reverse;
  outC->_L50.header.d_emergencystop = 0;
  outC->_L50.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L50.radioMetadata.t_train_reference = kcg_true;
  outC->_L50.radioMetadata.nid_em = kcg_true;
  outC->_L50.radioMetadata.q_scale = kcg_true;
  outC->_L50.radioMetadata.d_sr = kcg_true;
  outC->_L50.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L50.radioMetadata.d_ref = kcg_true;
  outC->_L50.radioMetadata.q_dir = kcg_true;
  outC->_L50.radioMetadata.d_emergencystop = kcg_true;
  outC->_L50.radioMetadata.m_version = kcg_true;
  for (i = 0; i < 30; i++) {
    outC->_L50.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L50.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L50.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L50.packets.PacketHeaders[i].startAddress = 0;
    outC->_L50.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L50.packets.PacketData[i1] = 0;
  }
  outC->_L50.sendingRBC.valid = kcg_true;
  outC->_L50.sendingRBC.nid_c = 0;
  outC->_L50.sendingRBC.rbc_id = 0;
  outC->_L50.sendingRBC.device_id = 0;
  outC->_L49.present = kcg_true;
  for (i4 = 0; i4 < 8; i4++) {
    outC->_L49.Telegrams[i4].valid = kcg_true;
    outC->_L49.Telegrams[i4].checkResult = kcg_true;
    outC->_L49.Telegrams[i4].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L49.Telegrams[i4].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L49.Telegrams[i4].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L49.Telegrams[i4].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L49.Telegrams[i4].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L49.Telegrams[i4].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L49.Telegrams[i4].telegramheader.m_mcount = 0;
    outC->_L49.Telegrams[i4].telegramheader.nid_c = 0;
    outC->_L49.Telegrams[i4].telegramheader.nid_bg = 0;
    outC->_L49.Telegrams[i4].telegramheader.q_link = Q_LINK_Unlinked;
    for (i2 = 0; i2 < 30; i2++) {
      outC->_L49.Telegrams[i4].packets.PacketHeaders[i2].nid_packet = 0;
      outC->_L49.Telegrams[i4].packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
      outC->_L49.Telegrams[i4].packets.PacketHeaders[i2].valid = kcg_true;
      outC->_L49.Telegrams[i4].packets.PacketHeaders[i2].startAddress = 0;
      outC->_L49.Telegrams[i4].packets.PacketHeaders[i2].endAddress = 0;
    }
    for (i3 = 0; i3 < 500; i3++) {
      outC->_L49.Telegrams[i4].packets.PacketData[i3] = 0;
    }
  }
  outC->_L49.numberBalises = 0;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L49.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L49.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L49.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L49.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L48 = msrc_undefined_Common_Types_Pkg;
  outC->_L47 = 0;
  outC->_L46 = kcg_true;
  outC->_L44.valid = kcg_true;
  outC->_L44.systemTime = 0;
  outC->_L44.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L44.telegramHeaders.present = kcg_true;
  for (i7 = 0; i7 < 8; i7++) {
    outC->_L44.telegramHeaders.Telegrams[i7].valid = kcg_true;
    outC->_L44.telegramHeaders.Telegrams[i7].checkResult = kcg_true;
    outC->_L44.telegramHeaders.Telegrams[i7].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L44.telegramHeaders.Telegrams[i7].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L44.telegramHeaders.Telegrams[i7].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L44.telegramHeaders.Telegrams[i7].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L44.telegramHeaders.Telegrams[i7].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L44.telegramHeaders.Telegrams[i7].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L44.telegramHeaders.Telegrams[i7].telegramheader.m_mcount = 0;
    outC->_L44.telegramHeaders.Telegrams[i7].telegramheader.nid_c = 0;
    outC->_L44.telegramHeaders.Telegrams[i7].telegramheader.nid_bg = 0;
    outC->_L44.telegramHeaders.Telegrams[i7].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (i5 = 0; i5 < 30; i5++) {
      outC->_L44.telegramHeaders.Telegrams[i7].packets.PacketHeaders[i5].nid_packet =
        0;
      outC->_L44.telegramHeaders.Telegrams[i7].packets.PacketHeaders[i5].q_dir =
        Q_DIR_Reverse;
      outC->_L44.telegramHeaders.Telegrams[i7].packets.PacketHeaders[i5].valid =
        kcg_true;
      outC->_L44.telegramHeaders.Telegrams[i7].packets.PacketHeaders[i5].startAddress =
        0;
      outC->_L44.telegramHeaders.Telegrams[i7].packets.PacketHeaders[i5].endAddress =
        0;
    }
    for (i6 = 0; i6 < 500; i6++) {
      outC->_L44.telegramHeaders.Telegrams[i7].packets.PacketData[i6] = 0;
    }
  }
  outC->_L44.telegramHeaders.numberBalises = 0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L44.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L44.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L44.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L44.radio_Msg.present = kcg_true;
  outC->_L44.radio_Msg.consistencyError = kcg_true;
  outC->_L44.radio_Msg.header.radioDevice = 0;
  outC->_L44.radio_Msg.header.receivedSystemTime = 0;
  outC->_L44.radio_Msg.header.nid_message = 0;
  outC->_L44.radio_Msg.header.t_train = 0.0;
  outC->_L44.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L44.radio_Msg.header.nid_lrbg = 0;
  outC->_L44.radio_Msg.header.t_train_reference = 0.0;
  outC->_L44.radio_Msg.header.nid_em = 0;
  outC->_L44.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L44.radio_Msg.header.d_sr = 0;
  outC->_L44.radio_Msg.header.t_sh_rqst = 0.0;
  outC->_L44.radio_Msg.header.d_ref = 0;
  outC->_L44.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L44.radio_Msg.header.d_emergencystop = 0;
  outC->_L44.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L44.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L44.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L44.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L44.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L44.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L44.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L44.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L44.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L44.radio_Msg.radioMetadata.m_version = kcg_true;
  for (i8 = 0; i8 < 30; i8++) {
    outC->_L44.radio_Msg.packets.PacketHeaders[i8].nid_packet = 0;
    outC->_L44.radio_Msg.packets.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
    outC->_L44.radio_Msg.packets.PacketHeaders[i8].valid = kcg_true;
    outC->_L44.radio_Msg.packets.PacketHeaders[i8].startAddress = 0;
    outC->_L44.radio_Msg.packets.PacketHeaders[i8].endAddress = 0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->_L44.radio_Msg.packets.PacketData[i9] = 0;
  }
  outC->_L44.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L44.radio_Msg.sendingRBC.nid_c = 0;
  outC->_L44.radio_Msg.sendingRBC.rbc_id = 0;
  outC->_L44.radio_Msg.sendingRBC.device_id = 0;
  outC->_L21 = 0;
  outC->_L24 = kcg_true;
  outC->_L23.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L23.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23.q_media = Q_MEDIA_Balise;
  outC->_L23.n_pig = N_PIG_I_am_the_1st;
  outC->_L23.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L23.m_dup = M_DUP_No_duplicates;
  outC->_L23.m_mcount = 0;
  outC->_L23.nid_c = 0;
  outC->_L23.nid_bg = 0;
  outC->_L23.q_link = Q_LINK_Unlinked;
  for (i10 = 0; i10 < 30; i10++) {
    outC->_L22.PacketHeaders[i10].nid_packet = 0;
    outC->_L22.PacketHeaders[i10].q_dir = Q_DIR_Reverse;
    outC->_L22.PacketHeaders[i10].valid = kcg_true;
    outC->_L22.PacketHeaders[i10].startAddress = 0;
    outC->_L22.PacketHeaders[i10].endAddress = 0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->_L22.PacketData[i11] = 0;
  }
  outC->_L25 = kcg_true;
  outC->_L27 = 0;
  outC->_L28 = 0;
  outC->_L30 = 0.0;
  outC->_L35 = 0.0;
  outC->_L34 = 0;
  outC->_L33 = 0.0;
  outC->_L32 = 0.0;
  outC->_L31 = 0.0;
  outC->_L36.valid = kcg_true;
  outC->_L36.systemTimeMsgReceived = 0;
  outC->_L36.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L36.btm_msg.present = kcg_true;
  outC->_L36.btm_msg.checkResult = kcg_true;
  outC->_L36.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L36.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L36.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L36.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L36.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L36.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L36.btm_msg.api_header.m_mcount = 0;
  outC->_L36.btm_msg.api_header.nid_c = 0;
  outC->_L36.btm_msg.api_header.nid_bg = 0;
  outC->_L36.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L36.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L36.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L36.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L36.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L36.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L36.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L36.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L36.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L36.rtm_msg.present = kcg_true;
  outC->_L36.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L36.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L36.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L36.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L36.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L36.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L36.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L36.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L36.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L36.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L36.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L36.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L36.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L36.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L36.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L36.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L36.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L36.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L36.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L36.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L36.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L36.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L36.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L36.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L36.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L36.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L36.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L36.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i12 = 0; i12 < 30; i12++) {
    outC->_L36.packets.PacketHeaders[i12].nid_packet = 0;
    outC->_L36.packets.PacketHeaders[i12].q_dir = Q_DIR_Reverse;
    outC->_L36.packets.PacketHeaders[i12].valid = kcg_true;
    outC->_L36.packets.PacketHeaders[i12].startAddress = 0;
    outC->_L36.packets.PacketHeaders[i12].endAddress = 0;
  }
  for (i13 = 0; i13 < 500; i13++) {
    outC->_L36.packets.PacketData[i13] = 0;
  }
  outC->_L37.valid = kcg_true;
  outC->_L37.systemTimeMsgReceived = 0;
  outC->_L37.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L37.btm_msg.present = kcg_true;
  outC->_L37.btm_msg.checkResult = kcg_true;
  outC->_L37.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L37.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L37.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L37.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L37.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L37.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L37.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L37.btm_msg.api_header.m_mcount = 0;
  outC->_L37.btm_msg.api_header.nid_c = 0;
  outC->_L37.btm_msg.api_header.nid_bg = 0;
  outC->_L37.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L37.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L37.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L37.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L37.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L37.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L37.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L37.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L37.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L37.rtm_msg.present = kcg_true;
  outC->_L37.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L37.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L37.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L37.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L37.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L37.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L37.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L37.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L37.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L37.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L37.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L37.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L37.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L37.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L37.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L37.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L37.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L37.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L37.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L37.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L37.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L37.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L37.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L37.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L37.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L37.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L37.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L37.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L37.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i14 = 0; i14 < 30; i14++) {
    outC->_L37.packets.PacketHeaders[i14].nid_packet = 0;
    outC->_L37.packets.PacketHeaders[i14].q_dir = Q_DIR_Reverse;
    outC->_L37.packets.PacketHeaders[i14].valid = kcg_true;
    outC->_L37.packets.PacketHeaders[i14].startAddress = 0;
    outC->_L37.packets.PacketHeaders[i14].endAddress = 0;
  }
  for (i15 = 0; i15 < 500; i15++) {
    outC->_L37.packets.PacketData[i15] = 0;
  }
  outC->_L38 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42.valid = kcg_true;
  outC->_L42.timestamp = 0;
  outC->_L42.odo.o_nominal = 0;
  outC->_L42.odo.o_min = 0;
  outC->_L42.odo.o_max = 0;
  outC->_L42.speed.v_safeNominal = 0;
  outC->_L42.speed.v_rawNominal = 0;
  outC->_L42.speed.v_lower = 0;
  outC->_L42.speed.v_upper = 0;
  outC->_L42.acceleration = 0;
  outC->_L42.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L42.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L41 = 0;
  outC->_L40 = 0.0;
  outC->_L39 = 0.0;
  outC->currentOdometry.valid = kcg_true;
  outC->currentOdometry.timestamp = 0;
  outC->currentOdometry.odo.o_nominal = 0;
  outC->currentOdometry.odo.o_min = 0;
  outC->currentOdometry.odo.o_max = 0;
  outC->currentOdometry.speed.v_safeNominal = 0;
  outC->currentOdometry.speed.v_rawNominal = 0;
  outC->currentOdometry.speed.v_lower = 0;
  outC->currentOdometry.speed.v_upper = 0;
  outC->currentOdometry.acceleration = 0;
  outC->currentOdometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->currentOdometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->currentPosition = 0.0;
  outC->dbgVelocity = 0.0;
  outC->BG_Message_Array.present = kcg_true;
  for (i18 = 0; i18 < 8; i18++) {
    outC->BG_Message_Array.Telegrams[i18].valid = kcg_true;
    outC->BG_Message_Array.Telegrams[i18].checkResult = kcg_true;
    outC->BG_Message_Array.Telegrams[i18].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BG_Message_Array.Telegrams[i18].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BG_Message_Array.Telegrams[i18].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->BG_Message_Array.Telegrams[i18].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->BG_Message_Array.Telegrams[i18].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BG_Message_Array.Telegrams[i18].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->BG_Message_Array.Telegrams[i18].telegramheader.m_mcount = 0;
    outC->BG_Message_Array.Telegrams[i18].telegramheader.nid_c = 0;
    outC->BG_Message_Array.Telegrams[i18].telegramheader.nid_bg = 0;
    outC->BG_Message_Array.Telegrams[i18].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (i16 = 0; i16 < 30; i16++) {
      outC->BG_Message_Array.Telegrams[i18].packets.PacketHeaders[i16].nid_packet =
        0;
      outC->BG_Message_Array.Telegrams[i18].packets.PacketHeaders[i16].q_dir =
        Q_DIR_Reverse;
      outC->BG_Message_Array.Telegrams[i18].packets.PacketHeaders[i16].valid =
        kcg_true;
      outC->BG_Message_Array.Telegrams[i18].packets.PacketHeaders[i16].startAddress =
        0;
      outC->BG_Message_Array.Telegrams[i18].packets.PacketHeaders[i16].endAddress =
        0;
    }
    for (i17 = 0; i17 < 500; i17++) {
      outC->BG_Message_Array.Telegrams[i18].packets.PacketData[i17] = 0;
    }
  }
  outC->BG_Message_Array.numberBalises = 0;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->BG_Message_Array.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->BG_Message_Array.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->BG_Message_Array.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->BG_Message_Array.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->ready = kcg_true;
  /* 1 */
  Receive_TrackSide_Msg_init_Receive_TrackSide_Msg_Pkg(&outC->_4_Context_1);
  /* 2 */ FilterTrackMsg_init_Subfuction_Enhancements_Pkg(&outC->_3_Context_2);
  /* 2 */ BTM_init_Toolbox_TrainModules(&outC->_2_Context_2);
  /* 1 */ Input_Multiplexer_init_VerReTrackMsg_Pkg(&outC->Context_1);
  /* 2 */ PHYSICS_MovementSimulation_init_Toolbox_Physics(&outC->_1_Context_2);
  /* 2 */ Input_MultiplexerInit_init_VerReTrackMsg_Pkg(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Root2_VerReTrackMsg_reset_VerReTrackMsg_Pkg(
  outC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg *outC)
{
  /* 1 */
  Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(&outC->_4_Context_1);
  /* 2 */ FilterTrackMsg_reset_Subfuction_Enhancements_Pkg(&outC->_3_Context_2);
  /* 2 */ BTM_reset_Toolbox_TrainModules(&outC->_2_Context_2);
  /* 1 */ Input_Multiplexer_reset_VerReTrackMsg_Pkg(&outC->Context_1);
  /* 2 */ PHYSICS_MovementSimulation_reset_Toolbox_Physics(&outC->_1_Context_2);
  /* 2 */ Input_MultiplexerInit_reset_VerReTrackMsg_Pkg(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* VerReTrackMsg_Pkg::Root2_VerReTrackMsg */
void Root2_VerReTrackMsg_VerReTrackMsg_Pkg(
  inC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg *inC,
  outC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  T_internal_Type_Obu_BasicTypes_Pkg _2_noname;
  MsgSource_T_Common_Types_Pkg _3_noname;
  RadioMessage_T_Radio_Types_Pkg _4_noname;
  kcg_int _5_noname;
  
  outC->_L38 = kcg_false;
  outC->_L28 = inC->TestDriver;
  outC->_L27 = inC->TestStory;
  /* 2 */
  Input_MultiplexerInit_VerReTrackMsg_Pkg(
    outC->_L28,
    outC->_L27,
    &outC->Context_2);
  outC->_L31 = outC->Context_2.out_acceleration;
  outC->_L32 = outC->Context_2.out_initialPosition;
  outC->_L33 = outC->Context_2.out_initialVelocity;
  outC->_L34 = outC->Context_2.out_TotalNrofBGs;
  outC->_L35 = outC->Context_2.EndofStory;
  outC->_L21 = cDeltaSimulationTime_Toolbox;
  outC->_L25 = kcg_false;
  /* 2 */
  PHYSICS_MovementSimulation_Toolbox_Physics(
    outC->_L38,
    outC->_L31,
    outC->_L38,
    outC->_L38,
    outC->_L38,
    outC->_L32,
    outC->_L33,
    outC->_L21,
    outC->_L25,
    outC->_L25,
    100.0,
    &outC->_1_Context_2);
  outC->_L39 = outC->_1_Context_2.position;
  outC->_L40 = outC->_1_Context_2.velocity;
  outC->_L41 = outC->_1_Context_2.timestamp;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L42,
    &outC->_1_Context_2.odometry);
  outC->_L43 = outC->_1_Context_2.resetOut;
  outC->currentPosition = outC->_L39;
  outC->_L30 = outC->currentPosition;
  /* 1 */
  Input_Multiplexer_VerReTrackMsg_Pkg(
    outC->_L27,
    outC->_L30,
    outC->_L35,
    &outC->Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L22,
    &outC->Context_1.out_compressedPackets);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L23,
    &outC->Context_1.out_TelegramHeader);
  outC->_L24 = outC->Context_1.out_TrackFinished;
  noname = outC->_L43;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->currentOdometry, &outC->_L42);
  outC->dbgVelocity = outC->_L40;
  outC->ready = outC->_L24;
  /* 2 */
  BTM_Toolbox_TrainModules(
    outC->_L41,
    &outC->_L42,
    &outC->_L22,
    &outC->_L23,
    &outC->_2_Context_2);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L37,
    &outC->_2_Context_2.TrackMessage);
  /* 2 */
  FilterTrackMsg_Subfuction_Enhancements_Pkg(&outC->_L37, &outC->_3_Context_2);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L36,
    &outC->_3_Context_2.FiltereTrackMsg);
  outC->_L45 = kcg_false;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L51, &outC->currentOdometry);
  /* 1 */
  Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
    outC->_L45,
    &outC->_L36,
    &outC->_L51,
    &outC->_4_Context_1);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->_L44,
    &outC->_4_Context_1.outTrackMessage_for_check);
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&outC->_L50, &outC->_L44.radio_Msg);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L49, &outC->_L44.telegramHeaders);
  outC->_L48 = outC->_L44.msg_type;
  outC->_L47 = outC->_L44.systemTime;
  outC->_L46 = outC->_L44.valid;
  _1_noname = outC->_L46;
  _2_noname = outC->_L47;
  _3_noname = outC->_L48;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&_4_noname, &outC->_L50);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->BG_Message_Array, &outC->_L49);
  _5_noname = outC->_L34;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Root2_VerReTrackMsg_VerReTrackMsg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

