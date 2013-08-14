
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / Bitlen.h
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

    const char         a_Var_Namen_International_Static_Speed_Profile[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_STATIC", "V_STATIC", "Q_FRONT", "N_ITER", "Q_DIFF", "NC_CDDIFF", "NC_DIFF", "V_DIFF", "N_ITER", "D_STATIC", "V_STATIC", "Q_FRONT", "N_ITER", "Q_DIFF", "NC_CDDIFF", "NC_DIFF", "V_DIFF" };
    const unsigned int a_Bit_Laeng_International_Static_Speed_Profile[] = { 8, 2, 13, 2, 15, 7, 1, 5, 2, 4, 4, 7, 5, 15, 7, 1, 5, 2, 4, 4, 7 }; 
    const unsigned int a_Start_Bit_International_Static_Speed_Profile[] = { 0, 8, 10, 23, 25, 40, 47, 48, 53, 55, 59, 63, 70, 75, 90, 97, 98, 103, 105, 109, 113 };
// ================

    const char         a_Var_Namen_Linking[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_LINK", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "Q_LINKORIENTATION", "Q_LINKREACTION", "Q_LOCACC", "N_ITER", "D_LINK", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "Q_LINKORIENTATION", "Q_LINKREACTION", "Q_LOCACC" };
    const unsigned int a_Bit_Laeng_Linking[] = { 8, 2, 13, 2, 15, 1, 10, 14, 1, 2, 6, 5, 15, 1, 10, 14, 1, 2, 6 }; 
    const unsigned int a_Start_Bit_Linking[] = { 0, 8, 10, 23, 25, 40, 41, 51, 65, 66, 68, 74, 79, 94, 95, 105, 119, 120, 122 };
// ================

    const char         a_Var_Namen_Level_23_transition_information[] = { "NID_PACKET", "L_PACKET", "NID_LTRBG" };
    const unsigned int a_Bit_Laeng_Level_23_transition_information[] = { 8, 13, 10+14 }; 
    const unsigned int a_Start_Bit_Level_23_transition_information[] = { 0, 8, 21 };
// ================

    const char         a_Var_Namen_Inhibition_of_revocable_TSRs_from_balises_in_L23[] = { "NID_PACKET", "Q_DIR", "L_PACKET" };
    const unsigned int a_Bit_Laeng_Inhibition_of_revocable_TSRs_from_balises_in_L23[] = { 8, 2, 13 }; 
    const unsigned int a_Start_Bit_Inhibition_of_revocable_TSRs_from_balises_in_L23[] = { 0, 8, 10 };
// ================

    const char         a_Var_Namen_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system[] = { "NID_PACKET", "L_PACKET", "NID_XUSER", "Other_data_depending_on__NID_XUSER" };
    const unsigned int a_Bit_Laeng_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system[] = { 8, 13, 9,  }; 
    const unsigned int a_Start_Bit_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system[] = { 0, 8, 21, 30 };
// ================

    const char         a_Var_Namen_Session_Management[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_RBC", "NID_C", "NID_RBC", "NID_RADIO", "Q_SLEEPSESSION" };
    const unsigned int a_Bit_Laeng_Session_Management[] = { 8, 2, 13, 1, 10, 14, 64, 1 }; 
    const unsigned int a_Start_Bit_Session_Management[] = { 0, 8, 10, 23, 24, 34, 48, 112 };
// ================

    const char         a_Var_Namen_Inhibition_of_balise_group_message_consistency_reaction[] = { "NID_PACKET", "Q_DIR", "L_PACKET" };
    const unsigned int a_Bit_Laeng_Inhibition_of_balise_group_message_consistency_reaction[] = { 8, 2, 13 }; 
    const unsigned int a_Start_Bit_Inhibition_of_balise_group_message_consistency_reaction[] = { 0, 8, 10 };
// ================

    const char         a_Var_Namen_Virtual_Balise_Cover_order[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_VBCO", "NID_VBCMK", "NID_C", "T_VBC" };
    const unsigned int a_Bit_Laeng_Virtual_Balise_Cover_order[] = { 8, 2, 13, 1, 6, 10, 8 }; 
    const unsigned int a_Start_Bit_Virtual_Balise_Cover_order[] = { 0, 8, 10, 23, 24, 30, 40 };
// ================

    const char         a_Var_Namen_Virtual_Balise_Cover_marker[] = { "NID_PACKET", "NID_VBCMK" };
    const unsigned int a_Bit_Laeng_Virtual_Balise_Cover_marker[] = { 8, 6 }; 
    const unsigned int a_Start_Bit_Virtual_Balise_Cover_marker[] = { 0, 8 };
// ================

    const char         a_Var_Namen_Packet_for_sending_fixed_text_messages[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "Q_TEXTCLASS", "Q_TEXTDISPLAY", "D_TEXTDISPLAY", "M_MODETEXTDISPLAY0", "M_LEVELTEXTDISPLAY0", "NID_NTC0", "L_TEXTDISPLAY", "T_TEXTDISPLAY", "M_MODETEXTDISPLAY1", "M_LEVELTEXTDISPLAY1", "NID_NTC1", "Q_TEXTCONFIRM", "Q_CONFTEXTDISPLAY", "Q_TEXTREPORT", "NID_TEXTMESSAGE", "NID_C", "NID_RBC", "Q_TEXT" };
    const unsigned int a_Bit_Laeng_Packet_for_sending_fixed_text_messages[] = { 8, 2, 13, 2, 2, 1, 15, 4, 3, 8, 15, 10, 4, 3, 8, 2, 1, 1, 8, 10, 14, 8 }; 
    const unsigned int a_Start_Bit_Packet_for_sending_fixed_text_messages[] = { 0, 8, 10, 23, 25, 27, 28, 43, 47, 50, 58, 73, 83, 87, 90, 98, 100, 101, 102, 110, 120, 134 };
// ================

    const char         a_Var_Namen_Radio_Network_registration[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "NID_MN" };
    const unsigned int a_Bit_Laeng_Radio_Network_registration[] = { 8, 2, 13, 24 }; 
    const unsigned int a_Start_Bit_Radio_Network_registration[] = { 0, 8, 10, 23 };
// ================

    const char         a_Var_Namen_Level_Transition_Order[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_LEVELTR", "M_LEVELTR", "NID_NTC", "L_ACKLEVELTR", "N_ITER", "M_LEVELTR", "NID_NTC", "L_ACKLEVELTR" };
    const unsigned int a_Bit_Laeng_Level_Transition_Order[] = { 8, 2, 13, 2, 15, 3, 8, 15, 5, 3, 8, 15 }; 
    const unsigned int a_Start_Bit_Level_Transition_Order[] = { 0, 8, 10, 23, 25, 40, 43, 51, 66, 71, 74, 82 };
// ================

    const char         a_Var_Namen_Temporary_Speed_Restriction_Revocation[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "NID_TSR" };
    const unsigned int a_Bit_Laeng_Temporary_Speed_Restriction_Revocation[] = { 8, 2, 13, 8 }; 
    const unsigned int a_Start_Bit_Temporary_Speed_Restriction_Revocation[] = { 0, 8, 10, 23 };
// ================

    const char         a_Var_Namen_Position_Report_based_on_two_balise_groups[] = { "NID_PACKET", "L_PACKET", "Q_SCALE", "NID_LRBG", "NID_PRVLRBG", "D_LRBG", "Q_DIRLRBG", "Q_DLRBG", "L_DOUBTOVER", "L_DOUBTUNDER", "Q_LENGTH", "L_TRAININT", "V_TRAIN", "Q_DIRTRAIN", "M_MODE", "M_LEVEL", "NID_NTC" };
    const unsigned int a_Bit_Laeng_Position_Report_based_on_two_balise_groups[] = { 8, 13, 2, 10+14, 10+14, 15, 2, 2, 15, 15, 2, 15, 7, 2, 4, 3, 8 }; 
    const unsigned int a_Start_Bit_Position_Report_based_on_two_balise_groups[] = { 0, 8, 21, 23, 33, 43, 58, 60, 62, 77, 92, 94, 109, 116, 118, 122, 125 };
// ================

    const char         a_Var_Namen_Movement_Authority_Request_Parameters[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "T_MAR", "T_TIMEOUTRQST", "T_CYCRQST" };
    const unsigned int a_Bit_Laeng_Movement_Authority_Request_Parameters[] = { 8, 2, 13, 8, 10, 8 }; 
    const unsigned int a_Start_Bit_Movement_Authority_Request_Parameters[] = { 0, 8, 10, 23, 31, 41 };
// ================

    const char         a_Var_Namen_Permitted_Braking_Distance_Information[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "Q_TRACKINIT", "D_TRACKINIT", "D_PBD", "Q_GDIR", "G_PBDSR", "Q_PBDSR", "D_PBDSR", "L_PBDSR", "N_ITER", "D_PBD", "Q_GDIR", "G_PBDSR", "Q_PBDSR", "D_PBDSR", "L_PBDSR" };
    const unsigned int a_Bit_Laeng_Permitted_Braking_Distance_Information[] = { 8, 2, 13, 2, 1, 15, 15, 1, 8, 1, 15, 15, 5, 15, 1, 8, 1, 15, 15 }; 
    const unsigned int a_Start_Bit_Permitted_Braking_Distance_Information[] = { 0, 8, 10, 23, 25, 26, 41, 56, 57, 65, 66, 81, 96, 101, 116, 117, 125, 126, 141 };
// ================

    const char         a_Var_Namen_Data_used_by_applications_outside_the_ERTMSETCS_system[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "NID_XUSER", "NID_NTC", "Other_data_depending_on__NID_XUSER" };
    const unsigned int a_Bit_Laeng_Data_used_by_applications_outside_the_ERTMSETCS_system[] = { 8, 2, 13, 9, 8,  }; 
    const unsigned int a_Start_Bit_Data_used_by_applications_outside_the_ERTMSETCS_system[] = { 0, 8, 10, 23, 32, 40 };
// ================

    const char         a_Var_Namen_Reversing_supervision_information[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_REVERSE", "V_REVERSE" };
    const unsigned int a_Bit_Laeng_Reversing_supervision_information[] = { 8, 2, 13, 2, 15, 7 }; 
    const unsigned int a_Start_Bit_Reversing_supervision_information[] = { 0, 8, 10, 23, 25, 40 };
// ================

    const char         a_Var_Namen_RBC_transition_order[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_RBCTR", "NID_C", "NID_RBC", "NID_RADIO", "Q_SLEEPSESSION" };
    const unsigned int a_Bit_Laeng_RBC_transition_order[] = { 8, 2, 13, 2, 15, 10, 14, 64, 1 }; 
    const unsigned int a_Start_Bit_RBC_transition_order[] = { 0, 8, 10, 23, 25, 40, 50, 64, 128 };
// ================

    const char         a_Var_Namen_Route_Suitability_Data[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "Q_TRACKINIT", "D_TRACKINIT", "D_SUITABILITY", "Q_SUITABILITY", "M_LINEGAUGE", "M_AXLELOADCAT", "M_VOLTAGE", "NID_CTRACTION", "N_ITER", "D_SUITABILITY", "Q_SUITABILITY", "M_LINEGAUGE", "M_AXLELOADCAT", "M_VOLTAGE", "NID_CTRACTION" };
    const unsigned int a_Bit_Laeng_Route_Suitability_Data[] = { 8, 2, 13, 2, 1, 15, 15, 2, 8, 7, 4, 10, 5, 15, 2, 8, 7, 4, 10 }; 
    const unsigned int a_Start_Bit_Route_Suitability_Data[] = { 0, 8, 10, 23, 25, 26, 41, 56, 58, 66, 73, 77, 87, 92, 107, 109, 117, 124, 128 };
// ================

    const char         a_Var_Namen_Default_Gradient_for_Temporary_Speed_Restriction[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_GDIR", "G_TSR" };
    const unsigned int a_Bit_Laeng_Default_Gradient_for_Temporary_Speed_Restriction[] = { 8, 2, 13, 1, 8 }; 
    const unsigned int a_Start_Bit_Default_Gradient_for_Temporary_Speed_Restriction[] = { 0, 8, 10, 23, 24 };
// ================

    const char         a_Var_Namen_Onboard_telephone_numbers[] = { "NID_PACKET", "L_PACKET", "N_ITER", "NID_RADIO" };
    const unsigned int a_Bit_Laeng_Onboard_telephone_numbers[] = { 8, 13, 5, 64 }; 
    const unsigned int a_Start_Bit_Onboard_telephone_numbers[] = { 0, 8, 21, 26 };
// ================

    const char         a_Var_Namen_Stop_if_in_Staff_Responsible[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SRSTOP" };
    const unsigned int a_Bit_Laeng_Stop_if_in_Staff_Responsible[] = { 8, 2, 13, 1 }; 
    const unsigned int a_Start_Bit_Stop_if_in_Staff_Responsible[] = { 0, 8, 10, 23 };
// ================

    const char         a_Var_Namen_Track_Condition_Change_of_allowed_current_consumption[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_CURRENT", "M_CURRENT" };
    const unsigned int a_Bit_Laeng_Track_Condition_Change_of_allowed_current_consumption[] = { 8, 2, 13, 2, 15, 10 }; 
    const unsigned int a_Start_Bit_Track_Condition_Change_of_allowed_current_consumption[] = { 0, 8, 10, 23, 25, 40 };
// ================

    const char         a_Var_Namen_Track_Ahead_Free_up_to_level_23_transition_location[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_NEWCOUNTRY", "NID_C", "NID_BG" };
    const unsigned int a_Bit_Laeng_Track_Ahead_Free_up_to_level_23_transition_location[] = { 8, 2, 13, 1, 10, 14 }; 
    const unsigned int a_Start_Bit_Track_Ahead_Free_up_to_level_23_transition_location[] = { 0, 8, 10, 23, 24, 34 };
// ================

    const char         a_Var_Namen_Staff_Responsible_distance_Information_from_loop[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "Q_NEWCOUNTRY0", "NID_C0", "NID_BG0", "Q_NEWCOUNTRY1", "NID_C1", "NID_BG1", "D_SR", "N_ITER", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "D_SR" };
    const unsigned int a_Bit_Laeng_Staff_Responsible_distance_Information_from_loop[] = { 8, 2, 13, 2, 1, 10, 14, 1, 10, 14, 15, 5, 1, 10, 14, 15 }; 
    const unsigned int a_Start_Bit_Staff_Responsible_distance_Information_from_loop[] = { 0, 8, 10, 23, 25, 26, 36, 50, 51, 61, 75, 90, 95, 96, 106, 120 };
// ================

    const char         a_Var_Namen_Radio_infill_area_information[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "Q_RIU", "NID_C", "NID_RIU", "NID_RADIO", "D_INFILL", "NID_BG" };
    const unsigned int a_Bit_Laeng_Radio_infill_area_information[] = { 8, 2, 13, 2, 1, 10, 14, 64, 15, 14 }; 
    const unsigned int a_Start_Bit_Radio_infill_area_information[] = { 0, 8, 10, 23, 25, 26, 36, 50, 114, 129 };
// ================

    const char         a_Var_Namen_Danger_for_Shunting_information[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_ASPECT" };
    const unsigned int a_Bit_Laeng_Danger_for_Shunting_information[] = { 8, 2, 13, 1 }; 
    const unsigned int a_Start_Bit_Danger_for_Shunting_information[] = { 0, 8, 10, 23 };
// ================

    const char         a_Var_Namen_Level_Crossing_information[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "NID_LX", "D_LX", "L_LX", "Q_LXSTATUS", "V_LX", "Q_STOPLX", "L_STOPLX" };
    const unsigned int a_Bit_Laeng_Level_Crossing_information[] = { 8, 2, 13, 2, 8, 15, 15, 1, 7, 1, 15 }; 
    const unsigned int a_Start_Bit_Level_Crossing_information[] = { 0, 8, 10, 23, 25, 33, 48, 63, 64, 71, 72 };
// ================

    const char         a_Var_Namen_Track_Condition_Big_Metal_Masses[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_TRACKCOND", "L_TRACKCOND", "N_ITER", "D_TRACKCOND", "L_TRACKCOND" };
    const unsigned int a_Bit_Laeng_Track_Condition_Big_Metal_Masses[] = { 8, 2, 13, 2, 15, 15, 5, 15, 15 }; 
    const unsigned int a_Start_Bit_Track_Condition_Big_Metal_Masses[] = { 0, 8, 10, 23, 25, 40, 55, 60, 75 };
// ================

    const char         a_Var_Namen_Geographical_Position_Information[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "D_POSOFF", "Q_MPOSITION", "M_POSITION", "N_ITER", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "D_POSOFF", "Q_MPOSITION", "M_POSITION" };
    const unsigned int a_Bit_Laeng_Geographical_Position_Information[] = { 8, 2, 13, 2, 1, 10, 14, 15, 1, 24, 5, 1, 10, 14, 15, 1, 24 }; 
    const unsigned int a_Start_Bit_Geographical_Position_Information[] = { 0, 8, 10, 23, 25, 26, 36, 50, 65, 66, 90, 95, 96, 106, 120, 135, 136 };
// ================

    const char         a_Var_Namen_Position_Report[] = { "NID_PACKET", "L_PACKET", "Q_SCALE", "NID_LRBG", "D_LRBG", "Q_DIRLRBG", "Q_DLRBG", "L_DOUBTOVER", "L_DOUBTUNDER", "Q_LENGTH", "L_TRAININT", "V_TRAIN", "Q_DIRTRAIN", "M_MODE", "M_LEVEL", "NID_NTC" };
    const unsigned int a_Bit_Laeng_Position_Report[] = { 8, 13, 2, 10+14, 15, 2, 2, 15, 15, 2, 15, 7, 2, 4, 3, 8 }; 
    const unsigned int a_Start_Bit_Position_Report[] = { 0, 8, 21, 23, 33, 48, 50, 52, 67, 82, 84, 99, 106, 108, 112, 115 };
// ================

    const char         a_Var_Namen_National_Values[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_VALIDNV", "NID_C", "N_ITER", "NID_C", "V_NVSHUNT", "V_NVSTFF", "V_NVONSIGHT", "V_NVLIMSUPERV", "V_NVUNFIT", "V_NVREL", "D_NVROLL", "Q_NVSBTSMPERM", "Q_NVEMRRLS", "Q_NVGUIPERM", "Q_NVSBFBPERM", "Q_NVINHSMICPERM", "V_NVALLOWOVTRP", "V_NVSUPOVTRP", "D_NVOVTRP", "T_NVOVTRP", "D_NVPOTRP", "M_NVCONTACT", "T_NVCONTACT", "M_NVDERUN", "D_NVSTFF", "Q_NVDRIVER_ADHES", "A_NVMAXREDADH1", "A_NVMAXREDADH2", "A_NVMAXREDADH3", "Q_NVLOCACC", "M_NVAVADH", "M_NVEBCL", "Q_NVKINT", "Q_NVKVINTSET", "A_NVP12", "A_NVP23", "V_NVKVINT", "M_NVKVINT", "N_ITER", "V_NVKVINT", "M_NVKVINT", "N_ITER", "Q_NVKVINTSET", "A_NVP12", "A_NVP23", "V_NVKVINT", "M_NVKVINT", "N_ITER", "V_NVKVINT", "M_NVKVINT", "L_NVKRINT", "M_NVKRINT", "N_ITER", "L_NVKRINT", "M_NVKRINT", "M_NVKTINT" };
    const unsigned int a_Bit_Laeng_National_Values[] = { 8, 2, 13, 2, 15, 10, 5, 10, 7, 7, 7, 7, 7, 7, 15, 1, 1, 1, 1, 1, 7, 7, 15, 8, 15, 2, 8, 1, 15, 1, 6, 6, 6, 6, 5, 4, 1, 2, 6, 6, 7, 7, 5, 7, 7, 5, 2, 6, 6, 7, 7, 5, 7, 7, 5, 5, 5, 5, 5, 5 }; 
    const unsigned int a_Start_Bit_National_Values[] = { 0, 8, 10, 23, 25, 40, 50, 55, 65, 72, 79, 86, 93, 100, 107, 122, 123, 124, 125, 126, 127, 134, 141, 156, 164, 179, 181, 189, 190, 205, 206, 212, 218, 224, 230, 235, 239, 240, 242, 248, 254, 261, 268, 273, 280, 287, 292, 294, 300, 306, 313, 320, 325, 332, 339, 344, 349, 354, 359, 364 };
// ================

    const char         a_Var_Namen_Level_23_Movement_Authority[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "V_LOA", "T_LOA", "N_ITER", "L_SECTION", "Q_SECTIONTIMER", "T_SECTIONTIMER", "D_SECTIONTIMERSTOPLOC", "L_ENDSECTION", "Q_SECTIONTIMER", "T_SECTIONTIMER", "D_SECTIONTIMERSTOPLOC", "Q_ENDTIMER", "T_ENDTIMER", "D_ENDTIMERSTARTLOC", "Q_DANGERPOINT", "D_DP", "V_RELEASEDP", "Q_OVERLAP", "D_STARTOL", "T_OL", "D_OL", "V_RELEASEOL" };
    const unsigned int a_Bit_Laeng_Level_23_Movement_Authority[] = { 8, 2, 13, 2, 7, 10, 5, 15, 1, 10, 15, 15, 1, 10, 15, 1, 10, 15, 1, 15, 7, 1, 15, 10, 15, 7 }; 
    const unsigned int a_Start_Bit_Level_23_Movement_Authority[] = { 0, 8, 10, 23, 25, 32, 42, 47, 62, 63, 73, 88, 103, 104, 114, 129, 130, 140, 155, 156, 171, 178, 179, 194, 204, 219 };
// ================

    const char         a_Var_Namen_Repositioning_Information[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "L_SECTION" };
    const unsigned int a_Bit_Laeng_Repositioning_Information[] = { 8, 2, 13, 2, 15 }; 
    const unsigned int a_Start_Bit_Repositioning_Information[] = { 0, 8, 10, 23, 25 };
// ================

    const char         a_Var_Namen_Track_Condition_Station_Platforms[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "Q_TRACKINIT", "D_TRACKINIT", "D_TRACKCOND", "L_TRACKCOND", "M_PLATFORM", "Q_PLATFORM", "N_ITER", "D_TRACKCOND", "L_TRACKCOND", "M_PLATFORM", "Q_PLATFORM" };
    const unsigned int a_Bit_Laeng_Track_Condition_Station_Platforms[] = { 8, 2, 13, 2, 1, 15, 15, 15, 4, 2, 5, 15, 15, 4, 2 }; 
    const unsigned int a_Start_Bit_Track_Condition_Station_Platforms[] = { 0, 8, 10, 23, 25, 26, 41, 56, 71, 75, 77, 82, 97, 112, 116 };
// ================

    const char         a_Var_Namen_Gradient_Profile[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_GRADIENT", "Q_GDIR", "G_A", "N_ITER", "D_GRADIENT", "Q_GDIR", "G_A" };
    const unsigned int a_Bit_Laeng_Gradient_Profile[] = { 8, 2, 13, 2, 15, 1, 8, 5, 15, 1, 8 }; 
    const unsigned int a_Start_Bit_Gradient_Profile[] = { 0, 8, 10, 23, 25, 40, 41, 49, 54, 69, 70 };
// ================

    const char         a_Var_Namen_Adhesion_factor[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_ADHESION", "L_ADHESION", "M_ADHESION" };
    const unsigned int a_Bit_Laeng_Adhesion_factor[] = { 8, 2, 13, 2, 15, 15, 1 }; 
    const unsigned int a_Start_Bit_Adhesion_factor[] = { 0, 8, 10, 23, 25, 40, 55 };
// ================

    const char         a_Var_Namen_Default_balise_or_Loop_or_RIU_information[] = { "NID_PACKET", "Q_DIR", "L_PACKET" };
    const unsigned int a_Bit_Laeng_Default_balise_or_Loop_or_RIU_information[] = { 8, 2, 13 }; 
    const unsigned int a_Start_Bit_Default_balise_or_Loop_or_RIU_information[] = { 0, 8, 10 };
// ================

    const char         a_Var_Namen_Train_running_number_from_RBC[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "NID_OPERATIONAL" };
    const unsigned int a_Bit_Laeng_Train_running_number_from_RBC[] = { 8, 2, 13, 32 }; 
    const unsigned int a_Start_Bit_Train_running_number_from_RBC[] = { 0, 8, 10, 23 };
// ================

    const char         a_Var_Namen_Level_1_Movement_Authority[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "V_MAIN", "V_LOA", "T_LOA", "N_ITER", "L_SECTION", "Q_SECTIONTIMER", "T_SECTIONTIMER", "D_SECTIONTIMERSTOPLOC", "L_ENDSECTION", "Q_SECTIONTIMER", "T_SECTIONTIMER", "D_SECTIONTIMERSTOPLOC", "Q_ENDTIMER", "T_ENDTIMER", "D_ENDTIMERSTARTLOC", "Q_DANGERPOINT", "D_DP", "V_RELEASEDP", "Q_OVERLAP", "D_STARTOL", "T_OL", "D_OL", "V_RELEASEOL" };
    const unsigned int a_Bit_Laeng_Level_1_Movement_Authority[] = { 8, 2, 13, 2, 7, 7, 10, 5, 15, 1, 10, 15, 15, 1, 10, 15, 1, 10, 15, 1, 15, 7, 1, 15, 10, 15, 7 }; 
    const unsigned int a_Start_Bit_Level_1_Movement_Authority[] = { 0, 8, 10, 23, 25, 32, 39, 49, 54, 69, 70, 80, 95, 110, 111, 121, 136, 137, 147, 162, 163, 178, 185, 186, 201, 211, 226 };
// ================

    const char         a_Var_Namen_Conditional_Level_Transition_Order[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "M_LEVELTR", "NID_NTC", "N_ITER", "M_LEVELTR", "NID_NTC" };
    const unsigned int a_Bit_Laeng_Conditional_Level_Transition_Order[] = { 8, 2, 13, 3, 8, 5, 3, 8 }; 
    const unsigned int a_Start_Bit_Conditional_Level_Transition_Order[] = { 0, 8, 10, 23, 26, 34, 39, 42 };
// ================

    const char         a_Var_Namen_Track_Condition[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "Q_TRACKINIT", "D_TRACKINIT", "D_TRACKCOND", "L_TRACKCOND", "M_TRACKCOND", "N_ITER", "D_TRACKCOND", "L_TRACKCOND", "M_TRACKCOND" };
    const unsigned int a_Bit_Laeng_Track_Condition[] = { 8, 2, 13, 2, 1, 15, 15, 15, 4, 5, 15, 15, 4 }; 
    const unsigned int a_Start_Bit_Track_Condition[] = { 0, 8, 10, 23, 25, 26, 41, 56, 71, 75, 80, 95, 110 };
// ================

    const char         a_Var_Namen_Stop_Shunting_on_desk_opening[] = { "NID_PACKET", "Q_DIR", "L_PACKET" };
    const unsigned int a_Bit_Laeng_Stop_Shunting_on_desk_opening[] = { 8, 2, 13 }; 
    const unsigned int a_Start_Bit_Stop_Shunting_on_desk_opening[] = { 0, 8, 10 };
// ================

    const char         a_Var_Namen_EOLM_Packet[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "NID_LOOP", "D_LOOP", "L_LOOP", "Q_LOOPDIR", "Q_SSCODE" };
    const unsigned int a_Bit_Laeng_EOLM_Packet[] = { 8, 2, 13, 2, 14, 15, 15, 1, 4 }; 
    const unsigned int a_Start_Bit_EOLM_Packet[] = { 0, 8, 10, 23, 25, 39, 54, 69, 70 };
// ================

    const char         a_Var_Namen_Position_Report_Parameters[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "T_CYCLOC", "D_CYCLOC", "M_LOC", "N_ITER", "D_LOC", "Q_LGTLOC" };
    const unsigned int a_Bit_Laeng_Position_Report_Parameters[] = { 8, 2, 13, 2, 8, 15, 3, 5, 15, 1 }; 
    const unsigned int a_Start_Bit_Position_Report_Parameters[] = { 0, 8, 10, 23, 25, 33, 48, 51, 56, 71 };
// ================

    const char         a_Var_Namen_Temporary_Speed_Restriction[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "NID_TSR", "D_TSR", "L_TSR", "Q_FRONT", "V_TSR" };
    const unsigned int a_Bit_Laeng_Temporary_Speed_Restriction[] = { 8, 2, 13, 2, 8, 15, 15, 1, 7 }; 
    const unsigned int a_Start_Bit_Temporary_Speed_Restriction[] = { 0, 8, 10, 23, 25, 33, 48, 63, 64 };
// ================

    const char         a_Var_Namen_System_Version_order[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "M_VERSION" };
    const unsigned int a_Bit_Laeng_System_Version_order[] = { 8, 2, 13, 7 }; 
    const unsigned int a_Start_Bit_System_Version_order[] = { 0, 8, 10, 23 };
// ================

    const char         a_Var_Namen_Infill_location_reference[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_NEWCOUNTRY", "NID_C", "NID_BG" };
    const unsigned int a_Bit_Laeng_Infill_location_reference[] = { 8, 2, 13, 1, 10, 14 }; 
    const unsigned int a_Start_Bit_Infill_location_reference[] = { 0, 8, 10, 23, 24, 34 };
// ================

    const char         a_Var_Namen_Reversing_area_information[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_STARTREVERSE", "L_REVERSEAREA" };
    const unsigned int a_Bit_Laeng_Reversing_area_information[] = { 8, 2, 13, 2, 15, 15 }; 
    const unsigned int a_Start_Bit_Reversing_area_information[] = { 0, 8, 10, 23, 25, 40 };
// ================

    const char         a_Var_Namen_Axle_Load_Speed_Profile[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "Q_TRACKINIT", "D_TRACKINIT", "D_AXLELOAD", "L_AXLELOAD", "Q_FRONT", "N_ITER", "M_AXLELOADCAT", "V_AXLELOAD", "N_ITER", "D_AXLELOAD", "L_AXLELOAD", "Q_FRONT", "N_ITER", "M_AXLELOADCAT", "V_AXLELOAD" };
    const unsigned int a_Bit_Laeng_Axle_Load_Speed_Profile[] = { 8, 2, 13, 2, 1, 15, 15, 15, 1, 5, 7, 7, 5, 15, 15, 1, 5, 7, 7 }; 
    const unsigned int a_Start_Bit_Axle_Load_Speed_Profile[] = { 0, 8, 10, 23, 25, 26, 41, 56, 71, 72, 77, 84, 91, 96, 111, 126, 127, 132, 139 };
// ================

    const char         a_Var_Namen_Train_running_number[] = { "NID_PACKET", "L_PACKET", "NID_OPERATIONAL" };
    const unsigned int a_Bit_Laeng_Train_running_number[] = { 8, 13, 32 }; 
    const unsigned int a_Start_Bit_Train_running_number[] = { 0, 8, 21 };
// ================

    const char         a_Var_Namen_Session_Management_with_neighbouring_Radio_Infill_Unit[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_RIU", "NID_C", "NID_RIU", "NID_RADIO" };
    const unsigned int a_Bit_Laeng_Session_Management_with_neighbouring_Radio_Infill_Unit[] = { 8, 2, 13, 1, 10, 14, 64 }; 
    const unsigned int a_Start_Bit_Session_Management_with_neighbouring_Radio_Infill_Unit[] = { 0, 8, 10, 23, 24, 34, 48 };
// ================

    const char         a_Var_Namen_Packet_for_sending_plain_text_messages[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "Q_TEXTCLASS", "Q_TEXTDISPLAY", "D_TEXTDISPLAY", "M_MODETEXTDISPLAY0", "M_LEVELTEXTDISPLAY0", "NID_NTC0", "L_TEXTDISPLAY", "T_TEXTDISPLAY", "M_MODETEXTDISPLAY1", "M_LEVELTEXTDISPLAY1", "NID_NTC1", "Q_TEXTCONFIRM", "Q_CONFTEXTDISPLAY", "Q_TEXTREPORT", "NID_TEXTMESSAGE", "NID_C", "NID_RBC", "L_TEXT", "X_TEXT" };
    const unsigned int a_Bit_Laeng_Packet_for_sending_plain_text_messages[] = { 8, 2, 13, 2, 2, 1, 15, 4, 3, 8, 15, 10, 4, 3, 8, 2, 1, 1, 8, 10, 14, 8, 8 }; 
    const unsigned int a_Start_Bit_Packet_for_sending_plain_text_messages[] = { 0, 8, 10, 23, 25, 27, 28, 43, 47, 50, 58, 73, 83, 87, 90, 98, 100, 101, 102, 110, 120, 134, 142 };
// ================

    const char         a_Var_Namen_List_of_Balises_in_SR_Authority[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "N_ITER", "Q_NEWCOUNTRY", "NID_C", "NID_BG" };
    const unsigned int a_Bit_Laeng_List_of_Balises_in_SR_Authority[] = { 8, 2, 13, 5, 1, 10, 14 }; 
    const unsigned int a_Start_Bit_List_of_Balises_in_SR_Authority[] = { 0, 8, 10, 23, 28, 29, 39 };
// ================

    const char         a_Var_Namen_End_of_Information[] = { "NID_PACKET" };
    const unsigned int a_Bit_Laeng_End_of_Information[] = { 8 }; 
    const unsigned int a_Start_Bit_End_of_Information[] = { 0 };
// ================

    const char         a_Var_Namen_List_of_balises_for_SH_Area[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "N_ITER", "Q_NEWCOUNTRY", "NID_C", "NID_BG" };
    const unsigned int a_Bit_Laeng_List_of_balises_for_SH_Area[] = { 8, 2, 13, 5, 1, 10, 14 }; 
    const unsigned int a_Start_Bit_List_of_balises_for_SH_Area[] = { 0, 8, 10, 23, 28, 29, 39 };
// ================

    const char         a_Var_Namen_Error_reporting[] = { "NID_PACKET", "L_PACKET", "M_ERROR" };
    const unsigned int a_Bit_Laeng_Error_reporting[] = { 8, 13, 8 }; 
    const unsigned int a_Start_Bit_Error_reporting[] = { 0, 8, 21 };
// ================

    const char         a_Var_Namen_Mode_profile[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_MAMODE", "M_MAMODE", "V_MAMODE", "L_MAMODE", "L_ACKMAMODE", "Q_MAMODE", "N_ITER", "D_MAMODE", "M_MAMODE", "V_MAMODE", "L_MAMODE", "L_ACKMAMODE", "Q_MAMODE" };
    const unsigned int a_Bit_Laeng_Mode_profile[] = { 8, 2, 13, 2, 15, 2, 7, 15, 15, 1, 5, 15, 2, 7, 15, 15, 1 }; 
    const unsigned int a_Start_Bit_Mode_profile[] = { 0, 8, 10, 23, 25, 40, 42, 49, 64, 79, 80, 85, 100, 102, 109, 124, 139 };
// ================

    const char         a_Var_Namen_Track_Condition_Change_of_traction_system[] = { "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_TRACTION", "M_VOLTAGE", "NID_CTRACTION" };
    const unsigned int a_Bit_Laeng_Track_Condition_Change_of_traction_system[] = { 8, 2, 13, 2, 15, 4, 10 }; 
    const unsigned int a_Start_Bit_Track_Condition_Change_of_traction_system[] = { 0, 8, 10, 23, 25, 40, 44 };
// ================

    const char         a_Var_Namen_Validated_train_data[] = { "NID_PACKET", "L_PACKET", "NC_CDTRAIN", "NC_TRAIN", "L_TRAIN", "V_MAXTRAIN", "M_LOADINGGAUGE", "M_AXLELOADCAT", "M_AIRTIGHT", "N_AXLE", "N_ITER", "M_VOLTAGE", "NID_CTRACTION", "N_ITER", "NID_NTC" };
    const unsigned int a_Bit_Laeng_Validated_train_data[] = { 8, 13, 4, 15, 12, 7, 8, 7, 2, 10, 5, 4, 10, 5, 8 }; 
    const unsigned int a_Start_Bit_Validated_train_data[] = { 0, 8, 21, 25, 40, 52, 59, 67, 74, 76, 86, 91, 95, 105, 110 };
// ================

