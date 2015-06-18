
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: subset026_7.h
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

#include "Adhesion_factor.h"
#include "Axle_Load_Speed_Profile.h"
#include "Conditional_Level_Transition_Order.h"
#include "Danger_for_Shunting_information.h"
#include "Data_used_by_applications_outside_the_ERTMSETCS_system.h"
#include "Data_used_by_applications_outside_the_ERTMS_or_ETCS_system.h"
#include "Default_balise_or_Loop_or_RIU_information.h"
#include "Default_Gradient_for_Temporary_Speed_Restriction.h"
#include "End_of_Information.h"
#include "EOLM_Packet.h"
#include "Error_reporting.h"
#include "Geographical_Position_Information.h"
#include "Gradient_Profile.h"
#include "Infill_location_reference.h"
#include "Inhibition_of_balise_group_message_consistency_reaction.h"
#include "Inhibition_of_revocable_TSRs_from_balises_in_L23.h"
#include "International_Static_Speed_Profile.h"
#include "Level_1_Movement_Authority.h"
#include "Level_23_Movement_Authority.h"
#include "Level_23_transition_information.h"
#include "Level_Crossing_information.h"
#include "Level_Transition_Order.h"
#include "Linking.h"
#include "List_of_balises_for_SH_Area.h"
#include "List_of_Balises_in_SR_Authority.h"
#include "Mode_profile.h"
#include "Movement_Authority_Request_Parameters.h"
#include "National_Values.h"
#include "Onboard_telephone_numbers.h"
#include "Packet_for_sending_fixed_text_messages.h"
#include "Packet_for_sending_plain_text_messages.h"
#include "Permitted_Braking_Distance_Information.h"
#include "Position_Report.h"
#include "Position_Report_based_on_two_balise_groups.h"
#include "Position_Report_Parameters.h"
#include "Radio_infill_area_information.h"
#include "Radio_Network_registration.h"
#include "RBC_transition_order.h"
#include "Repositioning_Information.h"
#include "Reversing_area_information.h"
#include "Reversing_supervision_information.h"
#include "Route_Suitability_Data.h"
#include "Session_Management.h"
#include "Session_Management_with_neighbouring_Radio_Infill_Unit.h"
#include "Staff_Responsible_distance_Information_from_loop.h"
#include "Stop_if_in_Staff_Responsible.h"
#include "Stop_Shunting_on_desk_opening.h"
#include "System_Version_order.h"
#include "Temporary_Speed_Restriction.h"
#include "Temporary_Speed_Restriction_Revocation.h"
#include "Track_Ahead_Free_up_to_level_23_transition_location.h"
#include "Track_Condition.h"
#include "Track_Condition_Big_Metal_Masses.h"
#include "Track_Condition_Change_of_allowed_current_consumption.h"
#include "Track_Condition_Change_of_traction_system.h"
#include "Track_Condition_Station_Platforms.h"
#include "Train_running_number.h"
#include "Train_running_number_from_RBC.h"
#include "Validated_train_data.h"
#include "Virtual_Balise_Cover_marker.h"
#include "Virtual_Balise_Cover_order.h"
