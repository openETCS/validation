#ifndef CHECKBGINCH_INT_CHECKBGINPUTCHANNEL_PKG_SCSIM_MAPPING
#define CHECKBGINCH_INT_CHECKBGINPUTCHANNEL_PKG_SCSIM_MAPPING

#include "SmuTypes.h"
#include "CheckBGInCh_Int_CheckBGInputChannel_Pkg_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "CheckBGInCh_Int_CheckBGInputChannel_Pkg.h"
void _SCSIM_Mapping_CheckBGInCh_Int_CheckBGInputChannel_Pkg();

void* _SCSIM_Get_CheckBGInCh_Int_CheckBGInputChannel_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg.h"
void _SCSIM_Mapping_Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "BTM_Toolbox_TrainModules.h"
void _SCSIM_Mapping_BTM_Toolbox_TrainModules(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_BTM_Toolbox_TrainModules_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Story00A_FirstTest.h"
void _SCSIM_Mapping_Story00A_FirstTest(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Story00A_FirstTest_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Listen_on_BTM_CheckBGInputChannel_Pkg.h"
void _SCSIM_Mapping_Listen_on_BTM_CheckBGInputChannel_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Listen_on_BTM_CheckBGInputChannel_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_SSM_TR_FirstBalise_1_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_FirstBalise_2_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_FirstBalise_3_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_FirstBalise_4_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_st_FirstBalise_SM1_NominalDir_SM2_Utils;
extern ControlUtils _SCSIM_SSM_TR_SecondBalise_1_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_SecondBalise_2_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_SecondBalise_3_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_st_SecondBalise_SM1_NominalDir_SM2_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_1_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_2_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_3_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_4_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_5_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_6_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_7_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_8_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_st_Wait_SM1_NominalDir_SM2_Utils;
extern ControlUtils _SCSIM_SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_st_ThirdBalise_SM1_NominalDir_SM2_Utils;
extern ControlUtils _SCSIM_SSM_TR_FourthBalise_1_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_FourthBalise_2_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_FourthBalise_3_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_st_FourthBalise_SM1_NominalDir_SM2_Utils;
extern ControlUtils _SCSIM_SSM_TR_FifthBalise_1_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_FifthBalise_2_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_FifthBalise_3_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_st_FifthBalise_SM1_NominalDir_SM2_Utils;
extern ControlUtils _SCSIM_SSM_TR_SixthBalise_1_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_SixthBalise_2_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_SixthBalise_3_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_st_SixthBalise_SM1_NominalDir_SM2_Utils;
extern ControlUtils _SCSIM_SSM_TR_SevensBalise_1_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_SevensBalise_2_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_st_SevensBalise_SM1_NominalDir_SM2_Utils;
extern ControlUtils _SCSIM_SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir_Utils;
extern ControlUtils _SCSIM_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2_Utils;
extern ControlUtils _SCSIM_SSM_TR_NominalDir_4_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_NominalDir_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_NominalDir_2_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_NominalDir_3_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_NominalDir_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_LastBalise_1_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_LastBalise_2_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_LastBalise_3_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_LastBalise_4_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_LastBalise_5_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_LastBalise_6_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_LastBalise_7_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_LastBalise_8_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_st_LastBalise_SM1_ReverseDir_SM3_Utils;
extern ControlUtils _SCSIM_SSM_TR_SecondBalise_1_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_SecondBalise_2_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_st_SecondBalise_SM1_ReverseDir_SM3_Utils;
extern ControlUtils _SCSIM_SSM_TR_ThirdBalise_1_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_ThirdBalise_2_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_st_ThirdBalise_SM1_ReverseDir_SM3_Utils;
extern ControlUtils _SCSIM_SSM_TR_FourthBalise_1_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_FourthBalise_2_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_st_FourthBalise_SM1_ReverseDir_SM3_Utils;
extern ControlUtils _SCSIM_SSM_TR_FifthBalise_1_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_FifthBalise_2_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_st_FifthBalise_SM1_ReverseDir_SM3_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_1_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_2_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_3_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_4_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_5_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_6_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_7_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_st_Wait_SM1_ReverseDir_SM3_Utils;
extern ControlUtils _SCSIM_SSM_TR_SixthBalise_1_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_SixthBalise_2_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_st_SixthBalise_SM1_ReverseDir_SM3_Utils;
extern ControlUtils _SCSIM_SSM_TR_SeventhBalise_1_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_TR_SeventhBalise_2_SM3_SM1_ReverseDir_Utils;
extern ControlUtils _SCSIM_SSM_st_SeventhBalise_SM1_ReverseDir_SM3_Utils;
extern ControlUtils _SCSIM_SSM_st_FirstBalise_SM1_ReverseDir_SM3_Utils;
extern ControlUtils _SCSIM_SSM_TR_ReverseDir_4_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_ReverseDir_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_ReverseDir_2_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_ReverseDir_3_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_ReverseDir_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_No_BG_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_No_BG_2_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_No_BG_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_FirstBalise_1_SM4_SM1_InconsistentDir_Utils;
extern ControlUtils _SCSIM_SSM_st_FirstBalise_SM1_InconsistentDir_SM4_Utils;
extern ControlUtils _SCSIM_SSM_TR_Wait_1_SM4_SM1_InconsistentDir_Utils;
extern ControlUtils _SCSIM_SSM_st_Wait_SM1_InconsistentDir_SM4_Utils;
extern ControlUtils _SCSIM_SSM_st_InconsistentDir_SM1_Utils;
#include "Listen_on_OBU_CheckBGInputChannel_Pkg.h"
void _SCSIM_Mapping_Listen_on_OBU_CheckBGInputChannel_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Listen_on_OBU_CheckBGInputChannel_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_SSM_TR_Wait_1_SM3_Utils;
extern ControlUtils _SCSIM_SSM_st_Wait_SM3_Utils;
extern ControlUtils _SCSIM_SSM_TR_Receive_outputMessage_1_SM3_Utils;
extern ControlUtils _SCSIM_SSM_st_Receive_outputMessage_SM3_Utils;
#include "SM_Check_BG_CheckBGInputChannel_Pkg.h"
void _SCSIM_Mapping_SM_Check_BG_CheckBGInputChannel_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SM_Check_BG_CheckBGInputChannel_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "MovementSimulation_Toolbox_BuildingBlocks.h"
void _SCSIM_Mapping_MovementSimulation_Toolbox_BuildingBlocks(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_MovementSimulation_Toolbox_BuildingBlocks_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_487_Utils;
extern ControlUtils _SCSIM_489_Utils;
extern ControlUtils _SCSIM_486_Utils;
extern ControlUtils _SCSIM_491_Utils;
extern ControlUtils _SCSIM_485_Utils;
extern ControlUtils _SCSIM_493_Utils;
extern ControlUtils _SCSIM_SSM_TR_Reset_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_Reset_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_Driving_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_Driving_SM1_Utils;
#include "Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_553_Utils;
extern ControlUtils _SCSIM_559_Utils;
#include "CheckBGConsistency_CheckBGConsistency_Pkg.h"
void _SCSIM_Mapping_CheckBGConsistency_CheckBGConsistency_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckBGConsistency_CheckBGConsistency_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_576_Utils;
extern ControlUtils _SCSIM_577_Utils;
extern ControlUtils _SCSIM_575_Utils;
extern ControlUtils _SCSIM_585_Utils;
#include "validateDataDirection_ValidateDataDirection_Pkg.h"
void _SCSIM_Mapping_validateDataDirection_ValidateDataDirection_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_validateDataDirection_ValidateDataDirection_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_614_Utils;
extern ControlUtils _SCSIM_616_Utils;
extern ControlUtils _SCSIM_613_Utils;
extern ControlUtils _SCSIM_629_Utils;
#include "CheckEuroRadioMessage.h"
void _SCSIM_Mapping_CheckEuroRadioMessage(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckEuroRadioMessage_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_646_Utils;
extern ControlUtils _SCSIM_651_Utils;
#include "getParameterPositionReport_packagesSupport_Pkg.h"
void _SCSIM_Mapping_getParameterPositionReport_packagesSupport_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_getParameterPositionReport_packagesSupport_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "getRadioManagement_packagesSupport_Pkg.h"
void _SCSIM_Mapping_getRadioManagement_packagesSupport_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_getRadioManagement_packagesSupport_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "InformationFilter_InformationFilter_Pkg.h"
void _SCSIM_Mapping_InformationFilter_InformationFilter_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_InformationFilter_InformationFilter_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ContinuousTimeoutCheck.h"
void _SCSIM_Mapping_ContinuousTimeoutCheck(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ContinuousTimeoutCheck_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_784_Utils;
extern ControlUtils _SCSIM_786_Utils;
#include "ODO_doLocInacc_Toolbox_Functions.h"
void _SCSIM_Mapping_ODO_doLocInacc_Toolbox_Functions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ODO_doLocInacc_Toolbox_Functions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Story00A_BTM_FirstTest.h"
void _SCSIM_Mapping_Story00A_BTM_FirstTest(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Story00A_BTM_FirstTest_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CASTLIB_BaliseHeaders_TM_conversions.h"
void _SCSIM_Mapping_CASTLIB_BaliseHeaders_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CASTLIB_BaliseHeaders_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_NID_BG_to_int_TM_conversions.h"
void _SCSIM_Mapping_CAST_NID_BG_to_int_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_NID_BG_to_int_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_N_TOTAL_to_int_TM_conversions.h"
void _SCSIM_Mapping_CAST_N_TOTAL_to_int_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_N_TOTAL_to_int_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_861_Utils;
extern ControlUtils _SCSIM_864_Utils;
extern ControlUtils _SCSIM_860_Utils;
extern ControlUtils _SCSIM_867_Utils;
extern ControlUtils _SCSIM_859_Utils;
extern ControlUtils _SCSIM_870_Utils;
extern ControlUtils _SCSIM_858_Utils;
extern ControlUtils _SCSIM_873_Utils;
extern ControlUtils _SCSIM_857_Utils;
extern ControlUtils _SCSIM_876_Utils;
extern ControlUtils _SCSIM_856_Utils;
extern ControlUtils _SCSIM_879_Utils;
extern ControlUtils _SCSIM_855_Utils;
extern ControlUtils _SCSIM_882_Utils;
extern ControlUtils _SCSIM_854_Utils;
extern ControlUtils _SCSIM_885_Utils;
#include "CAST_N_PIG_to_int_TM_conversions.h"
void _SCSIM_Mapping_CAST_N_PIG_to_int_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_N_PIG_to_int_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_900_Utils;
extern ControlUtils _SCSIM_903_Utils;
extern ControlUtils _SCSIM_899_Utils;
extern ControlUtils _SCSIM_906_Utils;
extern ControlUtils _SCSIM_898_Utils;
extern ControlUtils _SCSIM_909_Utils;
extern ControlUtils _SCSIM_897_Utils;
extern ControlUtils _SCSIM_912_Utils;
extern ControlUtils _SCSIM_896_Utils;
extern ControlUtils _SCSIM_915_Utils;
extern ControlUtils _SCSIM_895_Utils;
extern ControlUtils _SCSIM_918_Utils;
extern ControlUtils _SCSIM_894_Utils;
extern ControlUtils _SCSIM_921_Utils;
extern ControlUtils _SCSIM_893_Utils;
extern ControlUtils _SCSIM_924_Utils;
#include "Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "InitConsBG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_InitConsBG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_InitConsBG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "InitInconBG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_InitInconBG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_InitInconBG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Match_Track_BG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Match_Track_BG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Match_Track_BG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Match_OBU_BG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Match_OBU_BG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Match_OBU_BG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Convert_BTMReceivedBG_to__Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Convert_BTMReceivedBG_to__Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Convert_BTMReceivedBG_to__Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Add_newBG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Add_newBG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Add_newBG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ODO_Toolbox_TrainModules.h"
void _SCSIM_Mapping_ODO_Toolbox_TrainModules(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ODO_Toolbox_TrainModules_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "m_s_To_km_h_Toolbox_Converters.h"
void _SCSIM_Mapping_m_s_To_km_h_Toolbox_Converters(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_m_s_To_km_h_Toolbox_Converters_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TRAIN_systemTimeGenerator_Toolbox_Functions.h"
void _SCSIM_Mapping_TRAIN_systemTimeGenerator_Toolbox_Functions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TRAIN_systemTimeGenerator_Toolbox_Functions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "PHYSICS_calculatePosition_Toolbox_Functions.h"
void _SCSIM_Mapping_PHYSICS_calculatePosition_Toolbox_Functions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_PHYSICS_calculatePosition_Toolbox_Functions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CheckMode_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_CheckMode_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckMode_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"
void _SCSIM_Mapping_CaseLinkingNotInUse_CheckBGConsistency_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CaseLinkingNotInUse_CheckBGConsistency_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_1611_Utils;
extern ControlUtils _SCSIM_1615_Utils;
extern ControlUtils _SCSIM_1610_Utils;
extern ControlUtils _SCSIM_1631_Utils;
#include "CaseLinkingInUse_CheckBGConsistency_Pkg.h"
void _SCSIM_Mapping_CaseLinkingInUse_CheckBGConsistency_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CaseLinkingInUse_CheckBGConsistency_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_1656_Utils;
extern ControlUtils _SCSIM_1658_Utils;
extern ControlUtils _SCSIM_1655_Utils;
extern ControlUtils _SCSIM_1676_Utils;
#include "validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h"
void _SCSIM_Mapping_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"
void _SCSIM_Mapping_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ConvertTrackSideMessageTo.h"
void _SCSIM_Mapping_ConvertTrackSideMessageTo(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ConvertTrackSideMessageTo_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CheckAllowedPacketsRadio.h"
void _SCSIM_Mapping_CheckAllowedPacketsRadio(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckAllowedPacketsRadio_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TimingChecker.h"
void _SCSIM_Mapping_TimingChecker(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TimingChecker_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_1823_Utils;
extern ControlUtils _SCSIM_1827_Utils;
extern ControlUtils _SCSIM_1822_Utils;
extern ControlUtils _SCSIM_1835_Utils;
extern ControlUtils _SCSIM_1821_Utils;
extern ControlUtils _SCSIM_1838_Utils;
#include "CheckMandatoryVariablesAndMA.h"
void _SCSIM_Mapping_CheckMandatoryVariablesAndMA(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckMandatoryVariablesAndMA_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_1882_Utils;
extern ControlUtils _SCSIM_1884_Utils;
extern ControlUtils _SCSIM_1881_Utils;
extern ControlUtils _SCSIM_1897_Utils;
extern ControlUtils _SCSIM_1880_Utils;
extern ControlUtils _SCSIM_1902_Utils;
extern ControlUtils _SCSIM_1879_Utils;
extern ControlUtils _SCSIM_1921_Utils;
extern ControlUtils _SCSIM_1878_Utils;
extern ControlUtils _SCSIM_1935_Utils;
extern ControlUtils _SCSIM_1877_Utils;
extern ControlUtils _SCSIM_1948_Utils;
extern ControlUtils _SCSIM_1876_Utils;
extern ControlUtils _SCSIM_1962_Utils;
extern ControlUtils _SCSIM_1875_Utils;
extern ControlUtils _SCSIM_1976_Utils;
extern ControlUtils _SCSIM_1874_Utils;
extern ControlUtils _SCSIM_1994_Utils;
extern ControlUtils _SCSIM_1873_Utils;
extern ControlUtils _SCSIM_2011_Utils;
extern ControlUtils _SCSIM_1872_Utils;
extern ControlUtils _SCSIM_2025_Utils;
#include "BuildOutput.h"
void _SCSIM_Mapping_BuildOutput(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_BuildOutput_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "checkRadioManagementType_packagesSupport_Pkg.h"
void _SCSIM_Mapping_checkRadioManagementType_packagesSupport_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_checkRadioManagementType_packagesSupport_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Read_P042_TM.h"
void _SCSIM_Mapping_Read_P042_TM(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Read_P042_TM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Read_P045_TM.h"
void _SCSIM_Mapping_Read_P045_TM(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Read_P045_TM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FirstFilter_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_FirstFilter_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FirstFilter_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SecondFilter_InformationFilter_Pkg_SecondFilter.h"
void _SCSIM_Mapping_SecondFilter_InformationFilter_Pkg_SecondFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SecondFilter_InformationFilter_Pkg_SecondFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_2130_Utils;
extern ControlUtils _SCSIM_2132_Utils;
extern ControlUtils _SCSIM_2134_Utils;
extern ControlUtils _SCSIM_2137_Utils;
extern ControlUtils _SCSIM_2138_Utils;
extern ControlUtils _SCSIM_2136_Utils;
extern ControlUtils _SCSIM_2133_Utils;
extern ControlUtils _SCSIM_2131_Utils;
#include "ThirdFilter_InformationFilter_Pkg_ThirdFilter.h"
void _SCSIM_Mapping_ThirdFilter_InformationFilter_Pkg_ThirdFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ThirdFilter_InformationFilter_Pkg_ThirdFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TransitionBuffer_InformationFilter_Pkg_Common.h"
void _SCSIM_Mapping_TransitionBuffer_InformationFilter_Pkg_Common(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TransitionBuffer_InformationFilter_Pkg_Common_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "MessageBuffer_InformationFilter_Pkg.h"
void _SCSIM_Mapping_MessageBuffer_InformationFilter_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_MessageBuffer_InformationFilter_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "LevelTransitionEffective_InformationFilter_Pkg.h"
void _SCSIM_Mapping_LevelTransitionEffective_InformationFilter_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_LevelTransitionEffective_InformationFilter_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RbcTransitionEffective_InformationFilter_Pkg.h"
void _SCSIM_Mapping_RbcTransitionEffective_InformationFilter_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RbcTransitionEffective_InformationFilter_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_Q_UPDOWN_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_UPDOWN_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_UPDOWN_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_2758_Utils;
extern ControlUtils _SCSIM_2761_Utils;
extern ControlUtils _SCSIM_2757_Utils;
extern ControlUtils _SCSIM_2764_Utils;
#include "CAST_Int_to_M_VERSION_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_M_VERSION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_M_VERSION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_2775_Utils;
extern ControlUtils _SCSIM_2778_Utils;
extern ControlUtils _SCSIM_2774_Utils;
extern ControlUtils _SCSIM_2781_Utils;
extern ControlUtils _SCSIM_2773_Utils;
extern ControlUtils _SCSIM_2784_Utils;
extern ControlUtils _SCSIM_2772_Utils;
extern ControlUtils _SCSIM_2787_Utils;
#include "CAST_Int_to_Q_MEDIA_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_MEDIA_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_MEDIA_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_2796_Utils;
extern ControlUtils _SCSIM_2799_Utils;
extern ControlUtils _SCSIM_2795_Utils;
extern ControlUtils _SCSIM_2802_Utils;
#include "CAST_Int_to_N_PIG_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_N_PIG_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_N_PIG_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_2817_Utils;
extern ControlUtils _SCSIM_2820_Utils;
extern ControlUtils _SCSIM_2816_Utils;
extern ControlUtils _SCSIM_2823_Utils;
extern ControlUtils _SCSIM_2815_Utils;
extern ControlUtils _SCSIM_2826_Utils;
extern ControlUtils _SCSIM_2814_Utils;
extern ControlUtils _SCSIM_2829_Utils;
extern ControlUtils _SCSIM_2813_Utils;
extern ControlUtils _SCSIM_2832_Utils;
extern ControlUtils _SCSIM_2812_Utils;
extern ControlUtils _SCSIM_2835_Utils;
extern ControlUtils _SCSIM_2811_Utils;
extern ControlUtils _SCSIM_2838_Utils;
extern ControlUtils _SCSIM_2810_Utils;
extern ControlUtils _SCSIM_2841_Utils;
#include "CAST_Int_to_N_TOTAL_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_N_TOTAL_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_N_TOTAL_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_2856_Utils;
extern ControlUtils _SCSIM_2859_Utils;
extern ControlUtils _SCSIM_2855_Utils;
extern ControlUtils _SCSIM_2862_Utils;
extern ControlUtils _SCSIM_2854_Utils;
extern ControlUtils _SCSIM_2865_Utils;
extern ControlUtils _SCSIM_2853_Utils;
extern ControlUtils _SCSIM_2868_Utils;
extern ControlUtils _SCSIM_2852_Utils;
extern ControlUtils _SCSIM_2871_Utils;
extern ControlUtils _SCSIM_2851_Utils;
extern ControlUtils _SCSIM_2874_Utils;
extern ControlUtils _SCSIM_2850_Utils;
extern ControlUtils _SCSIM_2877_Utils;
extern ControlUtils _SCSIM_2849_Utils;
extern ControlUtils _SCSIM_2880_Utils;
#include "CAST_Int_to_M_DUP_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_M_DUP_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_M_DUP_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_2890_Utils;
extern ControlUtils _SCSIM_2893_Utils;
extern ControlUtils _SCSIM_2889_Utils;
extern ControlUtils _SCSIM_2896_Utils;
extern ControlUtils _SCSIM_2888_Utils;
extern ControlUtils _SCSIM_2899_Utils;
#include "CAST_Int_to_M_MCOUNT_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_M_MCOUNT_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_M_MCOUNT_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_NID_C_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_NID_C_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_NID_C_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_NID_BG_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_NID_BG_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_NID_BG_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_Q_LINK_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_LINK_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_LINK_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_2926_Utils;
extern ControlUtils _SCSIM_2929_Utils;
extern ControlUtils _SCSIM_2925_Utils;
extern ControlUtils _SCSIM_2932_Utils;
#include "Pack_Received_BG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Pack_Received_BG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Pack_Received_BG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Decop_Received_BG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Decop_Received_BG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Decop_Received_BG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Compare_Track_OBU_BG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Compare_Track_OBU_BG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Compare_Track_OBU_BG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Compand_Add_Track_BG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Compand_Add_Track_BG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Compand_Add_Track_BG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg.h"
void _SCSIM_Mapping_Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ODO_genOdometryInaccuracies_Toolbox_Functions.h"
void _SCSIM_Mapping_ODO_genOdometryInaccuracies_Toolbox_Functions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ODO_genOdometryInaccuracies_Toolbox_Functions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ODO_genSpeedInaccuracies_Toolbox_Functions.h"
void _SCSIM_Mapping_ODO_genSpeedInaccuracies_Toolbox_Functions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ODO_genSpeedInaccuracies_Toolbox_Functions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "PHYSICS_simulateAccelerat_Toolbox_Functions.h"
void _SCSIM_Mapping_PHYSICS_simulateAccelerat_Toolbox_Functions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_PHYSICS_simulateAccelerat_Toolbox_Functions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "BuildBGMessage_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_BuildBGMessage_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_BuildBGMessage_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_3312_Utils;
extern ControlUtils _SCSIM_3315_Utils;
extern ControlUtils _SCSIM_3311_Utils;
extern ControlUtils _SCSIM_3323_Utils;
extern ControlUtils _SCSIM_3335_Utils;
extern ControlUtils _SCSIM_3338_Utils;
extern ControlUtils _SCSIM_3334_Utils;
extern ControlUtils _SCSIM_3346_Utils;
extern ControlUtils _SCSIM_3356_Utils;
extern ControlUtils _SCSIM_3366_Utils;
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"
void _SCSIM_Mapping_CheckCompleteness_CheckBGConsistency_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckCompleteness_CheckBGConsistency_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_3395_Utils;
extern ControlUtils _SCSIM_3398_Utils;
extern ControlUtils _SCSIM_3394_Utils;
extern ControlUtils _SCSIM_3408_Utils;
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_N_PIG2int_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_N_PIG2int_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_IsBG_announced_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_IsBG_announced_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_3465_Utils;
extern ControlUtils _SCSIM_3471_Utils;
#include "validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"
void _SCSIM_Mapping_validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_3485_Utils;
extern ControlUtils _SCSIM_3487_Utils;
#include "getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"
void _SCSIM_Mapping_getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CheckIfSinglePacketIsAllo_SubFunctions.h"
void _SCSIM_Mapping_CheckIfSinglePacketIsAllo_SubFunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckIfSinglePacketIsAllo_SubFunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_3532_Utils;
extern ControlUtils _SCSIM_3534_Utils;
#include "CheckIfPacket15IsPresent_SubFunctions.h"
void _SCSIM_Mapping_CheckIfPacket15IsPresent_SubFunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckIfPacket15IsPresent_SubFunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadPackets_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_ReadPackets_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadPackets_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P042_compr_onboard_TM_conversions.h"
void _SCSIM_Mapping_C_P042_compr_onboard_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P042_compr_onboard_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_3577_Utils;
extern ControlUtils _SCSIM_3580_Utils;
extern ControlUtils _SCSIM_3576_Utils;
extern ControlUtils _SCSIM_3583_Utils;
extern ControlUtils _SCSIM_3575_Utils;
extern ControlUtils _SCSIM_3586_Utils;
#include "C_P045_compr_onboard_TM_conversions.h"
void _SCSIM_Mapping_C_P045_compr_onboard_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P045_compr_onboard_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_3629_Utils;
extern ControlUtils _SCSIM_3632_Utils;
extern ControlUtils _SCSIM_3628_Utils;
extern ControlUtils _SCSIM_3635_Utils;
extern ControlUtils _SCSIM_3627_Utils;
extern ControlUtils _SCSIM_3638_Utils;
#include "LevelFilter_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_LevelFilter_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_LevelFilter_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "GetPacketId_InformationFilter_Pkg_Common.h"
void _SCSIM_Mapping_GetPacketId_InformationFilter_Pkg_Common(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_GetPacketId_InformationFilter_Pkg_Common_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SetValidFlag_InformationFilter_Pkg_Common.h"
void _SCSIM_Mapping_SetValidFlag_InformationFilter_Pkg_Common(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SetValidFlag_InformationFilter_Pkg_Common_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ModeFilter_InformationFilter_Pkg_ThirdFilter.h"
void _SCSIM_Mapping_ModeFilter_InformationFilter_Pkg_ThirdFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ModeFilter_InformationFilter_Pkg_ThirdFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "_6_FIFO_InformationFilter_Pkg_Common_3.h"
void _SCSIM_Mapping__6_FIFO_InformationFilter_Pkg_Common_3(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get__6_FIFO_InformationFilter_Pkg_Common_3_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_3727_Utils;
extern ControlUtils _SCSIM_3728_Utils;
#include "count_down_digital.h"
void _SCSIM_Mapping_count_down_digital(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_count_down_digital_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FIFO_InformationFilter_Pkg_Common_6.h"
void _SCSIM_Mapping_FIFO_InformationFilter_Pkg_Common_6(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FIFO_InformationFilter_Pkg_Common_6_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_3796_Utils;
extern ControlUtils _SCSIM_3797_Utils;
#include "Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_Init_InfraLib.h"
void _SCSIM_Mapping_Balise_Group_Init_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_Init_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_Close_InfraLib.h"
void _SCSIM_Mapping_Balise_Group_Close_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_Close_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_NID_C_to_int_TM_conversions.h"
void _SCSIM_Mapping_CAST_NID_C_to_int_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_NID_C_to_int_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "checkOdometry_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_checkOdometry_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_checkOdometry_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_4051_Utils;
extern ControlUtils _SCSIM_4055_Utils;
#include "manageTelegram_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_manageTelegram_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_manageTelegram_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
void _SCSIM_Mapping_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_4161_Utils;
extern ControlUtils _SCSIM_4163_Utils;
#include "CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_4201_Utils;
extern ControlUtils _SCSIM_4203_Utils;
extern ControlUtils _SCSIM_4200_Utils;
extern ControlUtils _SCSIM_4223_Utils;
#include "bildBGHeader_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_bildBGHeader_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_bildBGHeader_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
void _SCSIM_Mapping_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "isStored_iter_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_isStored_iter_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_isStored_iter_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CheckIfPacketRadioMetadat_SubFunctions.h"
void _SCSIM_Mapping_CheckIfPacketRadioMetadat_SubFunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckIfPacketRadioMetadat_SubFunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_LookupPacket_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_LookupPacket_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_LookupPacket_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadPacketKernel_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_ReadPacketKernel_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadPacketKernel_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_Q_RBC_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_RBC_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_RBC_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_4323_Utils;
extern ControlUtils _SCSIM_4326_Utils;
extern ControlUtils _SCSIM_4322_Utils;
extern ControlUtils _SCSIM_4329_Utils;
#include "CAST_Int_to_NID_RBC_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_NID_RBC_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_NID_RBC_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_NID_RADIO_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_NID_RADIO_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_NID_RADIO_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_Q_SLEEPSESSION_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_SLEEPSESSION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_SLEEPSESSION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_4350_Utils;
extern ControlUtils _SCSIM_4353_Utils;
extern ControlUtils _SCSIM_4349_Utils;
extern ControlUtils _SCSIM_4356_Utils;
#include "CAST_Int_to_NID_MN_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_NID_MN_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_NID_MN_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "MapPacketIdToRow_InformationFilter_Pkg.h"
void _SCSIM_Mapping_MapPacketIdToRow_InformationFilter_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_MapPacketIdToRow_InformationFilter_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "MapLevelToColumn_InformationFilter_Pkg.h"
void _SCSIM_Mapping_MapLevelToColumn_InformationFilter_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_MapLevelToColumn_InformationFilter_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "MapModeToColumn_InformationFilter_Pkg.h"
void _SCSIM_Mapping_MapModeToColumn_InformationFilter_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_MapModeToColumn_InformationFilter_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CheckModeExceptions_InformationFilter_Pkg.h"
void _SCSIM_Mapping_CheckModeExceptions_InformationFilter_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckModeExceptions_InformationFilter_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Localisation_InfraLib.h"
void _SCSIM_Mapping_Balise_Localisation_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Localisation_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
void _SCSIM_Mapping_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "No_Balise_Packets_InfraLib.h"
void _SCSIM_Mapping_No_Balise_Packets_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_No_Balise_Packets_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"
void _SCSIM_Mapping_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
void _SCSIM_Mapping_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "checkTelegram_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_checkTelegram_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_checkTelegram_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "checkInit_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_checkInit_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_checkInit_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_4698_Utils;
extern ControlUtils _SCSIM_4702_Utils;
#include "addTelegram_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_addTelegram_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_addTelegram_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_4710_Utils;
extern ControlUtils _SCSIM_4734_Utils;
#include "CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
void _SCSIM_Mapping_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
void _SCSIM_Mapping_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
void _SCSIM_Mapping_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_4828_Utils;
extern ControlUtils _SCSIM_4830_Utils;
extern ControlUtils _SCSIM_4827_Utils;
extern ControlUtils _SCSIM_4850_Utils;
extern ControlUtils _SCSIM_4826_Utils;
extern ControlUtils _SCSIM_4855_Utils;
#include "isStored_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_isStored_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_isStored_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_LookupPacketLoop_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_LookupPacketLoop_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_LookupPacketLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadPacketKernelLoop_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_ReadPacketKernelLoop_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadPacketKernelLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Exception03RejectIfPendin_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_Exception03RejectIfPendin_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Exception03RejectIfPendin_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Exception13RejectIfNotWit_InformationFilter_Pkg_FirstFilter.h"
void _SCSIM_Mapping_Exception13RejectIfNotWit_InformationFilter_Pkg_FirstFilter(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Exception13RejectIfNotWit_InformationFilter_Pkg_FirstFilter_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Interdistance_InfraLib.h"
void _SCSIM_Mapping_Balise_Interdistance_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Interdistance_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TOOLS_convert_engineering_TM_conversions.h"
void _SCSIM_Mapping_TOOLS_convert_engineering_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_convert_engineering_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Send_P005_MessageLib.h"
void _SCSIM_Mapping_Send_P005_MessageLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Send_P005_MessageLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
void _SCSIM_Mapping_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_5018_Utils;
extern ControlUtils _SCSIM_5020_Utils;
#include "initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
void _SCSIM_Mapping_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
void _SCSIM_Mapping_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
void _SCSIM_Mapping_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
void _SCSIM_Mapping_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h"
void _SCSIM_Mapping_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Check2Headers_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_Check2Headers_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Check2Headers_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h"
void _SCSIM_Mapping_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
void _SCSIM_Mapping_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
void _SCSIM_Mapping_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
void _SCSIM_Mapping_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Write_P005_TM_trackside.h"
void _SCSIM_Mapping_Write_P005_TM_trackside(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Write_P005_TM_trackside_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
void _SCSIM_Mapping_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
void _SCSIM_Mapping_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_5253_Utils;
extern ControlUtils _SCSIM_5255_Utils;
extern ControlUtils _SCSIM_5252_Utils;
extern ControlUtils _SCSIM_5257_Utils;
extern ControlUtils _SCSIM_5251_Utils;
extern ControlUtils _SCSIM_5259_Utils;
extern ControlUtils _SCSIM_5250_Utils;
extern ControlUtils _SCSIM_5261_Utils;
extern ControlUtils _SCSIM_5249_Utils;
extern ControlUtils _SCSIM_5263_Utils;
extern ControlUtils _SCSIM_5248_Utils;
extern ControlUtils _SCSIM_5265_Utils;
extern ControlUtils _SCSIM_5247_Utils;
extern ControlUtils _SCSIM_5267_Utils;
extern ControlUtils _SCSIM_5246_Utils;
extern ControlUtils _SCSIM_5269_Utils;
#include "compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
void _SCSIM_Mapping_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_5272_Utils;
extern ControlUtils _SCSIM_5274_Utils;
#include "Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
void _SCSIM_Mapping_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
void _SCSIM_Mapping_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_5333_Utils;
extern ControlUtils _SCSIM_5346_Utils;
#include "Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
void _SCSIM_Mapping_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
void _SCSIM_Mapping_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
void _SCSIM_Mapping_SEND_WriteBaliseMessageHeader_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_WriteBaliseMessageHeader_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_MessageData_TM_lib_internal.h"
void _SCSIM_Mapping_SEND_MessageData_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_MessageData_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_tracksim_compr_TM_conversions.h"
void _SCSIM_Mapping_C_P005_tracksim_compr_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_tracksim_compr_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_5440_Utils;
extern ControlUtils _SCSIM_5443_Utils;
extern ControlUtils _SCSIM_5439_Utils;
extern ControlUtils _SCSIM_5446_Utils;
extern ControlUtils _SCSIM_5438_Utils;
extern ControlUtils _SCSIM_5449_Utils;
#include "Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
void _SCSIM_Mapping_Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
void _SCSIM_Mapping_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
void _SCSIM_Mapping_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
void _SCSIM_Mapping_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_FindSlot_TM_lib_internal.h"
void _SCSIM_Mapping_SEND_FindSlot_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_FindSlot_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"
void _SCSIM_Mapping_SEND_WriteBaliseDataElement_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_WriteBaliseDataElement_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "T_DeterminePacketSizeInt_TM_lib_internal.h"
void _SCSIM_Mapping_T_DeterminePacketSizeInt_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_T_DeterminePacketSizeInt_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_flatten_sections_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_flatten_sections_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_flatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_fs_flatten_array_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_fs_flatten_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_fs_flatten_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_fs_struct_to_array_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_fs_struct_to_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_fs_struct_to_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_SSM_st_Driving_SM1(void*);
static int _SCSIM_ClockActive_SSM_st_Reset_SM1(void*);
static int _SCSIM_ClockActive_kcg_false(void*);
static int _SCSIM_ClockActive_SSM_st_Receive_outputMessage_SM3(void*);
static int _SCSIM_ClockActive_SSM_st_Wait_SM3(void*);
static int _SCSIM_ClockActive_SSM_st_Wait_SM1_InconsistentDir_SM4(void*);
static int _SCSIM_ClockActive_SSM_st_FirstBalise_SM1_InconsistentDir_SM4(void*);
static int _SCSIM_ClockActive_SSM_st_InconsistentDir_SM1(void*);
static int _SCSIM_ClockActive_SSM_st_No_BG_SM1(void*);
static int _SCSIM_ClockActive_SSM_st_FirstBalise_SM1_ReverseDir_SM3(void*);
static int _SCSIM_ClockActive_SSM_st_SeventhBalise_SM1_ReverseDir_SM3(void*);
static int _SCSIM_ClockActive_SSM_st_SixthBalise_SM1_ReverseDir_SM3(void*);
static int _SCSIM_ClockActive_SSM_st_Wait_SM1_ReverseDir_SM3(void*);
static int _SCSIM_ClockActive_SSM_st_FifthBalise_SM1_ReverseDir_SM3(void*);
static int _SCSIM_ClockActive_SSM_st_FourthBalise_SM1_ReverseDir_SM3(void*);
static int _SCSIM_ClockActive_SSM_st_ThirdBalise_SM1_ReverseDir_SM3(void*);
static int _SCSIM_ClockActive_SSM_st_SecondBalise_SM1_ReverseDir_SM3(void*);
static int _SCSIM_ClockActive_SSM_st_LastBalise_SM1_ReverseDir_SM3(void*);
static int _SCSIM_ClockActive_SSM_st_ReverseDir_SM1(void*);
static int _SCSIM_ClockActive_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2(void*);
static int _SCSIM_ClockActive_SSM_st_SevensBalise_SM1_NominalDir_SM2(void*);
static int _SCSIM_ClockActive_SSM_st_SixthBalise_SM1_NominalDir_SM2(void*);
static int _SCSIM_ClockActive_SSM_st_FifthBalise_SM1_NominalDir_SM2(void*);
static int _SCSIM_ClockActive_SSM_st_FourthBalise_SM1_NominalDir_SM2(void*);
static int _SCSIM_ClockActive_SSM_st_ThirdBalise_SM1_NominalDir_SM2(void*);
static int _SCSIM_ClockActive_SSM_st_Wait_SM1_NominalDir_SM2(void*);
static int _SCSIM_ClockActive_SSM_st_SecondBalise_SM1_NominalDir_SM2(void*);
static int _SCSIM_ClockActive_SSM_st_FirstBalise_SM1_NominalDir_SM2(void*);
static int _SCSIM_ClockActive_SSM_st_NominalDir_SM1(void*);
static int _SCSIM_ClockActive_kcg_true(void*);

#endif /*CHECKBGINCH_INT_CHECKBGINPUTCHANNEL_PKG_SCSIM_MAPPING */
