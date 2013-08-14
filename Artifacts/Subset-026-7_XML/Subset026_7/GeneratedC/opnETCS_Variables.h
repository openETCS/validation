
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: opnETCS_Variables.h
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

real A_NVMAXREDADH1	 /* MinVal = 0.0, MaxVal = 3.15 */  ; 
real A_NVMAXREDADH2	 /* MinVal = 0.0, MaxVal = 3.15 */  ; 
real A_NVMAXREDADH3	 /* MinVal = 0.0, MaxVal = 3.15 */  ; 
real A_NVP12	 /* MinVal = 0.0, MaxVal = 3.15 */  ; 
real A_NVP23	 /* MinVal = 0.0, MaxVal = 3.15 */  ; 
int D_ADHESION	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_AXLELOAD	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_CURRENT	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_CYCLOC	 /* MinVal = 0, MaxVal = 32766 */	 // 1111 1111 = The_train_has_not_to_report_cyclically_its_position 
  ; 
int D_DP	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_EMERGENCYSTOP	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_ENDTIMERSTARTLOC	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_GRADIENT	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_INFILL	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_LEVELTR	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = Now_(The_level_transition_is_performed_upon_receipt_of_the_order) 
  ; 
int D_LINK	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_LOC	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_LOOP	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = Distance_not_known 
  ; 
int D_LRBG	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = Unknown 
  ; 
int D_LX	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_MAMODE	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_NVOVTRP	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_NVPOTRP	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_NVROLL	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = infinite 
  ; 
int D_NVSTFF	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = infinite 
  ; 
int D_OL	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_PBD	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_PBDSR	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_POSOFF	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_RBCTR	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_REF	 /* MinVal = -32768, MaxVal = 32767 */  ; 
int D_REVERSE	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = represents_infinite 
  ; 
int D_SECTIONTIMERSTOPLOC	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_SR	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = Represents_infinite 
  ; 
int D_STARTOL	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_STARTREVERSE	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_STATIC	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_SUITABILITY	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_TAFDISPLAY	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_TEXTDISPLAY	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = The_display_of_the_text_shall_not_be_distance_limited 
  ; 
int D_TRACKINIT	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_TRACKCOND	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_TRACTION	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_TSR	 /* MinVal = 0, MaxVal = 32767 */  ; 
int D_VALIDNV	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = Now_(National_Values_are_immediately_applicable) 
  ; 
int G_A	 /* MinVal = 0, MaxVal = 254 */	 // 255 = Non_numerical_value_telling_that_the_current_gradient_description_ends_at_D_GRADIENT(n) 
  ; 
int G_PBDSR	 /* MinVal = 0, MaxVal = 255 */  ; 
int G_TSR	 /* MinVal = 0, MaxVal = 255 */  ; 
int L_ACKLEVELTR	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_ACKMAMODE	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_ADHESION	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_AXLELOAD	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_DOUBTOVER	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = Unknown 
  ; 
int L_DOUBTUNDER	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = Unknown 
  ; 
int L_ENDSECTION	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_LOOP	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = Length_not_known 
  ; 
int L_LX	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_MAMODE	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = Infinite_length 
  ; 
int L_MESSAGE	 /* MinVal = 0, MaxVal = 1023 */  ; 
typedef enum { 
	L_NVKRINT_0m = 0 ,
	L_NVKRINT_25m = 1 ,
	L_NVKRINT_50m = 2 ,
	L_NVKRINT_75m = 3 ,
	L_NVKRINT_100m = 4 ,
	L_NVKRINT_150m = 5 ,
	L_NVKRINT_200m = 6 ,
	L_NVKRINT_300m = 7 ,
	L_NVKRINT_400m = 8 ,
	L_NVKRINT_500m = 9 ,
	L_NVKRINT_600m = 10 ,
	L_NVKRINT_700m = 11 ,
	L_NVKRINT_800m = 12 ,
	L_NVKRINT_900m = 13 ,
	L_NVKRINT_1000m = 14 ,
	L_NVKRINT_1100m = 15 ,
	L_NVKRINT_1200m = 16 ,
	L_NVKRINT_1300m = 17 ,
	L_NVKRINT_1400m = 18 ,
	L_NVKRINT_1500m = 19 ,
	L_NVKRINT_1600m = 20 ,
	L_NVKRINT_1700m = 21 ,
	L_NVKRINT_1800m = 22 ,
	L_NVKRINT_1900m = 23 ,
	L_NVKRINT_2000m = 24 ,
	L_NVKRINT_2100m = 25 ,
	L_NVKRINT_2200m = 26 ,
	L_NVKRINT_2300m = 27 ,
	L_NVKRINT_2400m = 28 ,
	L_NVKRINT_2500m = 29 ,
	L_NVKRINT_2600m = 30 ,
	L_NVKRINT_2700m = 31 
} L_NVKRINT ;
int L_PACKET	 /* MinVal = 0, MaxVal = 8191 */  ; 
int L_PBDSR	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_REVERSEAREA	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_SECTION	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_STOPLX	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_TAFDISPLAY	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_TEXT	 /* MinVal = 0, MaxVal = 255 */  ; 
int L_TEXTDISPLAY	 /* MinVal = 0, MaxVal = 32766 */	 // 32767 = The_display_of_the_text_shall_not_be_distance_limited 
  ; 
int L_TRACKCOND	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_TRAIN	 /* MinVal = 0, MaxVal = 4095 */  ; 
int L_TRAININT	 /* MinVal = 0, MaxVal = 32767 */  ; 
int L_TSR	 /* MinVal = 0, MaxVal = 32767 */  ; 
typedef enum { 
	M_ACK_No_acknowledgement_required = 0 ,
	M_ACK_Acknowledgement_required = 1 
} M_ACK ;
typedef enum { 
	M_ADHESION_Slippery_rail = 0 ,
	M_ADHESION_Non_slippery_rail = 1 
} M_ADHESION ;
typedef enum { 
	M_AIRTIGHT_Not_fitted = 0 ,
	M_AIRTIGHT_Fitted = 1 
} M_AIRTIGHT ;
typedef enum { 
	M_AXLELOADCAT_A = 0 ,
	M_AXLELOADCAT_HS17 = 1 ,
	M_AXLELOADCAT_B1 = 2 ,
	M_AXLELOADCAT_B2 = 3 ,
	M_AXLELOADCAT_C2 = 4 ,
	M_AXLELOADCAT_C3 = 5 ,
	M_AXLELOADCAT_C4 = 6 ,
	M_AXLELOADCAT_D2 = 7 ,
	M_AXLELOADCAT_D3 = 8 ,
	M_AXLELOADCAT_D4 = 9 ,
	M_AXLELOADCAT_D4XL = 10 ,
	M_AXLELOADCAT_E4 = 11 ,
	M_AXLELOADCAT_E5 = 12 
} M_AXLELOADCAT ;
int M_CURRENT	 /* MinVal = 0, MaxVal = 10000 */	 // 1023 = No_restriction_for_current_consumption 
  ; 
typedef enum { 
	M_DUP_No_duplicates = 0 ,
	M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1 ,
	M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2 
} M_DUP ;
typedef enum { 
	M_ERROR_Balise_group_linking_consistency_error = 0 ,
	M_ERROR_Linked_balise_group_message_consistency_erro = 1 ,
	M_ERROR_Unlinked_balise_group_message_consistency_error = 2 ,
	M_ERROR_Radio_message_consistency_error = 3 ,
	M_ERROR_Radio_sequence_error = 4 ,
	M_ERROR_Radio_safe_radio_connection_error = 5 ,
	M_ERROR_Safety_critical_failure = 6 ,
	M_ERROR_Double_linking_error = 7 ,
	M_ERROR_Double_repositioning_error = 8 
} M_ERROR ;
typedef enum { 
	M_LEVEL_Level_0 = 0 ,
	M_LEVEL_Level_NTC_specified_by_NID_NTC = 1 ,
	M_LEVEL_Level_1 = 2 ,
	M_LEVEL_Level_2 = 3 ,
	M_LEVEL_Level_3 = 4 
} M_LEVEL ;
typedef enum { 
	M_LEVELTEXTDISPLAY_Level_0 = 0 ,
	M_LEVELTEXTDISPLAY_Level_NTC_specified_by_NID_NTC = 1 ,
	M_LEVELTEXTDISPLAY_Level_1 = 2 ,
	M_LEVELTEXTDISPLAY_Level_2 = 3 ,
	M_LEVELTEXTDISPLAY_Level_3 = 4 ,
	M_LEVELTEXTDISPLAY_The_display_of_the_text_shall_not_be_limited_by_the_level = 5 
} M_LEVELTEXTDISPLAY ;
typedef enum { 
	M_LEVELTR_Level_0 = 0 ,
	M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1 ,
	M_LEVELTR_Level_1 = 2 ,
	M_LEVELTR_Level_2 = 3 ,
	M_LEVELTR_Level_3 = 4 
} M_LEVELTR ;
typedef enum { 
	M_LINEGAUGE_G1 = 1 ,
	M_LINEGAUGE_GA = 2 ,
	M_LINEGAUGE_GB = 4 ,
	M_LINEGAUGE_GC = 8 
} M_LINEGAUGE ;
typedef enum { 
	M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles = 0 ,
	M_LOADINGGAUGE_G1 = 1 ,
	M_LOADINGGAUGE_GA = 2 ,
	M_LOADINGGAUGE_GB = 3 ,
	M_LOADINGGAUGE_GC = 4 
} M_LOADINGGAUGE ;
typedef enum { 
	M_LOC_Now = 0 ,
	M_LOC_Every_LRBG_compliant_balise_group = 1 ,
	M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group = 2 
} M_LOC ;
typedef enum { 
	M_MAMODE_On_Sight = 0 ,
	M_MAMODE_Shunting = 1 ,
	M_MAMODE_Limited_Supervision = 2 
} M_MAMODE ;
int M_MCOUNT	 /* MinVal = 0, MaxVal = 253 */	 // 254 = The_telegram_never_fits_any_message_of_the_group 
	 // 255 = The_telegram_fits_with_all_telegrams_of_the_same_balise_group 
  ; 
typedef enum { 
	M_MODE_Full_Supervision = 0 ,
	M_MODE_On_Sight = 1 ,
	M_MODE_Staff_Responsible = 2 ,
	M_MODE_Shunting = 3 ,
	M_MODE_Unfitted = 4 ,
	M_MODE_Sleeping = 5 ,
	M_MODE_Stand_By = 6 ,
	M_MODE_Trip = 7 ,
	M_MODE_Post_Trip = 8 ,
	M_MODE_System_Failure = 9 ,
	M_MODE_Isolation = 10 ,
	M_MODE_Non_Leading = 11 ,
	M_MODE_Limited_Supervision = 12 ,
	M_MODE_National_System = 13 ,
	M_MODE_Reversing = 14 ,
	M_MODE_Passive_Shunting = 15 
} M_MODE ;
typedef enum { 
	M_MODETEXTDISPLAY_Full_Supervision = 0 ,
	M_MODETEXTDISPLAY_On_Sight = 1 ,
	M_MODETEXTDISPLAY_Staff_Responsible = 2 ,
	M_MODETEXTDISPLAY_Unfitted = 4 ,
	M_MODETEXTDISPLAY_Stand_By = 6 ,
	M_MODETEXTDISPLAY_Trip = 7 ,
	M_MODETEXTDISPLAY_Post_Trip = 8 ,
	M_MODETEXTDISPLAY_Non_Leading = 11 ,
	M_MODETEXTDISPLAY_Limited_Supervision = 12 ,
	M_MODETEXTDISPLAY_Reversing = 14 ,
	M_MODETEXTDISPLAY_The_display_of_the_text_shall_not_be_limited_by_the_mode = 15 
} M_MODETEXTDISPLAY ;
real M_NVAVADH	 /* MinVal = 0.0, MaxVal = 1.0 */  ; 
typedef enum { 
	M_NVCONTACT_Train_trip = 0 ,
	M_NVCONTACT_Apply_service_brake = 1 ,
	M_NVCONTACT_No_Reaction = 2 
} M_NVCONTACT ;
typedef enum { 
	M_NVDERUN_No = 0 ,
	M_NVDERUN_Yes = 1 
} M_NVDERUN ;
typedef enum { 
	M_NVEBCL_Confidence_level_50 = 0 ,
	M_NVEBCL_Confidence_level_90 = 1 ,
	M_NVEBCL_Confidence_level_99 = 2 ,
	M_NVEBCL_Confidence_level_99_9 = 3 ,
	M_NVEBCL_Confidence_level_99_99 = 4 ,
	M_NVEBCL_Confidence_level_99_999 = 5 ,
	M_NVEBCL_Confidence_level_99_9999 = 6 ,
	M_NVEBCL_Confidence_level_99_99999 = 7 ,
	M_NVEBCL_Confidence_level_99_999999 = 8 ,
	M_NVEBCL_Confidence_level_99_9999999 = 9 
} M_NVEBCL ;
real M_NVKRINT	 /* MinVal = 0.0, MaxVal = 1.5 */  ; 
real M_NVKTINT	 /* MinVal = 0.0, MaxVal = 1.5 */  ; 
real M_NVKVINT	 /* MinVal = 0.0, MaxVal = 2.5 */  ; 
typedef enum { 
	M_PLATFORM_200_mm = 0 ,
	M_PLATFORM_300380_mm = 1 ,
	M_PLATFORM_550_mm = 2 ,
	M_PLATFORM_580_mm = 3 ,
	M_PLATFORM_680_mm = 4 ,
	M_PLATFORM_685_mm = 5 ,
	M_PLATFORM_730_mm = 6 ,
	M_PLATFORM_760_mm = 7 ,
	M_PLATFORM_840_mm = 8 ,
	M_PLATFORM_900_mm = 9 ,
	M_PLATFORM_915_mm = 10 ,
	M_PLATFORM_920_mm = 11 ,
	M_PLATFORM_960_mm = 12 ,
	M_PLATFORM_1100_mm = 13 
} M_PLATFORM ;
int M_POSITION	 /* MinVal = 0, MaxVal = 9999999 */	 // 16777215 = No_more_geographical_position_calculation_after_this_reference_location 
  ; 
typedef enum { 
	M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted = 0 ,
	M_TRACKCOND_Tunnel_stopping_area_Initial_state_is_no_tunnel_stopping_area = 1 ,
	M_TRACKCOND_Sound_horn_Initial_state_is_is_no_request_for_sound_horn = 2 ,
	M_TRACKCOND_Powerless_section_Lower_pantograph_Initial_state_is_not_powerless_section = 3 ,
	M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_Initial_state_is_supervise_T_NVCONTACT = 4 ,
	M_TRACKCOND_Air_tightness_Initial_state_is_no_request_for_air_tightness = 5 ,
	M_TRACKCOND_Switch_off_regenerative_brake_Initial_state_is_regenerative_brake_on = 6 ,
	M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_Initial_state_is_eddy_current_brake_for_service_brake_on = 7 ,
	M_TRACKCOND_Switch_off_magnetic_shoe_brake_Initial_state_is_magnetic_shoe_brake_on = 8 ,
	M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_section = 9 ,
	M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_Initial_state_is_eddy_current_brake_for_emergency_brake_on = 10 
} M_TRACKCOND ;
typedef enum { 
	M_VOLTAGE_Line_not_fitted_with_any_traction_system = 0 ,
	M_VOLTAGE_AC_25_kV_50_Hz = 1 ,
	M_VOLTAGE_AC_15_kV_16_7_Hz = 2 ,
	M_VOLTAGE_DC_3_kV = 3 ,
	M_VOLTAGE_DC_1_5_kV = 4 ,
	M_VOLTAGE_DC_600_or_750_V = 5 
} M_VOLTAGE ;
typedef enum { 
	M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0 ,
	M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16 ,
	M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17 ,
	M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32 
} M_VERSION ;
int N_AXLE	 /* MinVal = 0, MaxVal = 1022 */	 // 1023 = Unknown 
  ; 
int N_ITER	 /* MinVal = 0, MaxVal = 31 */  ; 
typedef enum { 
	N_PIG_I_am_the_1st = 0 ,
	N_PIG_I_am_the_2nd = 1 ,
	N_PIG_I_am_the_3rd = 2 ,
	N_PIG_I_am_the_4th = 3 ,
	N_PIG_I_am_the_5th = 4 ,
	N_PIG_I_am_the_6th = 5 ,
	N_PIG_I_am_the_7th = 6 ,
	N_PIG_I_am_the_8th = 7 
} N_PIG ;
typedef enum { 
	N_TOTAL_1_balise_in_the_group = 0 ,
	N_TOTAL_2_balises_in_the_group = 1 ,
	N_TOTAL_3_balises_in_the_group = 2 ,
	N_TOTAL_4_balises_in_the_group = 3 ,
	N_TOTAL_5_balises_in_the_group = 4 ,
	N_TOTAL_6_balises_in_the_group = 5 ,
	N_TOTAL_7_balises_in_the_group = 6 ,
	N_TOTAL_8_balises_in_the_group = 7 
} N_TOTAL ;
typedef enum { 
	NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm = 0 ,
	NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_100_mm = 1 ,
	NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_130_mm = 2 ,
	NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_150_mm = 3 ,
	NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_165_mm = 4 ,
	NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_180_mm = 5 ,
	NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_210_mm = 6 ,
	NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_225_mm = 7 ,
	NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_245_mm = 8 ,
	NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_275_mm = 9 ,
	NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_300_mm = 10 
} NC_CDDIFF ;
typedef enum { 
	NC_CDTRAIN_Cant_Deficiency_80_mm = 0 ,
	NC_CDTRAIN_Cant_Deficiency_100_mm = 1 ,
	NC_CDTRAIN_Cant_Deficiency_130_mm = 2 ,
	NC_CDTRAIN_Cant_Deficiency_150_mm = 3 ,
	NC_CDTRAIN_Cant_Deficiency_165_mm = 4 ,
	NC_CDTRAIN_Cant_Deficiency_180_mm = 5 ,
	NC_CDTRAIN_Cant_Deficiency_210_mm = 6 ,
	NC_CDTRAIN_Cant_Deficiency_225_mm = 7 ,
	NC_CDTRAIN_Cant_Deficiency_245_mm = 8 ,
	NC_CDTRAIN_Cant_Deficiency_275_mm = 9 ,
	NC_CDTRAIN_Cant_Deficiency_300_mm = 10 
} NC_CDTRAIN ;
int NC_DIFF	 /* MinVal = 0, MaxVal = 15 */	 // 0 = Specific_SSP_applicable_to_Freight_train_braked_in_P_position 
	 // 1 = Specific_SSP_applicable_to_Freight_train_braked_in_G_position 
	 // 2 = Specific_SSP_applicable_to_Passenger_train 
  ; 
typedef enum { 
	NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category = 0 ,
	NC_TRAIN_Freight_train_braked_in_P_position = 1 ,
	NC_TRAIN_Freight_train_braked_in_G_position = 2 ,
	NC_TRAIN_Passenger_train = 4 
} NC_TRAIN ;
int NID_BG	 /* MinVal = 0, MaxVal = 16382 */	 // 16383 = Identity_is_unknown_(only_to_be_used_for_Linking_information) 
  ; 
int NID_C	 /* MinVal = 0, MaxVal = 1023 */  ; 
int NID_CTRACTION	 /* MinVal = 0, MaxVal = 1023 */  ; 
int NID_EM  ; 
int NID_ENGINE  ; 
int NID_LOOP	 /* MinVal = 0, MaxVal = 16383 */  ; 
int NID_LRBG	 // 16777215 = Unknown 
  ; 
int NID_LTRBG  ; 
int NID_LX	 /* MinVal = 0, MaxVal = 255 */	 // 0-126 = Reserved_for_non_RBC_transmission_(balise_loop_or_radio_infill) 
	 // 127-255 = Reserved_for_RBC_transmission 
  ; 
int NID_MESSAGE	 /* MinVal = 0, MaxVal = 255 */  ; 
int NID_MN	 /* MinVal = 0, MaxVal = 999999 */	 // A-E = Not_Used 
	 // F = Use_value_F_for_digit_to_indicate_no_digit_(if_number_shorter_than_6_digits) 
  ; 
int NID_OPERATIONAL	 /* MinVal = 0, MaxVal = 99999999 */	 // F = Use_value_F_for_digit_to_indicate_no_digit_(if_number_shorter_than_8_digits) 
  ; 
int NID_PACKET	 /* MinVal = 0, MaxVal = 255 */  ; 
int NID_PRVLRBG	 // 16777215 = unknown 
  ; 
int NID_RADIO	 /* MinVal = 0, MaxVal = 9999999999999999 */	 // A-E = Not_Used 
	 // F = Use_value_F_for_digit_to_indicate_no_digit_(if_number_shorter_than_16_digits) 
	 // FFFF FFFF FFFF FFFF = Use_the_short_number_stored_onboard 
  ; 
int NID_RBC	 /* MinVal = 0, MaxVal = 16382 */	 // 16383 = Contact_last_known_RBC 
  ; 
int NID_RIU	 /* MinVal = 0, MaxVal = 16383 */  ; 
int NID_NTC  ; 
int NID_TEXTMESSAGE	 /* MinVal = 0, MaxVal = 255 */  ; 
int NID_TSR	 /* MinVal = 0, MaxVal = 255 */	 // 0-126 = Reserved_for_non_RBC_transmission_(balise_loop_or_radio_infill) 
	 // 127-254 = Reserved_for_RBC_transmission 
	 // 255 = Nonrevocable_speed_restriction_(applicable_for_all_transmission_media) 
  ; 
int NID_VBCMK	 /* MinVal = 0, MaxVal = 63 */  ; 
int NID_XUSER	 /* MinVal = 0, MaxVal = 511 */  ; 
typedef enum { 
	Q_ASPECT_Stop_if_in_SH_mode = 0 ,
	Q_ASPECT_Go_if_in_SH_mode = 1 
} Q_ASPECT ;
typedef enum { 
	Q_CONFTEXTDISPLAY_Driver_acknowledgement_always_ends_the_text_display_regardless_of_the_end_condition = 0 ,
	Q_CONFTEXTDISPLAY_Driver_acknowledgement_is_an_additional_condition_to_end_the_display = 1 
} Q_CONFTEXTDISPLAY ;
typedef enum { 
	Q_DANGERPOINT_No_danger_point_information = 0 ,
	Q_DANGERPOINT_Danger_point_information_to_follow = 1 
} Q_DANGERPOINT ;
typedef enum { 
	Q_DIFF_Cant_Deficiency_specific_category = 0 ,
	Q_DIFF_Other_specific_category_replaces_the_Cant_Deficiency_SSP = 1 ,
	Q_DIFF_Other_specific_category_does_not_replace_the_Cant_Deficiency_SSP = 2 
} Q_DIFF ;
typedef enum { 
	Q_DIR_Reverse = 0 ,
	Q_DIR_Nominal = 1 ,
	Q_DIR_Both_directions = 2 
} Q_DIR ;
typedef enum { 
	Q_DIRLRBG_Reverse = 0 ,
	Q_DIRLRBG_Nominal = 1 ,
	Q_DIRLRBG_Unknown = 2 
} Q_DIRLRBG ;
typedef enum { 
	Q_DIRTRAIN_Reverse = 0 ,
	Q_DIRTRAIN_Nominal = 1 ,
	Q_DIRTRAIN_Unknown = 2 
} Q_DIRTRAIN ;
typedef enum { 
	Q_DLRBG_Reverse = 0 ,
	Q_DLRBG_Nominal = 1 ,
	Q_DLRBG_Unknown = 2 
} Q_DLRBG ;
typedef enum { 
	Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA = 0 ,
	Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA = 1 ,
	Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted = 2 ,
	Q_EMERGENCYSTOP_Emergency_stop = 3 
} Q_EMERGENCYSTOP ;
typedef enum { 
	Q_ENDTIMER_No_End_section_timer_information = 0 ,
	Q_ENDTIMER_End_section_timer_information_to_follow = 1 
} Q_ENDTIMER ;
typedef enum { 
	Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0 ,
	Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1 
} Q_FRONT ;
typedef enum { 
	Q_GDIR_downhill = 0 ,
	Q_GDIR_uphill = 1 
} Q_GDIR ;
typedef enum { 
	Q_INFILL_Enter = 0 ,
	Q_INFILL_Exit = 1 
} Q_INFILL ;
typedef enum { 
	Q_LENGTH_No_train_integrity_information_available = 0 ,
	Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1 ,
	Q_LENGTH_Train_integrity_confirmed_by_driver = 2 ,
	Q_LENGTH_Train_integrity_lost = 3 
} Q_LENGTH ;
typedef enum { 
	Q_LGTLOC_Min_safe_rear_end = 0 ,
	Q_LGTLOC_Max_safe_front_end = 1 
} Q_LGTLOC ;
typedef enum { 
	Q_LINK_Unlinked = 0 ,
	Q_LINK_Linked = 1 
} Q_LINK ;
int Q_LOCACC	 /* MinVal = 0, MaxVal = 63 */  ; 
typedef enum { 
	Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0 ,
	Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1 
} Q_LINKORIENTATION ;
typedef enum { 
	Q_LINKREACTION_Train_trip = 0 ,
	Q_LINKREACTION_Apply_service_brake = 1 ,
	Q_LINKREACTION_No_Reaction = 2 
} Q_LINKREACTION ;
typedef enum { 
	Q_LOOPDIR_Opposite = 0 ,
	Q_LOOPDIR_Same = 1 
} Q_LOOPDIR ;
typedef enum { 
	Q_LXSTATUS_LX_is_protected = 0 ,
	Q_LXSTATUS_LX_is_not_protected = 1 
} Q_LXSTATUS ;
typedef enum { 
	Q_MAMODE_as_the_EOA = 0 ,
	Q_MAMODE_as_both_the_EOA_and_SvL = 1 
} Q_MAMODE ;
typedef enum { 
	Q_MARQSTREASON_Start_selected_by_driver = 1 ,
	Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached = 2 ,
	Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached = 4 ,
	Q_MARQSTREASON_Track_description_deleted = 8 ,
	Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location = 16 
} Q_MARQSTREASON ;
typedef enum { 
	Q_MEDIA_Balise = 0 ,
	Q_MEDIA_Loop = 1 
} Q_MEDIA ;
typedef enum { 
	Q_MPOSITION_Opposite = 0 ,
	Q_MPOSITION_Same = 1 
} Q_MPOSITION ;
typedef enum { 
	Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0 ,
	Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1 
} Q_NEWCOUNTRY ;
typedef enum { 
	Q_NVDRIVER_ADHES_Not_allowed = 0 ,
	Q_NVDRIVER_ADHES_Allowed = 1 
} Q_NVDRIVER_ADHES ;
typedef enum { 
	Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0 ,
	Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded = 1 
} Q_NVEMRRLS ;
typedef enum { 
	Q_NVGUIPERM_No = 0 ,
	Q_NVGUIPERM_Yes = 1 
} Q_NVGUIPERM ;
typedef enum { 
	Q_NVINHSMICPERM_No = 0 ,
	Q_NVINHSMICPERM_Yes = 1 
} Q_NVINHSMICPERM ;
typedef enum { 
	Q_NVKINT_No_integrated_correction_factors_follow = 0 ,
	Q_NVKINT_Integrated_correction_factors_follow = 1 
} Q_NVKINT ;
typedef enum { 
	Q_NVKVINTSET_Freight_trains = 0 ,
	Q_NVKVINTSET_Conventional_passenger_trains = 1 
} Q_NVKVINTSET ;
int Q_NVLOCACC	 /* MinVal = 0, MaxVal = 63 */  ; 
typedef enum { 
	Q_NVSBFBPERM_No = 0 ,
	Q_NVSBFBPERM_Yes = 1 
} Q_NVSBFBPERM ;
typedef enum { 
	Q_NVSBTSMPERM_No = 0 ,
	Q_NVSBTSMPERM_Yes = 1 
} Q_NVSBTSMPERM ;
typedef enum { 
	Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction = 0 ,
	Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction = 1 
} Q_ORIENTATION ;
typedef enum { 
	Q_OVERLAP_No_overlap_information = 0 ,
	Q_OVERLAP_Overlap_information_to_follow = 1 
} Q_OVERLAP ;
typedef enum { 
	Q_PBDSR_EB_intervention_requested = 0 ,
	Q_PBDSR_SB_intervention_requested = 1 
} Q_PBDSR ;
typedef enum { 
	Q_PLATFORM_Platform_on_left_side = 0 ,
	Q_PLATFORM_Platform_on_right_side = 1 ,
	Q_PLATFORM_Platform_on_both_sides = 2 
} Q_PLATFORM ;
typedef enum { 
	Q_RBC_Terminate_communication_session = 0 ,
	Q_RBC_Establish_communication_session = 1 
} Q_RBC ;
typedef enum { 
	Q_RIU_Terminate_communication_session = 0 ,
	Q_RIU_Establish_communication_session = 1 
} Q_RIU ;
typedef enum { 
	Q_SCALE_10_cm_scale = 0 ,
	Q_SCALE_1_m_scale = 1 ,
	Q_SCALE_10_m_scale = 2 
} Q_SCALE ;
typedef enum { 
	Q_SECTIONTIMER_No_Section_Timer_information = 0 ,
	Q_SECTIONTIMER_Section_Timer_information_to_follow = 1 
} Q_SECTIONTIMER ;
typedef enum { 
	Q_SLEEPSESSION_Ignore_session_establishment_order = 0 ,
	Q_SLEEPSESSION_Execute_session_establishment_order = 1 
} Q_SLEEPSESSION ;
typedef enum { 
	Q_SRSTOP_Stop_if_in_SR_mode = 0 ,
	Q_SRSTOP_Go_if_in_SR_mode = 1 
} Q_SRSTOP ;
int Q_SSCODE	 // 15 = Code_reserved_for_test_purposes 
  ; 
typedef enum { 
	Q_STATUS_Valid = 1 ,
	Q_STATUS_Unknown = 2 
} Q_STATUS ;
typedef enum { 
	Q_STOPLX_No_stop_required = 0 ,
	Q_STOPLX_Stop_required = 1 
} Q_STOPLX ;
typedef enum { 
	Q_SUITABILITY_Loading_gauge = 0 ,
	Q_SUITABILITY_Max_axle_load = 1 ,
	Q_SUITABILITY_Traction_system = 2 
} Q_SUITABILITY ;
typedef enum { 
	Q_TEXT_Level_crossing_not_protected = 0 ,
	Q_TEXT_Acknowledgement = 1 
} Q_TEXT ;
typedef enum { 
	Q_TEXTCLASS_Auxiliary_Information = 0 ,
	Q_TEXTCLASS_Important_Information = 1 
} Q_TEXTCLASS ;
typedef enum { 
	Q_TEXTCONFIRM_No_confirmation_required = 0 ,
	Q_TEXTCONFIRM_Confirmation_required = 1 ,
	Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 2 ,
	Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 3 
} Q_TEXTCONFIRM ;
typedef enum { 
	Q_TEXTDISPLAY_No_display_as_soon_as__or__until_one_of_the_events_is_fulfilled = 0 ,
	Q_TEXTDISPLAY_Yes_display_as_soon_as__or__until_all_events_are_fulfilled = 1 
} Q_TEXTDISPLAY ;
typedef enum { 
	Q_TEXTREPORT_No_driver_acknowledgement_report_required = 0 ,
	Q_TEXTREPORT_Driver_acknowledgement_report_required = 1 
} Q_TEXTREPORT ;
typedef enum { 
	Q_TRACKINIT_No_initial_states_to_be_resumed_profile_to_follow = 0 ,
	Q_TRACKINIT_Empty_profile_initial_states_to_be_resumed = 1 
} Q_TRACKINIT ;
typedef enum { 
	Q_UPDOWN_Down_link_telegram = 0 ,
	Q_UPDOWN_Up_link_telegram = 1 
} Q_UPDOWN ;
typedef enum { 
	Q_VBCO_Remove_the_Virtual_Balise_Cover = 0 ,
	Q_VBCO_Set_the_Virtual_Balise_Cover = 1 
} Q_VBCO ;
int T_CYCLOC	 /* MinVal = 0, MaxVal = 254 */	 // 255 = infinite 
  ; 
int T_CYCRQST	 /* MinVal = 0, MaxVal = 254 */	 // 255 = No_repetition 
  ; 
int T_ENDTIMER	 /* MinVal = 0, MaxVal = 1022 */	 // 1023 = infinite 
  ; 
int T_LOA	 /* MinVal = 0, MaxVal = 1022 */	 // 1023 = infinite 
  ; 
int T_MAR	 /* MinVal = 0, MaxVal = 254 */	 // 255 = _No_MA_request_triggering_with_regards_to_this_function 
  ; 
int T_NVCONTACT	 /* MinVal = 0, MaxVal = 254 */	 // 1111 1111 = T_NVCONTACT_infinite 
  ; 
int T_NVOVTRP	 /* MinVal = 0, MaxVal = 255 */  ; 
int T_OL	 /* MinVal = 0, MaxVal = 1022 */	 // 1023 = infinite 
  ; 
int T_SECTIONTIMER	 /* MinVal = 0, MaxVal = 1022 */	 // 1023 = infinite 
  ; 
int T_TEXTDISPLAY	 /* MinVal = 0, MaxVal = 1022 */	 // 1023 = Display_of_text_not_limited_by_time 
  ; 
int T_TIMEOUTRQST	 /* MinVal = 0, MaxVal = 1022 */	 // 1023 = _No_MA_request_triggering_with_regards_to_this_function 
  ; 
real T_TRAIN	 /* MinVal = 0.0, MaxVal = 42949672.94 */	 // 4294967295 = Unknown 
  ; 
int T_VBC	 /* MinVal = 0, MaxVal = 255 */  ; 
int V_AXLELOAD	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_DIFF	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_LOA	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_LX	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_MAIN	 /* MinVal = 0, MaxVal = 600 */	 // 0 = Means_trip_order 
  ; 
int V_MAMODE	 /* MinVal = 0, MaxVal = 600 */	 // 127 = Use_the_national_speed_value_of_the_required_mode 
  ; 
int V_MAXTRAIN	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_NVALLOWOVTRP	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_NVKVINT	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_NVLIMSUPERV	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_NVONSIGHT	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_NVSUPOVTRP	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_NVREL	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_NVSHUNT	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_NVSTFF	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_NVUNFIT	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_RELEASEDP	 /* MinVal = 0, MaxVal = 600 */	 // 126 = Use_onboard_calculated_release_speed 
	 // 127 = Use_national_value 
  ; 
int V_RELEASEOL	 /* MinVal = 0, MaxVal = 600 */	 // 126 = Use_onboard_calculated_release_speed 
	 // 127 = Use_national_value 
  ; 
int V_REVERSE	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_STATIC	 /* MinVal = 0, MaxVal = 600 */	 // 127 = Non_numerical_value_telling_that_the_static_speed_profile_description_ends_at_D_STATIC(n) 
  ; 
int V_TRAIN	 /* MinVal = 0, MaxVal = 600 */  ; 
int V_TSR	 /* MinVal = 0, MaxVal = 600 */  ; 
int X_TEXT  ; 
