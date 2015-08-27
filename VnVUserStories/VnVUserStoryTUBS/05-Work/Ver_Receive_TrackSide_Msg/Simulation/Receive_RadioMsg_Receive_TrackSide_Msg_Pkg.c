/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Receive_RadioMsg_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC)
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
  
  outC->_L92.valid = kcg_true;
  outC->_L92.nid_c = 0;
  outC->_L92.rbc_id = 0;
  outC->_L92.device_id = 0;
  outC->_L68.present = kcg_true;
  for (i2 = 0; i2 < 8; i2++) {
    outC->_L68.Telegrams[i2].valid = kcg_true;
    outC->_L68.Telegrams[i2].checkResult = kcg_true;
    outC->_L68.Telegrams[i2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L68.Telegrams[i2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L68.Telegrams[i2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L68.Telegrams[i2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L68.Telegrams[i2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L68.Telegrams[i2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L68.Telegrams[i2].telegramheader.m_mcount = 0;
    outC->_L68.Telegrams[i2].telegramheader.nid_c = 0;
    outC->_L68.Telegrams[i2].telegramheader.nid_bg = 0;
    outC->_L68.Telegrams[i2].telegramheader.q_link = Q_LINK_Unlinked;
    for (i = 0; i < 30; i++) {
      outC->_L68.Telegrams[i2].packets.PacketHeaders[i].nid_packet = 0;
      outC->_L68.Telegrams[i2].packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
      outC->_L68.Telegrams[i2].packets.PacketHeaders[i].valid = kcg_true;
      outC->_L68.Telegrams[i2].packets.PacketHeaders[i].startAddress = 0;
      outC->_L68.Telegrams[i2].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->_L68.Telegrams[i2].packets.PacketData[i1] = 0;
    }
  }
  outC->_L68.numberBalises = 0;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L68.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L68.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L68.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  for (i3 = 0; i3 < 30; i3++) {
    outC->_L67.PacketHeaders[i3].nid_packet = 0;
    outC->_L67.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
    outC->_L67.PacketHeaders[i3].valid = kcg_true;
    outC->_L67.PacketHeaders[i3].startAddress = 0;
    outC->_L67.PacketHeaders[i3].endAddress = 0;
  }
  for (i4 = 0; i4 < 500; i4++) {
    outC->_L67.PacketData[i4] = 0;
  }
  outC->_L21.t_train_reference = kcg_true;
  outC->_L21.nid_em = kcg_true;
  outC->_L21.q_scale = kcg_true;
  outC->_L21.d_sr = kcg_true;
  outC->_L21.t_sh_rqst = kcg_true;
  outC->_L21.d_ref = kcg_true;
  outC->_L21.q_dir = kcg_true;
  outC->_L21.d_emergencystop = kcg_true;
  outC->_L21.m_version = kcg_true;
  outC->_L37.radioDevice = 0;
  outC->_L37.receivedSystemTime = 0;
  outC->_L37.nid_message = 0;
  outC->_L37.t_train = 0.0;
  outC->_L37.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L37.nid_lrbg = 0;
  outC->_L37.t_train_reference = 0.0;
  outC->_L37.nid_em = 0;
  outC->_L37.q_scale = Q_SCALE_10_cm_scale;
  outC->_L37.d_sr = 0;
  outC->_L37.t_sh_rqst = 0.0;
  outC->_L37.d_ref = 0;
  outC->_L37.q_dir = Q_DIR_Reverse;
  outC->_L37.d_emergencystop = 0;
  outC->_L37.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L19.present = kcg_true;
  outC->_L19.consistencyError = kcg_true;
  outC->_L19.header.radioDevice = 0;
  outC->_L19.header.receivedSystemTime = 0;
  outC->_L19.header.nid_message = 0;
  outC->_L19.header.t_train = 0.0;
  outC->_L19.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L19.header.nid_lrbg = 0;
  outC->_L19.header.t_train_reference = 0.0;
  outC->_L19.header.nid_em = 0;
  outC->_L19.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19.header.d_sr = 0;
  outC->_L19.header.t_sh_rqst = 0.0;
  outC->_L19.header.d_ref = 0;
  outC->_L19.header.q_dir = Q_DIR_Reverse;
  outC->_L19.header.d_emergencystop = 0;
  outC->_L19.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.radioMetadata.t_train_reference = kcg_true;
  outC->_L19.radioMetadata.nid_em = kcg_true;
  outC->_L19.radioMetadata.q_scale = kcg_true;
  outC->_L19.radioMetadata.d_sr = kcg_true;
  outC->_L19.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L19.radioMetadata.d_ref = kcg_true;
  outC->_L19.radioMetadata.q_dir = kcg_true;
  outC->_L19.radioMetadata.d_emergencystop = kcg_true;
  outC->_L19.radioMetadata.m_version = kcg_true;
  for (i5 = 0; i5 < 30; i5++) {
    outC->_L19.packets.PacketHeaders[i5].nid_packet = 0;
    outC->_L19.packets.PacketHeaders[i5].q_dir = Q_DIR_Reverse;
    outC->_L19.packets.PacketHeaders[i5].valid = kcg_true;
    outC->_L19.packets.PacketHeaders[i5].startAddress = 0;
    outC->_L19.packets.PacketHeaders[i5].endAddress = 0;
  }
  for (i6 = 0; i6 < 500; i6++) {
    outC->_L19.packets.PacketData[i6] = 0;
  }
  outC->_L19.sendingRBC.valid = kcg_true;
  outC->_L19.sendingRBC.nid_c = 0;
  outC->_L19.sendingRBC.rbc_id = 0;
  outC->_L19.sendingRBC.device_id = 0;
  outC->_L17 = msrc_undefined_Common_Types_Pkg;
  outC->_L16 = 0;
  outC->_L15 = kcg_true;
  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = 0;
  outC->_L14.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L14.telegramHeaders.present = kcg_true;
  for (i9 = 0; i9 < 8; i9++) {
    outC->_L14.telegramHeaders.Telegrams[i9].valid = kcg_true;
    outC->_L14.telegramHeaders.Telegrams[i9].checkResult = kcg_true;
    outC->_L14.telegramHeaders.Telegrams[i9].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L14.telegramHeaders.Telegrams[i9].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L14.telegramHeaders.Telegrams[i9].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L14.telegramHeaders.Telegrams[i9].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L14.telegramHeaders.Telegrams[i9].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L14.telegramHeaders.Telegrams[i9].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L14.telegramHeaders.Telegrams[i9].telegramheader.m_mcount = 0;
    outC->_L14.telegramHeaders.Telegrams[i9].telegramheader.nid_c = 0;
    outC->_L14.telegramHeaders.Telegrams[i9].telegramheader.nid_bg = 0;
    outC->_L14.telegramHeaders.Telegrams[i9].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (i7 = 0; i7 < 30; i7++) {
      outC->_L14.telegramHeaders.Telegrams[i9].packets.PacketHeaders[i7].nid_packet =
        0;
      outC->_L14.telegramHeaders.Telegrams[i9].packets.PacketHeaders[i7].q_dir =
        Q_DIR_Reverse;
      outC->_L14.telegramHeaders.Telegrams[i9].packets.PacketHeaders[i7].valid =
        kcg_true;
      outC->_L14.telegramHeaders.Telegrams[i9].packets.PacketHeaders[i7].startAddress =
        0;
      outC->_L14.telegramHeaders.Telegrams[i9].packets.PacketHeaders[i7].endAddress =
        0;
    }
    for (i8 = 0; i8 < 500; i8++) {
      outC->_L14.telegramHeaders.Telegrams[i9].packets.PacketData[i8] = 0;
    }
  }
  outC->_L14.telegramHeaders.numberBalises = 0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L14.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L14.radio_Msg.present = kcg_true;
  outC->_L14.radio_Msg.consistencyError = kcg_true;
  outC->_L14.radio_Msg.header.radioDevice = 0;
  outC->_L14.radio_Msg.header.receivedSystemTime = 0;
  outC->_L14.radio_Msg.header.nid_message = 0;
  outC->_L14.radio_Msg.header.t_train = 0.0;
  outC->_L14.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L14.radio_Msg.header.nid_lrbg = 0;
  outC->_L14.radio_Msg.header.t_train_reference = 0.0;
  outC->_L14.radio_Msg.header.nid_em = 0;
  outC->_L14.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.radio_Msg.header.d_sr = 0;
  outC->_L14.radio_Msg.header.t_sh_rqst = 0.0;
  outC->_L14.radio_Msg.header.d_ref = 0;
  outC->_L14.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L14.radio_Msg.header.d_emergencystop = 0;
  outC->_L14.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.m_version = kcg_true;
  for (i10 = 0; i10 < 30; i10++) {
    outC->_L14.radio_Msg.packets.PacketHeaders[i10].nid_packet = 0;
    outC->_L14.radio_Msg.packets.PacketHeaders[i10].q_dir = Q_DIR_Reverse;
    outC->_L14.radio_Msg.packets.PacketHeaders[i10].valid = kcg_true;
    outC->_L14.radio_Msg.packets.PacketHeaders[i10].startAddress = 0;
    outC->_L14.radio_Msg.packets.PacketHeaders[i10].endAddress = 0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->_L14.radio_Msg.packets.PacketData[i11] = 0;
  }
  outC->_L14.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L14.radio_Msg.sendingRBC.nid_c = 0;
  outC->_L14.radio_Msg.sendingRBC.rbc_id = 0;
  outC->_L14.radio_Msg.sendingRBC.device_id = 0;
  outC->_L12.valid = kcg_true;
  outC->_L12.systemTimeMsgReceived = 0;
  outC->_L12.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L12.btm_msg.present = kcg_true;
  outC->_L12.btm_msg.checkResult = kcg_true;
  outC->_L12.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L12.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L12.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L12.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L12.btm_msg.api_header.m_mcount = 0;
  outC->_L12.btm_msg.api_header.nid_c = 0;
  outC->_L12.btm_msg.api_header.nid_bg = 0;
  outC->_L12.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L12.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L12.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L12.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L12.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L12.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L12.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L12.rtm_msg.present = kcg_true;
  outC->_L12.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L12.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L12.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L12.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L12.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L12.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L12.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L12.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L12.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L12.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L12.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L12.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L12.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L12.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L12.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L12.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L12.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L12.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L12.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i12 = 0; i12 < 30; i12++) {
    outC->_L12.packets.PacketHeaders[i12].nid_packet = 0;
    outC->_L12.packets.PacketHeaders[i12].q_dir = Q_DIR_Reverse;
    outC->_L12.packets.PacketHeaders[i12].valid = kcg_true;
    outC->_L12.packets.PacketHeaders[i12].startAddress = 0;
    outC->_L12.packets.PacketHeaders[i12].endAddress = 0;
  }
  for (i13 = 0; i13 < 500; i13++) {
    outC->_L12.packets.PacketData[i13] = 0;
  }
  outC->outTrackMessage_for_check.valid = kcg_true;
  outC->outTrackMessage_for_check.systemTime = 0;
  outC->outTrackMessage_for_check.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.present = kcg_true;
  for (i16 = 0; i16 < 8; i16++) {
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].valid =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].checkResult =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].telegramheader.m_mcount =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].telegramheader.nid_c =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].telegramheader.nid_bg =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (i14 = 0; i14 < 30; i14++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].packets.PacketHeaders[i14].nid_packet =
        0;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].packets.PacketHeaders[i14].q_dir =
        Q_DIR_Reverse;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].packets.PacketHeaders[i14].valid =
        kcg_true;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].packets.PacketHeaders[i14].startAddress =
        0;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].packets.PacketHeaders[i14].endAddress =
        0;
    }
    for (i15 = 0; i15 < 500; i15++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i16].packets.PacketData[i15] =
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
  for (i17 = 0; i17 < 30; i17++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i17].nid_packet =
      0;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i17].q_dir =
      Q_DIR_Reverse;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i17].valid =
      kcg_true;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i17].startAddress =
      0;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i17].endAddress =
      0;
  }
  for (i18 = 0; i18 < 500; i18++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketData[i18] = 0;
  }
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.valid = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.nid_c = 0;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.rbc_id = 0;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.device_id = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Receive_RadioMsg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg */
void Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::API_TrackSide_Msg */ API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L12, API_TrackSide_Msg);
  outC->_L15 = outC->_L12.valid;
  outC->_L16 = outC->_L12.systemTimeMsgReceived;
  outC->_L17 = outC->_L12.msg_type;
  kcg_copy_BG_Message_T_BG_Types_Pkg(
    &outC->_L68,
    (BG_Message_T_BG_Types_Pkg *) &cEmptyBGMessages_BG_Types_Pkg);
  outC->_L36 = outC->_L12.rtm_msg.present;
  outC->_L34 = outC->_L12.rtm_msg.apiConsistencyError;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L37,
    &outC->_L12.rtm_msg.Radio_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L21,
    &outC->_L12.rtm_msg.Radio_MetaData);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L67,
    &outC->_L12.packets);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &outC->_L92,
    &outC->_L12.rtm_msg.sendingRBC_Id);
  outC->_L19.present = outC->_L36;
  outC->_L19.consistencyError = outC->_L34;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L19.header,
    &outC->_L37);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L19.radioMetadata,
    &outC->_L21);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L19.packets,
    &outC->_L67);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L19.sendingRBC, &outC->_L92);
  outC->_L14.valid = outC->_L15;
  outC->_L14.systemTime = outC->_L16;
  outC->_L14.msg_type = outC->_L17;
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L14.telegramHeaders, &outC->_L68);
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&outC->_L14.radio_Msg, &outC->_L19);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->outTrackMessage_for_check,
    &outC->_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

