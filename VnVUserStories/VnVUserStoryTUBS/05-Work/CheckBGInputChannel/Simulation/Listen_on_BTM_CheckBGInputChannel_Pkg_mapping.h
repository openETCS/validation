#ifndef LISTEN_ON_BTM_CHECKBGINPUTCHANNEL_PKG_SCSIM_MAPPING
#define LISTEN_ON_BTM_CHECKBGINPUTCHANNEL_PKG_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Listen_on_BTM_CheckBGInputChannel_Pkg_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Listen_on_BTM_CheckBGInputChannel_Pkg.h"
void _SCSIM_Mapping_Listen_on_BTM_CheckBGInputChannel_Pkg();

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
extern ControlUtils _SCSIM_SSM_TR_NominalDir_2_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_NominalDir_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_NominalDir_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_ReverseDir_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_No_BG_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_No_BG_2_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_No_BG_SM1_Utils;
#include "CAST_NID_BG_to_int_TM_conversions.h"
void _SCSIM_Mapping_CAST_NID_BG_to_int_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_NID_BG_to_int_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_N_TOTAL_to_int_TM_conversions.h"
void _SCSIM_Mapping_CAST_N_TOTAL_to_int_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_N_TOTAL_to_int_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_137_Utils;
extern ControlUtils _SCSIM_140_Utils;
extern ControlUtils _SCSIM_136_Utils;
extern ControlUtils _SCSIM_143_Utils;
extern ControlUtils _SCSIM_135_Utils;
extern ControlUtils _SCSIM_146_Utils;
extern ControlUtils _SCSIM_134_Utils;
extern ControlUtils _SCSIM_149_Utils;
extern ControlUtils _SCSIM_133_Utils;
extern ControlUtils _SCSIM_152_Utils;
extern ControlUtils _SCSIM_132_Utils;
extern ControlUtils _SCSIM_155_Utils;
extern ControlUtils _SCSIM_131_Utils;
extern ControlUtils _SCSIM_158_Utils;
extern ControlUtils _SCSIM_130_Utils;
extern ControlUtils _SCSIM_161_Utils;
#include "CAST_N_PIG_to_int_TM_conversions.h"
void _SCSIM_Mapping_CAST_N_PIG_to_int_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_N_PIG_to_int_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_176_Utils;
extern ControlUtils _SCSIM_179_Utils;
extern ControlUtils _SCSIM_175_Utils;
extern ControlUtils _SCSIM_182_Utils;
extern ControlUtils _SCSIM_174_Utils;
extern ControlUtils _SCSIM_185_Utils;
extern ControlUtils _SCSIM_173_Utils;
extern ControlUtils _SCSIM_188_Utils;
extern ControlUtils _SCSIM_172_Utils;
extern ControlUtils _SCSIM_191_Utils;
extern ControlUtils _SCSIM_171_Utils;
extern ControlUtils _SCSIM_194_Utils;
extern ControlUtils _SCSIM_170_Utils;
extern ControlUtils _SCSIM_197_Utils;
extern ControlUtils _SCSIM_169_Utils;
extern ControlUtils _SCSIM_200_Utils;
#include "Decop_Track_Msg_Subfunctions.h"
void _SCSIM_Mapping_Decop_Track_Msg_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Decop_Track_Msg_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "InitBG_Subfunctions.h"
void _SCSIM_Mapping_InitBG_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_InitBG_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Consistency_Check_Track_BG_Subfunctions.h"
void _SCSIM_Mapping_Consistency_Check_Track_BG_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Consistency_Check_Track_BG_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Pack_Received_BG_Subfunctions.h"
void _SCSIM_Mapping_Pack_Received_BG_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Pack_Received_BG_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Decop_Received_BG_Subfunctions.h"
void _SCSIM_Mapping_Decop_Received_BG_Subfunctions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Decop_Received_BG_Subfunctions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_N_PIG_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_N_PIG_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_N_PIG_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_549_Utils;
extern ControlUtils _SCSIM_552_Utils;
extern ControlUtils _SCSIM_548_Utils;
extern ControlUtils _SCSIM_555_Utils;
extern ControlUtils _SCSIM_547_Utils;
extern ControlUtils _SCSIM_558_Utils;
extern ControlUtils _SCSIM_546_Utils;
extern ControlUtils _SCSIM_561_Utils;
extern ControlUtils _SCSIM_545_Utils;
extern ControlUtils _SCSIM_564_Utils;
extern ControlUtils _SCSIM_544_Utils;
extern ControlUtils _SCSIM_567_Utils;
extern ControlUtils _SCSIM_543_Utils;
extern ControlUtils _SCSIM_570_Utils;
extern ControlUtils _SCSIM_542_Utils;
extern ControlUtils _SCSIM_573_Utils;
static int _SCSIM_ClockActive_kcg_true(void*);
static int _SCSIM_ClockActive_kcg_false(void*);
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

#endif /*LISTEN_ON_BTM_CHECKBGINPUTCHANNEL_PKG_SCSIM_MAPPING */
