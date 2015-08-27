/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FilterTrackMsg_Subfuction_Enhancements_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void FilterTrackMsg_init_Subfuction_Enhancements_Pkg(
  outC_FilterTrackMsg_Subfuction_Enhancements_Pkg *outC)
{
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
  
  outC->_L101.valid = kcg_true;
  outC->_L101.nid_c = 0;
  outC->_L101.rbc_id = 0;
  outC->_L101.device_id = 0;
  outC->_L94.valid = kcg_true;
  outC->_L94.nid_c = 0;
  outC->_L94.rbc_id = 0;
  outC->_L94.device_id = 0;
  outC->_L87.valid = kcg_true;
  outC->_L87.systemTimeMsgReceived = 0;
  outC->_L87.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L87.btm_msg.present = kcg_true;
  outC->_L87.btm_msg.checkResult = kcg_true;
  outC->_L87.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L87.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L87.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L87.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L87.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L87.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L87.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L87.btm_msg.api_header.m_mcount = 0;
  outC->_L87.btm_msg.api_header.nid_c = 0;
  outC->_L87.btm_msg.api_header.nid_bg = 0;
  outC->_L87.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L87.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L87.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L87.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L87.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L87.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L87.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L87.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L87.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L87.rtm_msg.present = kcg_true;
  outC->_L87.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L87.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L87.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L87.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L87.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L87.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L87.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L87.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L87.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L87.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L87.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L87.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L87.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L87.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L87.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L87.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L87.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L87.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L87.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L87.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L87.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L87.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L87.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L87.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L87.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L87.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L87.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L87.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L87.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i = 0; i < 30; i++) {
    outC->_L87.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L87.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L87.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L87.packets.PacketHeaders[i].startAddress = 0;
    outC->_L87.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L87.packets.PacketData[i1] = 0;
  }
  outC->_L86 = kcg_true;
  outC->_L84.valid = kcg_true;
  outC->_L84.systemTimeMsgReceived = 0;
  outC->_L84.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L84.btm_msg.present = kcg_true;
  outC->_L84.btm_msg.checkResult = kcg_true;
  outC->_L84.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L84.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L84.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L84.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L84.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L84.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L84.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L84.btm_msg.api_header.m_mcount = 0;
  outC->_L84.btm_msg.api_header.nid_c = 0;
  outC->_L84.btm_msg.api_header.nid_bg = 0;
  outC->_L84.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L84.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L84.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L84.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L84.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L84.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L84.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L84.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L84.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L84.rtm_msg.present = kcg_true;
  outC->_L84.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L84.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L84.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L84.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L84.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L84.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L84.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L84.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L84.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L84.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L84.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L84.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L84.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L84.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L84.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L84.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L84.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L84.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L84.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L84.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L84.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L84.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L84.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L84.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L84.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L84.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L84.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L84.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L84.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L84.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L84.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L84.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L84.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L84.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L84.packets.PacketData[i3] = 0;
  }
  outC->_L83 = kcg_true;
  outC->_L82.valid = kcg_true;
  outC->_L82.systemTimeMsgReceived = 0;
  outC->_L82.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L82.btm_msg.present = kcg_true;
  outC->_L82.btm_msg.checkResult = kcg_true;
  outC->_L82.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L82.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L82.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L82.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L82.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L82.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L82.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L82.btm_msg.api_header.m_mcount = 0;
  outC->_L82.btm_msg.api_header.nid_c = 0;
  outC->_L82.btm_msg.api_header.nid_bg = 0;
  outC->_L82.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L82.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L82.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L82.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L82.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L82.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L82.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L82.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L82.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L82.rtm_msg.present = kcg_true;
  outC->_L82.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L82.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L82.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L82.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L82.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L82.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L82.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L82.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L82.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L82.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L82.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L82.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L82.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L82.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L82.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L82.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L82.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L82.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L82.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L82.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L82.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L82.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L82.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L82.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L82.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L82.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L82.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L82.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L82.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L82.packets.PacketHeaders[i4].nid_packet = 0;
    outC->_L82.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L82.packets.PacketHeaders[i4].valid = kcg_true;
    outC->_L82.packets.PacketHeaders[i4].startAddress = 0;
    outC->_L82.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L82.packets.PacketData[i5] = 0;
  }
  outC->_L81 = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L75 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L69.valid = kcg_true;
  outC->_L69.systemTimeMsgReceived = 0;
  outC->_L69.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L69.btm_msg.present = kcg_true;
  outC->_L69.btm_msg.checkResult = kcg_true;
  outC->_L69.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L69.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L69.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L69.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L69.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L69.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L69.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L69.btm_msg.api_header.m_mcount = 0;
  outC->_L69.btm_msg.api_header.nid_c = 0;
  outC->_L69.btm_msg.api_header.nid_bg = 0;
  outC->_L69.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L69.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L69.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L69.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L69.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L69.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L69.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L69.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L69.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L69.rtm_msg.present = kcg_true;
  outC->_L69.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L69.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L69.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L69.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L69.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L69.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L69.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L69.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L69.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L69.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L69.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L69.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L69.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L69.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L69.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L69.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L69.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L69.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L69.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L69.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L69.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L69.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L69.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L69.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L69.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L69.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L69.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L69.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L69.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L69.packets.PacketHeaders[i6].nid_packet = 0;
    outC->_L69.packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L69.packets.PacketHeaders[i6].valid = kcg_true;
    outC->_L69.packets.PacketHeaders[i6].startAddress = 0;
    outC->_L69.packets.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L69.packets.PacketData[i7] = 0;
  }
  outC->_L62.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L62.odometerOfBaliseDetection.timestamp = 0;
  outC->_L62.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L62.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L62.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L62.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L62.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L62.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L62.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L62.odometerOfBaliseDetection.acceleration = 0;
  outC->_L62.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L62.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L62.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L62.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L61.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L61.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L61.q_media = Q_MEDIA_Balise;
  outC->_L61.n_pig = N_PIG_I_am_the_1st;
  outC->_L61.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L61.m_dup = M_DUP_No_duplicates;
  outC->_L61.m_mcount = 0;
  outC->_L61.nid_c = 0;
  outC->_L61.nid_bg = 0;
  outC->_L61.q_link = Q_LINK_Unlinked;
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L58 = kcg_true;
  for (i8 = 0; i8 < 30; i8++) {
    outC->_L68.PacketHeaders[i8].nid_packet = 0;
    outC->_L68.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
    outC->_L68.PacketHeaders[i8].valid = kcg_true;
    outC->_L68.PacketHeaders[i8].startAddress = 0;
    outC->_L68.PacketHeaders[i8].endAddress = 0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->_L68.PacketData[i9] = 0;
  }
  outC->_L67.present = kcg_true;
  outC->_L67.apiConsistencyError = kcg_true;
  outC->_L67.Radio_Common_Header.radioDevice = 0;
  outC->_L67.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L67.Radio_Common_Header.nid_message = 0;
  outC->_L67.Radio_Common_Header.t_train = 0.0;
  outC->_L67.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L67.Radio_Common_Header.nid_lrbg = 0;
  outC->_L67.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L67.Radio_Common_Header.nid_em = 0;
  outC->_L67.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L67.Radio_Common_Header.d_sr = 0;
  outC->_L67.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L67.Radio_Common_Header.d_ref = 0;
  outC->_L67.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L67.Radio_Common_Header.d_emergencystop = 0;
  outC->_L67.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L67.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L67.Radio_MetaData.nid_em = kcg_true;
  outC->_L67.Radio_MetaData.q_scale = kcg_true;
  outC->_L67.Radio_MetaData.d_sr = kcg_true;
  outC->_L67.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L67.Radio_MetaData.d_ref = kcg_true;
  outC->_L67.Radio_MetaData.q_dir = kcg_true;
  outC->_L67.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L67.Radio_MetaData.m_version = kcg_true;
  outC->_L67.sendingRBC_Id.valid = kcg_true;
  outC->_L67.sendingRBC_Id.nid_c = 0;
  outC->_L67.sendingRBC_Id.rbc_id = 0;
  outC->_L67.sendingRBC_Id.device_id = 0;
  outC->_L66.present = kcg_true;
  outC->_L66.checkResult = kcg_true;
  outC->_L66.api_bad_balise_received = kcg_true;
  outC->_L66.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L66.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L66.api_header.q_media = Q_MEDIA_Balise;
  outC->_L66.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L66.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L66.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L66.api_header.m_mcount = 0;
  outC->_L66.api_header.nid_c = 0;
  outC->_L66.api_header.nid_bg = 0;
  outC->_L66.api_header.q_link = Q_LINK_Unlinked;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L66.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L66.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L66.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L66.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L66.sendingRBC_Id.valid = kcg_true;
  outC->_L66.sendingRBC_Id.nid_c = 0;
  outC->_L66.sendingRBC_Id.rbc_id = 0;
  outC->_L66.sendingRBC_Id.device_id = 0;
  outC->_L65 = msrc_undefined_Common_Types_Pkg;
  outC->_L64 = 0;
  outC->_L63 = kcg_true;
  outC->_L57.valid = kcg_true;
  outC->_L57.systemTimeMsgReceived = 0;
  outC->_L57.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L57.btm_msg.present = kcg_true;
  outC->_L57.btm_msg.checkResult = kcg_true;
  outC->_L57.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L57.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L57.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L57.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L57.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L57.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L57.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L57.btm_msg.api_header.m_mcount = 0;
  outC->_L57.btm_msg.api_header.nid_c = 0;
  outC->_L57.btm_msg.api_header.nid_bg = 0;
  outC->_L57.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L57.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L57.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L57.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L57.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L57.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L57.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L57.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L57.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L57.rtm_msg.present = kcg_true;
  outC->_L57.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L57.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L57.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L57.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L57.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L57.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L57.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L57.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L57.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L57.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L57.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L57.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L57.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L57.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L57.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L57.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L57.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L57.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L57.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L57.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L57.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L57.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L57.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L57.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L57.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L57.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L57.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L57.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L57.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i10 = 0; i10 < 30; i10++) {
    outC->_L57.packets.PacketHeaders[i10].nid_packet = 0;
    outC->_L57.packets.PacketHeaders[i10].q_dir = Q_DIR_Reverse;
    outC->_L57.packets.PacketHeaders[i10].valid = kcg_true;
    outC->_L57.packets.PacketHeaders[i10].startAddress = 0;
    outC->_L57.packets.PacketHeaders[i10].endAddress = 0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->_L57.packets.PacketData[i11] = 0;
  }
  outC->_L56 = kcg_true;
  for (i12 = 0; i12 < 30; i12++) {
    outC->_L48.PacketHeaders[i12].nid_packet = 0;
    outC->_L48.PacketHeaders[i12].q_dir = Q_DIR_Reverse;
    outC->_L48.PacketHeaders[i12].valid = kcg_true;
    outC->_L48.PacketHeaders[i12].startAddress = 0;
    outC->_L48.PacketHeaders[i12].endAddress = 0;
  }
  for (i13 = 0; i13 < 500; i13++) {
    outC->_L48.PacketData[i13] = 0;
  }
  outC->_L47.present = kcg_true;
  outC->_L47.apiConsistencyError = kcg_true;
  outC->_L47.Radio_Common_Header.radioDevice = 0;
  outC->_L47.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L47.Radio_Common_Header.nid_message = 0;
  outC->_L47.Radio_Common_Header.t_train = 0.0;
  outC->_L47.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L47.Radio_Common_Header.nid_lrbg = 0;
  outC->_L47.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L47.Radio_Common_Header.nid_em = 0;
  outC->_L47.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L47.Radio_Common_Header.d_sr = 0;
  outC->_L47.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L47.Radio_Common_Header.d_ref = 0;
  outC->_L47.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L47.Radio_Common_Header.d_emergencystop = 0;
  outC->_L47.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L47.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L47.Radio_MetaData.nid_em = kcg_true;
  outC->_L47.Radio_MetaData.q_scale = kcg_true;
  outC->_L47.Radio_MetaData.d_sr = kcg_true;
  outC->_L47.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L47.Radio_MetaData.d_ref = kcg_true;
  outC->_L47.Radio_MetaData.q_dir = kcg_true;
  outC->_L47.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L47.Radio_MetaData.m_version = kcg_true;
  outC->_L47.sendingRBC_Id.valid = kcg_true;
  outC->_L47.sendingRBC_Id.nid_c = 0;
  outC->_L47.sendingRBC_Id.rbc_id = 0;
  outC->_L47.sendingRBC_Id.device_id = 0;
  outC->_L46.present = kcg_true;
  outC->_L46.checkResult = kcg_true;
  outC->_L46.api_bad_balise_received = kcg_true;
  outC->_L46.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L46.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L46.api_header.q_media = Q_MEDIA_Balise;
  outC->_L46.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L46.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L46.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L46.api_header.m_mcount = 0;
  outC->_L46.api_header.nid_c = 0;
  outC->_L46.api_header.nid_bg = 0;
  outC->_L46.api_header.q_link = Q_LINK_Unlinked;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L46.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L46.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L46.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L46.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L46.sendingRBC_Id.valid = kcg_true;
  outC->_L46.sendingRBC_Id.nid_c = 0;
  outC->_L46.sendingRBC_Id.rbc_id = 0;
  outC->_L46.sendingRBC_Id.device_id = 0;
  outC->_L45 = msrc_undefined_Common_Types_Pkg;
  outC->_L44 = 0;
  outC->_L43 = kcg_true;
  outC->_L53.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L53.odometerOfBaliseDetection.timestamp = 0;
  outC->_L53.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L53.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L53.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L53.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L53.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L53.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L53.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L53.odometerOfBaliseDetection.acceleration = 0;
  outC->_L53.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L53.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L53.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L53.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L53.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L52.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L52.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L52.q_media = Q_MEDIA_Balise;
  outC->_L52.n_pig = N_PIG_I_am_the_1st;
  outC->_L52.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L52.m_dup = M_DUP_No_duplicates;
  outC->_L52.m_mcount = 0;
  outC->_L52.nid_c = 0;
  outC->_L52.nid_bg = 0;
  outC->_L52.q_link = Q_LINK_Unlinked;
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTimeMsgReceived = 0;
  outC->_L1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1.btm_msg.present = kcg_true;
  outC->_L1.btm_msg.checkResult = kcg_true;
  outC->_L1.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L1.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L1.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L1.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L1.btm_msg.api_header.m_mcount = 0;
  outC->_L1.btm_msg.api_header.nid_c = 0;
  outC->_L1.btm_msg.api_header.nid_bg = 0;
  outC->_L1.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L1.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L1.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L1.rtm_msg.present = kcg_true;
  outC->_L1.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L1.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L1.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L1.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L1.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L1.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i14 = 0; i14 < 30; i14++) {
    outC->_L1.packets.PacketHeaders[i14].nid_packet = 0;
    outC->_L1.packets.PacketHeaders[i14].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[i14].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[i14].startAddress = 0;
    outC->_L1.packets.PacketHeaders[i14].endAddress = 0;
  }
  for (i15 = 0; i15 < 500; i15++) {
    outC->_L1.packets.PacketData[i15] = 0;
  }
  outC->LastBTreceived.valid = kcg_true;
  outC->LastBTreceived.systemTimeMsgReceived = 0;
  outC->LastBTreceived.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->LastBTreceived.btm_msg.present = kcg_true;
  outC->LastBTreceived.btm_msg.checkResult = kcg_true;
  outC->LastBTreceived.btm_msg.api_bad_balise_received = kcg_true;
  outC->LastBTreceived.btm_msg.api_header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->LastBTreceived.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->LastBTreceived.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->LastBTreceived.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->LastBTreceived.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->LastBTreceived.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->LastBTreceived.btm_msg.api_header.m_mcount = 0;
  outC->LastBTreceived.btm_msg.api_header.nid_c = 0;
  outC->LastBTreceived.btm_msg.api_header.nid_bg = 0;
  outC->LastBTreceived.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->LastBTreceived.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->LastBTreceived.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->LastBTreceived.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->LastBTreceived.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->LastBTreceived.btm_msg.sendingRBC_Id.device_id = 0;
  outC->LastBTreceived.rtm_msg.present = kcg_true;
  outC->LastBTreceived.rtm_msg.apiConsistencyError = kcg_true;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->LastBTreceived.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->LastBTreceived.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->LastBTreceived.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->LastBTreceived.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->LastBTreceived.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->LastBTreceived.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->LastBTreceived.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->LastBTreceived.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->LastBTreceived.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->LastBTreceived.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->LastBTreceived.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->LastBTreceived.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->LastBTreceived.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->LastBTreceived.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i16 = 0; i16 < 30; i16++) {
    outC->LastBTreceived.packets.PacketHeaders[i16].nid_packet = 0;
    outC->LastBTreceived.packets.PacketHeaders[i16].q_dir = Q_DIR_Reverse;
    outC->LastBTreceived.packets.PacketHeaders[i16].valid = kcg_true;
    outC->LastBTreceived.packets.PacketHeaders[i16].startAddress = 0;
    outC->LastBTreceived.packets.PacketHeaders[i16].endAddress = 0;
  }
  for (i17 = 0; i17 < 500; i17++) {
    outC->LastBTreceived.packets.PacketData[i17] = 0;
  }
  outC->init = kcg_true;
  outC->rem_TrackMsg.valid = kcg_true;
  outC->rem_TrackMsg.systemTimeMsgReceived = 0;
  outC->rem_TrackMsg.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->rem_TrackMsg.btm_msg.present = kcg_true;
  outC->rem_TrackMsg.btm_msg.checkResult = kcg_true;
  outC->rem_TrackMsg.btm_msg.api_bad_balise_received = kcg_true;
  outC->rem_TrackMsg.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->rem_TrackMsg.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->rem_TrackMsg.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->rem_TrackMsg.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->rem_TrackMsg.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->rem_TrackMsg.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->rem_TrackMsg.btm_msg.api_header.m_mcount = 0;
  outC->rem_TrackMsg.btm_msg.api_header.nid_c = 0;
  outC->rem_TrackMsg.btm_msg.api_header.nid_bg = 0;
  outC->rem_TrackMsg.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->rem_TrackMsg.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->rem_TrackMsg.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->rem_TrackMsg.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->rem_TrackMsg.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->rem_TrackMsg.btm_msg.sendingRBC_Id.device_id = 0;
  outC->rem_TrackMsg.rtm_msg.present = kcg_true;
  outC->rem_TrackMsg.rtm_msg.apiConsistencyError = kcg_true;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->rem_TrackMsg.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->rem_TrackMsg.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->rem_TrackMsg.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->rem_TrackMsg.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->rem_TrackMsg.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->rem_TrackMsg.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->rem_TrackMsg.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->rem_TrackMsg.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->rem_TrackMsg.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->rem_TrackMsg.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->rem_TrackMsg.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->rem_TrackMsg.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->rem_TrackMsg.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->rem_TrackMsg.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i18 = 0; i18 < 30; i18++) {
    outC->rem_TrackMsg.packets.PacketHeaders[i18].nid_packet = 0;
    outC->rem_TrackMsg.packets.PacketHeaders[i18].q_dir = Q_DIR_Reverse;
    outC->rem_TrackMsg.packets.PacketHeaders[i18].valid = kcg_true;
    outC->rem_TrackMsg.packets.PacketHeaders[i18].startAddress = 0;
    outC->rem_TrackMsg.packets.PacketHeaders[i18].endAddress = 0;
  }
  for (i19 = 0; i19 < 500; i19++) {
    outC->rem_TrackMsg.packets.PacketData[i19] = 0;
  }
  outC->FiltereTrackMsg.valid = kcg_true;
  outC->FiltereTrackMsg.systemTimeMsgReceived = 0;
  outC->FiltereTrackMsg.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->FiltereTrackMsg.btm_msg.present = kcg_true;
  outC->FiltereTrackMsg.btm_msg.checkResult = kcg_true;
  outC->FiltereTrackMsg.btm_msg.api_bad_balise_received = kcg_true;
  outC->FiltereTrackMsg.btm_msg.api_header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->FiltereTrackMsg.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->FiltereTrackMsg.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->FiltereTrackMsg.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->FiltereTrackMsg.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->FiltereTrackMsg.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->FiltereTrackMsg.btm_msg.api_header.m_mcount = 0;
  outC->FiltereTrackMsg.btm_msg.api_header.nid_c = 0;
  outC->FiltereTrackMsg.btm_msg.api_header.nid_bg = 0;
  outC->FiltereTrackMsg.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->FiltereTrackMsg.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->FiltereTrackMsg.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->FiltereTrackMsg.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->FiltereTrackMsg.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->FiltereTrackMsg.btm_msg.sendingRBC_Id.device_id = 0;
  outC->FiltereTrackMsg.rtm_msg.present = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.apiConsistencyError = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->FiltereTrackMsg.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->FiltereTrackMsg.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->FiltereTrackMsg.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->FiltereTrackMsg.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->FiltereTrackMsg.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i20 = 0; i20 < 30; i20++) {
    outC->FiltereTrackMsg.packets.PacketHeaders[i20].nid_packet = 0;
    outC->FiltereTrackMsg.packets.PacketHeaders[i20].q_dir = Q_DIR_Reverse;
    outC->FiltereTrackMsg.packets.PacketHeaders[i20].valid = kcg_true;
    outC->FiltereTrackMsg.packets.PacketHeaders[i20].startAddress = 0;
    outC->FiltereTrackMsg.packets.PacketHeaders[i20].endAddress = 0;
  }
  for (i21 = 0; i21 < 500; i21++) {
    outC->FiltereTrackMsg.packets.PacketData[i21] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FilterTrackMsg_reset_Subfuction_Enhancements_Pkg(
  outC_FilterTrackMsg_Subfuction_Enhancements_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Subfuction_Enhancements_Pkg::FilterTrackMsg */
void FilterTrackMsg_Subfuction_Enhancements_Pkg(
  /* Subfuction_Enhancements_Pkg::FilterTrackMsg::TrackMsg */ API_TrackSideInput_T_API_Msg_Pkg *TrackMsg,
  outC_FilterTrackMsg_Subfuction_Enhancements_Pkg *outC)
{
  centerOfBalisePosition_T_BG_Types_Pkg noname;
  centerOfBalisePosition_T_BG_Types_Pkg _1_noname;
  RBC_Id_T_Common_Types_Pkg _2_noname;
  RBC_Id_T_Common_Types_Pkg _3_noname;
  /* Subfuction_Enhancements_Pkg::FilterTrackMsg::TrackMsg */ API_TrackSideInput_T_API_Msg_Pkg last_TrackMsg;
  
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L1, TrackMsg);
  outC->_L43 = outC->_L1.valid;
  /* last_init_ck_TrackMsg */ if (outC->init) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &last_TrackMsg,
      (API_TrackSideInput_T_API_Msg_Pkg *)
        &c_empty_TrackMsg_CheckBGInputChannel_Pkg);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &last_TrackMsg,
      &outC->rem_TrackMsg);
  }
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L69, &last_TrackMsg);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->LastBTreceived, &outC->_L69);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L57, &outC->LastBTreceived);
  outC->_L63 = outC->_L57.valid;
  outC->_L75 = outC->_L43 == outC->_L63;
  outC->_L44 = outC->_L1.systemTimeMsgReceived;
  outC->_L64 = outC->_L57.systemTimeMsgReceived;
  outC->_L86 = outC->_L44 >= outC->_L64;
  outC->_L45 = outC->_L1.msg_type;
  outC->_L65 = outC->_L57.msg_type;
  outC->_L77 = outC->_L45 == outC->_L65;
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(&outC->_L47, &outC->_L1.rtm_msg);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(&outC->_L67, &outC->_L57.rtm_msg);
  outC->_L78 = kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg(
      &outC->_L47,
      &outC->_L67);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L48,
    &outC->_L1.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L68,
    &outC->_L57.packets);
  outC->_L79 = kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L48,
      &outC->_L68);
  outC->_L80 = outC->_L75 & outC->_L86 & outC->_L77 & outC->_L78 & outC->_L79;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(&outC->_L46, &outC->_L1.btm_msg);
  outC->_L49 = outC->_L46.present;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(&outC->_L66, &outC->_L57.btm_msg);
  outC->_L58 = outC->_L66.present;
  outC->_L56 = outC->_L49 == outC->_L58;
  outC->_L50 = outC->_L46.checkResult;
  outC->_L59 = outC->_L66.checkResult;
  outC->_L71 = outC->_L50 == outC->_L59;
  outC->_L51 = outC->_L46.api_bad_balise_received;
  outC->_L60 = outC->_L66.api_bad_balise_received;
  outC->_L72 = outC->_L51 == outC->_L60;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L52, &outC->_L46.api_header);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L61, &outC->_L66.api_header);
  outC->_L73 = kcg_comp_TelegramHeader_T_BG_Types_Pkg(&outC->_L52, &outC->_L61);
  outC->_L81 = outC->_L56 & outC->_L71 & outC->_L72 & outC->_L73;
  outC->_L83 = outC->_L80 & outC->_L81;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L87,
    (API_TrackSideInput_T_API_Msg_Pkg *)
      &c_empty_TrackMsg_CheckBGInputChannel_Pkg);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L84, TrackMsg);
  /* 1 */ if (outC->_L83) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L82, &outC->_L87);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L82, &outC->_L84);
  }
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->FiltereTrackMsg,
    &outC->_L82);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L101, &outC->_L46.sendingRBC_Id);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L53,
    &outC->_L46.centerOfBalisePosition);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L94, &outC->_L66.sendingRBC_Id);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L62,
    &outC->_L66.centerOfBalisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&noname, &outC->_L53);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_1_noname, &outC->_L62);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_2_noname, &outC->_L94);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_3_noname, &outC->_L101);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->rem_TrackMsg, TrackMsg);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FilterTrackMsg_Subfuction_Enhancements_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

