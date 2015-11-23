/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BTM_Toolbox_TrainModules.h"

#ifndef KCG_USER_DEFINED_INIT
void BTM_init_Toolbox_TrainModules(outC_BTM_Toolbox_TrainModules *outC)
{
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L37.valid = kcg_true;
  outC->_L37.nid_c = 0;
  outC->_L37.rbc_id = 0;
  outC->_L37.device_id = 0;
  outC->_L35 = 0;
  outC->_L34 = 0;
  outC->_L33.nominal = 0;
  outC->_L33.d_min = 0;
  outC->_L33.d_max = 0;
  outC->_L32.present = kcg_true;
  outC->_L32.apiConsistencyError = kcg_true;
  outC->_L32.Radio_Common_Header.radioDevice = 0;
  outC->_L32.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L32.Radio_Common_Header.nid_message = 0;
  outC->_L32.Radio_Common_Header.t_train = 0.0;
  outC->_L32.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L32.Radio_Common_Header.nid_lrbg = 0;
  outC->_L32.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L32.Radio_Common_Header.nid_em = 0;
  outC->_L32.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L32.Radio_Common_Header.d_sr = 0;
  outC->_L32.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L32.Radio_Common_Header.d_ref = 0;
  outC->_L32.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L32.Radio_Common_Header.d_emergencystop = 0;
  outC->_L32.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L32.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L32.Radio_MetaData.nid_em = kcg_true;
  outC->_L32.Radio_MetaData.q_scale = kcg_true;
  outC->_L32.Radio_MetaData.d_sr = kcg_true;
  outC->_L32.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L32.Radio_MetaData.d_ref = kcg_true;
  outC->_L32.Radio_MetaData.q_dir = kcg_true;
  outC->_L32.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L32.Radio_MetaData.m_version = kcg_true;
  outC->_L32.sendingRBC_Id.valid = kcg_true;
  outC->_L32.sendingRBC_Id.nid_c = 0;
  outC->_L32.sendingRBC_Id.rbc_id = 0;
  outC->_L32.sendingRBC_Id.device_id = 0;
  for (i = 0; i < 30; i++) {
    outC->_L30.PacketHeaders[i].nid_packet = 0;
    outC->_L30.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L30.PacketHeaders[i].valid = kcg_true;
    outC->_L30.PacketHeaders[i].startAddress = 0;
    outC->_L30.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L30.PacketData[i1] = 0;
  }
  outC->_L29.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L29.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.q_media = Q_MEDIA_Balise;
  outC->_L29.n_pig = N_PIG_I_am_the_1st;
  outC->_L29.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L29.m_dup = M_DUP_No_duplicates;
  outC->_L29.m_mcount = 0;
  outC->_L29.nid_c = 0;
  outC->_L29.nid_bg = 0;
  outC->_L29.q_link = Q_LINK_Unlinked;
  outC->_L28.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L28.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L28.q_media = Q_MEDIA_Balise;
  outC->_L28.n_pig = N_PIG_I_am_the_1st;
  outC->_L28.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L28.m_dup = M_DUP_No_duplicates;
  outC->_L28.m_mcount = 0;
  outC->_L28.nid_c = 0;
  outC->_L28.nid_bg = 0;
  outC->_L28.q_link = Q_LINK_Unlinked;
  outC->_L27 = msrc_undefined_Common_Types_Pkg;
  outC->_L26 = msrc_undefined_Common_Types_Pkg;
  outC->_L25 = msrc_undefined_Common_Types_Pkg;
  outC->_L24 = 0;
  outC->_L23 = kcg_true;
  outC->_L22 = 0;
  outC->_L20.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L20.odometerOfBaliseDetection.timestamp = 0;
  outC->_L20.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L20.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L20.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L20.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L20.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L20.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L20.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L20.odometerOfBaliseDetection.acceleration = 0;
  outC->_L20.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L20.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L20.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L18.valid = kcg_true;
  outC->_L18.timestamp = 0;
  outC->_L18.odo.o_nominal = 0;
  outC->_L18.odo.o_min = 0;
  outC->_L18.odo.o_max = 0;
  outC->_L18.speed.v_safeNominal = 0;
  outC->_L18.speed.v_rawNominal = 0;
  outC->_L18.speed.v_lower = 0;
  outC->_L18.speed.v_upper = 0;
  outC->_L18.acceleration = 0;
  outC->_L18.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L18.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L6 = 0;
  outC->_L5.present = kcg_true;
  outC->_L5.checkResult = kcg_true;
  outC->_L5.api_bad_balise_received = kcg_true;
  outC->_L5.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.api_header.q_media = Q_MEDIA_Balise;
  outC->_L5.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L5.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L5.api_header.m_mcount = 0;
  outC->_L5.api_header.nid_c = 0;
  outC->_L5.api_header.nid_bg = 0;
  outC->_L5.api_header.q_link = Q_LINK_Unlinked;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L5.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L5.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L5.sendingRBC_Id.valid = kcg_true;
  outC->_L5.sendingRBC_Id.nid_c = 0;
  outC->_L5.sendingRBC_Id.rbc_id = 0;
  outC->_L5.sendingRBC_Id.device_id = 0;
  outC->_L4.valid = kcg_true;
  outC->_L4.systemTimeMsgReceived = 0;
  outC->_L4.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L4.btm_msg.present = kcg_true;
  outC->_L4.btm_msg.checkResult = kcg_true;
  outC->_L4.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L4.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L4.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L4.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L4.btm_msg.api_header.m_mcount = 0;
  outC->_L4.btm_msg.api_header.nid_c = 0;
  outC->_L4.btm_msg.api_header.nid_bg = 0;
  outC->_L4.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L4.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L4.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L4.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L4.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L4.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L4.btm_msg.sendingRBC_Id.device_id = 0;
  outC->_L4.rtm_msg.present = kcg_true;
  outC->_L4.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L4.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L4.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L4.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L4.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->_L4.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L4.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L4.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->_L4.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L4.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L4.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->_L4.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L4.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L4.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L4.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L4.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L4.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L4.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L4.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L4.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L4.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L4.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L4.packets.PacketData[i3] = 0;
  }
  outC->TrackMessage.valid = kcg_true;
  outC->TrackMessage.systemTimeMsgReceived = 0;
  outC->TrackMessage.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->TrackMessage.btm_msg.present = kcg_true;
  outC->TrackMessage.btm_msg.checkResult = kcg_true;
  outC->TrackMessage.btm_msg.api_bad_balise_received = kcg_true;
  outC->TrackMessage.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->TrackMessage.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessage.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->TrackMessage.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->TrackMessage.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->TrackMessage.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->TrackMessage.btm_msg.api_header.m_mcount = 0;
  outC->TrackMessage.btm_msg.api_header.nid_c = 0;
  outC->TrackMessage.btm_msg.api_header.nid_bg = 0;
  outC->TrackMessage.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->TrackMessage.btm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessage.btm_msg.sendingRBC_Id.nid_c = 0;
  outC->TrackMessage.btm_msg.sendingRBC_Id.rbc_id = 0;
  outC->TrackMessage.btm_msg.sendingRBC_Id.device_id = 0;
  outC->TrackMessage.rtm_msg.present = kcg_true;
  outC->TrackMessage.rtm_msg.apiConsistencyError = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i4 = 0; i4 < 30; i4++) {
    outC->TrackMessage.packets.PacketHeaders[i4].nid_packet = 0;
    outC->TrackMessage.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->TrackMessage.packets.PacketHeaders[i4].valid = kcg_true;
    outC->TrackMessage.packets.PacketHeaders[i4].startAddress = 0;
    outC->TrackMessage.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->TrackMessage.packets.PacketData[i5] = 0;
  }
  /* 1 */ ODO_doLocInacc_init_Toolbox_Functions(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BTM_reset_Toolbox_TrainModules(outC_BTM_Toolbox_TrainModules *outC)
{
  /* 1 */ ODO_doLocInacc_reset_Toolbox_Functions(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::TrainModules::BTM */
void BTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::BTM::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::BTM::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* Toolbox::TrainModules::BTM::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::BTM::TelegramHeader */ TelegramHeader_T_BG_Types_Pkg *TelegramHeader,
  outC_BTM_Toolbox_TrainModules *outC)
{
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L29, TelegramHeader);
  outC->_L22 = outC->_L29.nid_c;
  outC->_L24 = 0;
  outC->_L23 = outC->_L22 != outC->_L24;
  outC->_L6 = systemTime;
  outC->_L26 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L27 = msrc_undefined_Common_Types_Pkg;
  /* 1 */ if (outC->_L23) {
    outC->_L25 = outC->_L26;
  }
  else {
    outC->_L25 = outC->_L27;
  }
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_false;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L28, TelegramHeader);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L18, odometry);
  outC->_L34 = - 10;
  outC->_L35 = 10;
  /* 1 */
  ODO_doLocInacc_Toolbox_Functions(outC->_L34, outC->_L35, &outC->Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L33,
    &outC->Context_1.locInAcc);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L20.odometerOfBaliseDetection,
    &outC->_L18);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L20.BG_centerDetectionInaccuraccuracies,
    &outC->_L33);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &outC->_L37,
    (RBC_Id_T_Common_Types_Pkg *) &cEmptyRBC_Id_Toolbox);
  outC->_L5.present = outC->_L23;
  outC->_L5.checkResult = outC->_L16;
  outC->_L5.api_bad_balise_received = outC->_L17;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L5.api_header, &outC->_L28);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L5.centerOfBalisePosition,
    &outC->_L20);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L5.sendingRBC_Id, &outC->_L37);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(
    &outC->_L32,
    (API_RadioMsgHeader_T_API_Msg_Pkg *) &cEmptyRadioMsgHeader_Toolbox);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L30, Packets);
  outC->_L4.valid = outC->_L23;
  outC->_L4.systemTimeMsgReceived = outC->_L6;
  outC->_L4.msg_type = outC->_L25;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(&outC->_L4.btm_msg, &outC->_L5);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(&outC->_L4.rtm_msg, &outC->_L32);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L4.packets,
    &outC->_L30);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->TrackMessage, &outC->_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BTM_Toolbox_TrainModules.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

