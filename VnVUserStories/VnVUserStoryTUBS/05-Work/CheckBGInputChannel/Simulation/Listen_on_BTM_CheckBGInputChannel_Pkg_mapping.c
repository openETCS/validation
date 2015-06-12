#include "Listen_on_BTM_CheckBGInputChannel_Pkg_mapping.h"
#include "Listen_on_BTM_CheckBGInputChannel_Pkg_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Listen_on_BTM_CheckBGInputChannel_Pkg();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** CheckBGInputChannel_Pkg::Listen_on_BTM/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Listen_on_BTM_CheckBGInputChannel_Pkg() {
	pSimulator->m_pfnSetRoot(pSimulator, "CheckBGInputChannel_Pkg::Listen_on_BTM/", &outputs_ctx, _SCSIM_Get_Listen_on_BTM_CheckBGInputChannel_Pkg_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "current_BG", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "Expected_Balise", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BG", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BTM_valid", &_SCSIM_kcg_bool_Utils, 4, valid, 0, 0);
	_SCSIM_Mapping_CAST_NID_BG_to_int_TM_conversions("TM_conversions::CAST_NID_BG_to_int", "1", 5, 0, 0);
	_SCSIM_Mapping_CAST_N_TOTAL_to_int_TM_conversions("TM_conversions::CAST_N_TOTAL_to_int", "1", 6, 0, 0);
	_SCSIM_Mapping_CAST_N_PIG_to_int_TM_conversions("TM_conversions::CAST_N_PIG_to_int", "1", 7, 0, 0);
	_SCSIM_Mapping_Decop_Track_Msg_Subfunctions("Subfunctions::Decop_Track_Msg", "1", 8, 0, 0);
	pSimulator->m_pfnPushStateMachine(pSimulator, "SM1");
	pSimulator->m_pfnPushState(pSimulator, "NominalDir", &_SCSIM_SSM_st_NominalDir_SM1_Utils, 9);
	pSimulator->m_pfnPushStateMachine(pSimulator, "SM2");
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 10, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 11, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnPushState(pSimulator, "FirstBalise", &_SCSIM_SSM_st_FirstBalise_SM1_NominalDir_SM2_Utils, 12);
	_SCSIM_Mapping_InitBG_Subfunctions("Subfunctions::InitBG", "", 13, 11, &_SCSIM_ClockActive_SSM_st_FirstBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 14, valid, 11, &_SCSIM_ClockActive_SSM_st_FirstBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 15, valid, 11, &_SCSIM_ClockActive_SSM_st_FirstBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 16, valid, 11, &_SCSIM_ClockActive_SSM_st_FirstBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_FirstBalise_1_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_FirstBalise_2_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "3", &_SCSIM_SSM_TR_FirstBalise_3_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "4", &_SCSIM_SSM_TR_FirstBalise_4_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "SecondBalise", &_SCSIM_SSM_st_SecondBalise_SM1_NominalDir_SM2_Utils, 12);
	_SCSIM_Mapping_Consistency_Check_Track_BG_Subfunctions("Subfunctions::Consistency_Check_Track_BG", "1", 18, 11, &_SCSIM_ClockActive_SSM_st_SecondBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 19, valid, 11, &_SCSIM_ClockActive_SSM_st_SecondBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 20, valid, 11, &_SCSIM_ClockActive_SSM_st_SecondBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 21, valid, 11, &_SCSIM_ClockActive_SSM_st_SecondBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 22, valid, 11, &_SCSIM_ClockActive_SSM_st_SecondBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 23, valid, 11, &_SCSIM_ClockActive_SSM_st_SecondBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 24, valid, 11, &_SCSIM_ClockActive_SSM_st_SecondBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_SecondBalise_1_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_SecondBalise_2_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "3", &_SCSIM_SSM_TR_SecondBalise_3_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Wait", &_SCSIM_SSM_st_Wait_SM1_NominalDir_SM2_Utils, 12);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 25, valid, 11, &_SCSIM_ClockActive_SSM_st_Wait_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 26, valid, 11, &_SCSIM_ClockActive_SSM_st_Wait_SM1_NominalDir_SM2);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Wait_1_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_Wait_2_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "3", &_SCSIM_SSM_TR_Wait_3_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "4", &_SCSIM_SSM_TR_Wait_4_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "5", &_SCSIM_SSM_TR_Wait_5_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "6", &_SCSIM_SSM_TR_Wait_6_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "7", &_SCSIM_SSM_TR_Wait_7_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "8", &_SCSIM_SSM_TR_Wait_8_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "ThirdBalise", &_SCSIM_SSM_st_ThirdBalise_SM1_NominalDir_SM2_Utils, 12);
	_SCSIM_Mapping_Consistency_Check_Track_BG_Subfunctions("Subfunctions::Consistency_Check_Track_BG", "5", 27, 11, &_SCSIM_ClockActive_SSM_st_ThirdBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 28, valid, 11, &_SCSIM_ClockActive_SSM_st_ThirdBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 29, valid, 11, &_SCSIM_ClockActive_SSM_st_ThirdBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 30, valid, 11, &_SCSIM_ClockActive_SSM_st_ThirdBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 31, valid, 11, &_SCSIM_ClockActive_SSM_st_ThirdBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 32, valid, 11, &_SCSIM_ClockActive_SSM_st_ThirdBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 33, valid, 11, &_SCSIM_ClockActive_SSM_st_ThirdBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "3", &_SCSIM_SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "FourthBalise", &_SCSIM_SSM_st_FourthBalise_SM1_NominalDir_SM2_Utils, 12);
	_SCSIM_Mapping_Consistency_Check_Track_BG_Subfunctions("Subfunctions::Consistency_Check_Track_BG", "15", 34, 11, &_SCSIM_ClockActive_SSM_st_FourthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 35, valid, 11, &_SCSIM_ClockActive_SSM_st_FourthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 36, valid, 11, &_SCSIM_ClockActive_SSM_st_FourthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 37, valid, 11, &_SCSIM_ClockActive_SSM_st_FourthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 38, valid, 11, &_SCSIM_ClockActive_SSM_st_FourthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 39, valid, 11, &_SCSIM_ClockActive_SSM_st_FourthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 40, valid, 11, &_SCSIM_ClockActive_SSM_st_FourthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_FourthBalise_1_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_FourthBalise_2_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "3", &_SCSIM_SSM_TR_FourthBalise_3_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "FifthBalise", &_SCSIM_SSM_st_FifthBalise_SM1_NominalDir_SM2_Utils, 12);
	_SCSIM_Mapping_Consistency_Check_Track_BG_Subfunctions("Subfunctions::Consistency_Check_Track_BG", "14", 41, 11, &_SCSIM_ClockActive_SSM_st_FifthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 42, valid, 11, &_SCSIM_ClockActive_SSM_st_FifthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 43, valid, 11, &_SCSIM_ClockActive_SSM_st_FifthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 44, valid, 11, &_SCSIM_ClockActive_SSM_st_FifthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 45, valid, 11, &_SCSIM_ClockActive_SSM_st_FifthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 46, valid, 11, &_SCSIM_ClockActive_SSM_st_FifthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 47, valid, 11, &_SCSIM_ClockActive_SSM_st_FifthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_FifthBalise_1_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_FifthBalise_2_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "3", &_SCSIM_SSM_TR_FifthBalise_3_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "SixthBalise", &_SCSIM_SSM_st_SixthBalise_SM1_NominalDir_SM2_Utils, 12);
	_SCSIM_Mapping_Consistency_Check_Track_BG_Subfunctions("Subfunctions::Consistency_Check_Track_BG", "10", 48, 11, &_SCSIM_ClockActive_SSM_st_SixthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 49, valid, 11, &_SCSIM_ClockActive_SSM_st_SixthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 50, valid, 11, &_SCSIM_ClockActive_SSM_st_SixthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 51, valid, 11, &_SCSIM_ClockActive_SSM_st_SixthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 52, valid, 11, &_SCSIM_ClockActive_SSM_st_SixthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 53, valid, 11, &_SCSIM_ClockActive_SSM_st_SixthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 54, valid, 11, &_SCSIM_ClockActive_SSM_st_SixthBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_SixthBalise_1_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_SixthBalise_2_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "3", &_SCSIM_SSM_TR_SixthBalise_3_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "SevensBalise", &_SCSIM_SSM_st_SevensBalise_SM1_NominalDir_SM2_Utils, 12);
	_SCSIM_Mapping_Consistency_Check_Track_BG_Subfunctions("Subfunctions::Consistency_Check_Track_BG", "9", 55, 11, &_SCSIM_ClockActive_SSM_st_SevensBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 56, valid, 11, &_SCSIM_ClockActive_SSM_st_SevensBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 57, valid, 11, &_SCSIM_ClockActive_SSM_st_SevensBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 58, valid, 11, &_SCSIM_ClockActive_SSM_st_SevensBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 59, valid, 11, &_SCSIM_ClockActive_SSM_st_SevensBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 60, valid, 11, &_SCSIM_ClockActive_SSM_st_SevensBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 61, valid, 11, &_SCSIM_ClockActive_SSM_st_SevensBalise_SM1_NominalDir_SM2);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_SevensBalise_1_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_SevensBalise_2_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "LastBaliseinBG", &_SCSIM_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2_Utils, 12);
	_SCSIM_Mapping_Consistency_Check_Track_BG_Subfunctions("Subfunctions::Consistency_Check_Track_BG", "16", 62, 11, &_SCSIM_ClockActive_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 63, valid, 11, &_SCSIM_ClockActive_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 64, valid, 11, &_SCSIM_ClockActive_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 65, valid, 11, &_SCSIM_ClockActive_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_Completeness_CheckBGInputChannel_Pkg_Utils, 66, valid, 11, &_SCSIM_ClockActive_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 67, valid, 11, &_SCSIM_ClockActive_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 68, valid, 11, &_SCSIM_ClockActive_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 69, valid, 11, &_SCSIM_ClockActive_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_ReceivedBGs_CheckBGInputChannel_Pkg_Utils, 70, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_ReceivedBGs_CheckBGInputChannel_Pkg_Utils, 71, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 72, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_int_Utils, 73, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_int_Utils, 74, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_kcg_int_Utils, 75, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_int_Utils, 76, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_int_Utils, 77, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_kcg_int_Utils, 78, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 79, valid, 9, &_SCSIM_ClockActive_SSM_st_NominalDir_SM1);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "2", &_SCSIM_SSM_TR_NominalDir_2_SM1_Utils, 80);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_NominalDir_1_SM1_Utils, 81);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "ReverseDir", &_SCSIM_SSM_st_ReverseDir_SM1_Utils, 9);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "No_BG", &_SCSIM_SSM_st_No_BG_SM1_Utils, 9);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_No_BG_1_SM1_Utils, 81);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_No_BG_2_SM1_Utils, 81);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "API_nid_bg", &_SCSIM_kcg_int_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "API_Msg_Present", &_SCSIM_kcg_bool_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "API_n_pig", &_SCSIM_kcg_int_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "API_n_total", &_SCSIM_kcg_int_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_int_Utils, 87, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 89, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_bool_Utils, 92, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_bool_Utils, 93, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, 94, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, 95, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, 96, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_A_internal_Type_Obu_BasicTypes_Pkg_Utils, 97, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, 98, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_NID_BG_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_NID_C_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_M_MCOUNT_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_N_TOTAL_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_N_PIG_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_Q_MEDIA_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_M_VERSION_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_Q_LINK_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_M_DUP_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_Q_UPDOWN_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "out_Track_BGs", &_SCSIM_ReceivedBGs_CheckBGInputChannel_Pkg_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "count_BTM_BGs", &_SCSIM_kcg_int_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "out_BG_complete", &_SCSIM_kcg_bool_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "out_BG", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "BTM_TrackMsg", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 123, valid, 0, 0);
}

void* _SCSIM_Get_Listen_on_BTM_CheckBGInputChannel_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.current_BG);
		case 2:
			return &(outputs_ctx.Expected_Balise);
		case 3:
			return &(outputs_ctx.BG);
		case 4:
			return &(outputs_ctx.BTM_valid);
		case 5:
			return &(outputs_ctx._3_Context_1);
		case 6:
			return &(outputs_ctx._2_Context_1);
		case 7:
			return &(outputs_ctx._1_Context_1);
		case 8:
			return &(outputs_ctx.Context_1);
		case 9:
			return &(outputs_ctx.SM1_state_act);
		case 10:
			return &(outputs_ctx._6_SM2_clock_SM1_NominalDir);
		case 11:
			return &(outputs_ctx.SM2_clock_SM1_NominalDir);
		case 12:
			return &(outputs_ctx.SM2_state_act_SM1_NominalDir);
		case 13:
			return &(outputs_ctx.Context_InitBG);
		case 14:
			return &(outputs_ctx._L20_SM1_NominalDir_SM2_FirstBalise);
		case 15:
			return &(outputs_ctx._L22_SM1_NominalDir_SM2_FirstBalise);
		case 16:
			return &(outputs_ctx._L11_SM1_NominalDir_SM2_FirstBalise);
		case 17:
			return &(outputs_ctx.SM2_fired_strong_SM1_NominalDir);
		case 18:
			return &(outputs_ctx._4_Context_1);
		case 19:
			return &(outputs_ctx._L2_SM1_NominalDir_SM2_SecondBalise);
		case 20:
			return &(outputs_ctx._L4_SM1_NominalDir_SM2_SecondBalise);
		case 21:
			return &(outputs_ctx._L5_SM1_NominalDir_SM2_SecondBalise);
		case 22:
			return &(outputs_ctx._L7_SM1_NominalDir_SM2_SecondBalise);
		case 23:
			return &(outputs_ctx._L6_SM1_NominalDir_SM2_SecondBalise);
		case 24:
			return &(outputs_ctx._L1_SM1_NominalDir_SM2_SecondBalise);
		case 25:
			return &(outputs_ctx._L1_SM1_NominalDir_SM2_Wait);
		case 26:
			return &(outputs_ctx._L4_SM1_NominalDir_SM2_Wait);
		case 27:
			return &(outputs_ctx.Context_5);
		case 28:
			return &(outputs_ctx._L5_SM1_NominalDir_SM2_ThirdBalise);
		case 29:
			return &(outputs_ctx._L8_SM1_NominalDir_SM2_ThirdBalise);
		case 30:
			return &(outputs_ctx._L9_SM1_NominalDir_SM2_ThirdBalise);
		case 31:
			return &(outputs_ctx._L12_SM1_NominalDir_SM2_ThirdBalise);
		case 32:
			return &(outputs_ctx._L10_SM1_NominalDir_SM2_ThirdBalise);
		case 33:
			return &(outputs_ctx._L6_SM1_NominalDir_SM2_ThirdBalise);
		case 34:
			return &(outputs_ctx.Context_15);
		case 35:
			return &(outputs_ctx._L5_SM1_NominalDir_SM2_FourthBalise);
		case 36:
			return &(outputs_ctx._L4_SM1_NominalDir_SM2_FourthBalise);
		case 37:
			return &(outputs_ctx._L2_SM1_NominalDir_SM2_FourthBalise);
		case 38:
			return &(outputs_ctx._L7_SM1_NominalDir_SM2_FourthBalise);
		case 39:
			return &(outputs_ctx._L6_SM1_NominalDir_SM2_FourthBalise);
		case 40:
			return &(outputs_ctx._L3_SM1_NominalDir_SM2_FourthBalise);
		case 41:
			return &(outputs_ctx.Context_14);
		case 42:
			return &(outputs_ctx._L7_SM1_NominalDir_SM2_FifthBalise);
		case 43:
			return &(outputs_ctx._L5_SM1_NominalDir_SM2_FifthBalise);
		case 44:
			return &(outputs_ctx._L8_SM1_NominalDir_SM2_FifthBalise);
		case 45:
			return &(outputs_ctx._L10_SM1_NominalDir_SM2_FifthBalise);
		case 46:
			return &(outputs_ctx._L9_SM1_NominalDir_SM2_FifthBalise);
		case 47:
			return &(outputs_ctx._L6_SM1_NominalDir_SM2_FifthBalise);
		case 48:
			return &(outputs_ctx.Context_10);
		case 49:
			return &(outputs_ctx._L2_SM1_NominalDir_SM2_SixthBalise);
		case 50:
			return &(outputs_ctx._L5_SM1_NominalDir_SM2_SixthBalise);
		case 51:
			return &(outputs_ctx._L3_SM1_NominalDir_SM2_SixthBalise);
		case 52:
			return &(outputs_ctx._L13_SM1_NominalDir_SM2_SixthBalise);
		case 53:
			return &(outputs_ctx._L12_SM1_NominalDir_SM2_SixthBalise);
		case 54:
			return &(outputs_ctx._L4_SM1_NominalDir_SM2_SixthBalise);
		case 55:
			return &(outputs_ctx.Context_9);
		case 56:
			return &(outputs_ctx._L6_SM1_NominalDir_SM2_SevensBalise);
		case 57:
			return &(outputs_ctx._L12_SM1_NominalDir_SM2_SevensBalise);
		case 58:
			return &(outputs_ctx._L11_SM1_NominalDir_SM2_SevensBalise);
		case 59:
			return &(outputs_ctx._L15_SM1_NominalDir_SM2_SevensBalise);
		case 60:
			return &(outputs_ctx._L13_SM1_NominalDir_SM2_SevensBalise);
		case 61:
			return &(outputs_ctx._L10_SM1_NominalDir_SM2_SevensBalise);
		case 62:
			return &(outputs_ctx.Context_16);
		case 63:
			return &(outputs_ctx._L2_SM1_NominalDir_SM2_LastBaliseinBG);
		case 64:
			return &(outputs_ctx._L5_SM1_NominalDir_SM2_LastBaliseinBG);
		case 65:
			return &(outputs_ctx._L7_SM1_NominalDir_SM2_LastBaliseinBG);
		case 66:
			return &(outputs_ctx._L8_SM1_NominalDir_SM2_LastBaliseinBG);
		case 67:
			return &(outputs_ctx._L9_SM1_NominalDir_SM2_LastBaliseinBG);
		case 68:
			return &(outputs_ctx._L6_SM1_NominalDir_SM2_LastBaliseinBG);
		case 69:
			return &(outputs_ctx._L3_SM1_NominalDir_SM2_LastBaliseinBG);
		case 70:
			return &(outputs_ctx._L30_SM1_NominalDir);
		case 71:
			return &(outputs_ctx._L31_SM1_NominalDir);
		case 72:
			return &(outputs_ctx._L32_SM1_NominalDir);
		case 73:
			return &(outputs_ctx._L36_SM1_NominalDir);
		case 74:
			return &(outputs_ctx._L37_SM1_NominalDir);
		case 75:
			return &(outputs_ctx._L39_SM1_NominalDir);
		case 76:
			return &(outputs_ctx._L40_SM1_NominalDir);
		case 77:
			return &(outputs_ctx._L42_SM1_NominalDir);
		case 78:
			return &(outputs_ctx._L43_SM1_NominalDir);
		case 79:
			return &(outputs_ctx.NominalDir_weakb_clock_SM1);
		case 80:
			return &(outputs_ctx.SM1_fired);
		case 81:
			return &(outputs_ctx.SM1_fired_strong);
		case 82:
			return &(outputs_ctx.API_nid_bg);
		case 83:
			return &(outputs_ctx.API_Msg_Present);
		case 84:
			return &(outputs_ctx.API_n_pig);
		case 85:
			return &(outputs_ctx.API_n_total);
		case 86:
			return &(outputs_ctx._L30);
		case 87:
			return &(outputs_ctx._L32);
		case 88:
			return &(outputs_ctx._L33);
		case 89:
			return &(outputs_ctx._L34);
		case 90:
			return &(outputs_ctx._L29);
		case 91:
			return &(outputs_ctx._L28);
		case 92:
			return &(outputs_ctx._L27);
		case 93:
			return &(outputs_ctx._L26);
		case 94:
			return &(outputs_ctx._L25);
		case 95:
			return &(outputs_ctx._L24);
		case 96:
			return &(outputs_ctx._L23);
		case 97:
			return &(outputs_ctx._L22);
		case 98:
			return &(outputs_ctx._L21);
		case 99:
			return &(outputs_ctx._L20);
		case 100:
			return &(outputs_ctx._L19);
		case 101:
			return &(outputs_ctx._L18);
		case 102:
			return &(outputs_ctx._L17);
		case 103:
			return &(outputs_ctx._L16);
		case 104:
			return &(outputs_ctx._L15);
		case 105:
			return &(outputs_ctx._L14);
		case 106:
			return &(outputs_ctx._L13);
		case 107:
			return &(outputs_ctx._L12);
		case 108:
			return &(outputs_ctx._L11);
		case 109:
			return &(outputs_ctx._L10);
		case 110:
			return &(outputs_ctx._L9);
		case 111:
			return &(outputs_ctx._L8);
		case 112:
			return &(outputs_ctx._L7);
		case 113:
			return &(outputs_ctx._L6);
		case 114:
			return &(outputs_ctx._L5);
		case 115:
			return &(outputs_ctx._L4);
		case 116:
			return &(outputs_ctx._L3);
		case 117:
			return &(outputs_ctx._L2);
		case 118:
			return &(outputs_ctx._L1);
		case 119:
			return &(outputs_ctx.out_Track_BGs);
		case 120:
			return &(outputs_ctx.count_BTM_BGs);
		case 121:
			return &(outputs_ctx.out_BG_complete);
		case 122:
			return &(outputs_ctx.out_BG);
		case 123:
			return &(inputs_ctx.BTM_TrackMsg);
		default:
			break;
	}
	return 0;
}

static int IsSSM_TR_FirstBalise_1_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_FirstBalise_1_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_FirstBalise_1_SM2_SM1_NominalDir_Utils = {IsSSM_TR_FirstBalise_1_SM2_SM1_NominalDirActive};

static int IsSSM_TR_FirstBalise_2_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_FirstBalise_2_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_FirstBalise_2_SM2_SM1_NominalDir_Utils = {IsSSM_TR_FirstBalise_2_SM2_SM1_NominalDirActive};

static int IsSSM_TR_FirstBalise_3_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_FirstBalise_3_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_FirstBalise_3_SM2_SM1_NominalDir_Utils = {IsSSM_TR_FirstBalise_3_SM2_SM1_NominalDirActive};

static int IsSSM_TR_FirstBalise_4_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_FirstBalise_4_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_FirstBalise_4_SM2_SM1_NominalDir_Utils = {IsSSM_TR_FirstBalise_4_SM2_SM1_NominalDirActive};

static int IsSSM_st_FirstBalise_SM1_NominalDir_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_NominalDir*)pHandle) == SSM_st_FirstBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_FirstBalise_SM1_NominalDir_SM2_Utils = {IsSSM_st_FirstBalise_SM1_NominalDir_SM2Active};

static int IsSSM_TR_SecondBalise_1_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_SecondBalise_1_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_SecondBalise_1_SM2_SM1_NominalDir_Utils = {IsSSM_TR_SecondBalise_1_SM2_SM1_NominalDirActive};

static int IsSSM_TR_SecondBalise_2_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_SecondBalise_2_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_SecondBalise_2_SM2_SM1_NominalDir_Utils = {IsSSM_TR_SecondBalise_2_SM2_SM1_NominalDirActive};

static int IsSSM_TR_SecondBalise_3_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_SecondBalise_3_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_SecondBalise_3_SM2_SM1_NominalDir_Utils = {IsSSM_TR_SecondBalise_3_SM2_SM1_NominalDirActive};

static int IsSSM_st_SecondBalise_SM1_NominalDir_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_NominalDir*)pHandle) == SSM_st_SecondBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_SecondBalise_SM1_NominalDir_SM2_Utils = {IsSSM_st_SecondBalise_SM1_NominalDir_SM2Active};

static int IsSSM_TR_Wait_1_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_Wait_1_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Wait_1_SM2_SM1_NominalDir_Utils = {IsSSM_TR_Wait_1_SM2_SM1_NominalDirActive};

static int IsSSM_TR_Wait_2_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_Wait_2_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Wait_2_SM2_SM1_NominalDir_Utils = {IsSSM_TR_Wait_2_SM2_SM1_NominalDirActive};

static int IsSSM_TR_Wait_3_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_Wait_3_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Wait_3_SM2_SM1_NominalDir_Utils = {IsSSM_TR_Wait_3_SM2_SM1_NominalDirActive};

static int IsSSM_TR_Wait_4_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_Wait_4_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Wait_4_SM2_SM1_NominalDir_Utils = {IsSSM_TR_Wait_4_SM2_SM1_NominalDirActive};

static int IsSSM_TR_Wait_5_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_Wait_5_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Wait_5_SM2_SM1_NominalDir_Utils = {IsSSM_TR_Wait_5_SM2_SM1_NominalDirActive};

static int IsSSM_TR_Wait_6_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_Wait_6_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Wait_6_SM2_SM1_NominalDir_Utils = {IsSSM_TR_Wait_6_SM2_SM1_NominalDirActive};

static int IsSSM_TR_Wait_7_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_Wait_7_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Wait_7_SM2_SM1_NominalDir_Utils = {IsSSM_TR_Wait_7_SM2_SM1_NominalDirActive};

static int IsSSM_TR_Wait_8_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_Wait_8_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Wait_8_SM2_SM1_NominalDir_Utils = {IsSSM_TR_Wait_8_SM2_SM1_NominalDirActive};

static int IsSSM_st_Wait_SM1_NominalDir_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_NominalDir*)pHandle) == SSM_st_Wait_SM1_NominalDir_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Wait_SM1_NominalDir_SM2_Utils = {IsSSM_st_Wait_SM1_NominalDir_SM2Active};

static int IsSSM_TR_ThirdBalise_1_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir_Utils = {IsSSM_TR_ThirdBalise_1_SM2_SM1_NominalDirActive};

static int IsSSM_TR_ThirdBalise_2_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir_Utils = {IsSSM_TR_ThirdBalise_2_SM2_SM1_NominalDirActive};

static int IsSSM_TR_ThirdBalise_3_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir_Utils = {IsSSM_TR_ThirdBalise_3_SM2_SM1_NominalDirActive};

static int IsSSM_st_ThirdBalise_SM1_NominalDir_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_NominalDir*)pHandle) == SSM_st_ThirdBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_ThirdBalise_SM1_NominalDir_SM2_Utils = {IsSSM_st_ThirdBalise_SM1_NominalDir_SM2Active};

static int IsSSM_TR_FourthBalise_1_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_FourthBalise_1_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_FourthBalise_1_SM2_SM1_NominalDir_Utils = {IsSSM_TR_FourthBalise_1_SM2_SM1_NominalDirActive};

static int IsSSM_TR_FourthBalise_2_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_FourthBalise_2_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_FourthBalise_2_SM2_SM1_NominalDir_Utils = {IsSSM_TR_FourthBalise_2_SM2_SM1_NominalDirActive};

static int IsSSM_TR_FourthBalise_3_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_FourthBalise_3_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_FourthBalise_3_SM2_SM1_NominalDir_Utils = {IsSSM_TR_FourthBalise_3_SM2_SM1_NominalDirActive};

static int IsSSM_st_FourthBalise_SM1_NominalDir_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_NominalDir*)pHandle) == SSM_st_FourthBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_FourthBalise_SM1_NominalDir_SM2_Utils = {IsSSM_st_FourthBalise_SM1_NominalDir_SM2Active};

static int IsSSM_TR_FifthBalise_1_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_FifthBalise_1_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_FifthBalise_1_SM2_SM1_NominalDir_Utils = {IsSSM_TR_FifthBalise_1_SM2_SM1_NominalDirActive};

static int IsSSM_TR_FifthBalise_2_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_FifthBalise_2_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_FifthBalise_2_SM2_SM1_NominalDir_Utils = {IsSSM_TR_FifthBalise_2_SM2_SM1_NominalDirActive};

static int IsSSM_TR_FifthBalise_3_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_FifthBalise_3_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_FifthBalise_3_SM2_SM1_NominalDir_Utils = {IsSSM_TR_FifthBalise_3_SM2_SM1_NominalDirActive};

static int IsSSM_st_FifthBalise_SM1_NominalDir_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_NominalDir*)pHandle) == SSM_st_FifthBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_FifthBalise_SM1_NominalDir_SM2_Utils = {IsSSM_st_FifthBalise_SM1_NominalDir_SM2Active};

static int IsSSM_TR_SixthBalise_1_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_SixthBalise_1_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_SixthBalise_1_SM2_SM1_NominalDir_Utils = {IsSSM_TR_SixthBalise_1_SM2_SM1_NominalDirActive};

static int IsSSM_TR_SixthBalise_2_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_SixthBalise_2_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_SixthBalise_2_SM2_SM1_NominalDir_Utils = {IsSSM_TR_SixthBalise_2_SM2_SM1_NominalDirActive};

static int IsSSM_TR_SixthBalise_3_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_SixthBalise_3_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_SixthBalise_3_SM2_SM1_NominalDir_Utils = {IsSSM_TR_SixthBalise_3_SM2_SM1_NominalDirActive};

static int IsSSM_st_SixthBalise_SM1_NominalDir_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_NominalDir*)pHandle) == SSM_st_SixthBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_SixthBalise_SM1_NominalDir_SM2_Utils = {IsSSM_st_SixthBalise_SM1_NominalDir_SM2Active};

static int IsSSM_TR_SevensBalise_1_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_SevensBalise_1_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_SevensBalise_1_SM2_SM1_NominalDir_Utils = {IsSSM_TR_SevensBalise_1_SM2_SM1_NominalDirActive};

static int IsSSM_TR_SevensBalise_2_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_SevensBalise_2_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_SevensBalise_2_SM2_SM1_NominalDir_Utils = {IsSSM_TR_SevensBalise_2_SM2_SM1_NominalDirActive};

static int IsSSM_st_SevensBalise_SM1_NominalDir_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_NominalDir*)pHandle) == SSM_st_SevensBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_SevensBalise_SM1_NominalDir_SM2_Utils = {IsSSM_st_SevensBalise_SM1_NominalDir_SM2Active};

static int IsSSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDirActive(void * pHandle) {
	return *((SSM_TR_SM2_SM1_NominalDir*)pHandle) == SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir_Utils = {IsSSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDirActive};

static int IsSSM_st_LastBaliseinBG_SM1_NominalDir_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_NominalDir*)pHandle) == SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2_Utils = {IsSSM_st_LastBaliseinBG_SM1_NominalDir_SM2Active};

static int IsSSM_TR_NominalDir_2_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_NominalDir_2_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_NominalDir_2_SM1_Utils = {IsSSM_TR_NominalDir_2_SM1Active};

static int IsSSM_TR_NominalDir_1_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_NominalDir_1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_NominalDir_1_SM1_Utils = {IsSSM_TR_NominalDir_1_SM1Active};

static int IsSSM_st_NominalDir_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_NominalDir_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_NominalDir_SM1_Utils = {IsSSM_st_NominalDir_SM1Active};

static int IsSSM_st_ReverseDir_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_ReverseDir_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_ReverseDir_SM1_Utils = {IsSSM_st_ReverseDir_SM1Active};

static int IsSSM_TR_No_BG_1_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_No_BG_1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_No_BG_1_SM1_Utils = {IsSSM_TR_No_BG_1_SM1Active};

static int IsSSM_TR_No_BG_2_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_No_BG_2_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_No_BG_2_SM1_Utils = {IsSSM_TR_No_BG_2_SM1Active};

static int IsSSM_st_No_BG_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_No_BG_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_No_BG_SM1_Utils = {IsSSM_st_No_BG_SM1Active};

/****************************************************************
 ** TM_conversions::CAST_NID_BG_to_int/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_NID_BG_to_int_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_NID_BG_to_int_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_NID_BG_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_bg_int", &_SCSIM_kcg_int_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_NID_BG_to_int_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_NID_BG_to_int_TM_conversions* pContext = (outC_CAST_NID_BG_to_int_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 124:
			return &((*pContext)._L1);
		case 125:
			return &((*pContext)._L9);
		case 126:
			return &((*pContext)._L8);
		case 127:
			return &((*pContext)._L10);
		case 128:
			return &((*pContext)._L11);
		case 129:
			return &((*pContext).nid_bg_int);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_N_TOTAL_to_int/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_N_TOTAL_to_int_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_N_TOTAL_to_int_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_130_Utils, 130);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_131_Utils, 131);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_132_Utils, 132);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_133_Utils, 133);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_134_Utils, 134);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_135_Utils, 135);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_136_Utils, 136);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_137_Utils, 137);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 138, valid, 137, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 139, valid, 137, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_140_Utils, 140);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 141, valid, 140, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 142, valid, 140, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_143_Utils, 143);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 144, valid, 143, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 145, valid, 143, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_146_Utils, 146);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 147, valid, 146, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 148, valid, 146, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_149_Utils, 149);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 150, valid, 149, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 151, valid, 149, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_152_Utils, 152);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 153, valid, 152, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 154, valid, 152, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_155_Utils, 155);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 156, valid, 155, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 157, valid, 155, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_158_Utils, 158);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 159, valid, 158, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 160, valid, 158, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_161_Utils, 161);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 162, valid, 161, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 163, valid, 161, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "n_total_in", &_SCSIM_N_TOTAL_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_N_TOTAL_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_total_int", &_SCSIM_kcg_int_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_N_TOTAL_to_int_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_N_TOTAL_to_int_TM_conversions* pContext = (outC_CAST_N_TOTAL_to_int_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 130:
			return &((*pContext).IfBlock1_clock);
		case 131:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 132:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 133:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 134:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 135:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 136:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 137:
			return &((*pContext).else_clock_IfBlock1);
		case 138:
			return &((*pContext)._L119_IfBlock1);
		case 139:
			return &((*pContext)._L4_IfBlock1);
		case 140:
			return &((*pContext).else_clock_IfBlock1);
		case 141:
			return &((*pContext)._L118_IfBlock1);
		case 142:
			return &((*pContext)._L317_IfBlock1);
		case 143:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 144:
			return &((*pContext)._L116_IfBlock1);
		case 145:
			return &((*pContext)._L315_IfBlock1);
		case 146:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 147:
			return &((*pContext)._L214_IfBlock1);
		case 148:
			return &((*pContext)._L5_IfBlock1);
		case 149:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 150:
			return &((*pContext)._L113_IfBlock1);
		case 151:
			return &((*pContext)._L312_IfBlock1);
		case 152:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 153:
			return &((*pContext)._L111_IfBlock1);
		case 154:
			return &((*pContext)._L310_IfBlock1);
		case 155:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 156:
			return &((*pContext)._L19_IfBlock1);
		case 157:
			return &((*pContext)._L38_IfBlock1);
		case 158:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 159:
			return &((*pContext)._L1_IfBlock1);
		case 160:
			return &((*pContext)._L37_IfBlock1);
		case 161:
			return &((*pContext).IfBlock1_clock);
		case 162:
			return &((*pContext)._L2_IfBlock1);
		case 163:
			return &((*pContext)._L3_IfBlock1);
		case 164:
			return &((*pContext).n_total_in);
		case 165:
			return &((*pContext).error);
		case 166:
			return &((*pContext)._L3);
		case 167:
			return &((*pContext)._L4);
		case 168:
			return &((*pContext).n_total_int);
		default:
			break;
	}
	return 0;
}

static int Is137Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_137_Utils = {Is137Active};

static int Is140Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_140_Utils = {Is140Active};

static int Is136Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_136_Utils = {Is136Active};

static int Is143Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_143_Utils = {Is143Active};

static int Is135Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_135_Utils = {Is135Active};

static int Is146Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_146_Utils = {Is146Active};

static int Is134Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_134_Utils = {Is134Active};

static int Is149Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_149_Utils = {Is149Active};

static int Is133Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_133_Utils = {Is133Active};

static int Is152Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_152_Utils = {Is152Active};

static int Is132Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_132_Utils = {Is132Active};

static int Is155Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_155_Utils = {Is155Active};

static int Is131Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_131_Utils = {Is131Active};

static int Is158Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_158_Utils = {Is158Active};

static int Is130Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_130_Utils = {Is130Active};

static int Is161Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_161_Utils = {Is161Active};

/****************************************************************
 ** TM_conversions::CAST_N_PIG_to_int/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_N_PIG_to_int_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_N_PIG_to_int_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_169_Utils, 169);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_170_Utils, 170);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_171_Utils, 171);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_172_Utils, 172);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_173_Utils, 173);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_174_Utils, 174);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_175_Utils, 175);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_176_Utils, 176);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 177, valid, 176, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 178, valid, 176, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_179_Utils, 179);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 180, valid, 179, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 181, valid, 179, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_182_Utils, 182);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 183, valid, 182, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 184, valid, 182, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_185_Utils, 185);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 186, valid, 185, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 187, valid, 185, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_188_Utils, 188);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 189, valid, 188, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 190, valid, 188, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_191_Utils, 191);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 192, valid, 191, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 193, valid, 191, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_194_Utils, 194);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 195, valid, 194, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 196, valid, 194, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_197_Utils, 197);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 198, valid, 197, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 199, valid, 197, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_200_Utils, 200);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 201, valid, 200, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 202, valid, 200, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "n_pig_in", &_SCSIM_N_PIG_Utils, 203, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 204, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_PIG_Utils, 205, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 206, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_pig_int", &_SCSIM_kcg_int_Utils, 207, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_N_PIG_to_int_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_N_PIG_to_int_TM_conversions* pContext = (outC_CAST_N_PIG_to_int_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 169:
			return &((*pContext).IfBlock1_clock);
		case 170:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 171:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 172:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 173:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 174:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 175:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 176:
			return &((*pContext).else_clock_IfBlock1);
		case 177:
			return &((*pContext)._L220_IfBlock1);
		case 178:
			return &((*pContext)._L319_IfBlock1);
		case 179:
			return &((*pContext).else_clock_IfBlock1);
		case 180:
			return &((*pContext)._L118_IfBlock1);
		case 181:
			return &((*pContext)._L417_IfBlock1);
		case 182:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 183:
			return &((*pContext)._L116_IfBlock1);
		case 184:
			return &((*pContext)._L315_IfBlock1);
		case 185:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 186:
			return &((*pContext)._L214_IfBlock1);
		case 187:
			return &((*pContext)._L413_IfBlock1);
		case 188:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 189:
			return &((*pContext)._L112_IfBlock1);
		case 190:
			return &((*pContext)._L311_IfBlock1);
		case 191:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 192:
			return &((*pContext)._L110_IfBlock1);
		case 193:
			return &((*pContext)._L39_IfBlock1);
		case 194:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 195:
			return &((*pContext)._L18_IfBlock1);
		case 196:
			return &((*pContext)._L4_IfBlock1);
		case 197:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 198:
			return &((*pContext)._L1_IfBlock1);
		case 199:
			return &((*pContext)._L37_IfBlock1);
		case 200:
			return &((*pContext).IfBlock1_clock);
		case 201:
			return &((*pContext)._L2_IfBlock1);
		case 202:
			return &((*pContext)._L3_IfBlock1);
		case 203:
			return &((*pContext).n_pig_in);
		case 204:
			return &((*pContext).error);
		case 205:
			return &((*pContext)._L2);
		case 206:
			return &((*pContext)._L4);
		case 207:
			return &((*pContext).n_pig_int);
		default:
			break;
	}
	return 0;
}

static int Is176Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_176_Utils = {Is176Active};

static int Is179Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_179_Utils = {Is179Active};

static int Is175Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_175_Utils = {Is175Active};

static int Is182Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_182_Utils = {Is182Active};

static int Is174Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_174_Utils = {Is174Active};

static int Is185Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_185_Utils = {Is185Active};

static int Is173Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_173_Utils = {Is173Active};

static int Is188Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_188_Utils = {Is188Active};

static int Is172Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_172_Utils = {Is172Active};

static int Is191Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_191_Utils = {Is191Active};

static int Is171Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_171_Utils = {Is171Active};

static int Is194Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_194_Utils = {Is194Active};

static int Is170Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_170_Utils = {Is170Active};

static int Is197Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_197_Utils = {Is197Active};

static int Is169Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_169_Utils = {Is169Active};

static int Is200Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_200_Utils = {Is200Active};

/****************************************************************
 ** Subfunctions::Decop_Track_Msg/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Decop_Track_Msg_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Decop_Track_Msg_Subfunctions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 208, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 209, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 210, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, 211, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_API_TelegramHeader_T_API_Msg_Pkg_Utils, 212, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_API_RadioMsgHeader_T_API_Msg_Pkg_Utils, 213, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 214, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 215, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 216, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, 217, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils, 218, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 219, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 220, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 221, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils, 222, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_centerOfBalisePosition_T_BG_Types_Pkg_Utils, 223, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_Q_UPDOWN_Utils, 224, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_M_VERSION_Utils, 225, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_Q_MEDIA_Utils, 226, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_N_PIG_Utils, 227, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_N_TOTAL_Utils, 228, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_M_DUP_Utils, 229, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_M_MCOUNT_Utils, 230, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_NID_C_Utils, 231, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_BG_Utils, 232, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_Q_LINK_Utils, 233, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_odometry_T_Obu_BasicTypes_Pkg_Utils, 234, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, 235, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, 236, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, 237, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_A_internal_Type_Obu_BasicTypes_Pkg_Utils, 238, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, 239, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, 240, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 241, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_bool_Utils, 242, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BTM_Msg_valid", &_SCSIM_kcg_bool_Utils, 243, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MsgReceivedTime", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 244, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MsgSource", &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, 245, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TelegramPresent", &_SCSIM_kcg_bool_Utils, 246, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "CheckResult", &_SCSIM_kcg_bool_Utils, 247, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "badbalise", &_SCSIM_kcg_bool_Utils, 248, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_updown", &_SCSIM_Q_UPDOWN_Utils, 249, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "m_dup", &_SCSIM_M_DUP_Utils, 250, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_link", &_SCSIM_Q_LINK_Utils, 251, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Compressed_Packets", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 252, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "m_Version", &_SCSIM_M_VERSION_Utils, 253, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_media", &_SCSIM_Q_MEDIA_Utils, 254, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_pig", &_SCSIM_N_PIG_Utils, 255, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_total", &_SCSIM_N_TOTAL_Utils, 256, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "m_mcount", &_SCSIM_M_MCOUNT_Utils, 257, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_c", &_SCSIM_NID_C_Utils, 258, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_bg", &_SCSIM_NID_BG_Utils, 259, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_valid", &_SCSIM_kcg_bool_Utils, 260, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_time", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 261, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_loc", &_SCSIM_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, 262, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_speed", &_SCSIM_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, 263, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_acc", &_SCSIM_A_internal_Type_Obu_BasicTypes_Pkg_Utils, 264, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_motion", &_SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, 265, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_dir", &_SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, 266, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_locinacc", &_SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, 267, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "radio_present", &_SCSIM_kcg_bool_Utils, 268, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "radio_consistency", &_SCSIM_kcg_bool_Utils, 269, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RadioHeader", &_SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, 270, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RadioMetadata", &_SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils, 271, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Decop_Track_Msg_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Decop_Track_Msg_Subfunctions* pContext = (outC_Decop_Track_Msg_Subfunctions*)pInstance;
	switch (nHandleIdent) {
		case 208:
			return &((*pContext)._L1);
		case 209:
			return &((*pContext)._L2);
		case 210:
			return &((*pContext)._L3);
		case 211:
			return &((*pContext)._L4);
		case 212:
			return &((*pContext)._L5);
		case 213:
			return &((*pContext)._L6);
		case 214:
			return &((*pContext)._L7);
		case 215:
			return &((*pContext)._L8);
		case 216:
			return &((*pContext)._L9);
		case 217:
			return &((*pContext)._L10);
		case 218:
			return &((*pContext)._L11);
		case 219:
			return &((*pContext)._L12);
		case 220:
			return &((*pContext)._L13);
		case 221:
			return &((*pContext)._L14);
		case 222:
			return &((*pContext)._L15);
		case 223:
			return &((*pContext)._L16);
		case 224:
			return &((*pContext)._L19);
		case 225:
			return &((*pContext)._L20);
		case 226:
			return &((*pContext)._L21);
		case 227:
			return &((*pContext)._L22);
		case 228:
			return &((*pContext)._L23);
		case 229:
			return &((*pContext)._L24);
		case 230:
			return &((*pContext)._L25);
		case 231:
			return &((*pContext)._L26);
		case 232:
			return &((*pContext)._L27);
		case 233:
			return &((*pContext)._L28);
		case 234:
			return &((*pContext)._L29);
		case 235:
			return &((*pContext)._L30);
		case 236:
			return &((*pContext)._L51);
		case 237:
			return &((*pContext)._L50);
		case 238:
			return &((*pContext)._L49);
		case 239:
			return &((*pContext)._L48);
		case 240:
			return &((*pContext)._L47);
		case 241:
			return &((*pContext)._L46);
		case 242:
			return &((*pContext)._L45);
		case 243:
			return &((*pContext).BTM_Msg_valid);
		case 244:
			return &((*pContext).MsgReceivedTime);
		case 245:
			return &((*pContext).MsgSource);
		case 246:
			return &((*pContext).TelegramPresent);
		case 247:
			return &((*pContext).CheckResult);
		case 248:
			return &((*pContext).badbalise);
		case 249:
			return &((*pContext).q_updown);
		case 250:
			return &((*pContext).m_dup);
		case 251:
			return &((*pContext).q_link);
		case 252:
			return &((*pContext).Compressed_Packets);
		case 253:
			return &((*pContext).m_Version);
		case 254:
			return &((*pContext).q_media);
		case 255:
			return &((*pContext).n_pig);
		case 256:
			return &((*pContext).n_total);
		case 257:
			return &((*pContext).m_mcount);
		case 258:
			return &((*pContext).nid_c);
		case 259:
			return &((*pContext).nid_bg);
		case 260:
			return &((*pContext).odo_valid);
		case 261:
			return &((*pContext).odo_time);
		case 262:
			return &((*pContext).odo_loc);
		case 263:
			return &((*pContext).odo_speed);
		case 264:
			return &((*pContext).odo_acc);
		case 265:
			return &((*pContext).odo_motion);
		case 266:
			return &((*pContext).odo_dir);
		case 267:
			return &((*pContext).odo_locinacc);
		case 268:
			return &((*pContext).radio_present);
		case 269:
			return &((*pContext).radio_consistency);
		case 270:
			return &((*pContext).RadioHeader);
		case 271:
			return &((*pContext).RadioMetadata);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Subfunctions::InitBG/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_InitBG_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_InitBG_Subfunctions_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Decop_Track_Msg_Subfunctions("Subfunctions::Decop_Track_Msg", "1", 272, 0, 0);
	_SCSIM_Mapping_Pack_Received_BG_Subfunctions("Subfunctions::Pack_Received_BG", "1", 273, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 274, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 275, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L163", &_SCSIM_kcg_bool_Utils, 276, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L192", &_SCSIM_Q_LINK_Utils, 277, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L191", &_SCSIM_M_DUP_Utils, 278, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L190", &_SCSIM_Q_UPDOWN_Utils, 279, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L189", &_SCSIM_kcg_bool_Utils, 280, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L188", &_SCSIM_kcg_bool_Utils, 281, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L187", &_SCSIM_kcg_bool_Utils, 282, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L186", &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, 283, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L185", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 284, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L184", &_SCSIM_kcg_bool_Utils, 285, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L200", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 286, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L201", &_SCSIM_M_VERSION_Utils, 287, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L202", &_SCSIM_Q_MEDIA_Utils, 288, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L203", &_SCSIM_N_PIG_Utils, 289, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L204", &_SCSIM_N_TOTAL_Utils, 290, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L205", &_SCSIM_M_MCOUNT_Utils, 291, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L206", &_SCSIM_NID_C_Utils, 292, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L207", &_SCSIM_NID_BG_Utils, 293, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L208", &_SCSIM_kcg_bool_Utils, 294, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L209", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 295, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L210", &_SCSIM_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, 296, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L211", &_SCSIM_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, 297, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L212", &_SCSIM_A_internal_Type_Obu_BasicTypes_Pkg_Utils, 298, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L213", &_SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, 299, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L214", &_SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, 300, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L215", &_SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, 301, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_kcg_bool_Utils, 302, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_kcg_bool_Utils, 303, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L218", &_SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, 304, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L219", &_SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils, 305, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L220", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 306, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L222", &_SCSIM_kcg_bool_Utils, 307, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L223", &_SCSIM_kcg_bool_Utils, 308, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L224", &_SCSIM_kcg_int_Utils, 309, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L225", &_SCSIM_Q_DIRLRBG_Utils, 310, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L226", &_SCSIM_Q_DIRTRAIN_Utils, 311, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L116", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 312, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "out_BG", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 313, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_InitBG_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_InitBG_Subfunctions* pContext = (outC_InitBG_Subfunctions*)pInstance;
	switch (nHandleIdent) {
		case 272:
			return &((*pContext).Context_1);
		case 273:
			return &((*pContext)._1_Context_1);
		case 274:
			return &((*pContext)._L3);
		case 275:
			return &((*pContext)._L5);
		case 276:
			return &((*pContext)._L163);
		case 277:
			return &((*pContext)._L192);
		case 278:
			return &((*pContext)._L191);
		case 279:
			return &((*pContext)._L190);
		case 280:
			return &((*pContext)._L189);
		case 281:
			return &((*pContext)._L188);
		case 282:
			return &((*pContext)._L187);
		case 283:
			return &((*pContext)._L186);
		case 284:
			return &((*pContext)._L185);
		case 285:
			return &((*pContext)._L184);
		case 286:
			return &((*pContext)._L200);
		case 287:
			return &((*pContext)._L201);
		case 288:
			return &((*pContext)._L202);
		case 289:
			return &((*pContext)._L203);
		case 290:
			return &((*pContext)._L204);
		case 291:
			return &((*pContext)._L205);
		case 292:
			return &((*pContext)._L206);
		case 293:
			return &((*pContext)._L207);
		case 294:
			return &((*pContext)._L208);
		case 295:
			return &((*pContext)._L209);
		case 296:
			return &((*pContext)._L210);
		case 297:
			return &((*pContext)._L211);
		case 298:
			return &((*pContext)._L212);
		case 299:
			return &((*pContext)._L213);
		case 300:
			return &((*pContext)._L214);
		case 301:
			return &((*pContext)._L215);
		case 302:
			return &((*pContext)._L216);
		case 303:
			return &((*pContext)._L217);
		case 304:
			return &((*pContext)._L218);
		case 305:
			return &((*pContext)._L219);
		case 306:
			return &((*pContext)._L220);
		case 307:
			return &((*pContext)._L222);
		case 308:
			return &((*pContext)._L223);
		case 309:
			return &((*pContext)._L224);
		case 310:
			return &((*pContext)._L225);
		case 311:
			return &((*pContext)._L226);
		case 312:
			return &((*pContext)._L116);
		case 313:
			return &((*pContext).out_BG);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Subfunctions::Consistency_Check_Track_BG/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Consistency_Check_Track_BG_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Consistency_Check_Track_BG_Subfunctions_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Decop_Track_Msg_Subfunctions("Subfunctions::Decop_Track_Msg", "1", 314, 0, 0);
	_SCSIM_Mapping_Pack_Received_BG_Subfunctions("Subfunctions::Pack_Received_BG", "1", 315, 0, 0);
	_SCSIM_Mapping_Decop_Received_BG_Subfunctions("Subfunctions::Decop_Received_BG", "1", 316, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_N_PIG_TM_conversions("TM_conversions::CAST_Int_to_N_PIG", "1", 317, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "TimeStamp", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 318, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "Msg_valid", &_SCSIM_kcg_bool_Utils, 319, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "MsgSource", &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, 320, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "RadioMeta", &_SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils, 321, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "RadioHeader", &_SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, 322, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "CompressedPackets", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 323, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BG_present", &_SCSIM_kcg_bool_Utils, 324, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_updown", &_SCSIM_Q_UPDOWN_Utils, 325, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "m_version", &_SCSIM_M_VERSION_Utils, 326, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_media", &_SCSIM_Q_MEDIA_Utils, 327, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "n_total", &_SCSIM_N_TOTAL_Utils, 328, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "m_mcount", &_SCSIM_M_MCOUNT_Utils, 329, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "nid_c", &_SCSIM_NID_C_Utils, 330, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "nid_bg", &_SCSIM_NID_BG_Utils, 331, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_link", &_SCSIM_Q_LINK_Utils, 332, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dirlrbg", &_SCSIM_Q_DIRLRBG_Utils, 333, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dirtrain", &_SCSIM_Q_DIRTRAIN_Utils, 334, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "assignedcoordination", &_SCSIM_kcg_bool_Utils, 335, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_nvlocacc", &_SCSIM_Q_NVLOCACC_Utils, 336, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "locinacc", &_SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, 337, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L163", &_SCSIM_kcg_bool_Utils, 338, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L192", &_SCSIM_Q_LINK_Utils, 339, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L191", &_SCSIM_M_DUP_Utils, 340, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L190", &_SCSIM_Q_UPDOWN_Utils, 341, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L189", &_SCSIM_kcg_bool_Utils, 342, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L188", &_SCSIM_kcg_bool_Utils, 343, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L187", &_SCSIM_kcg_bool_Utils, 344, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L186", &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, 345, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L185", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 346, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L184", &_SCSIM_kcg_bool_Utils, 347, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L200", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 348, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L201", &_SCSIM_M_VERSION_Utils, 349, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L202", &_SCSIM_Q_MEDIA_Utils, 350, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L203", &_SCSIM_N_PIG_Utils, 351, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L204", &_SCSIM_N_TOTAL_Utils, 352, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L205", &_SCSIM_M_MCOUNT_Utils, 353, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L206", &_SCSIM_NID_C_Utils, 354, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L207", &_SCSIM_NID_BG_Utils, 355, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L208", &_SCSIM_kcg_bool_Utils, 356, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L209", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 357, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L210", &_SCSIM_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, 358, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L211", &_SCSIM_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, 359, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L212", &_SCSIM_A_internal_Type_Obu_BasicTypes_Pkg_Utils, 360, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L213", &_SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, 361, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L214", &_SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, 362, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L215", &_SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, 363, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_kcg_bool_Utils, 364, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_kcg_bool_Utils, 365, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L218", &_SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, 366, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L219", &_SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils, 367, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L220", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 368, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L222", &_SCSIM_kcg_bool_Utils, 369, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L116", &_SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils, 370, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L257", &_SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, 371, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L256", &_SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, 372, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L255", &_SCSIM_A_internal_Type_Obu_BasicTypes_Pkg_Utils, 373, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L254", &_SCSIM_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, 374, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L253", &_SCSIM_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, 375, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L252", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 376, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L251", &_SCSIM_kcg_bool_Utils, 377, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L250", &_SCSIM_Q_NVLOCACC_Utils, 378, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L249", &_SCSIM_kcg_bool_Utils, 379, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L248", &_SCSIM_kcg_bool_Utils, 380, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L247", &_SCSIM_Q_UPDOWN_Utils, 381, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L246", &_SCSIM_M_VERSION_Utils, 382, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L245", &_SCSIM_Q_MEDIA_Utils, 383, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L244", &_SCSIM_N_TOTAL_Utils, 384, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L243", &_SCSIM_M_MCOUNT_Utils, 385, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L242", &_SCSIM_NID_C_Utils, 386, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L241", &_SCSIM_NID_BG_Utils, 387, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L240", &_SCSIM_Q_LINK_Utils, 388, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L239", &_SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, 389, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L238", &_SCSIM_Q_DIRLRBG_Utils, 390, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L237", &_SCSIM_Q_DIRTRAIN_Utils, 391, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L236", &_SCSIM_kcg_bool_Utils, 392, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L235", &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, 393, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L234", &_SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils, 394, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L233", &_SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, 395, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L232", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 396, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L231", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 397, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L230", &_SCSIM_kcg_bool_Utils, 398, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L229", &_SCSIM_kcg_bool_Utils, 399, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L228", &_SCSIM_kcg_bool_Utils, 400, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L261", &_SCSIM_kcg_bool_Utils, 401, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L262", &_SCSIM_kcg_bool_Utils, 402, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L263", &_SCSIM_kcg_bool_Utils, 403, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L264", &_SCSIM_kcg_bool_Utils, 404, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L265", &_SCSIM_kcg_bool_Utils, 405, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L273", &_SCSIM_kcg_bool_Utils, 406, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L280", &_SCSIM_kcg_bool_Utils, 407, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L279", &_SCSIM_kcg_bool_Utils, 408, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L278", &_SCSIM_kcg_bool_Utils, 409, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L277", &_SCSIM_kcg_bool_Utils, 410, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L276", &_SCSIM_kcg_bool_Utils, 411, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L281", &_SCSIM_kcg_bool_Utils, 412, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L282", &_SCSIM_kcg_bool_Utils, 413, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L283", &_SCSIM_kcg_bool_Utils, 414, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L284", &_SCSIM_kcg_bool_Utils, 415, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L285", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 416, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L286", &_SCSIM_kcg_bool_Utils, 417, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L288", &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, 418, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L290", &_SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils, 419, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L291", &_SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, 420, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L292", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 421, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L293", &_SCSIM_kcg_bool_Utils, 422, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L294", &_SCSIM_Q_UPDOWN_Utils, 423, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L295", &_SCSIM_M_VERSION_Utils, 424, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L296", &_SCSIM_Q_MEDIA_Utils, 425, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L297", &_SCSIM_Q_LINK_Utils, 426, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L298", &_SCSIM_NID_BG_Utils, 427, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L299", &_SCSIM_NID_C_Utils, 428, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L300", &_SCSIM_M_MCOUNT_Utils, 429, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L301", &_SCSIM_N_TOTAL_Utils, 430, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L314", &_SCSIM_Q_DIRLRBG_Utils, 431, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L315", &_SCSIM_Q_DIRTRAIN_Utils, 432, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L316", &_SCSIM_kcg_bool_Utils, 433, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L317", &_SCSIM_Q_NVLOCACC_Utils, 434, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L326", &_SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, 435, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L328", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 436, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L329", &_SCSIM_kcg_int_Utils, 437, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L330", &_SCSIM_kcg_bool_Utils, 438, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L331", &_SCSIM_kcg_bool_Utils, 439, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L332", &_SCSIM_N_PIG_Utils, 440, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "out_BG", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 441, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Warning_unexspected_Balise", &_SCSIM_kcg_bool_Utils, 442, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Consistency_Check_Track_BG_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Consistency_Check_Track_BG_Subfunctions* pContext = (outC_Consistency_Check_Track_BG_Subfunctions*)pInstance;
	switch (nHandleIdent) {
		case 314:
			return &((*pContext)._1_Context_1);
		case 315:
			return &((*pContext)._3_Context_1);
		case 316:
			return &((*pContext)._2_Context_1);
		case 317:
			return &((*pContext).Context_1);
		case 318:
			return &((*pContext).TimeStamp);
		case 319:
			return &((*pContext).Msg_valid);
		case 320:
			return &((*pContext).MsgSource);
		case 321:
			return &((*pContext).RadioMeta);
		case 322:
			return &((*pContext).RadioHeader);
		case 323:
			return &((*pContext).CompressedPackets);
		case 324:
			return &((*pContext).BG_present);
		case 325:
			return &((*pContext).q_updown);
		case 326:
			return &((*pContext).m_version);
		case 327:
			return &((*pContext).q_media);
		case 328:
			return &((*pContext).n_total);
		case 329:
			return &((*pContext).m_mcount);
		case 330:
			return &((*pContext).nid_c);
		case 331:
			return &((*pContext).nid_bg);
		case 332:
			return &((*pContext).q_link);
		case 333:
			return &((*pContext).q_dirlrbg);
		case 334:
			return &((*pContext).q_dirtrain);
		case 335:
			return &((*pContext).assignedcoordination);
		case 336:
			return &((*pContext).q_nvlocacc);
		case 337:
			return &((*pContext).locinacc);
		case 338:
			return &((*pContext)._L163);
		case 339:
			return &((*pContext)._L192);
		case 340:
			return &((*pContext)._L191);
		case 341:
			return &((*pContext)._L190);
		case 342:
			return &((*pContext)._L189);
		case 343:
			return &((*pContext)._L188);
		case 344:
			return &((*pContext)._L187);
		case 345:
			return &((*pContext)._L186);
		case 346:
			return &((*pContext)._L185);
		case 347:
			return &((*pContext)._L184);
		case 348:
			return &((*pContext)._L200);
		case 349:
			return &((*pContext)._L201);
		case 350:
			return &((*pContext)._L202);
		case 351:
			return &((*pContext)._L203);
		case 352:
			return &((*pContext)._L204);
		case 353:
			return &((*pContext)._L205);
		case 354:
			return &((*pContext)._L206);
		case 355:
			return &((*pContext)._L207);
		case 356:
			return &((*pContext)._L208);
		case 357:
			return &((*pContext)._L209);
		case 358:
			return &((*pContext)._L210);
		case 359:
			return &((*pContext)._L211);
		case 360:
			return &((*pContext)._L212);
		case 361:
			return &((*pContext)._L213);
		case 362:
			return &((*pContext)._L214);
		case 363:
			return &((*pContext)._L215);
		case 364:
			return &((*pContext)._L216);
		case 365:
			return &((*pContext)._L217);
		case 366:
			return &((*pContext)._L218);
		case 367:
			return &((*pContext)._L219);
		case 368:
			return &((*pContext)._L220);
		case 369:
			return &((*pContext)._L222);
		case 370:
			return &((*pContext)._L116);
		case 371:
			return &((*pContext)._L257);
		case 372:
			return &((*pContext)._L256);
		case 373:
			return &((*pContext)._L255);
		case 374:
			return &((*pContext)._L254);
		case 375:
			return &((*pContext)._L253);
		case 376:
			return &((*pContext)._L252);
		case 377:
			return &((*pContext)._L251);
		case 378:
			return &((*pContext)._L250);
		case 379:
			return &((*pContext)._L249);
		case 380:
			return &((*pContext)._L248);
		case 381:
			return &((*pContext)._L247);
		case 382:
			return &((*pContext)._L246);
		case 383:
			return &((*pContext)._L245);
		case 384:
			return &((*pContext)._L244);
		case 385:
			return &((*pContext)._L243);
		case 386:
			return &((*pContext)._L242);
		case 387:
			return &((*pContext)._L241);
		case 388:
			return &((*pContext)._L240);
		case 389:
			return &((*pContext)._L239);
		case 390:
			return &((*pContext)._L238);
		case 391:
			return &((*pContext)._L237);
		case 392:
			return &((*pContext)._L236);
		case 393:
			return &((*pContext)._L235);
		case 394:
			return &((*pContext)._L234);
		case 395:
			return &((*pContext)._L233);
		case 396:
			return &((*pContext)._L232);
		case 397:
			return &((*pContext)._L231);
		case 398:
			return &((*pContext)._L230);
		case 399:
			return &((*pContext)._L229);
		case 400:
			return &((*pContext)._L228);
		case 401:
			return &((*pContext)._L261);
		case 402:
			return &((*pContext)._L262);
		case 403:
			return &((*pContext)._L263);
		case 404:
			return &((*pContext)._L264);
		case 405:
			return &((*pContext)._L265);
		case 406:
			return &((*pContext)._L273);
		case 407:
			return &((*pContext)._L280);
		case 408:
			return &((*pContext)._L279);
		case 409:
			return &((*pContext)._L278);
		case 410:
			return &((*pContext)._L277);
		case 411:
			return &((*pContext)._L276);
		case 412:
			return &((*pContext)._L281);
		case 413:
			return &((*pContext)._L282);
		case 414:
			return &((*pContext)._L283);
		case 415:
			return &((*pContext)._L284);
		case 416:
			return &((*pContext)._L285);
		case 417:
			return &((*pContext)._L286);
		case 418:
			return &((*pContext)._L288);
		case 419:
			return &((*pContext)._L290);
		case 420:
			return &((*pContext)._L291);
		case 421:
			return &((*pContext)._L292);
		case 422:
			return &((*pContext)._L293);
		case 423:
			return &((*pContext)._L294);
		case 424:
			return &((*pContext)._L295);
		case 425:
			return &((*pContext)._L296);
		case 426:
			return &((*pContext)._L297);
		case 427:
			return &((*pContext)._L298);
		case 428:
			return &((*pContext)._L299);
		case 429:
			return &((*pContext)._L300);
		case 430:
			return &((*pContext)._L301);
		case 431:
			return &((*pContext)._L314);
		case 432:
			return &((*pContext)._L315);
		case 433:
			return &((*pContext)._L316);
		case 434:
			return &((*pContext)._L317);
		case 435:
			return &((*pContext)._L326);
		case 436:
			return &((*pContext)._L328);
		case 437:
			return &((*pContext)._L329);
		case 438:
			return &((*pContext)._L330);
		case 439:
			return &((*pContext)._L331);
		case 440:
			return &((*pContext)._L332);
		case 441:
			return &((*pContext).out_BG);
		case 442:
			return &((*pContext).Warning_unexspected_Balise);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Subfunctions::Pack_Received_BG/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Pack_Received_BG_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Pack_Received_BG_Subfunctions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_Q_DIRTRAIN_Utils, 443, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_Q_DIRLRBG_Utils, 444, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 445, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_Q_NVLOCACC_Utils, 446, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, 447, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_Q_LINK_Utils, 448, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_NID_BG_Utils, 449, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_NID_C_Utils, 450, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_M_MCOUNT_Utils, 451, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_N_TOTAL_Utils, 452, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_Q_MEDIA_Utils, 453, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_M_VERSION_Utils, 454, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_Q_UPDOWN_Utils, 455, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 456, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 457, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, 458, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils, 459, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, 460, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 461, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 462, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 463, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 464, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 465, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 466, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_ReceivedMessage_T_Common_Types_Pkg_Utils, 467, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_BG_Header_T_BG_Types_Pkg_Utils, 468, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_odometry_T_Obu_BasicTypes_Pkg_Utils, 469, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_bool_Utils, 470, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 471, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, 472, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, 473, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_A_internal_Type_Obu_BasicTypes_Pkg_Utils, 474, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, 475, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, 476, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Received_BG", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 477, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Pack_Received_BG_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Pack_Received_BG_Subfunctions* pContext = (outC_Pack_Received_BG_Subfunctions*)pInstance;
	switch (nHandleIdent) {
		case 443:
			return &((*pContext)._L24);
		case 444:
			return &((*pContext)._L23);
		case 445:
			return &((*pContext)._L22);
		case 446:
			return &((*pContext)._L21);
		case 447:
			return &((*pContext)._L20);
		case 448:
			return &((*pContext)._L18);
		case 449:
			return &((*pContext)._L17);
		case 450:
			return &((*pContext)._L16);
		case 451:
			return &((*pContext)._L15);
		case 452:
			return &((*pContext)._L14);
		case 453:
			return &((*pContext)._L13);
		case 454:
			return &((*pContext)._L12);
		case 455:
			return &((*pContext)._L11);
		case 456:
			return &((*pContext)._L10);
		case 457:
			return &((*pContext)._L9);
		case 458:
			return &((*pContext)._L8);
		case 459:
			return &((*pContext)._L7);
		case 460:
			return &((*pContext)._L6);
		case 461:
			return &((*pContext)._L5);
		case 462:
			return &((*pContext)._L4);
		case 463:
			return &((*pContext)._L3);
		case 464:
			return &((*pContext)._L2);
		case 465:
			return &((*pContext)._L1);
		case 466:
			return &((*pContext)._L25);
		case 467:
			return &((*pContext)._L26);
		case 468:
			return &((*pContext)._L27);
		case 469:
			return &((*pContext)._L35);
		case 470:
			return &((*pContext)._L36);
		case 471:
			return &((*pContext)._L37);
		case 472:
			return &((*pContext)._L38);
		case 473:
			return &((*pContext)._L39);
		case 474:
			return &((*pContext)._L40);
		case 475:
			return &((*pContext)._L41);
		case 476:
			return &((*pContext)._L42);
		case 477:
			return &((*pContext).Received_BG);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Subfunctions::Decop_Received_BG/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Decop_Received_BG_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Decop_Received_BG_Subfunctions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 478, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_Consistency_CheckBGInputChannel_Pkg_Utils, 479, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_Completeness_CheckBGInputChannel_Pkg_Utils, 480, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_ReceivedMessage_T_Common_Types_Pkg_Utils, 481, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_kcg_bool_Utils, 482, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L73", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 483, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L72", &_SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, 484, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L71", &_SCSIM_BG_Header_T_BG_Types_Pkg_Utils, 485, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L70", &_SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils, 486, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L69", &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, 487, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L68", &_SCSIM_kcg_bool_Utils, 488, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L123", &_SCSIM_Q_DIRTRAIN_Utils, 489, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L122", &_SCSIM_Q_DIRLRBG_Utils, 490, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L121", &_SCSIM_kcg_bool_Utils, 491, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L120", &_SCSIM_Q_NVLOCACC_Utils, 492, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L119", &_SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, 493, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L118", &_SCSIM_odometry_T_Obu_BasicTypes_Pkg_Utils, 494, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L117", &_SCSIM_Q_LINK_Utils, 495, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L116", &_SCSIM_NID_BG_Utils, 496, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L115", &_SCSIM_NID_C_Utils, 497, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L114", &_SCSIM_M_MCOUNT_Utils, 498, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L113", &_SCSIM_N_TOTAL_Utils, 499, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L112", &_SCSIM_Q_MEDIA_Utils, 500, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L111", &_SCSIM_M_VERSION_Utils, 501, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L110", &_SCSIM_Q_UPDOWN_Utils, 502, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L109", &_SCSIM_kcg_bool_Utils, 503, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L150", &_SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, 504, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L149", &_SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, 505, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L148", &_SCSIM_A_internal_Type_Obu_BasicTypes_Pkg_Utils, 506, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L147", &_SCSIM_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, 507, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L146", &_SCSIM_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, 508, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L145", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 509, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L144", &_SCSIM_kcg_bool_Utils, 510, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L151", &_SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils, 511, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Output_valid", &_SCSIM_kcg_bool_Utils, 512, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Completenes", &_SCSIM_kcg_bool_Utils, 513, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Consistency", &_SCSIM_kcg_bool_Utils, 514, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TimeStamp", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 515, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "CompressedPackets", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 516, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RadioHeader", &_SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, 517, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RadioMetadata", &_SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils, 518, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Msg_Source", &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, 519, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Message_valid", &_SCSIM_kcg_bool_Utils, 520, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_dirtrain", &_SCSIM_Q_DIRTRAIN_Utils, 521, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_dirLRBG", &_SCSIM_Q_DIRLRBG_Utils, 522, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "locwithinacc", &_SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, 523, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_link", &_SCSIM_Q_LINK_Utils, 524, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_bg", &_SCSIM_NID_BG_Utils, 525, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_c", &_SCSIM_NID_C_Utils, 526, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "m_mcount", &_SCSIM_M_MCOUNT_Utils, 527, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_total", &_SCSIM_N_TOTAL_Utils, 528, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_media", &_SCSIM_Q_MEDIA_Utils, 529, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "m_version", &_SCSIM_M_VERSION_Utils, 530, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_updown", &_SCSIM_Q_UPDOWN_Utils, 531, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_present", &_SCSIM_kcg_bool_Utils, 532, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "assignedCoordinates", &_SCSIM_kcg_bool_Utils, 533, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_nvlocacc", &_SCSIM_Q_NVLOCACC_Utils, 534, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_valid", &_SCSIM_kcg_bool_Utils, 535, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_time", &_SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils, 536, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_loc", &_SCSIM_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, 537, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_speed", &_SCSIM_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, 538, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_acc", &_SCSIM_A_internal_Type_Obu_BasicTypes_Pkg_Utils, 539, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_motion", &_SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, 540, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "odo_dir", &_SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, 541, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Decop_Received_BG_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Decop_Received_BG_Subfunctions* pContext = (outC_Decop_Received_BG_Subfunctions*)pInstance;
	switch (nHandleIdent) {
		case 478:
			return &((*pContext)._L53);
		case 479:
			return &((*pContext)._L52);
		case 480:
			return &((*pContext)._L51);
		case 481:
			return &((*pContext)._L50);
		case 482:
			return &((*pContext)._L49);
		case 483:
			return &((*pContext)._L73);
		case 484:
			return &((*pContext)._L72);
		case 485:
			return &((*pContext)._L71);
		case 486:
			return &((*pContext)._L70);
		case 487:
			return &((*pContext)._L69);
		case 488:
			return &((*pContext)._L68);
		case 489:
			return &((*pContext)._L123);
		case 490:
			return &((*pContext)._L122);
		case 491:
			return &((*pContext)._L121);
		case 492:
			return &((*pContext)._L120);
		case 493:
			return &((*pContext)._L119);
		case 494:
			return &((*pContext)._L118);
		case 495:
			return &((*pContext)._L117);
		case 496:
			return &((*pContext)._L116);
		case 497:
			return &((*pContext)._L115);
		case 498:
			return &((*pContext)._L114);
		case 499:
			return &((*pContext)._L113);
		case 500:
			return &((*pContext)._L112);
		case 501:
			return &((*pContext)._L111);
		case 502:
			return &((*pContext)._L110);
		case 503:
			return &((*pContext)._L109);
		case 504:
			return &((*pContext)._L150);
		case 505:
			return &((*pContext)._L149);
		case 506:
			return &((*pContext)._L148);
		case 507:
			return &((*pContext)._L147);
		case 508:
			return &((*pContext)._L146);
		case 509:
			return &((*pContext)._L145);
		case 510:
			return &((*pContext)._L144);
		case 511:
			return &((*pContext)._L151);
		case 512:
			return &((*pContext).Output_valid);
		case 513:
			return &((*pContext).Completenes);
		case 514:
			return &((*pContext).Consistency);
		case 515:
			return &((*pContext).TimeStamp);
		case 516:
			return &((*pContext).CompressedPackets);
		case 517:
			return &((*pContext).RadioHeader);
		case 518:
			return &((*pContext).RadioMetadata);
		case 519:
			return &((*pContext).Msg_Source);
		case 520:
			return &((*pContext).Message_valid);
		case 521:
			return &((*pContext).q_dirtrain);
		case 522:
			return &((*pContext).q_dirLRBG);
		case 523:
			return &((*pContext).locwithinacc);
		case 524:
			return &((*pContext).q_link);
		case 525:
			return &((*pContext).nid_bg);
		case 526:
			return &((*pContext).nid_c);
		case 527:
			return &((*pContext).m_mcount);
		case 528:
			return &((*pContext).n_total);
		case 529:
			return &((*pContext).q_media);
		case 530:
			return &((*pContext).m_version);
		case 531:
			return &((*pContext).q_updown);
		case 532:
			return &((*pContext).BG_present);
		case 533:
			return &((*pContext).assignedCoordinates);
		case 534:
			return &((*pContext).q_nvlocacc);
		case 535:
			return &((*pContext).odo_valid);
		case 536:
			return &((*pContext).odo_time);
		case 537:
			return &((*pContext).odo_loc);
		case 538:
			return &((*pContext).odo_speed);
		case 539:
			return &((*pContext).odo_acc);
		case 540:
			return &((*pContext).odo_motion);
		case 541:
			return &((*pContext).odo_dir);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_N_PIG/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_N_PIG_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_N_PIG_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_542_Utils, 542);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_543_Utils, 543);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_544_Utils, 544);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_545_Utils, 545);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_546_Utils, 546);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_547_Utils, 547);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_548_Utils, 548);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_549_Utils, 549);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_PIG_Utils, 550, valid, 549, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 551, valid, 549, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_552_Utils, 552);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 553, valid, 552, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 554, valid, 552, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_555_Utils, 555);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 556, valid, 555, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 557, valid, 555, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_558_Utils, 558);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_PIG_Utils, 559, valid, 558, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 560, valid, 558, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_561_Utils, 561);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 562, valid, 561, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 563, valid, 561, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_564_Utils, 564);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 565, valid, 564, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 566, valid, 564, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_567_Utils, 567);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 568, valid, 567, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 569, valid, 567, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_570_Utils, 570);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 571, valid, 570, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 572, valid, 570, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_573_Utils, 573);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_PIG_Utils, 574, valid, 573, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 575, valid, 573, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "n_pig_in", &_SCSIM_kcg_int_Utils, 576, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 577, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 578, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 579, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_pig", &_SCSIM_N_PIG_Utils, 580, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_N_PIG_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_N_PIG_TM_conversions* pContext = (outC_CAST_Int_to_N_PIG_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 542:
			return &((*pContext).IfBlock1_clock);
		case 543:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 544:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 545:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 546:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 547:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 548:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 549:
			return &((*pContext).else_clock_IfBlock1);
		case 550:
			return &((*pContext)._L220_IfBlock1);
		case 551:
			return &((*pContext)._L319_IfBlock1);
		case 552:
			return &((*pContext).else_clock_IfBlock1);
		case 553:
			return &((*pContext)._L118_IfBlock1);
		case 554:
			return &((*pContext)._L417_IfBlock1);
		case 555:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 556:
			return &((*pContext)._L116_IfBlock1);
		case 557:
			return &((*pContext)._L315_IfBlock1);
		case 558:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 559:
			return &((*pContext)._L214_IfBlock1);
		case 560:
			return &((*pContext)._L413_IfBlock1);
		case 561:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 562:
			return &((*pContext)._L112_IfBlock1);
		case 563:
			return &((*pContext)._L311_IfBlock1);
		case 564:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 565:
			return &((*pContext)._L110_IfBlock1);
		case 566:
			return &((*pContext)._L39_IfBlock1);
		case 567:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 568:
			return &((*pContext)._L18_IfBlock1);
		case 569:
			return &((*pContext)._L4_IfBlock1);
		case 570:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 571:
			return &((*pContext)._L1_IfBlock1);
		case 572:
			return &((*pContext)._L37_IfBlock1);
		case 573:
			return &((*pContext).IfBlock1_clock);
		case 574:
			return &((*pContext)._L2_IfBlock1);
		case 575:
			return &((*pContext)._L3_IfBlock1);
		case 576:
			return &((*pContext).n_pig_in);
		case 577:
			return &((*pContext).error);
		case 578:
			return &((*pContext)._L2);
		case 579:
			return &((*pContext)._L4);
		case 580:
			return &((*pContext).n_pig);
		default:
			break;
	}
	return 0;
}

static int Is549Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_549_Utils = {Is549Active};

static int Is552Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_552_Utils = {Is552Active};

static int Is548Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_548_Utils = {Is548Active};

static int Is555Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_555_Utils = {Is555Active};

static int Is547Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_547_Utils = {Is547Active};

static int Is558Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_558_Utils = {Is558Active};

static int Is546Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_546_Utils = {Is546Active};

static int Is561Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_561_Utils = {Is561Active};

static int Is545Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_545_Utils = {Is545Active};

static int Is564Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_564_Utils = {Is564Active};

static int Is544Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_544_Utils = {Is544Active};

static int Is567Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_567_Utils = {Is567Active};

static int Is543Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_543_Utils = {Is543Active};

static int Is570Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_570_Utils = {Is570Active};

static int Is542Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_542_Utils = {Is542Active};

static int Is573Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_573_Utils = {Is573Active};

static int _SCSIM_ClockActive_kcg_true(void* clock) {
return *(kcg_bool*)clock == kcg_true ? 1 : 0;
}
static int _SCSIM_ClockActive_kcg_false(void* clock) {
return *(kcg_bool*)clock == kcg_false ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2(void* clock) {
return *(kcg_bool*)clock == SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_SevensBalise_SM1_NominalDir_SM2(void* clock) {
return *(kcg_bool*)clock == SSM_st_SevensBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_SixthBalise_SM1_NominalDir_SM2(void* clock) {
return *(kcg_bool*)clock == SSM_st_SixthBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_FifthBalise_SM1_NominalDir_SM2(void* clock) {
return *(kcg_bool*)clock == SSM_st_FifthBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_FourthBalise_SM1_NominalDir_SM2(void* clock) {
return *(kcg_bool*)clock == SSM_st_FourthBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_ThirdBalise_SM1_NominalDir_SM2(void* clock) {
return *(kcg_bool*)clock == SSM_st_ThirdBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_Wait_SM1_NominalDir_SM2(void* clock) {
return *(kcg_bool*)clock == SSM_st_Wait_SM1_NominalDir_SM2 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_SecondBalise_SM1_NominalDir_SM2(void* clock) {
return *(kcg_bool*)clock == SSM_st_SecondBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_FirstBalise_SM1_NominalDir_SM2(void* clock) {
return *(kcg_bool*)clock == SSM_st_FirstBalise_SM1_NominalDir_SM2 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_NominalDir_SM1(void* clock) {
return *(kcg_bool*)clock == SSM_st_NominalDir_SM1 ? 1 : 0;
}
