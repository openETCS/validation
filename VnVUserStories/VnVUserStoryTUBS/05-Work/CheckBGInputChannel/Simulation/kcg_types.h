/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/modeling/model/Scade/System/OBU_PreIntegrations/TestBenchExample/MultiplexerCheck/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T13:56:05
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
typedef unsigned char kcg_char;
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

/* Q_DIRLRBG */
typedef enum {
  Q_DIRLRBG_Reverse = 0,
  Q_DIRLRBG_Nominal = 1,
  Q_DIRLRBG_Unknown = 2
} Q_DIRLRBG;
/* Q_DIRTRAIN */
typedef enum {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
/* Q_UPDOWN */
typedef enum {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_MEDIA */
typedef enum { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
/* M_DUP */
typedef enum {
  M_DUP_No_duplicates = 0,
  _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* Q_LINK */
typedef enum { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* Obu_BasicTypes_Pkg::odoMotionState_T */
typedef enum {
  noMotion_Obu_BasicTypes_Pkg,
  Motion_Obu_BasicTypes_Pkg
} odoMotionState_T_Obu_BasicTypes_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionDirection_T */
typedef enum {
  unknownDirection_Obu_BasicTypes_Pkg,
  cabAFirst_Obu_BasicTypes_Pkg,
  cabBFirst_Obu_BasicTypes_Pkg
} odoMotionDirection_T_Obu_BasicTypes_Pkg;
/* Common_Types_Pkg::MsgSource_T */
typedef enum {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* M_ACK */
typedef enum {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* N_TOTAL */
typedef enum {
  N_TOTAL_1_balise_in_the_group = 0,
  N_TOTAL_2_balises_in_the_group = 1,
  N_TOTAL_3_balises_in_the_group = 2,
  N_TOTAL_4_balises_in_the_group = 3,
  N_TOTAL_5_balises_in_the_group = 4,
  N_TOTAL_6_balises_in_the_group = 5,
  N_TOTAL_7_balises_in_the_group = 6,
  N_TOTAL_8_balises_in_the_group = 7
} N_TOTAL;
/* N_PIG */
typedef enum {
  N_PIG_I_am_the_1st = 0,
  N_PIG_I_am_the_2nd = 1,
  N_PIG_I_am_the_3rd = 2,
  N_PIG_I_am_the_4th = 3,
  N_PIG_I_am_the_5th = 4,
  N_PIG_I_am_the_6th = 5,
  N_PIG_I_am_the_7th = 6,
  N_PIG_I_am_the_8th = 7
} N_PIG;
/* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_NominalDir_1_SM1,
  SSM_TR_NominalDir_2_SM1,
  SSM_TR_No_BG_1_SM1,
  SSM_TR_No_BG_2_SM1
} SSM_TR_SM1;
/* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */
typedef enum {
  SSM_st_NominalDir_SM1,
  SSM_st_ReverseDir_SM1,
  SSM_st_No_BG_SM1
} SSM_ST_SM1;
/* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */
typedef enum {
  SSM_TR_no_trans_SM2_SM1_NominalDir,
  SSM_TR_FirstBalise_1_SM2_SM1_NominalDir,
  SSM_TR_FirstBalise_2_SM2_SM1_NominalDir,
  SSM_TR_FirstBalise_3_SM2_SM1_NominalDir,
  SSM_TR_FirstBalise_4_SM2_SM1_NominalDir,
  SSM_TR_SecondBalise_1_SM2_SM1_NominalDir,
  SSM_TR_SecondBalise_2_SM2_SM1_NominalDir,
  SSM_TR_SecondBalise_3_SM2_SM1_NominalDir,
  SSM_TR_Wait_1_SM2_SM1_NominalDir,
  SSM_TR_Wait_2_SM2_SM1_NominalDir,
  SSM_TR_Wait_3_SM2_SM1_NominalDir,
  SSM_TR_Wait_4_SM2_SM1_NominalDir,
  SSM_TR_Wait_5_SM2_SM1_NominalDir,
  SSM_TR_Wait_6_SM2_SM1_NominalDir,
  SSM_TR_Wait_7_SM2_SM1_NominalDir,
  SSM_TR_Wait_8_SM2_SM1_NominalDir,
  SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir,
  SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir,
  SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir,
  SSM_TR_FourthBalise_1_SM2_SM1_NominalDir,
  SSM_TR_FourthBalise_2_SM2_SM1_NominalDir,
  SSM_TR_FourthBalise_3_SM2_SM1_NominalDir,
  SSM_TR_FifthBalise_1_SM2_SM1_NominalDir,
  SSM_TR_FifthBalise_2_SM2_SM1_NominalDir,
  SSM_TR_FifthBalise_3_SM2_SM1_NominalDir,
  SSM_TR_SixthBalise_1_SM2_SM1_NominalDir,
  SSM_TR_SixthBalise_2_SM2_SM1_NominalDir,
  SSM_TR_SixthBalise_3_SM2_SM1_NominalDir,
  SSM_TR_SevensBalise_1_SM2_SM1_NominalDir,
  SSM_TR_SevensBalise_2_SM2_SM1_NominalDir,
  SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir
} SSM_TR_SM2_SM1_NominalDir;
/* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */
typedef enum {
  SSM_st_FirstBalise_SM1_NominalDir_SM2,
  SSM_st_SecondBalise_SM1_NominalDir_SM2,
  SSM_st_Wait_SM1_NominalDir_SM2,
  SSM_st_ThirdBalise_SM1_NominalDir_SM2,
  SSM_st_FourthBalise_SM1_NominalDir_SM2,
  SSM_st_FifthBalise_SM1_NominalDir_SM2,
  SSM_st_SixthBalise_SM1_NominalDir_SM2,
  SSM_st_SevensBalise_SM1_NominalDir_SM2,
  SSM_st_LastBaliseinBG_SM1_NominalDir_SM2
} SSM_ST_SM2_SM1_NominalDir;
/* T_TRAIN */
typedef kcg_real T_TRAIN;

/* CheckBGInputChannel_Pkg::Completeness */
typedef kcg_bool Completeness_CheckBGInputChannel_Pkg;

/* CheckBGInputChannel_Pkg::Consistency */
typedef kcg_bool Consistency_CheckBGInputChannel_Pkg;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_C */
typedef kcg_int NID_C;

/* NID_BG */
typedef kcg_int NID_BG;

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

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* Q_NVLOCACC */
typedef kcg_int Q_NVLOCACC;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_Pkg;

typedef struct {
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
} struct__2603;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__2603 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__2624;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__2624 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__2632[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__2632 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__2635;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__2635 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool t_train_reference;
  kcg_bool nid_em;
  kcg_bool q_scale;
  kcg_bool d_sr;
  kcg_bool t_sh_rqst;
  kcg_bool d_ref;
  kcg_bool q_dir;
  kcg_bool d_emergencystop;
  kcg_bool m_version;
} struct__2640;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__2640 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} struct__2652;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__2652 LocWithInAcc_T_Obu_BasicTypes_Pkg;

typedef struct {
  V_internal_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_lower;
  V_internal_Type_Obu_BasicTypes_Pkg v_upper;
} struct__2658;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__2658 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} struct__2665;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__2665 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
} struct__2671;

/* API_Msg_Pkg::API_RadioMsgHeader_T */
typedef struct__2671 API_RadioMsgHeader_T_API_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__2678;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__2678 odometry_T_Obu_BasicTypes_Pkg;

typedef struct {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} struct__2688;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef struct__2688 centerOfBalisePosition_T_BG_Types_Pkg;

typedef struct {
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
} struct__2693;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__2693 TelegramHeader_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} struct__2706;

/* API_Msg_Pkg::API_TelegramHeader_T */
typedef struct__2706 API_TelegramHeader_T_API_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__2714;

/* API_Msg_Pkg::API_TrackSideInput_T */
typedef struct__2714 API_TrackSideInput_T_API_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_TOTAL n_total;
  M_MCOUNT m_mcount;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  odometry_T_Obu_BasicTypes_Pkg bgPosition;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
  Q_NVLOCACC q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
} struct__2723;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__2723 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__2741;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__2741 ReceivedMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  ReceivedMessage_T_Common_Types_Pkg BG;
  Completeness_CheckBGInputChannel_Pkg complete;
  Consistency_CheckBGInputChannel_Pkg consistent;
  T_internal_Type_Obu_BasicTypes_Pkg TimeStamp;
} struct__2750;

/* CheckBGInputChannel_Pkg::ReceivedBG */
typedef struct__2750 ReceivedBG_CheckBGInputChannel_Pkg;

typedef ReceivedBG_CheckBGInputChannel_Pkg array__2758[10];

/* CheckBGInputChannel_Pkg::ReceivedBGs */
typedef array__2758 ReceivedBGs_CheckBGInputChannel_Pkg;

#ifndef kcg_copy_struct__2603
#define kcg_copy_struct__2603(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2603)))
#endif /* kcg_copy_struct__2603 */

#ifndef kcg_copy_struct__2624
#define kcg_copy_struct__2624(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2624)))
#endif /* kcg_copy_struct__2624 */

#ifndef kcg_copy_struct__2635
#define kcg_copy_struct__2635(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2635)))
#endif /* kcg_copy_struct__2635 */

#ifndef kcg_copy_struct__2640
#define kcg_copy_struct__2640(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2640)))
#endif /* kcg_copy_struct__2640 */

#ifndef kcg_copy_struct__2652
#define kcg_copy_struct__2652(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2652)))
#endif /* kcg_copy_struct__2652 */

#ifndef kcg_copy_struct__2658
#define kcg_copy_struct__2658(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2658)))
#endif /* kcg_copy_struct__2658 */

#ifndef kcg_copy_struct__2665
#define kcg_copy_struct__2665(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2665)))
#endif /* kcg_copy_struct__2665 */

#ifndef kcg_copy_struct__2671
#define kcg_copy_struct__2671(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2671)))
#endif /* kcg_copy_struct__2671 */

#ifndef kcg_copy_struct__2678
#define kcg_copy_struct__2678(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2678)))
#endif /* kcg_copy_struct__2678 */

#ifndef kcg_copy_struct__2688
#define kcg_copy_struct__2688(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2688)))
#endif /* kcg_copy_struct__2688 */

#ifndef kcg_copy_struct__2693
#define kcg_copy_struct__2693(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2693)))
#endif /* kcg_copy_struct__2693 */

#ifndef kcg_copy_struct__2706
#define kcg_copy_struct__2706(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2706)))
#endif /* kcg_copy_struct__2706 */

#ifndef kcg_copy_struct__2714
#define kcg_copy_struct__2714(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2714)))
#endif /* kcg_copy_struct__2714 */

#ifndef kcg_copy_struct__2723
#define kcg_copy_struct__2723(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2723)))
#endif /* kcg_copy_struct__2723 */

#ifndef kcg_copy_struct__2741
#define kcg_copy_struct__2741(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2741)))
#endif /* kcg_copy_struct__2741 */

#ifndef kcg_copy_struct__2750
#define kcg_copy_struct__2750(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2750)))
#endif /* kcg_copy_struct__2750 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__2632
#define kcg_copy_array__2632(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2632)))
#endif /* kcg_copy_array__2632 */

#ifndef kcg_copy_array__2758
#define kcg_copy_array__2758(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2758)))
#endif /* kcg_copy_array__2758 */

#ifndef kcg_comp_struct__2603
extern kcg_bool kcg_comp_struct__2603(
  struct__2603 *kcg_c1,
  struct__2603 *kcg_c2);
#endif /* kcg_comp_struct__2603 */

#ifndef kcg_comp_struct__2624
extern kcg_bool kcg_comp_struct__2624(
  struct__2624 *kcg_c1,
  struct__2624 *kcg_c2);
#endif /* kcg_comp_struct__2624 */

#ifndef kcg_comp_struct__2635
extern kcg_bool kcg_comp_struct__2635(
  struct__2635 *kcg_c1,
  struct__2635 *kcg_c2);
#endif /* kcg_comp_struct__2635 */

#ifndef kcg_comp_struct__2640
extern kcg_bool kcg_comp_struct__2640(
  struct__2640 *kcg_c1,
  struct__2640 *kcg_c2);
#endif /* kcg_comp_struct__2640 */

#ifndef kcg_comp_struct__2652
extern kcg_bool kcg_comp_struct__2652(
  struct__2652 *kcg_c1,
  struct__2652 *kcg_c2);
#endif /* kcg_comp_struct__2652 */

#ifndef kcg_comp_struct__2658
extern kcg_bool kcg_comp_struct__2658(
  struct__2658 *kcg_c1,
  struct__2658 *kcg_c2);
#endif /* kcg_comp_struct__2658 */

#ifndef kcg_comp_struct__2665
extern kcg_bool kcg_comp_struct__2665(
  struct__2665 *kcg_c1,
  struct__2665 *kcg_c2);
#endif /* kcg_comp_struct__2665 */

#ifndef kcg_comp_struct__2671
extern kcg_bool kcg_comp_struct__2671(
  struct__2671 *kcg_c1,
  struct__2671 *kcg_c2);
#endif /* kcg_comp_struct__2671 */

#ifndef kcg_comp_struct__2678
extern kcg_bool kcg_comp_struct__2678(
  struct__2678 *kcg_c1,
  struct__2678 *kcg_c2);
#endif /* kcg_comp_struct__2678 */

#ifndef kcg_comp_struct__2688
extern kcg_bool kcg_comp_struct__2688(
  struct__2688 *kcg_c1,
  struct__2688 *kcg_c2);
#endif /* kcg_comp_struct__2688 */

#ifndef kcg_comp_struct__2693
extern kcg_bool kcg_comp_struct__2693(
  struct__2693 *kcg_c1,
  struct__2693 *kcg_c2);
#endif /* kcg_comp_struct__2693 */

#ifndef kcg_comp_struct__2706
extern kcg_bool kcg_comp_struct__2706(
  struct__2706 *kcg_c1,
  struct__2706 *kcg_c2);
#endif /* kcg_comp_struct__2706 */

#ifndef kcg_comp_struct__2714
extern kcg_bool kcg_comp_struct__2714(
  struct__2714 *kcg_c1,
  struct__2714 *kcg_c2);
#endif /* kcg_comp_struct__2714 */

#ifndef kcg_comp_struct__2723
extern kcg_bool kcg_comp_struct__2723(
  struct__2723 *kcg_c1,
  struct__2723 *kcg_c2);
#endif /* kcg_comp_struct__2723 */

#ifndef kcg_comp_struct__2741
extern kcg_bool kcg_comp_struct__2741(
  struct__2741 *kcg_c1,
  struct__2741 *kcg_c2);
#endif /* kcg_comp_struct__2741 */

#ifndef kcg_comp_struct__2750
extern kcg_bool kcg_comp_struct__2750(
  struct__2750 *kcg_c1,
  struct__2750 *kcg_c2);
#endif /* kcg_comp_struct__2750 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__2632
extern kcg_bool kcg_comp_array__2632(array__2632 *kcg_c1, array__2632 *kcg_c2);
#endif /* kcg_comp_array__2632 */

#ifndef kcg_comp_array__2758
extern kcg_bool kcg_comp_array__2758(array__2758 *kcg_c1, array__2758 *kcg_c2);
#endif /* kcg_comp_array__2758 */

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__2658

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__2658

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__2665

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__2665

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__2678

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__2678

#define kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg kcg_comp_struct__2671

#define kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg kcg_copy_struct__2671

#define kcg_comp_API_TelegramHeader_T_API_Msg_Pkg kcg_comp_struct__2706

#define kcg_copy_API_TelegramHeader_T_API_Msg_Pkg kcg_copy_struct__2706

#define kcg_comp_API_TrackSideInput_T_API_Msg_Pkg kcg_comp_struct__2714

#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg kcg_copy_struct__2714

#define kcg_comp_ReceivedBGs_CheckBGInputChannel_Pkg kcg_comp_array__2758

#define kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg kcg_copy_array__2758

#define kcg_comp_ReceivedBG_CheckBGInputChannel_Pkg kcg_comp_struct__2750

#define kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg kcg_copy_struct__2750

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__2603

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__2603

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__2723

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__2723

#define kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg kcg_comp_struct__2688

#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg kcg_copy_struct__2688

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__2693

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__2693

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__2741

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__2741

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__2624

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__2624

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__2632

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__2632

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__2635

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__2635

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__2640

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__2640

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__2652

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__2652

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

