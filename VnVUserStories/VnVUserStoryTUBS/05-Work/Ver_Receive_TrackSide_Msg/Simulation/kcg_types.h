/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* TM::OrBG */
typedef enum kcg_tag_OrBG_TM { Amsterdam_TM, Utrecht_TM } OrBG_TM;
/* TM::OrLine */
typedef enum kcg_tag_OrLine_TM { N_TM, Z_TM } OrLine_TM;
/* Common_Types_Pkg::MsgSource_T */
typedef enum kcg_tag_MsgSource_T_Common_Types_Pkg {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* Q_UPDOWN */
typedef enum kcg_tag_Q_UPDOWN {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_MEDIA */
typedef enum kcg_tag_Q_MEDIA { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
/* N_PIG */
typedef enum kcg_tag_N_PIG {
  N_PIG_I_am_the_1st = 0,
  N_PIG_I_am_the_2nd = 1,
  N_PIG_I_am_the_3rd = 2,
  N_PIG_I_am_the_4th = 3,
  N_PIG_I_am_the_5th = 4,
  N_PIG_I_am_the_6th = 5,
  N_PIG_I_am_the_7th = 6,
  N_PIG_I_am_the_8th = 7
} N_PIG;
/* N_TOTAL */
typedef enum kcg_tag_N_TOTAL {
  N_TOTAL_1_balise_in_the_group = 0,
  N_TOTAL_2_balises_in_the_group = 1,
  N_TOTAL_3_balises_in_the_group = 2,
  N_TOTAL_4_balises_in_the_group = 3,
  N_TOTAL_5_balises_in_the_group = 4,
  N_TOTAL_6_balises_in_the_group = 5,
  N_TOTAL_7_balises_in_the_group = 6,
  N_TOTAL_8_balises_in_the_group = 7
} N_TOTAL;
/* M_DUP */
typedef enum kcg_tag_M_DUP {
  M_DUP_No_duplicates = 0,
  _4_M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* Q_LINK */
typedef enum kcg_tag_Q_LINK { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* Obu_BasicTypes_Pkg::odoMotionState_T */
typedef enum kcg_tag_odoMotionState_T_Obu_BasicTypes_Pkg {
  noMotion_Obu_BasicTypes_Pkg,
  Motion_Obu_BasicTypes_Pkg
} odoMotionState_T_Obu_BasicTypes_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionDirection_T */
typedef enum kcg_tag_odoMotionDirection_T_Obu_BasicTypes_Pkg {
  unknownDirection_Obu_BasicTypes_Pkg,
  cabAFirst_Obu_BasicTypes_Pkg,
  cabBFirst_Obu_BasicTypes_Pkg
} odoMotionDirection_T_Obu_BasicTypes_Pkg;
/* Q_DIR */
typedef enum kcg_tag_Q_DIR {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* M_VERSION */
typedef enum kcg_tag_M_VERSION {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* M_ACK */
typedef enum kcg_tag_M_ACK {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* Q_SCALE */
typedef enum kcg_tag_Q_SCALE {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
typedef enum kcg_tag_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_Reset_1_SM1,
  SSM_TR_Driving_1_SM1
} SSM_TR_SM1;
/* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_Reset_SM1,
  SSM_st_Driving_SM1
} SSM_ST_SM1;
/* T_TRAIN */
typedef kcg_real T_TRAIN;

/* Toolbox::odometryFactors_T */
typedef struct kcg_tag_odometryFactors_T_Toolbox {
  kcg_real o_nominal;
  kcg_real o_min;
  kcg_real o_max;
} odometryFactors_T_Toolbox;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct kcg_tag_RadioMetadata_T_Common_Types_Pkg {
  kcg_bool t_train_reference;
  kcg_bool nid_em;
  kcg_bool q_scale;
  kcg_bool d_sr;
  kcg_bool t_sh_rqst;
  kcg_bool d_ref;
  kcg_bool q_dir;
  kcg_bool d_emergencystop;
  kcg_bool m_version;
} RadioMetadata_T_Common_Types_Pkg;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_C */
typedef kcg_int NID_C;

/* NID_BG */
typedef kcg_int NID_BG;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct kcg_tag_TelegramHeader_T_BG_Types_Pkg {
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_PIG n_pig;
  N_TOTAL n_total;
  M_DUP m_dup;
  M_MCOUNT m_mcount;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
} TelegramHeader_T_BG_Types_Pkg;

/* NID_RBC */
typedef kcg_int NID_RBC;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* NID_EM */
typedef kcg_int NID_EM;

/* D_SR */
typedef kcg_int D_SR;

/* D_REF */
typedef kcg_int D_REF;

/* D_EMERGENCYSTOP */
typedef kcg_int D_EMERGENCYSTOP;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct kcg_tag_OdometryLocations_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} OdometryLocations_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct kcg_tag_LocWithInAcc_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} LocWithInAcc_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct kcg_tag_OdometrySpeeds_T_Obu_BasicTypes_Pkg {
  V_internal_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_lower;
  V_internal_Type_Obu_BasicTypes_Pkg v_upper;
} OdometrySpeeds_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct kcg_tag_odometry_T_Obu_BasicTypes_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} odometry_T_Obu_BasicTypes_Pkg;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef struct kcg_tag_centerOfBalisePosition_T_BG_Types_Pkg {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} centerOfBalisePosition_T_BG_Types_Pkg;

/* Obu_BasicTypes_Pkg::Speed_T */
typedef kcg_int Speed_T_Obu_BasicTypes_Pkg;

/* TM::BaliseTelegramHeader_int_T */
typedef struct kcg_tag_BaliseTelegramHeader_int_T_TM {
  kcg_int q_updown;
  kcg_int m_version;
  kcg_int q_media;
  kcg_int n_pig;
  kcg_int n_total;
  kcg_int m_dup;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  kcg_int q_link;
} BaliseTelegramHeader_int_T_TM;

/* TM::X_TEXT_trackside_T */
typedef kcg_int X_TEXT_trackside_T_TM[255];

/* TM::P021_section_int_T */
typedef struct kcg_tag_P021_section_int_T_TM {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} P021_section_int_T_TM;

/* TM::P021_trackide_sectionlist_T */
typedef P021_section_int_T_TM P021_trackide_sectionlist_T_TM[32];

/* TM::P021_trackside_int_T */
typedef struct kcg_tag_P021_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
  kcg_int N_ITER;
  P021_trackide_sectionlist_T_TM SECTIONS;
} P021_trackside_int_T_TM;

/* TM::P021_OBU_sectionlist_int_T */
typedef P021_section_int_T_TM P021_OBU_sectionlist_int_T_TM[33];

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* TM::P041_section_int_T */
typedef struct kcg_tag_P041_section_int_T_TM {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} P041_section_int_T_TM;

/* TM::P041_trackide_sectionlist_T */
typedef P041_section_int_T_TM P041_trackide_sectionlist_T_TM[32];

/* TM::P041_trackside_int_T */
typedef struct kcg_tag_P041_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LEVELTR;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
  kcg_int N_ITER;
  P041_trackide_sectionlist_T_TM SECTIONS;
} P041_trackside_int_T_TM;

/* TM::P041_OBU_sectionlist_int_T */
typedef P041_section_int_T_TM P041_OBU_sectionlist_int_T_TM[33];

/* Common_Types_Pkg::MetadataElement_T */
typedef struct kcg_tag_MetadataElement_T_Common_Types_Pkg {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} MetadataElement_T_Common_Types_Pkg;

/* Common_Types_Pkg::Metadata_T */
typedef MetadataElement_T_Common_Types_Pkg Metadata_T_Common_Types_Pkg[30];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef kcg_int CompressedPacketData_T_Common_Types_Pkg[500];

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct kcg_tag_CompressedPackets_T_Common_Types_Pkg {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} CompressedPackets_T_Common_Types_Pkg;

/* TM::CompressedBaliseMessage */
typedef struct kcg_tag_CompressedBaliseMessage_TM {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} CompressedBaliseMessage_TM;

/* BG_Types_Pkg::Telegram_T */
typedef struct kcg_tag_Telegram_T_BG_Types_Pkg {
  kcg_bool valid;
  kcg_bool checkResult;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  CompressedPackets_T_Common_Types_Pkg packets;
} Telegram_T_BG_Types_Pkg;

/* BG_Types_Pkg::TelegramArray_T */
typedef Telegram_T_BG_Types_Pkg TelegramArray_T_BG_Types_Pkg[8];

/* Receive_TrackSide_Msg_Pkg::TelegramStore_T */
typedef struct kcg_tag_TelegramStore_T_Receive_TrackSide_Msg_Pkg {
  kcg_bool valid;
  Telegram_T_BG_Types_Pkg telegram;
  centerOfBalisePosition_T_BG_Types_Pkg position;
} TelegramStore_T_Receive_TrackSide_Msg_Pkg;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct kcg_tag_RBC_Id_T_Common_Types_Pkg {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} RBC_Id_T_Common_Types_Pkg;

/* API_Msg_Pkg::API_TelegramHeader_T */
typedef struct kcg_tag_API_TelegramHeader_T_API_Msg_Pkg {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} API_TelegramHeader_T_API_Msg_Pkg;

/* BG_Types_Pkg::BG_Message_T */
typedef struct kcg_tag_BG_Message_T_BG_Types_Pkg {
  kcg_bool present;
  TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int numberBalises;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} BG_Message_T_BG_Types_Pkg;

/* UNISIG_Validation_Scenarios::parameter_StoryTest_T */
typedef struct kcg_tag_parameter_StoryTest_T_UNISIG_Validation_Scenarios {
  kcg_real BeginOfTrack;
  kcg_real EndOfTrack;
  kcg_int NumberOfBGs;
} parameter_StoryTest_T_UNISIG_Validation_Scenarios;

/* UNISIG_Validation_Scenarios::test_InfraLibInt::B_data_internal_T */
typedef struct kcg_tag_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct kcg_tag_P027V1_section_int_qdiff_T_TM_baseline2 {
  kcg_int NC_DIFF;
  kcg_int V_DIFF;
} P027V1_section_int_qdiff_T_TM_baseline2;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef kcg_int P027V1_sections_array_flat_qdiff_T_TM_baseline2[64];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef kcg_int P027V1_section_array_qdiff_T_TM_baseline2[2];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef P027V1_section_array_qdiff_T_TM_baseline2 _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2[32];

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct kcg_tag_Radio_TrackTrain_Header_T_Radio_Types_Pkg {
  kcg_int radioDevice;
  T_internal_Type_Obu_BasicTypes_Pkg receivedSystemTime;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_reference;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_SR d_sr;
  T_TRAIN t_sh_rqst;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
  M_VERSION m_version;
} Radio_TrackTrain_Header_T_Radio_Types_Pkg;

/* API_Msg_Pkg::API_RadioMsgHeader_T */
typedef struct kcg_tag_API_RadioMsgHeader_T_API_Msg_Pkg {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} API_RadioMsgHeader_T_API_Msg_Pkg;

/* API_Msg_Pkg::API_TrackSideInput_T */
typedef struct kcg_tag_API_TrackSideInput_T_API_Msg_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} API_TrackSideInput_T_API_Msg_Pkg;

/* Radio_Types_Pkg::RadioMessage_T */
typedef struct kcg_tag_RadioMessage_T_Radio_Types_Pkg {
  kcg_bool present;
  kcg_bool consistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg header;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} RadioMessage_T_Radio_Types_Pkg;

/* Common_Types_Pkg::TrackSide_ForCheck_T */
typedef struct kcg_tag_TrackSide_ForCheck_T_Common_Types_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  MsgSource_T_Common_Types_Pkg msg_type;
  BG_Message_T_BG_Types_Pkg telegramHeaders;
  RadioMessage_T_Radio_Types_Pkg radio_Msg;
} TrackSide_ForCheck_T_Common_Types_Pkg;

/* Receive_TrackSide_Msg_Pkg::BGCollector_T */
typedef struct kcg_tag_BGCollector_T_Receive_TrackSide_Msg_Pkg {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  NID_C C_ID;
  NID_BG BG_ID;
  centerOfBalisePosition_T_BG_Types_Pkg balisePosition;
  centerOfBalisePosition_T_BG_Types_Pkg positionFirstContact;
  kcg_int collectedTelegrams;
  kcg_int totalTelegrams;
} BGCollector_T_Receive_TrackSide_Msg_Pkg;

typedef kcg_int array_int_105[105];

typedef struct kcg_tag_struct_10249 {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TEXTCLASS;
  kcg_int Q_TEXTDISPLAY;
  kcg_int D_TEXTDISPLAY_start;
  kcg_int M_MODETEXTDISPLAY_start;
  kcg_int M_LEVELTEXTDISPLAY_start;
  kcg_int NID_NTC_start;
  kcg_int L_TEXTDISPLAY_end;
  kcg_int T_TEXTDISPLAY_end;
  kcg_int M_MODETEXTDISPLAY_end;
  kcg_int M_LEVELTEXTDISPLAY_end;
  kcg_int NID_NTC_end;
  kcg_int Q_TEXTCONFIRM;
  kcg_int L_TEXT;
  X_TEXT_trackside_T_TM X_TEXT;
} struct_10249;

/* TM::P072V1_trackside_int_T */
typedef struct_10249 _3_P072V1_trackside_int_T_TM;

/* TM_baseline2::P072V1_trackside_int_T */
typedef struct_10249 P072V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_6[6];

typedef P041_section_int_T_TM array_10404[1];

typedef kcg_int array_int_104[104];

typedef kcg_int array_int_5[5];

typedef kcg_int array_int_4[4];

typedef P027V1_section_int_qdiff_T_TM_baseline2 array_10460[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array_10460 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_section_int_T */
typedef struct kcg_tag_P027V1_section_int_T_TM_baseline2 {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} P027V1_section_int_T_TM_baseline2;

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef P027V1_section_int_T_TM_baseline2 P027V1_trackside_sectionlist_T_TM_baseline2[32];

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct kcg_tag_P027V1_trackside_int_T_TM_baseline2 {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER_n;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
  kcg_int N_ITER_k;
  P027V1_trackside_sectionlist_T_TM_baseline2 SECTIONS_SSP;
} P027V1_trackside_int_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef P027V1_section_int_T_TM_baseline2 _2_P027V1_OBU_sectionlist_int_T_TM_baseline2[33];

typedef P027V1_section_int_T_TM_baseline2 array_10421[1];

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array_10460 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef array_int_3 array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_33[33];

typedef array_int_3_33 array_int_3_33_99[99];

typedef N_PIG array_10558[8];

typedef P021_section_int_T_TM array_10565[1];

typedef kcg_int array_int_17[17];

typedef kcg_int array_int_396[396];

typedef _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 array_int_2_32_32[32];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_1[1];

typedef struct kcg_tag_struct_10608 {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct_10608;

/* TM::BaliseGroupData */
typedef struct_10608 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct_10608 BaliseGroupData_Basics;

typedef kcg_int array_int_395[395];

typedef kcg_bool array_bool_8[8];

typedef kcg_int array_int_228[228];

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_68[68];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_272[272];

#ifndef kcg_copy_struct_10249
#define kcg_copy_struct_10249(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10249)))
#endif /* kcg_copy_struct_10249 */

#ifndef kcg_copy_P021_trackside_int_T_TM
#define kcg_copy_P021_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_trackside_int_T_TM)))
#endif /* kcg_copy_P021_trackside_int_T_TM */

#ifndef kcg_copy_P027V1_trackside_int_T_TM_baseline2
#define kcg_copy_P027V1_trackside_int_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_trackside_int_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_trackside_int_T_TM_baseline2 */

#ifndef kcg_copy_P041_trackside_int_T_TM
#define kcg_copy_P041_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_trackside_int_T_TM)))
#endif /* kcg_copy_P041_trackside_int_T_TM */

#ifndef kcg_copy_P041_section_int_T_TM
#define kcg_copy_P041_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_section_int_T_TM)))
#endif /* kcg_copy_P041_section_int_T_TM */

#ifndef kcg_copy_BaliseTelegramHeader_int_T_TM
#define kcg_copy_BaliseTelegramHeader_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BaliseTelegramHeader_int_T_TM)))
#endif /* kcg_copy_BaliseTelegramHeader_int_T_TM */

#ifndef kcg_copy_TelegramHeader_T_BG_Types_Pkg
#define kcg_copy_TelegramHeader_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramHeader_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramHeader_T_BG_Types_Pkg */

#ifndef kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg
#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_TrackTrain_Header_T_Radio_Types_Pkg)))
#endif /* kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg */

#ifndef kcg_copy_MetadataElement_T_Common_Types_Pkg
#define kcg_copy_MetadataElement_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MetadataElement_T_Common_Types_Pkg)))
#endif /* kcg_copy_MetadataElement_T_Common_Types_Pkg */

#ifndef kcg_copy_BG_Message_T_BG_Types_Pkg
#define kcg_copy_BG_Message_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_Message_T_BG_Types_Pkg)))
#endif /* kcg_copy_BG_Message_T_BG_Types_Pkg */

#ifndef kcg_copy_Telegram_T_BG_Types_Pkg
#define kcg_copy_Telegram_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Telegram_T_BG_Types_Pkg)))
#endif /* kcg_copy_Telegram_T_BG_Types_Pkg */

#ifndef kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg
#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LocWithInAcc_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_P027V1_section_int_T_TM_baseline2
#define kcg_copy_P027V1_section_int_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_int_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_int_T_TM_baseline2 */

#ifndef kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt
#define kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt)))
#endif /* kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt */

#ifndef kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg
#define kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrackSide_ForCheck_T_Common_Types_Pkg)))
#endif /* kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg */

#ifndef kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg
#define kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_RadioMsgHeader_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg */

#ifndef kcg_copy_CompressedPackets_T_Common_Types_Pkg
#define kcg_copy_CompressedPackets_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPackets_T_Common_Types_Pkg */

#ifndef kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg
#define kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BGCollector_T_Receive_TrackSide_Msg_Pkg)))
#endif /* kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg */

#ifndef kcg_copy_odometry_T_Obu_BasicTypes_Pkg
#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (odometry_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_odometry_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_RadioMetadata_T_Common_Types_Pkg
#define kcg_copy_RadioMetadata_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioMetadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_RadioMetadata_T_Common_Types_Pkg */

#ifndef kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2
#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_int_qdiff_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (OdometrySpeeds_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios
#define kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (parameter_StoryTest_T_UNISIG_Validation_Scenarios)))
#endif /* kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios */

#ifndef kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (OdometryLocations_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_P021_section_int_T_TM
#define kcg_copy_P021_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_section_int_T_TM)))
#endif /* kcg_copy_P021_section_int_T_TM */

#ifndef kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg
#define kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramStore_T_Receive_TrackSide_Msg_Pkg)))
#endif /* kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg */

#ifndef kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg
#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (centerOfBalisePosition_T_BG_Types_Pkg)))
#endif /* kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg */

#ifndef kcg_copy_CompressedBaliseMessage_TM
#define kcg_copy_CompressedBaliseMessage_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedBaliseMessage_TM)))
#endif /* kcg_copy_CompressedBaliseMessage_TM */

#ifndef kcg_copy_odometryFactors_T_Toolbox
#define kcg_copy_odometryFactors_T_Toolbox(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (odometryFactors_T_Toolbox)))
#endif /* kcg_copy_odometryFactors_T_Toolbox */

#ifndef kcg_copy_struct_10608
#define kcg_copy_struct_10608(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10608)))
#endif /* kcg_copy_struct_10608 */

#ifndef kcg_copy_API_TrackSideInput_T_API_Msg_Pkg
#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_TrackSideInput_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_TrackSideInput_T_API_Msg_Pkg */

#ifndef kcg_copy_API_TelegramHeader_T_API_Msg_Pkg
#define kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_TelegramHeader_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_TelegramHeader_T_API_Msg_Pkg */

#ifndef kcg_copy_RadioMessage_T_Radio_Types_Pkg
#define kcg_copy_RadioMessage_T_Radio_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioMessage_T_Radio_Types_Pkg)))
#endif /* kcg_copy_RadioMessage_T_Radio_Types_Pkg */

#ifndef kcg_copy_RBC_Id_T_Common_Types_Pkg
#define kcg_copy_RBC_Id_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Id_T_Common_Types_Pkg)))
#endif /* kcg_copy_RBC_Id_T_Common_Types_Pkg */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_10404
#define kcg_copy_array_10404(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_10404)))
#endif /* kcg_copy_array_10404 */

#ifndef kcg_copy_array_int_104
#define kcg_copy_array_int_104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_104)))
#endif /* kcg_copy_array_int_104 */

#ifndef kcg_copy_array_10421
#define kcg_copy_array_10421(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_10421)))
#endif /* kcg_copy_array_10421 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_X_TEXT_trackside_T_TM
#define kcg_copy_X_TEXT_trackside_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (X_TEXT_trackside_T_TM)))
#endif /* kcg_copy_X_TEXT_trackside_T_TM */

#ifndef kcg_copy_P041_OBU_sectionlist_int_T_TM
#define kcg_copy_P041_OBU_sectionlist_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P041_OBU_sectionlist_int_T_TM */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_10460
#define kcg_copy_array_10460(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_10460)))
#endif /* kcg_copy_array_10460 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_P021_trackide_sectionlist_T_TM
#define kcg_copy_P021_trackide_sectionlist_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P021_trackide_sectionlist_T_TM */

#ifndef kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2
#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P027V1_sections_array_flat_qdiff_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2
#define kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_2_P027V1_OBU_sectionlist_int_T_TM_baseline2)))
#endif /* kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_3_33_99
#define kcg_copy_array_int_3_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_99)))
#endif /* kcg_copy_array_int_3_33_99 */

#ifndef kcg_copy_array_10558
#define kcg_copy_array_10558(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_10558)))
#endif /* kcg_copy_array_10558 */

#ifndef kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2
#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P027V1_section_array_qdiff_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_array_10565
#define kcg_copy_array_10565(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_10565)))
#endif /* kcg_copy_array_10565 */

#ifndef kcg_copy_array_int_17
#define kcg_copy_array_int_17(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_17)))
#endif /* kcg_copy_array_int_17 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_Metadata_T_Common_Types_Pkg
#define kcg_copy_Metadata_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Metadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_Metadata_T_Common_Types_Pkg */

#ifndef kcg_copy_array_int_2_32_32
#define kcg_copy_array_int_2_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32_32)))
#endif /* kcg_copy_array_int_2_32_32 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_bool_8
#define kcg_copy_array_bool_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_8)))
#endif /* kcg_copy_array_bool_8 */

#ifndef kcg_copy_array_int_228
#define kcg_copy_array_int_228(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_228)))
#endif /* kcg_copy_array_int_228 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_P041_trackide_sectionlist_T_TM
#define kcg_copy_P041_trackide_sectionlist_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P041_trackide_sectionlist_T_TM */

#ifndef kcg_copy_TelegramArray_T_BG_Types_Pkg
#define kcg_copy_TelegramArray_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (TelegramArray_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramArray_T_BG_Types_Pkg */

#ifndef kcg_copy_array_int_3_33_231
#define kcg_copy_array_int_3_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_231)))
#endif /* kcg_copy_array_int_3_33_231 */

#ifndef kcg_copy_P021_OBU_sectionlist_int_T_TM
#define kcg_copy_P021_OBU_sectionlist_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P021_OBU_sectionlist_int_T_TM */

#ifndef kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2
#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P027V1_trackside_sectionlist_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_68
#define kcg_copy_array_int_68(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_68)))
#endif /* kcg_copy_array_int_68 */

#ifndef kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2
#define kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2)))
#endif /* kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_CompressedPacketData_T_Common_Types_Pkg
#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (CompressedPacketData_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPacketData_T_Common_Types_Pkg */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_272
#define kcg_copy_array_int_272(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_272)))
#endif /* kcg_copy_array_int_272 */

#ifdef kcg_use_struct_10249
#ifndef kcg_comp_struct_10249
extern kcg_bool kcg_comp_struct_10249(
  struct_10249 *kcg_c1,
  struct_10249 *kcg_c2);
#endif /* kcg_comp_struct_10249 */
#endif /* kcg_use_struct_10249 */

#ifdef kcg_use_P021_trackside_int_T_TM
#ifndef kcg_comp_P021_trackside_int_T_TM
extern kcg_bool kcg_comp_P021_trackside_int_T_TM(
  P021_trackside_int_T_TM *kcg_c1,
  P021_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_trackside_int_T_TM */
#endif /* kcg_use_P021_trackside_int_T_TM */

#ifdef kcg_use_P027V1_trackside_int_T_TM_baseline2
#ifndef kcg_comp_P027V1_trackside_int_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_trackside_int_T_TM_baseline2(
  P027V1_trackside_int_T_TM_baseline2 *kcg_c1,
  P027V1_trackside_int_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_trackside_int_T_TM_baseline2 */
#endif /* kcg_use_P027V1_trackside_int_T_TM_baseline2 */

#ifdef kcg_use_P041_trackside_int_T_TM
#ifndef kcg_comp_P041_trackside_int_T_TM
extern kcg_bool kcg_comp_P041_trackside_int_T_TM(
  P041_trackside_int_T_TM *kcg_c1,
  P041_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_trackside_int_T_TM */
#endif /* kcg_use_P041_trackside_int_T_TM */

#ifdef kcg_use_P041_section_int_T_TM
#ifndef kcg_comp_P041_section_int_T_TM
extern kcg_bool kcg_comp_P041_section_int_T_TM(
  P041_section_int_T_TM *kcg_c1,
  P041_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_section_int_T_TM */
#endif /* kcg_use_P041_section_int_T_TM */

#ifdef kcg_use_BaliseTelegramHeader_int_T_TM
#ifndef kcg_comp_BaliseTelegramHeader_int_T_TM
extern kcg_bool kcg_comp_BaliseTelegramHeader_int_T_TM(
  BaliseTelegramHeader_int_T_TM *kcg_c1,
  BaliseTelegramHeader_int_T_TM *kcg_c2);
#endif /* kcg_comp_BaliseTelegramHeader_int_T_TM */
#endif /* kcg_use_BaliseTelegramHeader_int_T_TM */

#ifndef kcg_comp_TelegramHeader_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TelegramHeader_T_BG_Types_Pkg(
  TelegramHeader_T_BG_Types_Pkg *kcg_c1,
  TelegramHeader_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_TelegramHeader_T_BG_Types_Pkg
#endif /* kcg_comp_TelegramHeader_T_BG_Types_Pkg */

#ifndef kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c2);
#define kcg_use_Radio_TrackTrain_Header_T_Radio_Types_Pkg
#endif /* kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg */

#ifndef kcg_comp_MetadataElement_T_Common_Types_Pkg
extern kcg_bool kcg_comp_MetadataElement_T_Common_Types_Pkg(
  MetadataElement_T_Common_Types_Pkg *kcg_c1,
  MetadataElement_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_MetadataElement_T_Common_Types_Pkg
#endif /* kcg_comp_MetadataElement_T_Common_Types_Pkg */

#ifdef kcg_use_BG_Message_T_BG_Types_Pkg
#ifndef kcg_comp_BG_Message_T_BG_Types_Pkg
extern kcg_bool kcg_comp_BG_Message_T_BG_Types_Pkg(
  BG_Message_T_BG_Types_Pkg *kcg_c1,
  BG_Message_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_BG_Message_T_BG_Types_Pkg */
#endif /* kcg_use_BG_Message_T_BG_Types_Pkg */

#ifdef kcg_use_Telegram_T_BG_Types_Pkg
#ifndef kcg_comp_Telegram_T_BG_Types_Pkg
extern kcg_bool kcg_comp_Telegram_T_BG_Types_Pkg(
  Telegram_T_BG_Types_Pkg *kcg_c1,
  Telegram_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Telegram_T_BG_Types_Pkg */
#endif /* kcg_use_Telegram_T_BG_Types_Pkg */

#ifdef kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_P027V1_section_int_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_int_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_int_T_TM_baseline2(
  P027V1_section_int_T_TM_baseline2 *kcg_c1,
  P027V1_section_int_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_int_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_int_T_TM_baseline2 */

#ifdef kcg_use_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt
#ifndef kcg_comp_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt
extern kcg_bool kcg_comp_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt *kcg_c1,
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt *kcg_c2);
#endif /* kcg_comp_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt */
#endif /* kcg_use_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt */

#ifdef kcg_use_TrackSide_ForCheck_T_Common_Types_Pkg
#ifndef kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg
extern kcg_bool kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg(
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c1,
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg */
#endif /* kcg_use_TrackSide_ForCheck_T_Common_Types_Pkg */

#ifndef kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg(
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c1,
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c2);
#define kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg
#endif /* kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg */

#ifndef kcg_comp_CompressedPackets_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPackets_T_Common_Types_Pkg(
  CompressedPackets_T_Common_Types_Pkg *kcg_c1,
  CompressedPackets_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_CompressedPackets_T_Common_Types_Pkg
#endif /* kcg_comp_CompressedPackets_T_Common_Types_Pkg */

#ifdef kcg_use_BGCollector_T_Receive_TrackSide_Msg_Pkg
#ifndef kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg
extern kcg_bool kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg(
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg */
#endif /* kcg_use_BGCollector_T_Receive_TrackSide_Msg_Pkg */

#ifdef kcg_use_odometry_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_odometry_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_odometry_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_odometry_T_Obu_BasicTypes_Pkg */

#ifndef kcg_comp_RadioMetadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RadioMetadata_T_Common_Types_Pkg(
  RadioMetadata_T_Common_Types_Pkg *kcg_c1,
  RadioMetadata_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_RadioMetadata_T_Common_Types_Pkg
#endif /* kcg_comp_RadioMetadata_T_Common_Types_Pkg */

#ifdef kcg_use_P027V1_section_int_qdiff_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2(
  P027V1_section_int_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_section_int_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_int_qdiff_T_TM_baseline2 */

#ifdef kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_parameter_StoryTest_T_UNISIG_Validation_Scenarios
#ifndef kcg_comp_parameter_StoryTest_T_UNISIG_Validation_Scenarios
extern kcg_bool kcg_comp_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
  parameter_StoryTest_T_UNISIG_Validation_Scenarios *kcg_c1,
  parameter_StoryTest_T_UNISIG_Validation_Scenarios *kcg_c2);
#endif /* kcg_comp_parameter_StoryTest_T_UNISIG_Validation_Scenarios */
#endif /* kcg_use_parameter_StoryTest_T_UNISIG_Validation_Scenarios */

#ifdef kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_P021_section_int_T_TM
#ifndef kcg_comp_P021_section_int_T_TM
extern kcg_bool kcg_comp_P021_section_int_T_TM(
  P021_section_int_T_TM *kcg_c1,
  P021_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_section_int_T_TM */
#endif /* kcg_use_P021_section_int_T_TM */

#ifdef kcg_use_TelegramStore_T_Receive_TrackSide_Msg_Pkg
#ifndef kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg
extern kcg_bool kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg */
#endif /* kcg_use_TelegramStore_T_Receive_TrackSide_Msg_Pkg */

#ifdef kcg_use_centerOfBalisePosition_T_BG_Types_Pkg
#ifndef kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg
extern kcg_bool kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c1,
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg */
#endif /* kcg_use_centerOfBalisePosition_T_BG_Types_Pkg */

#ifdef kcg_use_CompressedBaliseMessage_TM
#ifndef kcg_comp_CompressedBaliseMessage_TM
extern kcg_bool kcg_comp_CompressedBaliseMessage_TM(
  CompressedBaliseMessage_TM *kcg_c1,
  CompressedBaliseMessage_TM *kcg_c2);
#endif /* kcg_comp_CompressedBaliseMessage_TM */
#endif /* kcg_use_CompressedBaliseMessage_TM */

#ifdef kcg_use_odometryFactors_T_Toolbox
#ifndef kcg_comp_odometryFactors_T_Toolbox
extern kcg_bool kcg_comp_odometryFactors_T_Toolbox(
  odometryFactors_T_Toolbox *kcg_c1,
  odometryFactors_T_Toolbox *kcg_c2);
#endif /* kcg_comp_odometryFactors_T_Toolbox */
#endif /* kcg_use_odometryFactors_T_Toolbox */

#ifdef kcg_use_struct_10608
#ifndef kcg_comp_struct_10608
extern kcg_bool kcg_comp_struct_10608(
  struct_10608 *kcg_c1,
  struct_10608 *kcg_c2);
#endif /* kcg_comp_struct_10608 */
#endif /* kcg_use_struct_10608 */

#ifdef kcg_use_API_TrackSideInput_T_API_Msg_Pkg
#ifndef kcg_comp_API_TrackSideInput_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_TrackSideInput_T_API_Msg_Pkg(
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c1,
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_TrackSideInput_T_API_Msg_Pkg */
#endif /* kcg_use_API_TrackSideInput_T_API_Msg_Pkg */

#ifdef kcg_use_API_TelegramHeader_T_API_Msg_Pkg
#ifndef kcg_comp_API_TelegramHeader_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_TelegramHeader_T_API_Msg_Pkg(
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c1,
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_TelegramHeader_T_API_Msg_Pkg */
#endif /* kcg_use_API_TelegramHeader_T_API_Msg_Pkg */

#ifdef kcg_use_RadioMessage_T_Radio_Types_Pkg
#ifndef kcg_comp_RadioMessage_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_RadioMessage_T_Radio_Types_Pkg(
  RadioMessage_T_Radio_Types_Pkg *kcg_c1,
  RadioMessage_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RadioMessage_T_Radio_Types_Pkg */
#endif /* kcg_use_RadioMessage_T_Radio_Types_Pkg */

#ifndef kcg_comp_RBC_Id_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RBC_Id_T_Common_Types_Pkg(
  RBC_Id_T_Common_Types_Pkg *kcg_c1,
  RBC_Id_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_RBC_Id_T_Common_Types_Pkg
#endif /* kcg_comp_RBC_Id_T_Common_Types_Pkg */

#ifdef kcg_use_array_int_105
#ifndef kcg_comp_array_int_105
extern kcg_bool kcg_comp_array_int_105(
  array_int_105 *kcg_c1,
  array_int_105 *kcg_c2);
#endif /* kcg_comp_array_int_105 */
#endif /* kcg_use_array_int_105 */

#ifdef kcg_use_array_int_6
#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */
#endif /* kcg_use_array_int_6 */

#ifdef kcg_use_array_10404
#ifndef kcg_comp_array_10404
extern kcg_bool kcg_comp_array_10404(array_10404 *kcg_c1, array_10404 *kcg_c2);
#endif /* kcg_comp_array_10404 */
#endif /* kcg_use_array_10404 */

#ifdef kcg_use_array_int_104
#ifndef kcg_comp_array_int_104
extern kcg_bool kcg_comp_array_int_104(
  array_int_104 *kcg_c1,
  array_int_104 *kcg_c2);
#endif /* kcg_comp_array_int_104 */
#endif /* kcg_use_array_int_104 */

#ifdef kcg_use_array_10421
#ifndef kcg_comp_array_10421
extern kcg_bool kcg_comp_array_10421(array_10421 *kcg_c1, array_10421 *kcg_c2);
#endif /* kcg_comp_array_10421 */
#endif /* kcg_use_array_10421 */

#ifdef kcg_use_array_int_5
#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */
#endif /* kcg_use_array_int_5 */

#ifdef kcg_use_X_TEXT_trackside_T_TM
#ifndef kcg_comp_X_TEXT_trackside_T_TM
extern kcg_bool kcg_comp_X_TEXT_trackside_T_TM(
  X_TEXT_trackside_T_TM *kcg_c1,
  X_TEXT_trackside_T_TM *kcg_c2);
#endif /* kcg_comp_X_TEXT_trackside_T_TM */
#endif /* kcg_use_X_TEXT_trackside_T_TM */

#ifdef kcg_use_P041_OBU_sectionlist_int_T_TM
#ifndef kcg_comp_P041_OBU_sectionlist_int_T_TM
extern kcg_bool kcg_comp_P041_OBU_sectionlist_int_T_TM(
  P041_OBU_sectionlist_int_T_TM *kcg_c1,
  P041_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_sectionlist_int_T_TM */
#endif /* kcg_use_P041_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_array_int_4
#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */
#endif /* kcg_use_array_int_4 */

#ifdef kcg_use_array_10460
#ifndef kcg_comp_array_10460
extern kcg_bool kcg_comp_array_10460(array_10460 *kcg_c1, array_10460 *kcg_c2);
#endif /* kcg_comp_array_10460 */
#endif /* kcg_use_array_10460 */

#ifdef kcg_use_array_int_3_33
#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */
#endif /* kcg_use_array_int_3_33 */

#ifdef kcg_use_P021_trackide_sectionlist_T_TM
#ifndef kcg_comp_P021_trackide_sectionlist_T_TM
extern kcg_bool kcg_comp_P021_trackide_sectionlist_T_TM(
  P021_trackide_sectionlist_T_TM *kcg_c1,
  P021_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P021_trackide_sectionlist_T_TM */
#endif /* kcg_use_P021_trackide_sectionlist_T_TM */

#ifdef kcg_use_P027V1_sections_array_flat_qdiff_T_TM_baseline2
#ifndef kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 */
#endif /* kcg_use_P027V1_sections_array_flat_qdiff_T_TM_baseline2 */

#ifdef kcg_use_array_int_3
#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */
#endif /* kcg_use_array_int_3 */

#ifdef kcg_use__2_P027V1_OBU_sectionlist_int_T_TM_baseline2
#ifndef kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2
extern kcg_bool kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(
  _2_P027V1_OBU_sectionlist_int_T_TM_baseline2 *kcg_c1,
  _2_P027V1_OBU_sectionlist_int_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 */
#endif /* kcg_use__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 */

#ifdef kcg_use_array_int_33
#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */
#endif /* kcg_use_array_int_33 */

#ifdef kcg_use_array_int_3_33_99
#ifndef kcg_comp_array_int_3_33_99
extern kcg_bool kcg_comp_array_int_3_33_99(
  array_int_3_33_99 *kcg_c1,
  array_int_3_33_99 *kcg_c2);
#endif /* kcg_comp_array_int_3_33_99 */
#endif /* kcg_use_array_int_3_33_99 */

#ifdef kcg_use_array_10558
#ifndef kcg_comp_array_10558
extern kcg_bool kcg_comp_array_10558(array_10558 *kcg_c1, array_10558 *kcg_c2);
#endif /* kcg_comp_array_10558 */
#endif /* kcg_use_array_10558 */

#ifdef kcg_use_P027V1_section_array_qdiff_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2(
  P027V1_section_array_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_section_array_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_array_qdiff_T_TM_baseline2 */

#ifdef kcg_use_array_10565
#ifndef kcg_comp_array_10565
extern kcg_bool kcg_comp_array_10565(array_10565 *kcg_c1, array_10565 *kcg_c2);
#endif /* kcg_comp_array_10565 */
#endif /* kcg_use_array_10565 */

#ifdef kcg_use_array_int_17
#ifndef kcg_comp_array_int_17
extern kcg_bool kcg_comp_array_int_17(
  array_int_17 *kcg_c1,
  array_int_17 *kcg_c2);
#endif /* kcg_comp_array_int_17 */
#endif /* kcg_use_array_int_17 */

#ifdef kcg_use_array_int_396
#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */
#endif /* kcg_use_array_int_396 */

#ifndef kcg_comp_Metadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_Metadata_T_Common_Types_Pkg(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_Metadata_T_Common_Types_Pkg
#endif /* kcg_comp_Metadata_T_Common_Types_Pkg */

#ifdef kcg_use_array_int_2_32_32
#ifndef kcg_comp_array_int_2_32_32
extern kcg_bool kcg_comp_array_int_2_32_32(
  array_int_2_32_32 *kcg_c1,
  array_int_2_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32_32 */
#endif /* kcg_use_array_int_2_32_32 */

#ifdef kcg_use_array_int_494
#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */
#endif /* kcg_use_array_int_494 */

#ifdef kcg_use_array_int_1
#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */
#endif /* kcg_use_array_int_1 */

#ifdef kcg_use_array_int_395
#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */
#endif /* kcg_use_array_int_395 */

#ifdef kcg_use_array_bool_8
#ifndef kcg_comp_array_bool_8
extern kcg_bool kcg_comp_array_bool_8(
  array_bool_8 *kcg_c1,
  array_bool_8 *kcg_c2);
#endif /* kcg_comp_array_bool_8 */
#endif /* kcg_use_array_bool_8 */

#ifdef kcg_use_array_int_228
#ifndef kcg_comp_array_int_228
extern kcg_bool kcg_comp_array_int_228(
  array_int_228 *kcg_c1,
  array_int_228 *kcg_c2);
#endif /* kcg_comp_array_int_228 */
#endif /* kcg_use_array_int_228 */

#ifdef kcg_use_array_int_99
#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */
#endif /* kcg_use_array_int_99 */

#ifdef kcg_use_P041_trackide_sectionlist_T_TM
#ifndef kcg_comp_P041_trackide_sectionlist_T_TM
extern kcg_bool kcg_comp_P041_trackide_sectionlist_T_TM(
  P041_trackide_sectionlist_T_TM *kcg_c1,
  P041_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P041_trackide_sectionlist_T_TM */
#endif /* kcg_use_P041_trackide_sectionlist_T_TM */

#ifdef kcg_use_TelegramArray_T_BG_Types_Pkg
#ifndef kcg_comp_TelegramArray_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TelegramArray_T_BG_Types_Pkg(
  TelegramArray_T_BG_Types_Pkg *kcg_c1,
  TelegramArray_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramArray_T_BG_Types_Pkg */
#endif /* kcg_use_TelegramArray_T_BG_Types_Pkg */

#ifdef kcg_use_array_int_3_33_231
#ifndef kcg_comp_array_int_3_33_231
extern kcg_bool kcg_comp_array_int_3_33_231(
  array_int_3_33_231 *kcg_c1,
  array_int_3_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_3_33_231 */
#endif /* kcg_use_array_int_3_33_231 */

#ifdef kcg_use_P021_OBU_sectionlist_int_T_TM
#ifndef kcg_comp_P021_OBU_sectionlist_int_T_TM
extern kcg_bool kcg_comp_P021_OBU_sectionlist_int_T_TM(
  P021_OBU_sectionlist_int_T_TM *kcg_c1,
  P021_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_sectionlist_int_T_TM */
#endif /* kcg_use_P021_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_P027V1_trackside_sectionlist_T_TM_baseline2
#ifndef kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2(
  P027V1_trackside_sectionlist_T_TM_baseline2 *kcg_c1,
  P027V1_trackside_sectionlist_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 */
#endif /* kcg_use_P027V1_trackside_sectionlist_T_TM_baseline2 */

#ifdef kcg_use_array_int_432
#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */
#endif /* kcg_use_array_int_432 */

#ifdef kcg_use_array_int_68
#ifndef kcg_comp_array_int_68
extern kcg_bool kcg_comp_array_int_68(
  array_int_68 *kcg_c1,
  array_int_68 *kcg_c2);
#endif /* kcg_comp_array_int_68 */
#endif /* kcg_use_array_int_68 */

#ifdef kcg_use__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2
#ifndef kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(
  _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 *kcg_c1,
  _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 */
#endif /* kcg_use__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 */

#ifndef kcg_comp_CompressedPacketData_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
  CompressedPacketData_T_Common_Types_Pkg *kcg_c1,
  CompressedPacketData_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_CompressedPacketData_T_Common_Types_Pkg
#endif /* kcg_comp_CompressedPacketData_T_Common_Types_Pkg */

#ifdef kcg_use_array_int_500_500
#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */
#endif /* kcg_use_array_int_500_500 */

#ifdef kcg_use_array_int_272
#ifndef kcg_comp_array_int_272
extern kcg_bool kcg_comp_array_int_272(
  array_int_272 *kcg_c1,
  array_int_272 *kcg_c2);
#endif /* kcg_comp_array_int_272 */
#endif /* kcg_use_array_int_272 */

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct_10608

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct_10608

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array_10460

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array_10460

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array_10460

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array_10460

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P072V1_trackside_int_T_TM_baseline2 kcg_comp_struct_10249

#define kcg_copy_P072V1_trackside_int_T_TM_baseline2 kcg_copy_struct_10249

#define kcg_comp__3_P072V1_trackside_int_T_TM kcg_comp_struct_10249

#define kcg_copy__3_P072V1_trackside_int_T_TM kcg_copy_struct_10249

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct_10608

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct_10608

#endif /* _KCG_TYPES_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_types.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

