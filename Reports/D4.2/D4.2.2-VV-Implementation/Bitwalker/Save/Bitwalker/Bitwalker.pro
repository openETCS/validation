TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    Bitwalker.c \
    ../GeneratedC/opnETCS_Decoder.c

INCLUDEPATH += ../GeneratedC
INCLUDEPATH += ../GeneratedC/Subset_Structs

HEADERS += \
    Bitwalker.h \
    ../GeneratedC/opnETCS_Variables.h \
    ../GeneratedC/opnETCS_Decoder.h \
    ../GeneratedC/Subset_Structs/subset026_7.h \
    ../GeneratedC/Subset_Structs/Virtual_Balise_Cover_order.h \
    ../GeneratedC/Subset_Structs/Virtual_Balise_Cover_marker.h \
    ../GeneratedC/Subset_Structs/Validated_train_data.h \
    ../GeneratedC/Subset_Structs/Train_running_number_from_RBC.h \
    ../GeneratedC/Subset_Structs/Train_running_number.h \
    ../GeneratedC/Subset_Structs/Track_Condition_Station_Platforms.h \
    ../GeneratedC/Subset_Structs/Track_Condition_Change_of_traction_system.h \
    ../GeneratedC/Subset_Structs/Track_Condition_Change_of_allowed_current_consumption.h \
    ../GeneratedC/Subset_Structs/Track_Condition_Big_Metal_Masses.h \
    ../GeneratedC/Subset_Structs/Track_Condition.h \
    ../GeneratedC/Subset_Structs/Track_Ahead_Free_up_to_level_23_transition_location.h \
    ../GeneratedC/Subset_Structs/Temporary_Speed_Restriction_Revocation.h \
    ../GeneratedC/Subset_Structs/Temporary_Speed_Restriction.h \
    ../GeneratedC/Subset_Structs/System_Version_order.h \
    ../GeneratedC/Subset_Structs/Stop_Shunting_on_desk_opening.h \
    ../GeneratedC/Subset_Structs/Stop_if_in_Staff_Responsible.h \
    ../GeneratedC/Subset_Structs/Staff_Responsible_distance_Information_from_loop.h \
    ../GeneratedC/Subset_Structs/Session_Management_with_neighbouring_Radio_Infill_Unit.h \
    ../GeneratedC/Subset_Structs/Session_Management.h \
    ../GeneratedC/Subset_Structs/Route_Suitability_Data.h \
    ../GeneratedC/Subset_Structs/Reversing_supervision_information.h \
    ../GeneratedC/Subset_Structs/Reversing_area_information.h \
    ../GeneratedC/Subset_Structs/Repositioning_Information.h \
    ../GeneratedC/Subset_Structs/RBC_transition_order.h \
    ../GeneratedC/Subset_Structs/Radio_Network_registration.h \
    ../GeneratedC/Subset_Structs/Radio_infill_area_information.h \
    ../GeneratedC/Subset_Structs/Position_Report_Parameters.h \
    ../GeneratedC/Subset_Structs/Position_Report_based_on_two_balise_groups.h \
    ../GeneratedC/Subset_Structs/Position_Report.h \
    ../GeneratedC/Subset_Structs/Permitted_Braking_Distance_Information.h \
    ../GeneratedC/Subset_Structs/Packet_for_sending_plain_text_messages.h \
    ../GeneratedC/Subset_Structs/Packet_for_sending_fixed_text_messages.h \
    ../GeneratedC/Subset_Structs/Onboard_telephone_numbers.h \
    ../GeneratedC/Subset_Structs/National_Values.h \
    ../GeneratedC/Subset_Structs/Movement_Authority_Request_Parameters.h \
    ../GeneratedC/Subset_Structs/Mode_profile.h \
    ../GeneratedC/Subset_Structs/List_of_Balises_in_SR_Authority.h \
    ../GeneratedC/Subset_Structs/List_of_balises_for_SH_Area.h \
    ../GeneratedC/Subset_Structs/Linking.h \
    ../GeneratedC/Subset_Structs/Level_Transition_Order.h \
    ../GeneratedC/Subset_Structs/Level_Crossing_information.h \
    ../GeneratedC/Subset_Structs/Level_23_transition_information.h \
    ../GeneratedC/Subset_Structs/Level_23_Movement_Authority.h \
    ../GeneratedC/Subset_Structs/Level_1_Movement_Authority.h \
    ../GeneratedC/Subset_Structs/International_Static_Speed_Profile.h \
    ../GeneratedC/Subset_Structs/Inhibition_of_revocable_TSRs_from_balises_in_L23.h \
    ../GeneratedC/Subset_Structs/Inhibition_of_balise_group_message_consistency_reaction.h \
    ../GeneratedC/Subset_Structs/Infill_location_reference.h \
    ../GeneratedC/Subset_Structs/Gradient_Profile.h \
    ../GeneratedC/Subset_Structs/Geographical_Position_Information.h \
    ../GeneratedC/Subset_Structs/Error_reporting.h \
    ../GeneratedC/Subset_Structs/EOLM_Packet.h \
    ../GeneratedC/Subset_Structs/End_of_Information.h \
    ../GeneratedC/Subset_Structs/Default_Gradient_for_Temporary_Speed_Restriction.h \
    ../GeneratedC/Subset_Structs/Default_balise_or_Loop_or_RIU_information.h \
    ../GeneratedC/Subset_Structs/Data_used_by_applications_outside_the_ERTMSETCS_system.h \
    ../GeneratedC/Subset_Structs/Data_used_by_applications_outside_the_ERTMS_or_ETCS_system.h \
    ../GeneratedC/Subset_Structs/Danger_for_Shunting_information.h \
    ../GeneratedC/Subset_Structs/Conditional_Level_Transition_Order.h \
    ../GeneratedC/Subset_Structs/Axle_Load_Speed_Profile.h \
    ../GeneratedC/Subset_Structs/Adhesion_factor.h

