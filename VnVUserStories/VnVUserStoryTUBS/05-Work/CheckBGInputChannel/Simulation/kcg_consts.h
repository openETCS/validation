/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* CheckBGInputChannel_Pkg::c_locationacc */
#define c_locationacc_CheckBGInputChannel_Pkg 12

/* CheckBGInputChannel_Pkg::c_init_DirLrbg */
#define c_init_DirLrbg_CheckBGInputChannel_Pkg Q_DIRLRBG_Unknown

/* CheckBGInputChannel_Pkg::c_init_DirTrain */
#define c_init_DirTrain_CheckBGInputChannel_Pkg Q_DIRTRAIN_Unknown

/* CheckBGInputChannel_Pkg::c_emptyReceivedBG */
extern const ReceivedBG_CheckBGInputChannel_Pkg c_emptyReceivedBG_CheckBGInputChannel_Pkg;

/* CheckBGInputChannel_Pkg::c_emptyReceivedBGs */
extern const ReceivedBGs_CheckBGInputChannel_Pkg c_emptyReceivedBGs_CheckBGInputChannel_Pkg;

/* CheckBGInputChannel_Pkg::c_emptyoutBGchecks */
extern const outBGchecks_CheckBGInputChannel_Pkg c_emptyoutBGchecks_CheckBGInputChannel_Pkg;

/* CheckBGInputChannel_Pkg::c_BGArraySize */
#define c_BGArraySize_CheckBGInputChannel_Pkg 10

/* BG_Types_Pkg::cEmptyBG_Header */
extern const BG_Header_T_BG_Types_Pkg cEmptyBG_Header_BG_Types_Pkg;

/* cPermittedRadioPackets */
extern const MetadataTruthtable_T cPermittedRadioPackets;

/* cTTrainUnknown */
#define cTTrainUnknown 4294967295.0

/* cRadioSessionConnecting */
#define cRadioSessionConnecting morc_st_establishing_Radio_Types_Pkg

/* Receive_TrackSide_Msg_Pkg::cEmptyStore */
extern const TelegramStore_T_Receive_TrackSide_Msg_Pkg cEmptyStore_Receive_TrackSide_Msg_Pkg;

/* BG_Types_Pkg::cMaxDistanceBalisesInGroup */
extern const OdometryLocations_T_Obu_BasicTypes_Pkg cMaxDistanceBalisesInGroup_BG_Types_Pkg;

/* Receive_TrackSide_Msg_Pkg::cEmptyCollector */
extern const BGCollector_T_Receive_TrackSide_Msg_Pkg cEmptyCollector_Receive_TrackSide_Msg_Pkg;

/* BG_Types_Pkg::cemptyPosition */
extern const centerOfBalisePosition_T_BG_Types_Pkg cemptyPosition_BG_Types_Pkg;

/* BG_Types_Pkg::cEmptyTelegramArray */
extern const TelegramArray_T_BG_Types_Pkg cEmptyTelegramArray_BG_Types_Pkg;

/* BG_Types_Pkg::cEmpty_BaliseTlg */
extern const Telegram_T_BG_Types_Pkg cEmpty_BaliseTlg_BG_Types_Pkg;

/* Radio_Types_Pkg::cEmptyRadioMsg */
extern const RadioMessage_T_Radio_Types_Pkg cEmptyRadioMsg_Radio_Types_Pkg;

/* BG_Types_Pkg::cEmptyBGMessages */
extern const BG_Message_T_BG_Types_Pkg cEmptyBGMessages_BG_Types_Pkg;

/* CheckBGConsistency_Pkg::cRecivedMesg_PlaceHolder */
extern const ReceivedMessage_T_Common_Types_Pkg cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cTelegram */
extern const Telegram_T_BG_Types_Pkg cTelegram_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cInConsistentTelegram */
extern const Telegram_T_BG_Types_Pkg cInConsistentTelegram_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cTheTelegramFitsWithAll */
#define cTheTelegramFitsWithAll_CheckBGConsistency_Pkg 255

/* CheckBGConsistency_Pkg::cTheTelegramNeverFitsAnyMessage */
#define cTheTelegramNeverFitsAnyMessage_CheckBGConsistency_Pkg 254

/* CheckBGConsistency_Pkg::cEurobalise */
#define cEurobalise_CheckBGConsistency_Pkg msrc_Eurobalise_Common_Types_Pkg

/* CheckBGConsistency_Pkg::cRadioMetadata */
extern const RadioMetadata_T_Common_Types_Pkg cRadioMetadata_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cNoRadioHeader */
extern const Radio_TrackTrain_Header_T_Radio_Types_Pkg cNoRadioHeader_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cQDirLRBGunknown */
#define cQDirLRBGunknown_CheckBGConsistency_Pkg Q_DIRLRBG_Unknown

/* CheckBGConsistency_Pkg::cQqDirTrain */
#define cQqDirTrain_CheckBGConsistency_Pkg Q_DIRTRAIN_Unknown

/* BG_Types_Pkg::cMaxNoBalises */
#define cMaxNoBalises_BG_Types_Pkg 8

/* CheckBGConsistency_Pkg::cMetaDataElement */
extern const MetadataElement_T_Common_Types_Pkg cMetaDataElement_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cMetaData */
extern const Metadata_T_Common_Types_Pkg cMetaData_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cQDirLrbgNominal */
#define cQDirLrbgNominal_CheckBGConsistency_Pkg Q_DIRLRBG_Nominal

/* CheckBGConsistency_Pkg::cQqDirTrainNominal */
#define cQqDirTrainNominal_CheckBGConsistency_Pkg Q_DIRTRAIN_Nominal

/* CheckBGConsistency_Pkg::cQqDirTrainRevers */
#define cQqDirTrainRevers_CheckBGConsistency_Pkg Q_DIRTRAIN_Reverse

/* CheckBGConsistency_Pkg::cQDirLrbgRevers */
#define cQDirLrbgRevers_CheckBGConsistency_Pkg Q_DIRLRBG_Reverse

/* CheckBGConsistency_Pkg::cNoStoredBG */
extern const positionedBG_T_TrainPosition_Types_Pck cNoStoredBG_CheckBGConsistency_Pkg;

/* ValidateDataDirection_Pkg::cEmptyLRBG */
extern const positionedBG_T_TrainPosition_Types_Pck cEmptyLRBG_ValidateDataDirection_Pkg;

/* packagesSupport_Pkg::cEmptyP58 */
extern const P58_PositionReportParameters_T_Packet_Types_Pkg cEmptyP58_packagesSupport_Pkg;

/* Id_Pkg::cp058_Position_Report_Parameters */
#define cp058_Position_Report_Parameters_Id_Pkg 58

/* Id_Pkg::cm38_Initiation_of_a_Communication_Session */
#define cm38_Initiation_of_a_Communication_Session_Id_Pkg 38

/* Id_Pkg::cm32_RBC_RIU_System_Version */
#define cm32_RBC_RIU_System_Version_Id_Pkg 32

/* Id_Pkg::cm39_Acknowledgement_of_termination_of_a_communication_session */
#define cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg 39

/* TM_conversions::INT_Q_RBC_establish */
#define INT_Q_RBC_establish_TM_conversions 1

/* TM_conversions::INT_Q_RBC_terminate */
#define INT_Q_RBC_terminate_TM_conversions 0

/* TM_conversions::ENUM_Q_RBC_terminate */
#define ENUM_Q_RBC_terminate_TM_conversions Q_RBC_Terminate_communication_session

/* TM_conversions::ENUM_Q_RBC_establish */
#define ENUM_Q_RBC_establish_TM_conversions Q_RBC_Establish_communication_session

/* TM_conversions::INT_Q_SLEEPSESSION_execute */
#define INT_Q_SLEEPSESSION_execute_TM_conversions 1

/* TM_conversions::INT_Q_SLEEPSESSION_ignore */
#define INT_Q_SLEEPSESSION_ignore_TM_conversions 0

/* TM_conversions::ENUM_Q_SLEEPSESSION_execute */
#define ENUM_Q_SLEEPSESSION_execute_TM_conversions Q_SLEEPSESSION_Execute_session_establishment_order

/* TM_conversions::ENUM_Q_SLEEPSESSION_ignore */
#define ENUM_Q_SLEEPSESSION_ignore_TM_conversions Q_SLEEPSESSION_Ignore_session_establishment_order

/* TM::DEFAULT_CompressedPackets */
extern const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM;

/* TM::DEFAULT_PHeader */
extern const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM;

/* DataDictionary_Pkg::LevelDecisionTableFromBalise */
extern const LevelDecisionTableType_DataDictionary_Pkg LevelDecisionTableFromBalise_DataDictionary_Pkg;

/* DataDictionary_Pkg::LevelDecisionTableFromRBC */
extern const LevelDecisionTableType_DataDictionary_Pkg LevelDecisionTableFromRBC_DataDictionary_Pkg;

/* Common_Types_Pkg::cDefaultRM */
extern const ReceivedMessage_T_Common_Types_Pkg cDefaultRM_Common_Types_Pkg;

/* Config_Pkg::INIT_BUFFER */
extern const Buffer_DataDictionary_Pkg INIT_BUFFER_Config_Pkg;

/* Config_Pkg::MAX_TRANSITION_BUFFFER_SIZE */
#define MAX_TRANSITION_BUFFFER_SIZE_Config_Pkg 3

/* DataDictionary_Pkg::ModeDecisionTable */
extern const ModeDecisionTableType_DataDictionary_Pkg ModeDecisionTable_DataDictionary_Pkg;

/* Config_Pkg::MAX_PACKAGES */
#define MAX_PACKAGES_Config_Pkg 30

/* Packet_Types_Pkg::cIterPacket58 */
#define cIterPacket58_Packet_Types_Pkg 2

/* Toolbox::cDeltaSimulationTime */
#define cDeltaSimulationTime_Toolbox 10

/* Toolbox::cEmptyRadioMsgHeader */
extern const API_RadioMsgHeader_T_API_Msg_Pkg cEmptyRadioMsgHeader_Toolbox;

/* Toolbox::cOdometryFactors */
extern const odometryFactors_T_Toolbox cOdometryFactors_Toolbox;

/* TM_conversions::INT_Q_UPDOWN_downlink */
#define INT_Q_UPDOWN_downlink_TM_conversions 0

/* TM_conversions::INT_Q_UPDOWN_uplink */
#define INT_Q_UPDOWN_uplink_TM_conversions 1

/* TM_conversions::ENUM_Q_UPDOWN_downlink */
#define ENUM_Q_UPDOWN_downlink_TM_conversions Q_UPDOWN_Down_link_telegram

/* TM_conversions::ENUM_Q_UPDOWN_uplink */
#define ENUM_Q_UPDOWN_uplink_TM_conversions Q_UPDOWN_Up_link_telegram

/* TM_conversions::INT_M_VERSION_previous_M */
#define INT_M_VERSION_previous_M_TM_conversions 15

/* TM_conversions::INT_M_VERSION_1_0 */
#define INT_M_VERSION_1_0_TM_conversions 16

/* TM_conversions::INT_M_VERSION_1_1 */
#define INT_M_VERSION_1_1_TM_conversions 17

/* TM_conversions::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM_conversions 32

/* TM_conversions::ENUM_M_VERSION_Previous_versions */
#define ENUM_M_VERSION_Previous_versions_TM_conversions M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS

/* TM_conversions::ENUM_M_VERSION_Version_2_0 */
#define ENUM_M_VERSION_Version_2_0_TM_conversions M_VERSION_Version_2_0_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_1 */
#define ENUM_M_VERSION_Version_1_1_TM_conversions M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_0 */
#define ENUM_M_VERSION_Version_1_0_TM_conversions M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0

/* TM_conversions::INT_Q_MEDIA_Balise */
#define INT_Q_MEDIA_Balise_TM_conversions 0

/* TM_conversions::INT_Q_MEDIA_Loop */
#define INT_Q_MEDIA_Loop_TM_conversions 1

/* TM_conversions::ENUM_Q_MEDIA_Balise */
#define ENUM_Q_MEDIA_Balise_TM_conversions Q_MEDIA_Balise

/* TM_conversions::ENUM_Q_MEDIA_Loop */
#define ENUM_Q_MEDIA_Loop_TM_conversions Q_MEDIA_Loop

/* TM_conversions::INT_N_PIG_1st */
#define INT_N_PIG_1st_TM_conversions 0

/* TM_conversions::INT_N_PIG_2nd */
#define INT_N_PIG_2nd_TM_conversions 1

/* TM_conversions::INT_N_PIG_3rd */
#define INT_N_PIG_3rd_TM_conversions 2

/* TM_conversions::INT_N_PIG_4th */
#define INT_N_PIG_4th_TM_conversions 3

/* TM_conversions::INT_N_PIG_5th */
#define INT_N_PIG_5th_TM_conversions 4

/* TM_conversions::INT_N_PIG_6th */
#define INT_N_PIG_6th_TM_conversions 5

/* TM_conversions::INT_N_PIG_7th */
#define INT_N_PIG_7th_TM_conversions 6

/* TM_conversions::INT_N_PIG_8th */
#define INT_N_PIG_8th_TM_conversions 7

/* TM_conversions::ENUM_N_PIG_8th */
#define ENUM_N_PIG_8th_TM_conversions N_PIG_I_am_the_8th

/* TM_conversions::ENUM_N_PIG_7th */
#define ENUM_N_PIG_7th_TM_conversions N_PIG_I_am_the_7th

/* TM_conversions::ENUM_N_PIG_6th */
#define ENUM_N_PIG_6th_TM_conversions N_PIG_I_am_the_6th

/* TM_conversions::ENUM_N_PIG_5th */
#define ENUM_N_PIG_5th_TM_conversions N_PIG_I_am_the_5th

/* TM_conversions::ENUM_N_PIG_4th */
#define ENUM_N_PIG_4th_TM_conversions N_PIG_I_am_the_4th

/* TM_conversions::ENUM_N_PIG_3rd */
#define ENUM_N_PIG_3rd_TM_conversions N_PIG_I_am_the_3rd

/* TM_conversions::ENUM_N_PIG_2nd */
#define ENUM_N_PIG_2nd_TM_conversions N_PIG_I_am_the_2nd

/* TM_conversions::ENUM_N_PIG_1st */
#define ENUM_N_PIG_1st_TM_conversions N_PIG_I_am_the_1st

/* TM_conversions::INT_N_TOTAL_1 */
#define INT_N_TOTAL_1_TM_conversions 0

/* TM_conversions::INT_N_TOTAL_2 */
#define INT_N_TOTAL_2_TM_conversions 1

/* TM_conversions::INT_N_TOTAL_3 */
#define INT_N_TOTAL_3_TM_conversions 2

/* TM_conversions::INT_N_TOTAL_4 */
#define INT_N_TOTAL_4_TM_conversions 3

/* TM_conversions::INT_N_TOTAL_5 */
#define INT_N_TOTAL_5_TM_conversions 4

/* TM_conversions::INT_N_TOTAL_6 */
#define INT_N_TOTAL_6_TM_conversions 5

/* TM_conversions::INT_N_TOTAL_7 */
#define INT_N_TOTAL_7_TM_conversions 6

/* TM_conversions::INT_N_TOTAL_8 */
#define INT_N_TOTAL_8_TM_conversions 7

/* TM_conversions::ENUM_N_TOTAL_8 */
#define ENUM_N_TOTAL_8_TM_conversions N_TOTAL_8_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_7 */
#define ENUM_N_TOTAL_7_TM_conversions N_TOTAL_7_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_6 */
#define ENUM_N_TOTAL_6_TM_conversions N_TOTAL_6_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_5 */
#define ENUM_N_TOTAL_5_TM_conversions N_TOTAL_5_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_4 */
#define ENUM_N_TOTAL_4_TM_conversions N_TOTAL_4_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_3 */
#define ENUM_N_TOTAL_3_TM_conversions N_TOTAL_3_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_2 */
#define ENUM_N_TOTAL_2_TM_conversions N_TOTAL_2_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_1 */
#define ENUM_N_TOTAL_1_TM_conversions N_TOTAL_1_balise_in_the_group

/* TM_conversions::INT_M_DUP_duplicate_of_next */
#define INT_M_DUP_duplicate_of_next_TM_conversions 1

/* TM_conversions::INT_M_DUP_duplicate_of_previous */
#define INT_M_DUP_duplicate_of_previous_TM_conversions 2

/* TM_conversions::INT_M_DUP_no_duplicates */
#define INT_M_DUP_no_duplicates_TM_conversions 0

/* TM_conversions::ENUM_M_DUP_duplicate_of_next */
#define ENUM_M_DUP_duplicate_of_next_TM_conversions _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise

/* TM_conversions::ENUM_M_DUP_no_duplicates */
#define ENUM_M_DUP_no_duplicates_TM_conversions M_DUP_No_duplicates

/* TM_conversions::ENUM_M_DUP_duplicate_of_previous */
#define ENUM_M_DUP_duplicate_of_previous_TM_conversions M_DUP_This_balise_is_a_duplicate_of_the_previous_balise

/* TM_conversions::INT_Q_LINK_linked */
#define INT_Q_LINK_linked_TM_conversions 1

/* TM_conversions::INT_Q_LINK_unlinked */
#define INT_Q_LINK_unlinked_TM_conversions 0

/* TM_conversions::ENUM_Q_LINK_linked */
#define ENUM_Q_LINK_linked_TM_conversions Q_LINK_Linked

/* TM_conversions::ENUM_Q_LINK_unlinked */
#define ENUM_Q_LINK_unlinked_TM_conversions Q_LINK_Unlinked

/* TM::DEFAULT_BTMMessage */
extern const CompressedBaliseMessage_TM DEFAULT_BTMMessage_TM;

/* Balises426::BG364 */
extern const BaliseGroupData_Basics BG364_Balises426;

/* Balises426::BG367 */
extern const BaliseGroupData_Basics BG367_Balises426;

/* Balises426::BG368 */
extern const BaliseGroupData_Basics BG368_Balises426;

/* Balises426::BG366 */
extern const BaliseGroupData_Basics BG366_Balises426;

/* Balises426::BG369 */
extern const BaliseGroupData_Basics BG369_Balises426;

/* Balises426::BG365 */
extern const BaliseGroupData_Basics BG365_Balises426;

/* Balises426::BG341 */
extern const BaliseGroupData_Basics BG341_Balises426;

/* Balises426::BG364_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG364_header_B1_Balises426;

/* Balises426::BG364_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG364_header_B0_Balises426;

/* Packets426::BG364_P005_00A_L1 */
extern const P005_trackside_int_T_TM BG364_P005_00A_L1_Packets426;

/* TM::DIM_MaxRMessages */
#define DIM_MaxRMessages_TM 30

/* TM::DEFAULT_Headers */
extern const Metadata_T_Common_Types_Pkg DEFAULT_Headers_TM;

/* TM::DIM_MaxElementsPacket005 */
#define DIM_MaxElementsPacket005_TM ((DIM_N_ITER_TM + 1) * 7 + 5)

/* TM::DEFAULT_P005_sections_array_flat */
extern const P005_sections_array_flat_T_TM DEFAULT_P005_sections_array_flat_TM;

/* TM::DIM_N_ITER */
#define DIM_N_ITER_TM 32

/* TM_conversions::INT_Q_DIR_nomiinal */
#define INT_Q_DIR_nomiinal_TM_conversions 1

/* TM_conversions::INT_Q_DIR_reverse */
#define INT_Q_DIR_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIR_both */
#define INT_Q_DIR_both_TM_conversions 2

/* TM_conversions::ENUM_Q_DIR_both */
#define ENUM_Q_DIR_both_TM_conversions Q_DIR_Both_directions

/* TM_conversions::ENUM_Q_DIR_reverse */
#define ENUM_Q_DIR_reverse_TM_conversions Q_DIR_Reverse

/* TM_conversions::ENUM_Q_DIR_nominal */
#define ENUM_Q_DIR_nominal_TM_conversions Q_DIR_Nominal

/* Balises426::BG367_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG367_header_B0_Balises426;

/* Balises426::BG367_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG367_header_B1_Balises426;

/* Balises426::BG368_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG368_header_B1_Balises426;

/* Balises426::BG368_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG368_header_B0_Balises426;

/* Balises426::BG366_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG366_header_B1_Balises426;

/* Balises426::BG369_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG369_header_B1_Balises426;

/* Balises426::BG369_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG369_header_B0_Balises426;

/* Balises426::BG365_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG365_header_B0_Balises426;

/* Balises426::BG365_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG365_header_B1_Balises426;

/* Balises426::BG341_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG341_header_B0_Balises426;

/* Balises426::BG341_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG341_header_B1_Balises426;

/* TM::DIM_scale_eng_location */
#define DIM_scale_eng_location_TM 1.0

/* InfraLib::Half_Distance_Balises_in_BG */
#define Half_Distance_Balises_in_BG_InfraLib (Distance_Balises_in_BG_InfraLib / 2.0)

/* InfraLib::ReleaseDelta */
#define ReleaseDelta_InfraLib 1.5

/* InfraLib::Distance_Balises_in_BG */
#define Distance_Balises_in_BG_InfraLib 3.0

/* InfraLib::DEFAULT_BaliseTelegramHd */
extern const BaliseTelegramHeader_int_T_TM DEFAULT_BaliseTelegramHd_InfraLib;

/* TM::DEFAULT_TM_BaliseHeaderInt */
extern const BaliseTelegramHeader_int_T_TM DEFAULT_TM_BaliseHeaderInt_TM;

/* TM::DEFAULT_Packets */
extern const CompressedPackets_T_Common_Types_Pkg DEFAULT_Packets_TM;

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types_Pkg cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_Pkg 30

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

/* CalculateTrainPosition_Pkg::cNoPositionedBGs */
extern const positionedBGs_T_TrainPosition_Types_Pck cNoPositionedBGs_CalculateTrainPosition_Pkg;

/* TrainPosition_Types_Pck::cMaxNoOfStoredBGs */
#define cMaxNoOfStoredBGs_TrainPosition_Types_Pck (2 * cMaxNoOfLinkedBGs_BG_Types_Pkg)

/* CalculateTrainPosition_Pkg::cTrainPosition_0 */
extern const trainPosition_T_TrainPosition_Types_Pck cTrainPosition_0_CalculateTrainPosition_Pkg;

/* BG_Types_Pkg::cMaxNoOfLinkedBGs */
#define cMaxNoOfLinkedBGs_BG_Types_Pkg 4

/* TestExample::cModeAndLevelStatus */
extern const T_Mode_Level_Level_And_Mode_Types_Pkg cModeAndLevelStatus_TestExample;

/* TestExample::cQNVLocAcc */
#define cQNVLocAcc_TestExample 12

/* TestExample::cTNVContact */
#define cTNVContact_TestExample 30000

#endif /* _KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

