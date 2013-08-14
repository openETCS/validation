#include "subset026_7.h"

/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: opnETCS_Decoder.h
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright (c) Siemens AG, 2013, All Rights Reserved
    
- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: none
- Cryptography: No
- Author(s): SiemensRailAutomation

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.   
============================================================================= */

void TrackToTrain_Virtual_Balise_Cover_marker (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Virtual_Balise_Cover_marker oETCS) ;
void TrackToTrain_System_Version_order (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_System_Version_order oETCS) ;
void TrackToTrain_National_Values (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_National_Values oETCS) ;
void TrackToTrain_Linking (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Linking oETCS) ;
void TrackToTrain_Virtual_Balise_Cover_order (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Virtual_Balise_Cover_order oETCS) ;
void TrackToTrain_Level_1_Movement_Authority (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Level_1_Movement_Authority oETCS) ;
void TrackToTrain_Staff_Responsible_distance_Information_from_loop (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Staff_Responsible_distance_Information_from_loop oETCS) ;
void TrackToTrain_Level_23_Movement_Authority (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Level_23_Movement_Authority oETCS) ;
void TrackToTrain_Repositioning_Information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Repositioning_Information oETCS) ;
void TrackToTrain_Gradient_Profile (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Gradient_Profile oETCS) ;
void TrackToTrain_International_Static_Speed_Profile (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_International_Static_Speed_Profile oETCS) ;
void TrackToTrain_Track_Condition_Change_of_traction_system (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Condition_Change_of_traction_system oETCS) ;
void TrackToTrain_Track_Condition_Change_of_allowed_current_consumption (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Condition_Change_of_allowed_current_consumption oETCS) ;
void TrackToTrain_Level_Transition_Order (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Level_Transition_Order oETCS) ;
void TrackToTrain_Session_Management (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Session_Management oETCS) ;
void TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system oETCS) ;
void TrackToTrain_Radio_Network_registration (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Radio_Network_registration oETCS) ;
void TrackToTrain_Conditional_Level_Transition_Order (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Conditional_Level_Transition_Order oETCS) ;
void TrackToTrain_List_of_balises_for_SH_Area (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_List_of_balises_for_SH_Area oETCS) ;
void TrackToTrain_Axle_Load_Speed_Profile (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Axle_Load_Speed_Profile oETCS) ;
void TrackToTrain_Permitted_Braking_Distance_Information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Permitted_Braking_Distance_Information oETCS) ;
void TrackToTrain_Movement_Authority_Request_Parameters (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Movement_Authority_Request_Parameters oETCS) ;
void TrackToTrain_Position_Report_Parameters (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Position_Report_Parameters oETCS) ;
void TrackToTrain_List_of_Balises_in_SR_Authority (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_List_of_Balises_in_SR_Authority oETCS) ;
void TrackToTrain_Inhibition_of_revocable_TSRs_from_balises_in_L23 (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Inhibition_of_revocable_TSRs_from_balises_in_L23 oETCS) ;
void TrackToTrain_Temporary_Speed_Restriction (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Temporary_Speed_Restriction oETCS) ;
void TrackToTrain_Temporary_Speed_Restriction_Revocation (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Temporary_Speed_Restriction_Revocation oETCS) ;
void TrackToTrain_Track_Condition_Big_Metal_Masses (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Condition_Big_Metal_Masses oETCS) ;
void TrackToTrain_Track_Condition (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Condition oETCS) ;
void TrackToTrain_Track_Condition_Station_Platforms (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Condition_Station_Platforms oETCS) ;
void TrackToTrain_Route_Suitability_Data (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Route_Suitability_Data oETCS) ;
void TrackToTrain_Adhesion_factor (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Adhesion_factor oETCS) ;
void TrackToTrain_Packet_for_sending_plain_text_messages (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Packet_for_sending_plain_text_messages oETCS) ;
void TrackToTrain_Packet_for_sending_fixed_text_messages (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Packet_for_sending_fixed_text_messages oETCS) ;
void TrackToTrain_Geographical_Position_Information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Geographical_Position_Information oETCS) ;
void TrackToTrain_Mode_profile (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Mode_profile oETCS) ;
void TrackToTrain_Level_Crossing_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Level_Crossing_information oETCS) ;
void TrackToTrain_Track_Ahead_Free_up_to_level_23_transition_location (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Ahead_Free_up_to_level_23_transition_location oETCS) ;
void TrackToTrain_RBC_transition_order (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_RBC_transition_order oETCS) ;
void TrackToTrain_Danger_for_Shunting_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Danger_for_Shunting_information oETCS) ;
void TrackToTrain_Radio_infill_area_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Radio_infill_area_information oETCS) ;
void TrackToTrain_EOLM_Packet (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_EOLM_Packet oETCS) ;
void TrackToTrain_Stop_Shunting_on_desk_opening (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Stop_Shunting_on_desk_opening oETCS) ;
void TrackToTrain_Infill_location_reference (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Infill_location_reference oETCS) ;
void TrackToTrain_Stop_if_in_Staff_Responsible (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Stop_if_in_Staff_Responsible oETCS) ;
void TrackToTrain_Reversing_area_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Reversing_area_information oETCS) ;
void TrackToTrain_Reversing_supervision_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Reversing_supervision_information oETCS) ;
void TrackToTrain_Train_running_number_from_RBC (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Train_running_number_from_RBC oETCS) ;
void TrackToTrain_Default_Gradient_for_Temporary_Speed_Restriction (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Default_Gradient_for_Temporary_Speed_Restriction oETCS) ;
void TrackToTrain_Session_Management_with_neighbouring_Radio_Infill_Unit (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Session_Management_with_neighbouring_Radio_Infill_Unit oETCS) ;
void TrackToTrain_Inhibition_of_balise_group_message_consistency_reaction (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Inhibition_of_balise_group_message_consistency_reaction oETCS) ;
void TrackToTrain_Default_balise_or_Loop_or_RIU_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Default_balise_or_Loop_or_RIU_information oETCS) ;
void TrainToTrack_Position_Report (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Position_Report oETCS) ;
void TrainToTrack_Position_Report_based_on_two_balise_groups (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Position_Report_based_on_two_balise_groups oETCS) ;
void TrainToTrack_Onboard_telephone_numbers (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Onboard_telephone_numbers oETCS) ;
void TrainToTrack_Error_reporting (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Error_reporting oETCS) ;
void TrainToTrack_Train_running_number (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Train_running_number oETCS) ;
void TrainToTrack_Level_23_transition_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Level_23_transition_information oETCS) ;
void TrainToTrack_Validated_train_data (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Validated_train_data oETCS) ;
void TrainToTrack_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system oETCS) ;
void BothWays_End_of_Information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_BothWays_End_of_Information oETCS) ;
