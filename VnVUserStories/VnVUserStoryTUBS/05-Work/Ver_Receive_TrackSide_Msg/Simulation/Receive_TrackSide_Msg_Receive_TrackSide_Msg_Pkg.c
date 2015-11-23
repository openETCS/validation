/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Receive_TrackSide_Msg_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
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
  
  outC->_L11 = kcg_true;
  outC->_L10 = msrc_undefined_Common_Types_Pkg;
  outC->_L9 = kcg_true;
  outC->_L8 = msrc_undefined_Common_Types_Pkg;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTimeMsgReceived = 0;
  outC->_L2.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L2.btm_msg.present = kcg_true;
  outC->_L2.btm_msg.checkResult = kcg_true;
  outC->_L2.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L2.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L2.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L2.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L2.btm_msg.api_header.m_mcount = 0;
  outC->_L2.btm_msg.api_header.nid_c = 0;
  outC->_L2.btm_msg.api_header.nid_bg = 0;
  outC->_L2.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L2.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L2.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L2.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L2.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L2.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L2.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L2.rtm_msg.present = kcg_true;
  outC->_L2.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L2.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L2.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L2.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L2.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L2.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L2.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L2.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L2.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L2.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L2.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L2.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L2.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L2.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L2.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L2.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L2.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i = 0; i < 30; i++) {
    outC->_L2.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L2.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[i].startAddress = 0;
    outC->_L2.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L2.packets.PacketData[i1] = 0;
  }
  outC->_L1 = kcg_true;
  outC->isRadioMsg = kcg_true;
  outC->_L12_IfBlock1.valid = kcg_true;
  outC->_L12_IfBlock1.timestamp = 0;
  outC->_L12_IfBlock1.odo.o_nominal = 0;
  outC->_L12_IfBlock1.odo.o_min = 0;
  outC->_L12_IfBlock1.odo.o_max = 0;
  outC->_L12_IfBlock1.speed.v_safeNominal = 0;
  outC->_L12_IfBlock1.speed.v_rawNominal = 0;
  outC->_L12_IfBlock1.speed.v_lower = 0;
  outC->_L12_IfBlock1.speed.v_upper = 0;
  outC->_L12_IfBlock1.acceleration = 0;
  outC->_L12_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_IfBlock1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_IfBlock1 = kcg_true;
  outC->_L4_IfBlock1.valid = kcg_true;
  outC->_L4_IfBlock1.systemTimeMsgReceived = 0;
  outC->_L4_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L4_IfBlock1.btm_msg.present = kcg_true;
  outC->_L4_IfBlock1.btm_msg.checkResult = kcg_true;
  outC->_L4_IfBlock1.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L4_IfBlock1.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4_IfBlock1.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_IfBlock1.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L4_IfBlock1.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L4_IfBlock1.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4_IfBlock1.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L4_IfBlock1.btm_msg.api_header.m_mcount = 0;
  outC->_L4_IfBlock1.btm_msg.api_header.nid_c = 0;
  outC->_L4_IfBlock1.btm_msg.api_header.nid_bg = 0;
  outC->_L4_IfBlock1.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L4_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L4_IfBlock1.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L4_IfBlock1.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L4_IfBlock1.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L4_IfBlock1.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L4_IfBlock1.rtm_msg.present = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L4_IfBlock1.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_IfBlock1.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L4_IfBlock1.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L4_IfBlock1.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L4_IfBlock1.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L4_IfBlock1.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L4_IfBlock1.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L4_IfBlock1.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L4_IfBlock1.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L4_IfBlock1.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L4_IfBlock1.packets.PacketData[i3] = 0;
  }
  outC->_L22_IfBlock1.valid = kcg_true;
  outC->_L22_IfBlock1.systemTime = 0;
  outC->_L22_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L22_IfBlock1.telegramHeaders.present = kcg_true;
  for (i6 = 0; i6 < 8; i6++) {
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].valid = kcg_true;
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].checkResult = kcg_true;
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].telegramheader.m_mcount =
      0;
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].telegramheader.nid_c = 0;
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].telegramheader.nid_bg = 0;
    outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (i4 = 0; i4 < 30; i4++) {
      outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].packets.PacketHeaders[i4].nid_packet =
        0;
      outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].packets.PacketHeaders[i4].q_dir =
        Q_DIR_Reverse;
      outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].packets.PacketHeaders[i4].valid =
        kcg_true;
      outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].packets.PacketHeaders[i4].startAddress =
        0;
      outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].packets.PacketHeaders[i4].endAddress =
        0;
    }
    for (i5 = 0; i5 < 500; i5++) {
      outC->_L22_IfBlock1.telegramHeaders.Telegrams[i6].packets.PacketData[i5] =
        0;
    }
  }
  outC->_L22_IfBlock1.telegramHeaders.numberBalises = 0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L22_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L22_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L22_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L22_IfBlock1.radio_Msg.header.radioDevice = 0;
  outC->_L22_IfBlock1.radio_Msg.header.receivedSystemTime = 0;
  outC->_L22_IfBlock1.radio_Msg.header.nid_message = 0;
  outC->_L22_IfBlock1.radio_Msg.header.t_train = 0.0;
  outC->_L22_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L22_IfBlock1.radio_Msg.header.nid_lrbg = 0;
  outC->_L22_IfBlock1.radio_Msg.header.t_train_reference = 0.0;
  outC->_L22_IfBlock1.radio_Msg.header.nid_em = 0;
  outC->_L22_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22_IfBlock1.radio_Msg.header.d_sr = 0;
  outC->_L22_IfBlock1.radio_Msg.header.t_sh_rqst = 0.0;
  outC->_L22_IfBlock1.radio_Msg.header.d_ref = 0;
  outC->_L22_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L22_IfBlock1.radio_Msg.header.d_emergencystop = 0;
  outC->_L22_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L22_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L22_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L22_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L22_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L22_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L22_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L22_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L22_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (i7 = 0; i7 < 30; i7++) {
    outC->_L22_IfBlock1.radio_Msg.packets.PacketHeaders[i7].nid_packet = 0;
    outC->_L22_IfBlock1.radio_Msg.packets.PacketHeaders[i7].q_dir =
      Q_DIR_Reverse;
    outC->_L22_IfBlock1.radio_Msg.packets.PacketHeaders[i7].valid = kcg_true;
    outC->_L22_IfBlock1.radio_Msg.packets.PacketHeaders[i7].startAddress = 0;
    outC->_L22_IfBlock1.radio_Msg.packets.PacketHeaders[i7].endAddress = 0;
  }
  for (i8 = 0; i8 < 500; i8++) {
    outC->_L22_IfBlock1.radio_Msg.packets.PacketData[i8] = 0;
  }
  outC->_L22_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L22_IfBlock1.radio_Msg.sendingRBC.nid_c = 0;
  outC->_L22_IfBlock1.radio_Msg.sendingRBC.rbc_id = 0;
  outC->_L22_IfBlock1.radio_Msg.sendingRBC.device_id = 0;
  outC->_L1_IfBlock1.valid = kcg_true;
  outC->_L1_IfBlock1.systemTimeMsgReceived = 0;
  outC->_L1_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1_IfBlock1.btm_msg.present = kcg_true;
  outC->_L1_IfBlock1.btm_msg.checkResult = kcg_true;
  outC->_L1_IfBlock1.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L1_IfBlock1.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1_IfBlock1.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_IfBlock1.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L1_IfBlock1.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L1_IfBlock1.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1_IfBlock1.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L1_IfBlock1.btm_msg.api_header.m_mcount = 0;
  outC->_L1_IfBlock1.btm_msg.api_header.nid_c = 0;
  outC->_L1_IfBlock1.btm_msg.api_header.nid_bg = 0;
  outC->_L1_IfBlock1.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1_IfBlock1.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1_IfBlock1.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L1_IfBlock1.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L1_IfBlock1.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L1_IfBlock1.rtm_msg.present = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1_IfBlock1.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_IfBlock1.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1_IfBlock1.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L1_IfBlock1.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L1_IfBlock1.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i9 = 0; i9 < 30; i9++) {
    outC->_L1_IfBlock1.packets.PacketHeaders[i9].nid_packet = 0;
    outC->_L1_IfBlock1.packets.PacketHeaders[i9].q_dir = Q_DIR_Reverse;
    outC->_L1_IfBlock1.packets.PacketHeaders[i9].valid = kcg_true;
    outC->_L1_IfBlock1.packets.PacketHeaders[i9].startAddress = 0;
    outC->_L1_IfBlock1.packets.PacketHeaders[i9].endAddress = 0;
  }
  for (i10 = 0; i10 < 500; i10++) {
    outC->_L1_IfBlock1.packets.PacketData[i10] = 0;
  }
  outC->_L2_IfBlock1.valid = kcg_true;
  outC->_L2_IfBlock1.systemTime = 0;
  outC->_L2_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L2_IfBlock1.telegramHeaders.present = kcg_true;
  for (i13 = 0; i13 < 8; i13++) {
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].valid = kcg_true;
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].checkResult = kcg_true;
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].telegramheader.m_mcount =
      0;
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].telegramheader.nid_c = 0;
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].telegramheader.nid_bg = 0;
    outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (i11 = 0; i11 < 30; i11++) {
      outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].packets.PacketHeaders[i11].nid_packet =
        0;
      outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].packets.PacketHeaders[i11].q_dir =
        Q_DIR_Reverse;
      outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].packets.PacketHeaders[i11].valid =
        kcg_true;
      outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].packets.PacketHeaders[i11].startAddress =
        0;
      outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].packets.PacketHeaders[i11].endAddress =
        0;
    }
    for (i12 = 0; i12 < 500; i12++) {
      outC->_L2_IfBlock1.telegramHeaders.Telegrams[i13].packets.PacketData[i12] =
        0;
    }
  }
  outC->_L2_IfBlock1.telegramHeaders.numberBalises = 0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L2_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L2_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L2_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L2_IfBlock1.radio_Msg.header.radioDevice = 0;
  outC->_L2_IfBlock1.radio_Msg.header.receivedSystemTime = 0;
  outC->_L2_IfBlock1.radio_Msg.header.nid_message = 0;
  outC->_L2_IfBlock1.radio_Msg.header.t_train = 0.0;
  outC->_L2_IfBlock1.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2_IfBlock1.radio_Msg.header.nid_lrbg = 0;
  outC->_L2_IfBlock1.radio_Msg.header.t_train_reference = 0.0;
  outC->_L2_IfBlock1.radio_Msg.header.nid_em = 0;
  outC->_L2_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_IfBlock1.radio_Msg.header.d_sr = 0;
  outC->_L2_IfBlock1.radio_Msg.header.t_sh_rqst = 0.0;
  outC->_L2_IfBlock1.radio_Msg.header.d_ref = 0;
  outC->_L2_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L2_IfBlock1.radio_Msg.header.d_emergencystop = 0;
  outC->_L2_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L2_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L2_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L2_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L2_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L2_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L2_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (i14 = 0; i14 < 30; i14++) {
    outC->_L2_IfBlock1.radio_Msg.packets.PacketHeaders[i14].nid_packet = 0;
    outC->_L2_IfBlock1.radio_Msg.packets.PacketHeaders[i14].q_dir =
      Q_DIR_Reverse;
    outC->_L2_IfBlock1.radio_Msg.packets.PacketHeaders[i14].valid = kcg_true;
    outC->_L2_IfBlock1.radio_Msg.packets.PacketHeaders[i14].startAddress = 0;
    outC->_L2_IfBlock1.radio_Msg.packets.PacketHeaders[i14].endAddress = 0;
  }
  for (i15 = 0; i15 < 500; i15++) {
    outC->_L2_IfBlock1.radio_Msg.packets.PacketData[i15] = 0;
  }
  outC->_L2_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L2_IfBlock1.radio_Msg.sendingRBC.nid_c = 0;
  outC->_L2_IfBlock1.radio_Msg.sendingRBC.rbc_id = 0;
  outC->_L2_IfBlock1.radio_Msg.sendingRBC.device_id = 0;
  outC->IfBlock1_clock = kcg_true;
  outC->outTrackMessage_for_check.valid = kcg_true;
  outC->outTrackMessage_for_check.systemTime = 0;
  outC->outTrackMessage_for_check.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.present = kcg_true;
  for (i18 = 0; i18 < 8; i18++) {
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].valid =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].checkResult =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].telegramheader.m_mcount =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].telegramheader.nid_c =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].telegramheader.nid_bg =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (i16 = 0; i16 < 30; i16++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].packets.PacketHeaders[i16].nid_packet =
        0;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].packets.PacketHeaders[i16].q_dir =
        Q_DIR_Reverse;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].packets.PacketHeaders[i16].valid =
        kcg_true;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].packets.PacketHeaders[i16].startAddress =
        0;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].packets.PacketHeaders[i16].endAddress =
        0;
    }
    for (i17 = 0; i17 < 500; i17++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i18].packets.PacketData[i17] =
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
  for (i19 = 0; i19 < 30; i19++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i19].nid_packet =
      0;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i19].q_dir =
      Q_DIR_Reverse;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i19].valid =
      kcg_true;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i19].startAddress =
      0;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i19].endAddress =
      0;
  }
  for (i20 = 0; i20 < 500; i20++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketData[i20] = 0;
  }
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.valid = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.nid_c = 0;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.rbc_id = 0;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.device_id = 0;
  /* 1 */ Receive_RadioMsg_init_Receive_TrackSide_Msg_Pkg(&outC->_1_Context_1);
  /* 1 */
  Receive_BaliseTelegram_init_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */ Receive_RadioMsg_reset_Receive_TrackSide_Msg_Pkg(&outC->_1_Context_1);
  /* 1 */
  Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg */
void Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::API_TrackSide_Msg */ API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::outTrackMessage_for_check */ TrackSide_ForCheck_T_Common_Types_Pkg _1_outTrackMessage_for_check;
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::outTrackMessage_for_check */ TrackSide_ForCheck_T_Common_Types_Pkg outTrackMessage_for_check;
  
  outC->_L1 = reset;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L2, API_TrackSide_Msg);
  outC->_L5 = outC->_L2.valid;
  outC->_L8 = outC->_L2.msg_type;
  outC->_L10 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L9 = outC->_L8 == outC->_L10;
  outC->_L11 = outC->_L2.rtm_msg.present;
  outC->_L7 = !outC->_L1;
  outC->_L6 = outC->_L5 & outC->_L9 & outC->_L11 & outC->_L7;
  outC->isRadioMsg = outC->_L6;
  outC->IfBlock1_clock = outC->isRadioMsg;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->_L1_IfBlock1,
      API_TrackSide_Msg);
    /* 1 */
    Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
      &outC->_L1_IfBlock1,
      &outC->_1_Context_1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L2_IfBlock1,
      &outC->_1_Context_1.outTrackMessage_for_check);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &_1_outTrackMessage_for_check,
      &outC->_L2_IfBlock1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->outTrackMessage_for_check,
      &_1_outTrackMessage_for_check);
  }
  else {
    outC->_L3_IfBlock1 = reset;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &outC->_L12_IfBlock1,
      inActualOdometry);
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->_L4_IfBlock1,
      API_TrackSide_Msg);
    /* 1 */
    Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
      outC->_L3_IfBlock1,
      &outC->_L12_IfBlock1,
      &outC->_L4_IfBlock1,
      &outC->Context_1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L22_IfBlock1,
      &outC->Context_1.outTrackMessage_for_check);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outTrackMessage_for_check,
      &outC->_L22_IfBlock1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->outTrackMessage_for_check,
      &outTrackMessage_for_check);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

