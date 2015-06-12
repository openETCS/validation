/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
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

/* DataDictionary_Pkg::LevelDecisionTableActionKind */
typedef enum {
  LD_Invalid_DataDictionary_Pkg,
  LD_Accept_DataDictionary_Pkg,
  LD_Reject_DataDictionary_Pkg,
  LD_NotRelevant_DataDictionary_Pkg,
  LD_StoreIfPendingL1Transition_DataDictionary_Pkg,
  LD_StoreIfPendingL2L3Transition_DataDictionary_Pkg,
  LD_RejectIfPendingAckOfTrainData_DataDictionary_Pkg,
  LD_DUMMY1_DataDictionary_Pkg,
  LD_RejectIfEmergencyBrakeActive_DataDictionary_Pkg,
  LD_StoreIfPendingNTCTransition_DataDictionary_Pkg,
  LD_RejectIfNoPendingNTCTransition_DataDictionary_Pkg,
  LD_DUMMY2_DataDictionary_Pkg,
  LD_RejectIfNoL2L3TransitionStored_DataDictionary_Pkg,
  LD_DUMMY3_DataDictionary_Pkg,
  LD_DUMMY4_DataDictionary_Pkg,
  LD_DUMMY5_DataDictionary_Pkg,
  LD_DUMMY6_DataDictionary_Pkg
} LevelDecisionTableActionKind_DataDictionary_Pkg;
/* DataDictionary_Pkg::ModeDecisionTableActionKind */
typedef enum {
  Accept_DataDictionary_Pkg,
  Reject_DataDictionary_Pkg,
  NotRelevant_DataDictionary_Pkg,
  IfCabActive_DataDictionary_Pkg,
  IfTrainDataStored_DataDictionary_Pkg,
  IfFollowingExitTRMode_DataDictionary_Pkg
} ModeDecisionTableActionKind_DataDictionary_Pkg;
/* M_LOC */
typedef enum {
  M_LOC_Now = 0,
  M_LOC_Every_LRBG_compliant_balise_group = 1,
  M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group = 2
} M_LOC;
/* Q_LGTLOC */
typedef enum {
  Q_LGTLOC_Min_safe_rear_end = 0,
  Q_LGTLOC_Max_safe_front_end = 1
} Q_LGTLOC;
/* Q_RBC */
typedef enum {
  Q_RBC_Terminate_communication_session = 0,
  Q_RBC_Establish_communication_session = 1
} Q_RBC;
/* Q_SLEEPSESSION */
typedef enum {
  Q_SLEEPSESSION_Ignore_session_establishment_order = 0,
  Q_SLEEPSESSION_Execute_session_establishment_order = 1
} Q_SLEEPSESSION;
/* Radio_Types_Pkg::sessionStatus_Type */
typedef enum {
  morc_st_inactive_Radio_Types_Pkg,
  morc_st_establishing_Radio_Types_Pkg,
  morc_st_maintaining_Radio_Types_Pkg,
  morc_st_terminating_Radio_Types_Pkg
} sessionStatus_Type_Radio_Types_Pkg;
/* Common_Types_Pkg::MsgSource_T */
typedef enum {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* M_ACK */
typedef enum {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
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
/* M_DUP */
typedef enum {
  M_DUP_No_duplicates = 0,
  _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* TM::OrBG */
typedef enum { Amsterdam_TM, Utrecht_TM } OrBG_TM;
/* TM::OrLine */
typedef enum { N_TM, Z_TM } OrLine_TM;
/* Q_DLRBG */
typedef enum {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
/* Q_UPDOWN */
typedef enum {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* Q_MEDIA */
typedef enum { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
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
/* Q_LINK */
typedef enum { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
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
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* Q_LINKORIENTATION */
typedef enum {
  _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1
} Q_LINKORIENTATION;
/* Q_NEWCOUNTRY */
typedef enum {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} Q_NEWCOUNTRY;
/* Q_LINKREACTION */
typedef enum {
  Q_LINKREACTION_Train_trip = 0,
  Q_LINKREACTION_Apply_service_brake = 1,
  Q_LINKREACTION_No_Reaction = 2
} Q_LINKREACTION;
/* M_MODE */
typedef enum {
  M_MODE_Full_Supervision = 0,
  M_MODE_On_Sight = 1,
  M_MODE_Staff_Responsible = 2,
  M_MODE_Shunting = 3,
  M_MODE_Unfitted = 4,
  M_MODE_Sleeping = 5,
  M_MODE_Stand_By = 6,
  M_MODE_Trip = 7,
  M_MODE_Post_Trip = 8,
  M_MODE_System_Failure = 9,
  M_MODE_Isolation = 10,
  M_MODE_Non_Leading = 11,
  M_MODE_Limited_Supervision = 12,
  M_MODE_National_System = 13,
  M_MODE_Reversing = 14,
  M_MODE_Passive_Shunting = 15,
  M_MODE_No_Power = 16
} M_MODE;
/* M_LEVEL */
typedef enum {
  M_LEVEL_Level_0 = 0,
  M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
/* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */
typedef enum {
  _4_SSM_TR_no_trans_SM1,
  SSM_TR_NominalDir_1_SM1,
  SSM_TR_NominalDir_2_SM1,
  SSM_TR_NominalDir_3_SM1,
  SSM_TR_NominalDir_4_SM1,
  SSM_TR_ReverseDir_1_SM1,
  SSM_TR_ReverseDir_2_SM1,
  SSM_TR_ReverseDir_3_SM1,
  SSM_TR_ReverseDir_4_SM1,
  SSM_TR_No_BG_1_SM1,
  SSM_TR_No_BG_2_SM1
} _5_SSM_TR_SM1;
/* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */
typedef enum {
  SSM_st_NominalDir_SM1,
  SSM_st_ReverseDir_SM1,
  SSM_st_No_BG_SM1,
  SSM_st_InconsistentDir_SM1
} _3_SSM_ST_SM1;
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
/* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */
typedef enum {
  SSM_TR_no_trans_SM3_SM1_ReverseDir,
  SSM_TR_LastBalise_1_SM3_SM1_ReverseDir,
  SSM_TR_LastBalise_2_SM3_SM1_ReverseDir,
  SSM_TR_LastBalise_3_SM3_SM1_ReverseDir,
  SSM_TR_LastBalise_4_SM3_SM1_ReverseDir,
  SSM_TR_LastBalise_5_SM3_SM1_ReverseDir,
  SSM_TR_LastBalise_6_SM3_SM1_ReverseDir,
  SSM_TR_LastBalise_7_SM3_SM1_ReverseDir,
  SSM_TR_LastBalise_8_SM3_SM1_ReverseDir,
  SSM_TR_SecondBalise_1_SM3_SM1_ReverseDir,
  SSM_TR_SecondBalise_2_SM3_SM1_ReverseDir,
  SSM_TR_ThirdBalise_1_SM3_SM1_ReverseDir,
  SSM_TR_ThirdBalise_2_SM3_SM1_ReverseDir,
  SSM_TR_FourthBalise_1_SM3_SM1_ReverseDir,
  SSM_TR_FourthBalise_2_SM3_SM1_ReverseDir,
  SSM_TR_FifthBalise_1_SM3_SM1_ReverseDir,
  SSM_TR_FifthBalise_2_SM3_SM1_ReverseDir,
  SSM_TR_Wait_1_SM3_SM1_ReverseDir,
  SSM_TR_Wait_2_SM3_SM1_ReverseDir,
  SSM_TR_Wait_3_SM3_SM1_ReverseDir,
  SSM_TR_Wait_4_SM3_SM1_ReverseDir,
  SSM_TR_Wait_5_SM3_SM1_ReverseDir,
  SSM_TR_Wait_6_SM3_SM1_ReverseDir,
  SSM_TR_Wait_7_SM3_SM1_ReverseDir,
  SSM_TR_SixthBalise_1_SM3_SM1_ReverseDir,
  SSM_TR_SixthBalise_2_SM3_SM1_ReverseDir,
  SSM_TR_SeventhBalise_1_SM3_SM1_ReverseDir,
  SSM_TR_SeventhBalise_2_SM3_SM1_ReverseDir
} SSM_TR_SM3_SM1_ReverseDir;
/* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */
typedef enum {
  SSM_st_LastBalise_SM1_ReverseDir_SM3,
  SSM_st_SecondBalise_SM1_ReverseDir_SM3,
  SSM_st_ThirdBalise_SM1_ReverseDir_SM3,
  SSM_st_FourthBalise_SM1_ReverseDir_SM3,
  SSM_st_FifthBalise_SM1_ReverseDir_SM3,
  SSM_st_Wait_SM1_ReverseDir_SM3,
  SSM_st_SixthBalise_SM1_ReverseDir_SM3,
  SSM_st_SeventhBalise_SM1_ReverseDir_SM3,
  SSM_st_FirstBalise_SM1_ReverseDir_SM3
} SSM_ST_SM3_SM1_ReverseDir;
/* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */
typedef enum {
  SSM_TR_no_trans_SM4_SM1_InconsistentDir,
  SSM_TR_FirstBalise_1_SM4_SM1_InconsistentDir,
  SSM_TR_Wait_1_SM4_SM1_InconsistentDir
} SSM_TR_SM4_SM1_InconsistentDir;
/* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */
typedef enum {
  SSM_st_FirstBalise_SM1_InconsistentDir_SM4,
  SSM_st_Wait_SM1_InconsistentDir_SM4
} SSM_ST_SM4_SM1_InconsistentDir;
/* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */
typedef enum {
  SSM_TR_no_trans_SM3,
  SSM_TR_Wait_1_SM3,
  SSM_TR_Receive_outputMessage_1_SM3
} SSM_TR_SM3;
/* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */
typedef enum { SSM_st_Wait_SM3, SSM_st_Receive_outputMessage_SM3 } SSM_ST_SM3;
/* Toolbox::BuildingBlocks::MovementSimulation::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_Reset_1_SM1,
  SSM_TR_Driving_1_SM1
} SSM_TR_SM1;
/* Toolbox::BuildingBlocks::MovementSimulation::SM1 */
typedef enum { SSM_st_Reset_SM1, SSM_st_Driving_SM1 } SSM_ST_SM1;
/* T_TRAIN */
typedef kcg_real T_TRAIN;

/* CheckBGInputChannel_Pkg::Completeness */
typedef kcg_bool Completeness_CheckBGInputChannel_Pkg;

/* CheckBGInputChannel_Pkg::Consistency */
typedef kcg_bool Consistency_CheckBGInputChannel_Pkg;

/* NID_C */
typedef kcg_int NID_C;

/* NID_BG */
typedef kcg_int NID_BG;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

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

/* Q_NVLOCACC */
typedef kcg_int Q_NVLOCACC;

/* D_LINK */
typedef kcg_int D_LINK;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

/* L_PACKET */
typedef kcg_int L_PACKET;

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* D_CYCLOC */
typedef kcg_int D_CYCLOC;

/* N_ITER */
typedef kcg_int N_ITER;

/* D_LOC */
typedef kcg_int D_LOC;

/* NID_RBC */
typedef kcg_int NID_RBC;

/* NID_RADIO */
typedef kcg_int NID_RADIO;

/* NID_MN */
typedef kcg_int NID_MN;

/* CheckBGInputChannel_Pkg::delaytime_T */
typedef kcg_int delaytime_T_CheckBGInputChannel_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Location_T */
typedef L_internal_Type_Obu_BasicTypes_Pkg Location_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Speed_T */
typedef V_internal_Type_Obu_BasicTypes_Pkg Speed_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_Pkg;

typedef struct { kcg_bool valid; M_LEVEL level; M_MODE Mode; } struct__17982;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct__17982 T_Mode_Level_Level_And_Mode_Types_Pkg;

typedef struct { kcg_int nominal; kcg_int d_min; kcg_int d_max; } struct__17988;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__17988 LocWithInAcc_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_LRBG nid_LRBG;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__17994;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__17994 LinkedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} struct__18008;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__18008 infoFromLinking_T_TrainPosition_Types_Pck;

typedef LinkedBG_T_BG_Types_Pkg array__18017[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__18017 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  kcg_int v_safeNominal;
  kcg_int v_rawNominal;
  kcg_int v_lower;
  kcg_int v_upper;
} struct__18020;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__18020 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_int o_nominal;
  kcg_int o_min;
  kcg_int o_max;
} struct__18027;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__18027 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  struct__18027 odo;
  struct__18020 speed;
  kcg_int acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__18033;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__18033 odometry_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_TOTAL n_total;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINK q_link;
  struct__18033 bgPosition;
  struct__17988 BG_centerDetectionInaccuraccuracies;
  kcg_int q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
} struct__18043;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__18043 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} struct__18061;

/* BG_Types_Pkg::passedBG_T */
typedef struct__18061 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
} struct__18067;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__18067 positionedBG_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPosition;
  Location_T_Obu_BasicTypes_Pkg estimatedFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg minSafeFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg maxSafeFrontEndPostion;
  positionedBG_T_TrainPosition_Types_Pck LRBG;
  positionedBG_T_TrainPosition_Types_Pck prvLRBG;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
} struct__18078;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__18078 trainPosition_T_TrainPosition_Types_Pck;

typedef positionedBG_T_TrainPosition_Types_Pck array__18095[8];

/* TrainPosition_Types_Pck::positionedBGs_T */
typedef array__18095 positionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
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
} struct__18098;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__18098 BaliseTelegramHeader_int_T_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  kcg_int nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__18114;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__18114 MetadataElement_T_Common_Types_Pkg;

typedef struct__18114 array__18122[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__18122 Metadata_T_Common_Types_Pkg;

typedef struct {
  array__18122 PacketHeaders;
  array_int_500 PacketData;
} struct__18125;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__18125 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__18130;

/* InfraLib::B_data_internal_T */
typedef struct__18130 B_data_internal_T_InfraLib;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__18139;

/* TM::CompressedBaliseMessage */
typedef struct__18139 CompressedBaliseMessage_TM;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__18144;

/* TM::BaliseGroupData */
typedef struct__18144 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct__18144 BaliseGroupData_Basics;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__18155;

/* TM::P005_section_int_T */
typedef struct__18155 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__18171[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__18171 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__18174[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__18174 P005_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
  kcg_int N_ITER;
  P005_trackide_sectionlist_T_TM SECTIONS;
} struct__18177;

/* TM::P005_trackside_int_T */
typedef struct__18177 P005_trackside_int_T_TM;

typedef struct {
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_PIG n_pig;
  N_TOTAL n_total;
  M_DUP m_dup;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINK q_link;
} struct__18194;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__18194 TelegramHeader_T_BG_Types_Pkg;

typedef struct {
  kcg_real o_nominal;
  kcg_real o_min;
  kcg_real o_max;
} struct__18207;

/* Toolbox::odometryFactors_T */
typedef struct__18207 odometryFactors_T_Toolbox;

typedef struct {
  kcg_int radioDevice;
  kcg_int receivedSystemTime;
  kcg_int nid_message;
  kcg_real t_train;
  M_ACK m_ack;
  kcg_int nid_lrbg;
  kcg_real t_train_reference;
  kcg_int nid_em;
  Q_SCALE q_scale;
  kcg_int d_sr;
  kcg_real t_sh_rqst;
  kcg_int d_ref;
  Q_DIR q_dir;
  kcg_int d_emergencystop;
  M_VERSION m_version;
} struct__18213;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__18213 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

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
} struct__18231;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__18231 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
} struct__18243;

/* API_Msg_Pkg::API_RadioMsgHeader_T */
typedef struct__18243 API_RadioMsgHeader_T_API_Msg_Pkg;

typedef struct {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} struct__18250;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef struct__18250 centerOfBalisePosition_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} struct__18255;

/* API_Msg_Pkg::API_TelegramHeader_T */
typedef struct__18255 API_TelegramHeader_T_API_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__18263;

/* API_Msg_Pkg::API_TrackSideInput_T */
typedef struct__18263 API_TrackSideInput_T_API_Msg_Pkg;

typedef struct {
  kcg_bool linkedBGError;
  kcg_bool unlinkedBGError;
  kcg_bool BG_versionIncompatible;
  kcg_bool radioSequenceError;
  kcg_bool tNvContactError;
  kcg_bool otherTimingError;
  kcg_bool radioMessageConsistencyError;
} struct__18272;

/* Common_Types_Pkg::MSG_Errors_T */
typedef struct__18272 MSG_Errors_T_Common_Types_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; NID_MN nid_mn; } struct__18282;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T */
typedef struct__18282 P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct__18288;

/* Packet_Types_Pkg::P42_SessionManagement_T */
typedef struct__18288 P42_SessionManagement_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg messageSource;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  P42_SessionManagement_T_Packet_Types_Pkg p42;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg p45;
} struct__18298;

/* Common_Types_Pkg::radioManagementMessage_T */
typedef struct__18298 radioManagementMessage_T_Common_Types_Pkg;

typedef struct { D_LOC d_loc; Q_LGTLOC q_lgtloc; } struct__18306;

/* Packet_Types_Pkg::IterPacket58_T */
typedef struct__18306 IterPacket58_T_Packet_Types_Pkg;

typedef IterPacket58_T_Packet_Types_Pkg array__18311[2];

/* Packet_Types_Pkg::IterPacket58List_T */
typedef array__18311 IterPacket58List_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  IterPacket58List_T_Packet_Types_Pkg iterPacket58List;
} struct__18314;

/* Packet_Types_Pkg::P58_PositionReportParameters_T */
typedef struct__18314 P58_PositionReportParameters_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool present;
  NID_BG nidBG;
  Location_T_Obu_BasicTypes_Pkg bgLocation;
  P58_PositionReportParameters_T_Packet_Types_Pkg packet58;
} struct__18327;

/* Common_Types_Pkg::PositionReportParameter_T */
typedef struct__18327 PositionReportParameter_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  struct__18231 radioMetadata;
  struct__18043 BG_Common_Header;
  struct__18213 Radio_Common_Header;
  struct__18125 packets;
} struct__18334;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__18334 ReceivedMessage_T_Common_Types_Pkg;

typedef ModeDecisionTableActionKind_DataDictionary_Pkg array__18343[17];

typedef array__18343 array__18346[256];

/* DataDictionary_Pkg::ModeDecisionTableType */
typedef array__18346 ModeDecisionTableType_DataDictionary_Pkg;

typedef ReceivedMessage_T_Common_Types_Pkg array__18349[3];

/* DataDictionary_Pkg::Buffer */
typedef array__18349 Buffer_DataDictionary_Pkg;

typedef LevelDecisionTableActionKind_DataDictionary_Pkg array__18352[5];

typedef array__18352 array__18355[256];

/* DataDictionary_Pkg::LevelDecisionTableType */
typedef array__18355 LevelDecisionTableType_DataDictionary_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool checkResult;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__18358;

/* BG_Types_Pkg::Telegram_T */
typedef struct__18358 Telegram_T_BG_Types_Pkg;

typedef Telegram_T_BG_Types_Pkg array__18365[8];

/* BG_Types_Pkg::TelegramArray_T */
typedef array__18365 TelegramArray_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool consistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg header;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__18368;

/* Radio_Types_Pkg::RadioMessage_T */
typedef struct__18368 RadioMessage_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool present;
  TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int numberBalises;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} struct__18376;

/* BG_Types_Pkg::BG_Message_T */
typedef struct__18376 BG_Message_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  MsgSource_T_Common_Types_Pkg msg_type;
  BG_Message_T_BG_Types_Pkg telegramHeaders;
  RadioMessage_T_Radio_Types_Pkg radio_Msg;
} struct__18383;

/* Common_Types_Pkg::TrackSide_ForCheck_T */
typedef struct__18383 TrackSide_ForCheck_T_Common_Types_Pkg;

typedef struct {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  NID_C C_ID;
  NID_BG BG_ID;
  centerOfBalisePosition_T_BG_Types_Pkg balisePosition;
  centerOfBalisePosition_T_BG_Types_Pkg positionFirstContact;
  kcg_int collectedTelegrams;
  kcg_int totalTelegrams;
} struct__18391;

/* Receive_TrackSide_Msg_Pkg::BGCollector_T */
typedef struct__18391 BGCollector_T_Receive_TrackSide_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  Telegram_T_BG_Types_Pkg telegram;
  centerOfBalisePosition_T_BG_Types_Pkg position;
} struct__18402;

/* Receive_TrackSide_Msg_Pkg::TelegramStore_T */
typedef struct__18402 TelegramStore_T_Receive_TrackSide_Msg_Pkg;

typedef kcg_bool array_bool_256[256];

typedef array_bool_256 array_bool_256_46[46];

/* MetadataTruthtable_T */
typedef array_bool_256_46 MetadataTruthtable_T;

typedef struct {
  kcg_bool valid;
  ReceivedMessage_T_Common_Types_Pkg BG;
  kcg_bool FromTrack;
  kcg_bool FromOBU;
  kcg_bool CorrectData;
  delaytime_T_CheckBGInputChannel_Pkg Delay;
  OdometryLocations_T_Obu_BasicTypes_Pkg LocDiff;
} struct__18414;

/* CheckBGInputChannel_Pkg::checkedBG */
typedef struct__18414 checkedBG_CheckBGInputChannel_Pkg;

typedef struct {
  kcg_bool valid;
  ReceivedMessage_T_Common_Types_Pkg BG;
  Completeness_CheckBGInputChannel_Pkg complete;
  Consistency_CheckBGInputChannel_Pkg consistent;
  T_internal_Type_Obu_BasicTypes_Pkg TimeStamp;
} struct__18424;

/* CheckBGInputChannel_Pkg::ReceivedBG */
typedef struct__18424 ReceivedBG_CheckBGInputChannel_Pkg;

typedef checkedBG_CheckBGInputChannel_Pkg array__18432[10];

/* CheckBGInputChannel_Pkg::outBGchecks */
typedef array__18432 outBGchecks_CheckBGInputChannel_Pkg;

typedef ReceivedBG_CheckBGInputChannel_Pkg array__18435[10];

/* CheckBGInputChannel_Pkg::ReceivedBGs */
typedef array__18435 ReceivedBGs_CheckBGInputChannel_Pkg;

typedef N_PIG array__18438[8];

typedef kcg_bool array_bool_8[8];

typedef MetadataElement_T_Common_Types_Pkg array__18444[29];

typedef Metadata_T_Common_Types_Pkg array__18447[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef Telegram_T_BG_Types_Pkg array__18453[7];

typedef Q_DIRTRAIN array__18456[30];

typedef trainPosition_T_TrainPosition_Types_Pck array__18459[30];

typedef kcg_bool array_bool_30[30];

typedef NID_LRBG array_int_8[8];

typedef kcg_int array_int_30[30];

typedef MetadataTruthtable_T array_bool_256_46_30[30];

typedef MsgSource_T_Common_Types_Pkg array__18474[30];

typedef M_LEVEL array__18477[30];

typedef M_MODE array__18480[30];

typedef array_int_7_33 array_int_7_33_231[231];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_4[4];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_5[5];

typedef kcg_int array_int_236[236];

typedef P005_section_int_T_TM array__18501[1];

typedef kcg_bool array_bool_10[10];

#ifndef kcg_copy_struct__17982
#define kcg_copy_struct__17982(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__17982)))
#endif /* kcg_copy_struct__17982 */

#ifndef kcg_copy_struct__17988
#define kcg_copy_struct__17988(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__17988)))
#endif /* kcg_copy_struct__17988 */

#ifndef kcg_copy_struct__17994
#define kcg_copy_struct__17994(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__17994)))
#endif /* kcg_copy_struct__17994 */

#ifndef kcg_copy_struct__18008
#define kcg_copy_struct__18008(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18008)))
#endif /* kcg_copy_struct__18008 */

#ifndef kcg_copy_struct__18020
#define kcg_copy_struct__18020(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18020)))
#endif /* kcg_copy_struct__18020 */

#ifndef kcg_copy_struct__18027
#define kcg_copy_struct__18027(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18027)))
#endif /* kcg_copy_struct__18027 */

#ifndef kcg_copy_struct__18033
#define kcg_copy_struct__18033(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18033)))
#endif /* kcg_copy_struct__18033 */

#ifndef kcg_copy_struct__18043
#define kcg_copy_struct__18043(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18043)))
#endif /* kcg_copy_struct__18043 */

#ifndef kcg_copy_struct__18061
#define kcg_copy_struct__18061(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18061)))
#endif /* kcg_copy_struct__18061 */

#ifndef kcg_copy_struct__18067
#define kcg_copy_struct__18067(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18067)))
#endif /* kcg_copy_struct__18067 */

#ifndef kcg_copy_struct__18078
#define kcg_copy_struct__18078(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18078)))
#endif /* kcg_copy_struct__18078 */

#ifndef kcg_copy_struct__18098
#define kcg_copy_struct__18098(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18098)))
#endif /* kcg_copy_struct__18098 */

#ifndef kcg_copy_struct__18114
#define kcg_copy_struct__18114(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18114)))
#endif /* kcg_copy_struct__18114 */

#ifndef kcg_copy_struct__18125
#define kcg_copy_struct__18125(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18125)))
#endif /* kcg_copy_struct__18125 */

#ifndef kcg_copy_struct__18130
#define kcg_copy_struct__18130(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18130)))
#endif /* kcg_copy_struct__18130 */

#ifndef kcg_copy_struct__18139
#define kcg_copy_struct__18139(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18139)))
#endif /* kcg_copy_struct__18139 */

#ifndef kcg_copy_struct__18144
#define kcg_copy_struct__18144(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18144)))
#endif /* kcg_copy_struct__18144 */

#ifndef kcg_copy_struct__18155
#define kcg_copy_struct__18155(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18155)))
#endif /* kcg_copy_struct__18155 */

#ifndef kcg_copy_struct__18177
#define kcg_copy_struct__18177(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18177)))
#endif /* kcg_copy_struct__18177 */

#ifndef kcg_copy_struct__18194
#define kcg_copy_struct__18194(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18194)))
#endif /* kcg_copy_struct__18194 */

#ifndef kcg_copy_struct__18207
#define kcg_copy_struct__18207(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18207)))
#endif /* kcg_copy_struct__18207 */

#ifndef kcg_copy_struct__18213
#define kcg_copy_struct__18213(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18213)))
#endif /* kcg_copy_struct__18213 */

#ifndef kcg_copy_struct__18231
#define kcg_copy_struct__18231(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18231)))
#endif /* kcg_copy_struct__18231 */

#ifndef kcg_copy_struct__18243
#define kcg_copy_struct__18243(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18243)))
#endif /* kcg_copy_struct__18243 */

#ifndef kcg_copy_struct__18250
#define kcg_copy_struct__18250(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18250)))
#endif /* kcg_copy_struct__18250 */

#ifndef kcg_copy_struct__18255
#define kcg_copy_struct__18255(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18255)))
#endif /* kcg_copy_struct__18255 */

#ifndef kcg_copy_struct__18263
#define kcg_copy_struct__18263(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18263)))
#endif /* kcg_copy_struct__18263 */

#ifndef kcg_copy_struct__18272
#define kcg_copy_struct__18272(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18272)))
#endif /* kcg_copy_struct__18272 */

#ifndef kcg_copy_struct__18282
#define kcg_copy_struct__18282(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18282)))
#endif /* kcg_copy_struct__18282 */

#ifndef kcg_copy_struct__18288
#define kcg_copy_struct__18288(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18288)))
#endif /* kcg_copy_struct__18288 */

#ifndef kcg_copy_struct__18298
#define kcg_copy_struct__18298(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18298)))
#endif /* kcg_copy_struct__18298 */

#ifndef kcg_copy_struct__18306
#define kcg_copy_struct__18306(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18306)))
#endif /* kcg_copy_struct__18306 */

#ifndef kcg_copy_struct__18314
#define kcg_copy_struct__18314(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18314)))
#endif /* kcg_copy_struct__18314 */

#ifndef kcg_copy_struct__18327
#define kcg_copy_struct__18327(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18327)))
#endif /* kcg_copy_struct__18327 */

#ifndef kcg_copy_struct__18334
#define kcg_copy_struct__18334(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18334)))
#endif /* kcg_copy_struct__18334 */

#ifndef kcg_copy_struct__18358
#define kcg_copy_struct__18358(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18358)))
#endif /* kcg_copy_struct__18358 */

#ifndef kcg_copy_struct__18368
#define kcg_copy_struct__18368(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18368)))
#endif /* kcg_copy_struct__18368 */

#ifndef kcg_copy_struct__18376
#define kcg_copy_struct__18376(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18376)))
#endif /* kcg_copy_struct__18376 */

#ifndef kcg_copy_struct__18383
#define kcg_copy_struct__18383(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18383)))
#endif /* kcg_copy_struct__18383 */

#ifndef kcg_copy_struct__18391
#define kcg_copy_struct__18391(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18391)))
#endif /* kcg_copy_struct__18391 */

#ifndef kcg_copy_struct__18402
#define kcg_copy_struct__18402(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18402)))
#endif /* kcg_copy_struct__18402 */

#ifndef kcg_copy_struct__18414
#define kcg_copy_struct__18414(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18414)))
#endif /* kcg_copy_struct__18414 */

#ifndef kcg_copy_struct__18424
#define kcg_copy_struct__18424(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18424)))
#endif /* kcg_copy_struct__18424 */

#ifndef kcg_copy_array__18017
#define kcg_copy_array__18017(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18017)))
#endif /* kcg_copy_array__18017 */

#ifndef kcg_copy_array__18095
#define kcg_copy_array__18095(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18095)))
#endif /* kcg_copy_array__18095 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__18122
#define kcg_copy_array__18122(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18122)))
#endif /* kcg_copy_array__18122 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__18171
#define kcg_copy_array__18171(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18171)))
#endif /* kcg_copy_array__18171 */

#ifndef kcg_copy_array__18174
#define kcg_copy_array__18174(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18174)))
#endif /* kcg_copy_array__18174 */

#ifndef kcg_copy_array__18311
#define kcg_copy_array__18311(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18311)))
#endif /* kcg_copy_array__18311 */

#ifndef kcg_copy_array__18343
#define kcg_copy_array__18343(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18343)))
#endif /* kcg_copy_array__18343 */

#ifndef kcg_copy_array__18346
#define kcg_copy_array__18346(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18346)))
#endif /* kcg_copy_array__18346 */

#ifndef kcg_copy_array__18349
#define kcg_copy_array__18349(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18349)))
#endif /* kcg_copy_array__18349 */

#ifndef kcg_copy_array__18352
#define kcg_copy_array__18352(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18352)))
#endif /* kcg_copy_array__18352 */

#ifndef kcg_copy_array__18355
#define kcg_copy_array__18355(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18355)))
#endif /* kcg_copy_array__18355 */

#ifndef kcg_copy_array__18365
#define kcg_copy_array__18365(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18365)))
#endif /* kcg_copy_array__18365 */

#ifndef kcg_copy_array_bool_256
#define kcg_copy_array_bool_256(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256)))
#endif /* kcg_copy_array_bool_256 */

#ifndef kcg_copy_array_bool_256_46
#define kcg_copy_array_bool_256_46(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256_46)))
#endif /* kcg_copy_array_bool_256_46 */

#ifndef kcg_copy_array__18432
#define kcg_copy_array__18432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18432)))
#endif /* kcg_copy_array__18432 */

#ifndef kcg_copy_array__18435
#define kcg_copy_array__18435(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18435)))
#endif /* kcg_copy_array__18435 */

#ifndef kcg_copy_array__18438
#define kcg_copy_array__18438(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18438)))
#endif /* kcg_copy_array__18438 */

#ifndef kcg_copy_array_bool_8
#define kcg_copy_array_bool_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_8)))
#endif /* kcg_copy_array_bool_8 */

#ifndef kcg_copy_array__18444
#define kcg_copy_array__18444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18444)))
#endif /* kcg_copy_array__18444 */

#ifndef kcg_copy_array__18447
#define kcg_copy_array__18447(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18447)))
#endif /* kcg_copy_array__18447 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array__18453
#define kcg_copy_array__18453(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18453)))
#endif /* kcg_copy_array__18453 */

#ifndef kcg_copy_array__18456
#define kcg_copy_array__18456(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18456)))
#endif /* kcg_copy_array__18456 */

#ifndef kcg_copy_array__18459
#define kcg_copy_array__18459(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18459)))
#endif /* kcg_copy_array__18459 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_bool_256_46_30
#define kcg_copy_array_bool_256_46_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256_46_30)))
#endif /* kcg_copy_array_bool_256_46_30 */

#ifndef kcg_copy_array__18474
#define kcg_copy_array__18474(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18474)))
#endif /* kcg_copy_array__18474 */

#ifndef kcg_copy_array__18477
#define kcg_copy_array__18477(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18477)))
#endif /* kcg_copy_array__18477 */

#ifndef kcg_copy_array__18480
#define kcg_copy_array__18480(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18480)))
#endif /* kcg_copy_array__18480 */

#ifndef kcg_copy_array_int_7_33_231
#define kcg_copy_array_int_7_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33_231)))
#endif /* kcg_copy_array_int_7_33_231 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_236
#define kcg_copy_array_int_236(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_236)))
#endif /* kcg_copy_array_int_236 */

#ifndef kcg_copy_array__18501
#define kcg_copy_array__18501(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18501)))
#endif /* kcg_copy_array__18501 */

#ifndef kcg_copy_array_bool_10
#define kcg_copy_array_bool_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_10)))
#endif /* kcg_copy_array_bool_10 */

#ifndef kcg_comp_struct__17982
extern kcg_bool kcg_comp_struct__17982(
  struct__17982 *kcg_c1,
  struct__17982 *kcg_c2);
#endif /* kcg_comp_struct__17982 */

#ifndef kcg_comp_struct__17988
extern kcg_bool kcg_comp_struct__17988(
  struct__17988 *kcg_c1,
  struct__17988 *kcg_c2);
#endif /* kcg_comp_struct__17988 */

#ifndef kcg_comp_struct__17994
extern kcg_bool kcg_comp_struct__17994(
  struct__17994 *kcg_c1,
  struct__17994 *kcg_c2);
#endif /* kcg_comp_struct__17994 */

#ifndef kcg_comp_struct__18008
extern kcg_bool kcg_comp_struct__18008(
  struct__18008 *kcg_c1,
  struct__18008 *kcg_c2);
#endif /* kcg_comp_struct__18008 */

#ifndef kcg_comp_struct__18020
extern kcg_bool kcg_comp_struct__18020(
  struct__18020 *kcg_c1,
  struct__18020 *kcg_c2);
#endif /* kcg_comp_struct__18020 */

#ifndef kcg_comp_struct__18027
extern kcg_bool kcg_comp_struct__18027(
  struct__18027 *kcg_c1,
  struct__18027 *kcg_c2);
#endif /* kcg_comp_struct__18027 */

#ifndef kcg_comp_struct__18033
extern kcg_bool kcg_comp_struct__18033(
  struct__18033 *kcg_c1,
  struct__18033 *kcg_c2);
#endif /* kcg_comp_struct__18033 */

#ifndef kcg_comp_struct__18043
extern kcg_bool kcg_comp_struct__18043(
  struct__18043 *kcg_c1,
  struct__18043 *kcg_c2);
#endif /* kcg_comp_struct__18043 */

#ifndef kcg_comp_struct__18061
extern kcg_bool kcg_comp_struct__18061(
  struct__18061 *kcg_c1,
  struct__18061 *kcg_c2);
#endif /* kcg_comp_struct__18061 */

#ifndef kcg_comp_struct__18067
extern kcg_bool kcg_comp_struct__18067(
  struct__18067 *kcg_c1,
  struct__18067 *kcg_c2);
#endif /* kcg_comp_struct__18067 */

#ifndef kcg_comp_struct__18078
extern kcg_bool kcg_comp_struct__18078(
  struct__18078 *kcg_c1,
  struct__18078 *kcg_c2);
#endif /* kcg_comp_struct__18078 */

#ifndef kcg_comp_struct__18098
extern kcg_bool kcg_comp_struct__18098(
  struct__18098 *kcg_c1,
  struct__18098 *kcg_c2);
#endif /* kcg_comp_struct__18098 */

#ifndef kcg_comp_struct__18114
extern kcg_bool kcg_comp_struct__18114(
  struct__18114 *kcg_c1,
  struct__18114 *kcg_c2);
#endif /* kcg_comp_struct__18114 */

#ifndef kcg_comp_struct__18125
extern kcg_bool kcg_comp_struct__18125(
  struct__18125 *kcg_c1,
  struct__18125 *kcg_c2);
#endif /* kcg_comp_struct__18125 */

#ifndef kcg_comp_struct__18130
extern kcg_bool kcg_comp_struct__18130(
  struct__18130 *kcg_c1,
  struct__18130 *kcg_c2);
#endif /* kcg_comp_struct__18130 */

#ifndef kcg_comp_struct__18139
extern kcg_bool kcg_comp_struct__18139(
  struct__18139 *kcg_c1,
  struct__18139 *kcg_c2);
#endif /* kcg_comp_struct__18139 */

#ifndef kcg_comp_struct__18144
extern kcg_bool kcg_comp_struct__18144(
  struct__18144 *kcg_c1,
  struct__18144 *kcg_c2);
#endif /* kcg_comp_struct__18144 */

#ifndef kcg_comp_struct__18155
extern kcg_bool kcg_comp_struct__18155(
  struct__18155 *kcg_c1,
  struct__18155 *kcg_c2);
#endif /* kcg_comp_struct__18155 */

#ifndef kcg_comp_struct__18177
extern kcg_bool kcg_comp_struct__18177(
  struct__18177 *kcg_c1,
  struct__18177 *kcg_c2);
#endif /* kcg_comp_struct__18177 */

#ifndef kcg_comp_struct__18194
extern kcg_bool kcg_comp_struct__18194(
  struct__18194 *kcg_c1,
  struct__18194 *kcg_c2);
#endif /* kcg_comp_struct__18194 */

#ifndef kcg_comp_struct__18207
extern kcg_bool kcg_comp_struct__18207(
  struct__18207 *kcg_c1,
  struct__18207 *kcg_c2);
#endif /* kcg_comp_struct__18207 */

#ifndef kcg_comp_struct__18213
extern kcg_bool kcg_comp_struct__18213(
  struct__18213 *kcg_c1,
  struct__18213 *kcg_c2);
#endif /* kcg_comp_struct__18213 */

#ifndef kcg_comp_struct__18231
extern kcg_bool kcg_comp_struct__18231(
  struct__18231 *kcg_c1,
  struct__18231 *kcg_c2);
#endif /* kcg_comp_struct__18231 */

#ifndef kcg_comp_struct__18243
extern kcg_bool kcg_comp_struct__18243(
  struct__18243 *kcg_c1,
  struct__18243 *kcg_c2);
#endif /* kcg_comp_struct__18243 */

#ifndef kcg_comp_struct__18250
extern kcg_bool kcg_comp_struct__18250(
  struct__18250 *kcg_c1,
  struct__18250 *kcg_c2);
#endif /* kcg_comp_struct__18250 */

#ifndef kcg_comp_struct__18255
extern kcg_bool kcg_comp_struct__18255(
  struct__18255 *kcg_c1,
  struct__18255 *kcg_c2);
#endif /* kcg_comp_struct__18255 */

#ifndef kcg_comp_struct__18263
extern kcg_bool kcg_comp_struct__18263(
  struct__18263 *kcg_c1,
  struct__18263 *kcg_c2);
#endif /* kcg_comp_struct__18263 */

#ifndef kcg_comp_struct__18272
extern kcg_bool kcg_comp_struct__18272(
  struct__18272 *kcg_c1,
  struct__18272 *kcg_c2);
#endif /* kcg_comp_struct__18272 */

#ifndef kcg_comp_struct__18282
extern kcg_bool kcg_comp_struct__18282(
  struct__18282 *kcg_c1,
  struct__18282 *kcg_c2);
#endif /* kcg_comp_struct__18282 */

#ifndef kcg_comp_struct__18288
extern kcg_bool kcg_comp_struct__18288(
  struct__18288 *kcg_c1,
  struct__18288 *kcg_c2);
#endif /* kcg_comp_struct__18288 */

#ifndef kcg_comp_struct__18298
extern kcg_bool kcg_comp_struct__18298(
  struct__18298 *kcg_c1,
  struct__18298 *kcg_c2);
#endif /* kcg_comp_struct__18298 */

#ifndef kcg_comp_struct__18306
extern kcg_bool kcg_comp_struct__18306(
  struct__18306 *kcg_c1,
  struct__18306 *kcg_c2);
#endif /* kcg_comp_struct__18306 */

#ifndef kcg_comp_struct__18314
extern kcg_bool kcg_comp_struct__18314(
  struct__18314 *kcg_c1,
  struct__18314 *kcg_c2);
#endif /* kcg_comp_struct__18314 */

#ifndef kcg_comp_struct__18327
extern kcg_bool kcg_comp_struct__18327(
  struct__18327 *kcg_c1,
  struct__18327 *kcg_c2);
#endif /* kcg_comp_struct__18327 */

#ifndef kcg_comp_struct__18334
extern kcg_bool kcg_comp_struct__18334(
  struct__18334 *kcg_c1,
  struct__18334 *kcg_c2);
#endif /* kcg_comp_struct__18334 */

#ifndef kcg_comp_struct__18358
extern kcg_bool kcg_comp_struct__18358(
  struct__18358 *kcg_c1,
  struct__18358 *kcg_c2);
#endif /* kcg_comp_struct__18358 */

#ifndef kcg_comp_struct__18368
extern kcg_bool kcg_comp_struct__18368(
  struct__18368 *kcg_c1,
  struct__18368 *kcg_c2);
#endif /* kcg_comp_struct__18368 */

#ifndef kcg_comp_struct__18376
extern kcg_bool kcg_comp_struct__18376(
  struct__18376 *kcg_c1,
  struct__18376 *kcg_c2);
#endif /* kcg_comp_struct__18376 */

#ifndef kcg_comp_struct__18383
extern kcg_bool kcg_comp_struct__18383(
  struct__18383 *kcg_c1,
  struct__18383 *kcg_c2);
#endif /* kcg_comp_struct__18383 */

#ifndef kcg_comp_struct__18391
extern kcg_bool kcg_comp_struct__18391(
  struct__18391 *kcg_c1,
  struct__18391 *kcg_c2);
#endif /* kcg_comp_struct__18391 */

#ifndef kcg_comp_struct__18402
extern kcg_bool kcg_comp_struct__18402(
  struct__18402 *kcg_c1,
  struct__18402 *kcg_c2);
#endif /* kcg_comp_struct__18402 */

#ifndef kcg_comp_struct__18414
extern kcg_bool kcg_comp_struct__18414(
  struct__18414 *kcg_c1,
  struct__18414 *kcg_c2);
#endif /* kcg_comp_struct__18414 */

#ifndef kcg_comp_struct__18424
extern kcg_bool kcg_comp_struct__18424(
  struct__18424 *kcg_c1,
  struct__18424 *kcg_c2);
#endif /* kcg_comp_struct__18424 */

#ifndef kcg_comp_array__18017
extern kcg_bool kcg_comp_array__18017(
  array__18017 *kcg_c1,
  array__18017 *kcg_c2);
#endif /* kcg_comp_array__18017 */

#ifndef kcg_comp_array__18095
extern kcg_bool kcg_comp_array__18095(
  array__18095 *kcg_c1,
  array__18095 *kcg_c2);
#endif /* kcg_comp_array__18095 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__18122
extern kcg_bool kcg_comp_array__18122(
  array__18122 *kcg_c1,
  array__18122 *kcg_c2);
#endif /* kcg_comp_array__18122 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array__18171
extern kcg_bool kcg_comp_array__18171(
  array__18171 *kcg_c1,
  array__18171 *kcg_c2);
#endif /* kcg_comp_array__18171 */

#ifndef kcg_comp_array__18174
extern kcg_bool kcg_comp_array__18174(
  array__18174 *kcg_c1,
  array__18174 *kcg_c2);
#endif /* kcg_comp_array__18174 */

#ifndef kcg_comp_array__18311
extern kcg_bool kcg_comp_array__18311(
  array__18311 *kcg_c1,
  array__18311 *kcg_c2);
#endif /* kcg_comp_array__18311 */

#ifndef kcg_comp_array__18343
extern kcg_bool kcg_comp_array__18343(
  array__18343 *kcg_c1,
  array__18343 *kcg_c2);
#endif /* kcg_comp_array__18343 */

#ifndef kcg_comp_array__18346
extern kcg_bool kcg_comp_array__18346(
  array__18346 *kcg_c1,
  array__18346 *kcg_c2);
#endif /* kcg_comp_array__18346 */

#ifndef kcg_comp_array__18349
extern kcg_bool kcg_comp_array__18349(
  array__18349 *kcg_c1,
  array__18349 *kcg_c2);
#endif /* kcg_comp_array__18349 */

#ifndef kcg_comp_array__18352
extern kcg_bool kcg_comp_array__18352(
  array__18352 *kcg_c1,
  array__18352 *kcg_c2);
#endif /* kcg_comp_array__18352 */

#ifndef kcg_comp_array__18355
extern kcg_bool kcg_comp_array__18355(
  array__18355 *kcg_c1,
  array__18355 *kcg_c2);
#endif /* kcg_comp_array__18355 */

#ifndef kcg_comp_array__18365
extern kcg_bool kcg_comp_array__18365(
  array__18365 *kcg_c1,
  array__18365 *kcg_c2);
#endif /* kcg_comp_array__18365 */

#ifndef kcg_comp_array_bool_256
extern kcg_bool kcg_comp_array_bool_256(
  array_bool_256 *kcg_c1,
  array_bool_256 *kcg_c2);
#endif /* kcg_comp_array_bool_256 */

#ifndef kcg_comp_array_bool_256_46
extern kcg_bool kcg_comp_array_bool_256_46(
  array_bool_256_46 *kcg_c1,
  array_bool_256_46 *kcg_c2);
#endif /* kcg_comp_array_bool_256_46 */

#ifndef kcg_comp_array__18432
extern kcg_bool kcg_comp_array__18432(
  array__18432 *kcg_c1,
  array__18432 *kcg_c2);
#endif /* kcg_comp_array__18432 */

#ifndef kcg_comp_array__18435
extern kcg_bool kcg_comp_array__18435(
  array__18435 *kcg_c1,
  array__18435 *kcg_c2);
#endif /* kcg_comp_array__18435 */

#ifndef kcg_comp_array__18438
extern kcg_bool kcg_comp_array__18438(
  array__18438 *kcg_c1,
  array__18438 *kcg_c2);
#endif /* kcg_comp_array__18438 */

#ifndef kcg_comp_array_bool_8
extern kcg_bool kcg_comp_array_bool_8(
  array_bool_8 *kcg_c1,
  array_bool_8 *kcg_c2);
#endif /* kcg_comp_array_bool_8 */

#ifndef kcg_comp_array__18444
extern kcg_bool kcg_comp_array__18444(
  array__18444 *kcg_c1,
  array__18444 *kcg_c2);
#endif /* kcg_comp_array__18444 */

#ifndef kcg_comp_array__18447
extern kcg_bool kcg_comp_array__18447(
  array__18447 *kcg_c1,
  array__18447 *kcg_c2);
#endif /* kcg_comp_array__18447 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#ifndef kcg_comp_array__18453
extern kcg_bool kcg_comp_array__18453(
  array__18453 *kcg_c1,
  array__18453 *kcg_c2);
#endif /* kcg_comp_array__18453 */

#ifndef kcg_comp_array__18456
extern kcg_bool kcg_comp_array__18456(
  array__18456 *kcg_c1,
  array__18456 *kcg_c2);
#endif /* kcg_comp_array__18456 */

#ifndef kcg_comp_array__18459
extern kcg_bool kcg_comp_array__18459(
  array__18459 *kcg_c1,
  array__18459 *kcg_c2);
#endif /* kcg_comp_array__18459 */

#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */

#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#ifndef kcg_comp_array_bool_256_46_30
extern kcg_bool kcg_comp_array_bool_256_46_30(
  array_bool_256_46_30 *kcg_c1,
  array_bool_256_46_30 *kcg_c2);
#endif /* kcg_comp_array_bool_256_46_30 */

#ifndef kcg_comp_array__18474
extern kcg_bool kcg_comp_array__18474(
  array__18474 *kcg_c1,
  array__18474 *kcg_c2);
#endif /* kcg_comp_array__18474 */

#ifndef kcg_comp_array__18477
extern kcg_bool kcg_comp_array__18477(
  array__18477 *kcg_c1,
  array__18477 *kcg_c2);
#endif /* kcg_comp_array__18477 */

#ifndef kcg_comp_array__18480
extern kcg_bool kcg_comp_array__18480(
  array__18480 *kcg_c1,
  array__18480 *kcg_c2);
#endif /* kcg_comp_array__18480 */

#ifndef kcg_comp_array_int_7_33_231
extern kcg_bool kcg_comp_array_int_7_33_231(
  array_int_7_33_231 *kcg_c1,
  array_int_7_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_7_33_231 */

#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array_int_236
extern kcg_bool kcg_comp_array_int_236(
  array_int_236 *kcg_c1,
  array_int_236 *kcg_c2);
#endif /* kcg_comp_array_int_236 */

#ifndef kcg_comp_array__18501
extern kcg_bool kcg_comp_array__18501(
  array__18501 *kcg_c1,
  array__18501 *kcg_c2);
#endif /* kcg_comp_array__18501 */

#ifndef kcg_comp_array_bool_10
extern kcg_bool kcg_comp_array_bool_10(
  array_bool_10 *kcg_c1,
  array_bool_10 *kcg_c2);
#endif /* kcg_comp_array_bool_10 */

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__18130

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__18130

#define kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg kcg_comp_struct__18243

#define kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg kcg_copy_struct__18243

#define kcg_comp_API_TelegramHeader_T_API_Msg_Pkg kcg_comp_struct__18255

#define kcg_copy_API_TelegramHeader_T_API_Msg_Pkg kcg_copy_struct__18255

#define kcg_comp_API_TrackSideInput_T_API_Msg_Pkg kcg_comp_struct__18263

#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg kcg_copy_struct__18263

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__18213

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__18213

#define kcg_comp_RadioMessage_T_Radio_Types_Pkg kcg_comp_struct__18368

#define kcg_copy_RadioMessage_T_Radio_Types_Pkg kcg_copy_struct__18368

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__18144

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__18144

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__17988

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__17988

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__18020

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__18020

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__18027

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__18027

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__18033

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__18033

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__18017

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__18017

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__18061

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__18061

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__17994

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__17994

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__18043

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__18043

#define kcg_comp_BG_Message_T_BG_Types_Pkg kcg_comp_struct__18376

#define kcg_copy_BG_Message_T_BG_Types_Pkg kcg_copy_struct__18376

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__18194

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__18194

#define kcg_comp_Telegram_T_BG_Types_Pkg kcg_comp_struct__18358

#define kcg_copy_Telegram_T_BG_Types_Pkg kcg_copy_struct__18358

#define kcg_comp_TelegramArray_T_BG_Types_Pkg kcg_comp_array__18365

#define kcg_copy_TelegramArray_T_BG_Types_Pkg kcg_copy_array__18365

#define kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg kcg_comp_struct__18250

#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg kcg_copy_struct__18250

#define kcg_comp_odometryFactors_T_Toolbox kcg_comp_struct__18207

#define kcg_copy_odometryFactors_T_Toolbox kcg_copy_struct__18207

#define kcg_comp_MSG_Errors_T_Common_Types_Pkg kcg_comp_struct__18272

#define kcg_copy_MSG_Errors_T_Common_Types_Pkg kcg_copy_struct__18272

#define kcg_comp_radioManagementMessage_T_Common_Types_Pkg kcg_comp_struct__18298

#define kcg_copy_radioManagementMessage_T_Common_Types_Pkg kcg_copy_struct__18298

#define kcg_comp_PositionReportParameter_T_Common_Types_Pkg kcg_comp_struct__18327

#define kcg_copy_PositionReportParameter_T_Common_Types_Pkg kcg_copy_struct__18327

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__18334

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__18334

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__18231

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__18231

#define kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__17982

#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__17982

#define kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg kcg_comp_struct__18383

#define kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg kcg_copy_struct__18383

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__18114

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__18114

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__18122

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__18122

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__18125

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__18125

#define kcg_comp_Buffer_DataDictionary_Pkg kcg_comp_array__18349

#define kcg_copy_Buffer_DataDictionary_Pkg kcg_copy_array__18349

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__18144

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__18144

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__18171

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__18171

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__18155

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__18155

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__18174

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__18174

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__18177

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__18177

#define kcg_comp_ModeDecisionTableType_DataDictionary_Pkg kcg_comp_array__18346

#define kcg_copy_ModeDecisionTableType_DataDictionary_Pkg kcg_copy_array__18346

#define kcg_comp_LevelDecisionTableType_DataDictionary_Pkg kcg_comp_array__18355

#define kcg_copy_LevelDecisionTableType_DataDictionary_Pkg kcg_copy_array__18355

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__18098

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__18098

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__18139

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__18139

#define kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_comp_struct__18282

#define kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_copy_struct__18282

#define kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg kcg_comp_struct__18288

#define kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg kcg_copy_struct__18288

#define kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__18402

#define kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__18402

#define kcg_comp_IterPacket58_T_Packet_Types_Pkg kcg_comp_struct__18306

#define kcg_copy_IterPacket58_T_Packet_Types_Pkg kcg_copy_struct__18306

#define kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__18391

#define kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__18391

#define kcg_comp_IterPacket58List_T_Packet_Types_Pkg kcg_comp_array__18311

#define kcg_copy_IterPacket58List_T_Packet_Types_Pkg kcg_copy_array__18311

#define kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_comp_struct__18314

#define kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_copy_struct__18314

#define kcg_comp_outBGchecks_CheckBGInputChannel_Pkg kcg_comp_array__18432

#define kcg_copy_outBGchecks_CheckBGInputChannel_Pkg kcg_copy_array__18432

#define kcg_comp_checkedBG_CheckBGInputChannel_Pkg kcg_comp_struct__18414

#define kcg_copy_checkedBG_CheckBGInputChannel_Pkg kcg_copy_struct__18414

#define kcg_comp_ReceivedBGs_CheckBGInputChannel_Pkg kcg_comp_array__18435

#define kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg kcg_copy_array__18435

#define kcg_comp_ReceivedBG_CheckBGInputChannel_Pkg kcg_comp_struct__18424

#define kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg kcg_copy_struct__18424

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__18078

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__18078

#define kcg_comp_positionedBGs_T_TrainPosition_Types_Pck kcg_comp_array__18095

#define kcg_copy_positionedBGs_T_TrainPosition_Types_Pck kcg_copy_array__18095

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__18008

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__18008

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__18067

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__18067

#define kcg_comp_MetadataTruthtable_T kcg_comp_array_bool_256_46

#define kcg_copy_MetadataTruthtable_T kcg_copy_array_bool_256_46

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

