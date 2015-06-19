#include <stdlib.h>
#include <stddef.h>
#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "CheckBGInputChannel_newtype.h"
#include "kcg_conv.h"

char* strDefaultRealFormat="%.5g"; /*(from .etp)*/

#define skip_whitespace(str) while(*str == ' ' || *str == '\t') str++

/****************************************************************
 ** utility functions 
 ****************************************************************/

static int string_to_VTable(const char *str, const struct SimTypeVTable *pVTable, void *pValue, char **endptr)
{
    int nRet;
    if (pVTable != NULL && pVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        nRet = pVTable->m_pfnFromType(SptString, (const void*)&str, pValue);
        if (nRet != 0) {
            *endptr = (char*)str+strlen(str);
        }
        return nRet;
    };
    return 0;
}

static int is_VTable_double_convertion_allowed(const struct SimTypeVTable *pVTable)
{
    if (pVTable != NULL) {
        int nConvertionAllowed = 0;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
        return nConvertionAllowed;
    }
    return 1;
}

int VTable_to_double(const void *pValue, const struct SimTypeVTable *pVTable, double *nRetValue)
{
    if (pVTable != NULL) {
        if (pVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
            *nRetValue = (*(double*)pVTable->m_pfnToType(SptDouble, pValue));
        else if (pVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
            *nRetValue = (double)(*(float*)pVTable->m_pfnToType(SptFloat, pValue));
        else if (pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
            *nRetValue = (double)(*(long*)pVTable->m_pfnToType(SptLong, pValue));
        else if (pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
            *nRetValue = (double)(*(int*)pVTable->m_pfnToType(SptShort, pValue));
        else
            return 0;
    }
    return 1;
}

static int get_enum_signature(const SimEnumValUtils *pEnumVals, int nSize, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    int i;
    pfnStrAppend("E", pData);
    for(i=0; i<nSize; i++) {
        pfnStrAppend("|", pData);
        pfnStrAppend(pEnumVals[i].m_name, pData);
    }
    return 1;
}

static int get_structure_signature(const SimFieldUtils *pFields, int nSize, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for(i=0; i<nSize; i++) {
        if (i > 0)
            pfnStrAppend(",", pData);
        pFields[i].m_pTypeUtils->m_pfnGetSignature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

/****************************************************************
 ** _3_SSM_ST_SM1 
 ****************************************************************/

struct SimTypeVTable *pSim_3_SSM_ST_SM1VTable;

static SimEnumValUtils _3_SSM_ST_SM1_values[] = {
    { "NominalDir", SSM_st_NominalDir_SM1},
    { "NominalDir", SSM_st_NominalDir_SM1},
    { "ReverseDir", SSM_st_ReverseDir_SM1},
    { "ReverseDir", SSM_st_ReverseDir_SM1},
    { "No_BG", SSM_st_No_BG_SM1},
    { "No_BG", SSM_st_No_BG_SM1},
    { "InconsistentDir", SSM_st_InconsistentDir_SM1},
    { "InconsistentDir", SSM_st_InconsistentDir_SM1},
};

int _3_SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_3_SSM_ST_SM1VTable != NULL
        && pSim_3_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_3_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(_3_SSM_ST_SM1*)pValue, _3_SSM_ST_SM1_values, 8, pfnStrAppend, pData);
}

int string_to__3_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_3_SSM_ST_SM1VTable != NULL) {
        nRet=string_to_VTable(str, pSim_3_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _3_SSM_ST_SM1_values, 8, endptr);
        if (pValue != NULL && nRet != 0)
            *(_3_SSM_ST_SM1*)pValue = nTemp;
    }
    return nRet;
}

int is__3_SSM_ST_SM1_double_convertion_allowed()
{
    if (pSim_3_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSim_3_SSM_ST_SM1VTable);
    }
    return 1;
}

void compare__3_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_3_SSM_ST_SM1VTable != NULL
        && pSim_3_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_3_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_3_SSM_ST_SM1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_3_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_3_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_3_SSM_ST_SM1*)pValue1), (int)(*(_3_SSM_ST_SM1*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _3_SSM_ST_SM1_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_3_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_3_SSM_ST_SM1VTable, nRetValue);
    }
    *nRetValue = (double)*((_3_SSM_ST_SM1*)pValue);
    return 1;
}

int get__3_SSM_ST_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(_3_SSM_ST_SM1_values, 8, pfnStrAppend, pData);
}

int set__3_SSM_ST_SM1_default_value(void *pValue)
{
    *(_3_SSM_ST_SM1*)pValue = SSM_st_NominalDir_SM1;
    return 1;
}

int check__3_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _3_SSM_ST_SM1 rTemp;
    return string_to__3_SSM_ST_SM1(str, &rTemp, endptr);
}

SimTypeUtils _Type__3_SSM_ST_SM1_Utils = {
    _3_SSM_ST_SM1_to_string,
    check__3_SSM_ST_SM1_string,
    string_to__3_SSM_ST_SM1,
    is__3_SSM_ST_SM1_double_convertion_allowed,
    _3_SSM_ST_SM1_to_double,
    compare__3_SSM_ST_SM1,
    get__3_SSM_ST_SM1_signature,
    set__3_SSM_ST_SM1_default_value,
    sizeof(_3_SSM_ST_SM1)
};

/****************************************************************
 ** _5_SSM_TR_SM1 
 ****************************************************************/

struct SimTypeVTable *pSim_5_SSM_TR_SM1VTable;

static SimEnumValUtils _5_SSM_TR_SM1_values[] = {
    { "_5_SSM_TR_SM1_no_trans", 0},
    { "_5_SSM_TR_SM1_no_trans", 0},
    { "NominalDir:<4>", SSM_TR_NominalDir_4_SM1},
    { "NominalDir:<4>", SSM_TR_NominalDir_4_SM1},
    { "NominalDir:<1>", SSM_TR_NominalDir_1_SM1},
    { "NominalDir:<1>", SSM_TR_NominalDir_1_SM1},
    { "NominalDir:<2>", SSM_TR_NominalDir_2_SM1},
    { "NominalDir:<2>", SSM_TR_NominalDir_2_SM1},
    { "NominalDir:<3>", SSM_TR_NominalDir_3_SM1},
    { "NominalDir:<3>", SSM_TR_NominalDir_3_SM1},
    { "ReverseDir:<4>", SSM_TR_ReverseDir_4_SM1},
    { "ReverseDir:<4>", SSM_TR_ReverseDir_4_SM1},
    { "ReverseDir:<1>", SSM_TR_ReverseDir_1_SM1},
    { "ReverseDir:<1>", SSM_TR_ReverseDir_1_SM1},
    { "ReverseDir:<2>", SSM_TR_ReverseDir_2_SM1},
    { "ReverseDir:<2>", SSM_TR_ReverseDir_2_SM1},
    { "ReverseDir:<3>", SSM_TR_ReverseDir_3_SM1},
    { "ReverseDir:<3>", SSM_TR_ReverseDir_3_SM1},
    { "No_BG:<1>", SSM_TR_No_BG_1_SM1},
    { "No_BG:<1>", SSM_TR_No_BG_1_SM1},
    { "No_BG:<2>", SSM_TR_No_BG_2_SM1},
    { "No_BG:<2>", SSM_TR_No_BG_2_SM1},
};

int _5_SSM_TR_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_5_SSM_TR_SM1VTable != NULL
        && pSim_5_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_5_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(_5_SSM_TR_SM1*)pValue, _5_SSM_TR_SM1_values, 22, pfnStrAppend, pData);
}

int string_to__5_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        nRet=string_to_VTable(str, pSim_5_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _5_SSM_TR_SM1_values, 22, endptr);
        if (pValue != NULL && nRet != 0)
            *(_5_SSM_TR_SM1*)pValue = nTemp;
    }
    return nRet;
}

int is__5_SSM_TR_SM1_double_convertion_allowed()
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSim_5_SSM_TR_SM1VTable);
    }
    return 1;
}

void compare__5_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_5_SSM_TR_SM1VTable != NULL
        && pSim_5_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_5_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_5_SSM_TR_SM1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_5_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_5_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_5_SSM_TR_SM1*)pValue1), (int)(*(_5_SSM_TR_SM1*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _5_SSM_TR_SM1_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_5_SSM_TR_SM1VTable, nRetValue);
    }
    *nRetValue = (double)*((_5_SSM_TR_SM1*)pValue);
    return 1;
}

int get__5_SSM_TR_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(_5_SSM_TR_SM1_values, 22, pfnStrAppend, pData);
}

int set__5_SSM_TR_SM1_default_value(void *pValue)
{
    *(_5_SSM_TR_SM1*)pValue = 0;
    return 1;
}

int check__5_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _5_SSM_TR_SM1 rTemp;
    return string_to__5_SSM_TR_SM1(str, &rTemp, endptr);
}

SimTypeUtils _Type__5_SSM_TR_SM1_Utils = {
    _5_SSM_TR_SM1_to_string,
    check__5_SSM_TR_SM1_string,
    string_to__5_SSM_TR_SM1,
    is__5_SSM_TR_SM1_double_convertion_allowed,
    _5_SSM_TR_SM1_to_double,
    compare__5_SSM_TR_SM1,
    get__5_SSM_TR_SM1_signature,
    set__5_SSM_TR_SM1_default_value,
    sizeof(_5_SSM_TR_SM1)
};

/****************************************************************
 ** SSM_ST_SM2_SM1_NominalDir 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_ST_SM2_SM1_NominalDirVTable;

static SimEnumValUtils SSM_ST_SM2_SM1_NominalDir_values[] = {
    { "FirstBalise", SSM_st_FirstBalise_SM1_NominalDir_SM2},
    { "FirstBalise", SSM_st_FirstBalise_SM1_NominalDir_SM2},
    { "SecondBalise", SSM_st_SecondBalise_SM1_NominalDir_SM2},
    { "SecondBalise", SSM_st_SecondBalise_SM1_NominalDir_SM2},
    { "Wait", SSM_st_Wait_SM1_NominalDir_SM2},
    { "Wait", SSM_st_Wait_SM1_NominalDir_SM2},
    { "ThirdBalise", SSM_st_ThirdBalise_SM1_NominalDir_SM2},
    { "ThirdBalise", SSM_st_ThirdBalise_SM1_NominalDir_SM2},
    { "FourthBalise", SSM_st_FourthBalise_SM1_NominalDir_SM2},
    { "FourthBalise", SSM_st_FourthBalise_SM1_NominalDir_SM2},
    { "FifthBalise", SSM_st_FifthBalise_SM1_NominalDir_SM2},
    { "FifthBalise", SSM_st_FifthBalise_SM1_NominalDir_SM2},
    { "SixthBalise", SSM_st_SixthBalise_SM1_NominalDir_SM2},
    { "SixthBalise", SSM_st_SixthBalise_SM1_NominalDir_SM2},
    { "SevensBalise", SSM_st_SevensBalise_SM1_NominalDir_SM2},
    { "SevensBalise", SSM_st_SevensBalise_SM1_NominalDir_SM2},
    { "LastBaliseinBG", SSM_st_LastBaliseinBG_SM1_NominalDir_SM2},
    { "LastBaliseinBG", SSM_st_LastBaliseinBG_SM1_NominalDir_SM2},
};

int SSM_ST_SM2_SM1_NominalDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM2_SM1_NominalDirVTable != NULL
        && pSimSSM_ST_SM2_SM1_NominalDirVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM2_SM1_NominalDirVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM2_SM1_NominalDir*)pValue, SSM_ST_SM2_SM1_NominalDir_values, 18, pfnStrAppend, pData);
}

int string_to_SSM_ST_SM2_SM1_NominalDir(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM2_SM1_NominalDirVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_ST_SM2_SM1_NominalDirVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM2_SM1_NominalDir_values, 18, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM2_SM1_NominalDir*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM2_SM1_NominalDir_double_convertion_allowed()
{
    if (pSimSSM_ST_SM2_SM1_NominalDirVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_SM2_SM1_NominalDirVTable);
    }
    return 1;
}

void compare_SSM_ST_SM2_SM1_NominalDir(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_ST_SM2_SM1_NominalDirVTable != NULL
        && pSimSSM_ST_SM2_SM1_NominalDirVTable->m_version >= Scv612
        && pSimSSM_ST_SM2_SM1_NominalDirVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM2_SM1_NominalDirVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_ST_SM2_SM1_NominalDirVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_ST_SM2_SM1_NominalDirVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM2_SM1_NominalDir*)pValue1), (int)(*(SSM_ST_SM2_SM1_NominalDir*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_ST_SM2_SM1_NominalDir_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_SM2_SM1_NominalDirVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM2_SM1_NominalDirVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_SM2_SM1_NominalDir*)pValue);
    return 1;
}

int get_SSM_ST_SM2_SM1_NominalDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_SM2_SM1_NominalDir_values, 18, pfnStrAppend, pData);
}

int set_SSM_ST_SM2_SM1_NominalDir_default_value(void *pValue)
{
    *(SSM_ST_SM2_SM1_NominalDir*)pValue = SSM_st_FirstBalise_SM1_NominalDir_SM2;
    return 1;
}

int check_SSM_ST_SM2_SM1_NominalDir_string(const char *str, char **endptr)
{
    static SSM_ST_SM2_SM1_NominalDir rTemp;
    return string_to_SSM_ST_SM2_SM1_NominalDir(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_ST_SM2_SM1_NominalDir_Utils = {
    SSM_ST_SM2_SM1_NominalDir_to_string,
    check_SSM_ST_SM2_SM1_NominalDir_string,
    string_to_SSM_ST_SM2_SM1_NominalDir,
    is_SSM_ST_SM2_SM1_NominalDir_double_convertion_allowed,
    SSM_ST_SM2_SM1_NominalDir_to_double,
    compare_SSM_ST_SM2_SM1_NominalDir,
    get_SSM_ST_SM2_SM1_NominalDir_signature,
    set_SSM_ST_SM2_SM1_NominalDir_default_value,
    sizeof(SSM_ST_SM2_SM1_NominalDir)
};

/****************************************************************
 ** SSM_TR_SM2_SM1_NominalDir 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_TR_SM2_SM1_NominalDirVTable;

static SimEnumValUtils SSM_TR_SM2_SM1_NominalDir_values[] = {
    { "SSM_TR_SM2_SM1_NominalDir_no_trans", 0},
    { "SSM_TR_SM2_SM1_NominalDir_no_trans", 0},
    { "FirstBalise:<1>", SSM_TR_FirstBalise_1_SM2_SM1_NominalDir},
    { "FirstBalise:<1>", SSM_TR_FirstBalise_1_SM2_SM1_NominalDir},
    { "FirstBalise:<2>", SSM_TR_FirstBalise_2_SM2_SM1_NominalDir},
    { "FirstBalise:<2>", SSM_TR_FirstBalise_2_SM2_SM1_NominalDir},
    { "FirstBalise:<3>", SSM_TR_FirstBalise_3_SM2_SM1_NominalDir},
    { "FirstBalise:<3>", SSM_TR_FirstBalise_3_SM2_SM1_NominalDir},
    { "FirstBalise:<4>", SSM_TR_FirstBalise_4_SM2_SM1_NominalDir},
    { "FirstBalise:<4>", SSM_TR_FirstBalise_4_SM2_SM1_NominalDir},
    { "SecondBalise:<1>", SSM_TR_SecondBalise_1_SM2_SM1_NominalDir},
    { "SecondBalise:<1>", SSM_TR_SecondBalise_1_SM2_SM1_NominalDir},
    { "SecondBalise:<2>", SSM_TR_SecondBalise_2_SM2_SM1_NominalDir},
    { "SecondBalise:<2>", SSM_TR_SecondBalise_2_SM2_SM1_NominalDir},
    { "SecondBalise:<3>", SSM_TR_SecondBalise_3_SM2_SM1_NominalDir},
    { "SecondBalise:<3>", SSM_TR_SecondBalise_3_SM2_SM1_NominalDir},
    { "Wait:<1>", SSM_TR_Wait_1_SM2_SM1_NominalDir},
    { "Wait:<1>", SSM_TR_Wait_1_SM2_SM1_NominalDir},
    { "Wait:<2>", SSM_TR_Wait_2_SM2_SM1_NominalDir},
    { "Wait:<2>", SSM_TR_Wait_2_SM2_SM1_NominalDir},
    { "Wait:<3>", SSM_TR_Wait_3_SM2_SM1_NominalDir},
    { "Wait:<3>", SSM_TR_Wait_3_SM2_SM1_NominalDir},
    { "Wait:<4>", SSM_TR_Wait_4_SM2_SM1_NominalDir},
    { "Wait:<4>", SSM_TR_Wait_4_SM2_SM1_NominalDir},
    { "Wait:<5>", SSM_TR_Wait_5_SM2_SM1_NominalDir},
    { "Wait:<5>", SSM_TR_Wait_5_SM2_SM1_NominalDir},
    { "Wait:<6>", SSM_TR_Wait_6_SM2_SM1_NominalDir},
    { "Wait:<6>", SSM_TR_Wait_6_SM2_SM1_NominalDir},
    { "Wait:<7>", SSM_TR_Wait_7_SM2_SM1_NominalDir},
    { "Wait:<7>", SSM_TR_Wait_7_SM2_SM1_NominalDir},
    { "Wait:<8>", SSM_TR_Wait_8_SM2_SM1_NominalDir},
    { "Wait:<8>", SSM_TR_Wait_8_SM2_SM1_NominalDir},
    { "ThirdBalise:<1>", SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir},
    { "ThirdBalise:<1>", SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir},
    { "ThirdBalise:<2>", SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir},
    { "ThirdBalise:<2>", SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir},
    { "ThirdBalise:<3>", SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir},
    { "ThirdBalise:<3>", SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir},
    { "FourthBalise:<1>", SSM_TR_FourthBalise_1_SM2_SM1_NominalDir},
    { "FourthBalise:<1>", SSM_TR_FourthBalise_1_SM2_SM1_NominalDir},
    { "FourthBalise:<2>", SSM_TR_FourthBalise_2_SM2_SM1_NominalDir},
    { "FourthBalise:<2>", SSM_TR_FourthBalise_2_SM2_SM1_NominalDir},
    { "FourthBalise:<3>", SSM_TR_FourthBalise_3_SM2_SM1_NominalDir},
    { "FourthBalise:<3>", SSM_TR_FourthBalise_3_SM2_SM1_NominalDir},
    { "FifthBalise:<1>", SSM_TR_FifthBalise_1_SM2_SM1_NominalDir},
    { "FifthBalise:<1>", SSM_TR_FifthBalise_1_SM2_SM1_NominalDir},
    { "FifthBalise:<2>", SSM_TR_FifthBalise_2_SM2_SM1_NominalDir},
    { "FifthBalise:<2>", SSM_TR_FifthBalise_2_SM2_SM1_NominalDir},
    { "FifthBalise:<3>", SSM_TR_FifthBalise_3_SM2_SM1_NominalDir},
    { "FifthBalise:<3>", SSM_TR_FifthBalise_3_SM2_SM1_NominalDir},
    { "SixthBalise:<1>", SSM_TR_SixthBalise_1_SM2_SM1_NominalDir},
    { "SixthBalise:<1>", SSM_TR_SixthBalise_1_SM2_SM1_NominalDir},
    { "SixthBalise:<2>", SSM_TR_SixthBalise_2_SM2_SM1_NominalDir},
    { "SixthBalise:<2>", SSM_TR_SixthBalise_2_SM2_SM1_NominalDir},
    { "SixthBalise:<3>", SSM_TR_SixthBalise_3_SM2_SM1_NominalDir},
    { "SixthBalise:<3>", SSM_TR_SixthBalise_3_SM2_SM1_NominalDir},
    { "SevensBalise:<1>", SSM_TR_SevensBalise_1_SM2_SM1_NominalDir},
    { "SevensBalise:<1>", SSM_TR_SevensBalise_1_SM2_SM1_NominalDir},
    { "SevensBalise:<2>", SSM_TR_SevensBalise_2_SM2_SM1_NominalDir},
    { "SevensBalise:<2>", SSM_TR_SevensBalise_2_SM2_SM1_NominalDir},
    { "LastBaliseinBG:<1>", SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir},
    { "LastBaliseinBG:<1>", SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir},
};

int SSM_TR_SM2_SM1_NominalDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_TR_SM2_SM1_NominalDirVTable != NULL
        && pSimSSM_TR_SM2_SM1_NominalDirVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM2_SM1_NominalDirVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM2_SM1_NominalDir*)pValue, SSM_TR_SM2_SM1_NominalDir_values, 62, pfnStrAppend, pData);
}

int string_to_SSM_TR_SM2_SM1_NominalDir(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM2_SM1_NominalDirVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_TR_SM2_SM1_NominalDirVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM2_SM1_NominalDir_values, 62, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM2_SM1_NominalDir*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM2_SM1_NominalDir_double_convertion_allowed()
{
    if (pSimSSM_TR_SM2_SM1_NominalDirVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_SM2_SM1_NominalDirVTable);
    }
    return 1;
}

void compare_SSM_TR_SM2_SM1_NominalDir(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_TR_SM2_SM1_NominalDirVTable != NULL
        && pSimSSM_TR_SM2_SM1_NominalDirVTable->m_version >= Scv612
        && pSimSSM_TR_SM2_SM1_NominalDirVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM2_SM1_NominalDirVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_TR_SM2_SM1_NominalDirVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_TR_SM2_SM1_NominalDirVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM2_SM1_NominalDir*)pValue1), (int)(*(SSM_TR_SM2_SM1_NominalDir*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_TR_SM2_SM1_NominalDir_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_SM2_SM1_NominalDirVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM2_SM1_NominalDirVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_SM2_SM1_NominalDir*)pValue);
    return 1;
}

int get_SSM_TR_SM2_SM1_NominalDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_SM2_SM1_NominalDir_values, 62, pfnStrAppend, pData);
}

int set_SSM_TR_SM2_SM1_NominalDir_default_value(void *pValue)
{
    *(SSM_TR_SM2_SM1_NominalDir*)pValue = 0;
    return 1;
}

int check_SSM_TR_SM2_SM1_NominalDir_string(const char *str, char **endptr)
{
    static SSM_TR_SM2_SM1_NominalDir rTemp;
    return string_to_SSM_TR_SM2_SM1_NominalDir(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_TR_SM2_SM1_NominalDir_Utils = {
    SSM_TR_SM2_SM1_NominalDir_to_string,
    check_SSM_TR_SM2_SM1_NominalDir_string,
    string_to_SSM_TR_SM2_SM1_NominalDir,
    is_SSM_TR_SM2_SM1_NominalDir_double_convertion_allowed,
    SSM_TR_SM2_SM1_NominalDir_to_double,
    compare_SSM_TR_SM2_SM1_NominalDir,
    get_SSM_TR_SM2_SM1_NominalDir_signature,
    set_SSM_TR_SM2_SM1_NominalDir_default_value,
    sizeof(SSM_TR_SM2_SM1_NominalDir)
};

/****************************************************************
 ** SSM_ST_SM3_SM1_ReverseDir 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_ST_SM3_SM1_ReverseDirVTable;

static SimEnumValUtils SSM_ST_SM3_SM1_ReverseDir_values[] = {
    { "LastBalise", SSM_st_LastBalise_SM1_ReverseDir_SM3},
    { "LastBalise", SSM_st_LastBalise_SM1_ReverseDir_SM3},
    { "SecondBalise", SSM_st_SecondBalise_SM1_ReverseDir_SM3},
    { "SecondBalise", SSM_st_SecondBalise_SM1_ReverseDir_SM3},
    { "ThirdBalise", SSM_st_ThirdBalise_SM1_ReverseDir_SM3},
    { "ThirdBalise", SSM_st_ThirdBalise_SM1_ReverseDir_SM3},
    { "FourthBalise", SSM_st_FourthBalise_SM1_ReverseDir_SM3},
    { "FourthBalise", SSM_st_FourthBalise_SM1_ReverseDir_SM3},
    { "FifthBalise", SSM_st_FifthBalise_SM1_ReverseDir_SM3},
    { "FifthBalise", SSM_st_FifthBalise_SM1_ReverseDir_SM3},
    { "Wait", SSM_st_Wait_SM1_ReverseDir_SM3},
    { "Wait", SSM_st_Wait_SM1_ReverseDir_SM3},
    { "SixthBalise", SSM_st_SixthBalise_SM1_ReverseDir_SM3},
    { "SixthBalise", SSM_st_SixthBalise_SM1_ReverseDir_SM3},
    { "SeventhBalise", SSM_st_SeventhBalise_SM1_ReverseDir_SM3},
    { "SeventhBalise", SSM_st_SeventhBalise_SM1_ReverseDir_SM3},
    { "FirstBalise", SSM_st_FirstBalise_SM1_ReverseDir_SM3},
    { "FirstBalise", SSM_st_FirstBalise_SM1_ReverseDir_SM3},
};

int SSM_ST_SM3_SM1_ReverseDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM3_SM1_ReverseDirVTable != NULL
        && pSimSSM_ST_SM3_SM1_ReverseDirVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM3_SM1_ReverseDirVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM3_SM1_ReverseDir*)pValue, SSM_ST_SM3_SM1_ReverseDir_values, 18, pfnStrAppend, pData);
}

int string_to_SSM_ST_SM3_SM1_ReverseDir(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM3_SM1_ReverseDirVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_ST_SM3_SM1_ReverseDirVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM3_SM1_ReverseDir_values, 18, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM3_SM1_ReverseDir*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM3_SM1_ReverseDir_double_convertion_allowed()
{
    if (pSimSSM_ST_SM3_SM1_ReverseDirVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_SM3_SM1_ReverseDirVTable);
    }
    return 1;
}

void compare_SSM_ST_SM3_SM1_ReverseDir(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_ST_SM3_SM1_ReverseDirVTable != NULL
        && pSimSSM_ST_SM3_SM1_ReverseDirVTable->m_version >= Scv612
        && pSimSSM_ST_SM3_SM1_ReverseDirVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM3_SM1_ReverseDirVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_ST_SM3_SM1_ReverseDirVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_ST_SM3_SM1_ReverseDirVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM3_SM1_ReverseDir*)pValue1), (int)(*(SSM_ST_SM3_SM1_ReverseDir*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_ST_SM3_SM1_ReverseDir_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_SM3_SM1_ReverseDirVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM3_SM1_ReverseDirVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_SM3_SM1_ReverseDir*)pValue);
    return 1;
}

int get_SSM_ST_SM3_SM1_ReverseDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_SM3_SM1_ReverseDir_values, 18, pfnStrAppend, pData);
}

int set_SSM_ST_SM3_SM1_ReverseDir_default_value(void *pValue)
{
    *(SSM_ST_SM3_SM1_ReverseDir*)pValue = SSM_st_LastBalise_SM1_ReverseDir_SM3;
    return 1;
}

int check_SSM_ST_SM3_SM1_ReverseDir_string(const char *str, char **endptr)
{
    static SSM_ST_SM3_SM1_ReverseDir rTemp;
    return string_to_SSM_ST_SM3_SM1_ReverseDir(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_ST_SM3_SM1_ReverseDir_Utils = {
    SSM_ST_SM3_SM1_ReverseDir_to_string,
    check_SSM_ST_SM3_SM1_ReverseDir_string,
    string_to_SSM_ST_SM3_SM1_ReverseDir,
    is_SSM_ST_SM3_SM1_ReverseDir_double_convertion_allowed,
    SSM_ST_SM3_SM1_ReverseDir_to_double,
    compare_SSM_ST_SM3_SM1_ReverseDir,
    get_SSM_ST_SM3_SM1_ReverseDir_signature,
    set_SSM_ST_SM3_SM1_ReverseDir_default_value,
    sizeof(SSM_ST_SM3_SM1_ReverseDir)
};

/****************************************************************
 ** SSM_TR_SM3_SM1_ReverseDir 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_TR_SM3_SM1_ReverseDirVTable;

static SimEnumValUtils SSM_TR_SM3_SM1_ReverseDir_values[] = {
    { "SSM_TR_SM3_SM1_ReverseDir_no_trans", 0},
    { "SSM_TR_SM3_SM1_ReverseDir_no_trans", 0},
    { "LastBalise:<1>", SSM_TR_LastBalise_1_SM3_SM1_ReverseDir},
    { "LastBalise:<1>", SSM_TR_LastBalise_1_SM3_SM1_ReverseDir},
    { "LastBalise:<2>", SSM_TR_LastBalise_2_SM3_SM1_ReverseDir},
    { "LastBalise:<2>", SSM_TR_LastBalise_2_SM3_SM1_ReverseDir},
    { "LastBalise:<3>", SSM_TR_LastBalise_3_SM3_SM1_ReverseDir},
    { "LastBalise:<3>", SSM_TR_LastBalise_3_SM3_SM1_ReverseDir},
    { "LastBalise:<4>", SSM_TR_LastBalise_4_SM3_SM1_ReverseDir},
    { "LastBalise:<4>", SSM_TR_LastBalise_4_SM3_SM1_ReverseDir},
    { "LastBalise:<5>", SSM_TR_LastBalise_5_SM3_SM1_ReverseDir},
    { "LastBalise:<5>", SSM_TR_LastBalise_5_SM3_SM1_ReverseDir},
    { "LastBalise:<6>", SSM_TR_LastBalise_6_SM3_SM1_ReverseDir},
    { "LastBalise:<6>", SSM_TR_LastBalise_6_SM3_SM1_ReverseDir},
    { "LastBalise:<7>", SSM_TR_LastBalise_7_SM3_SM1_ReverseDir},
    { "LastBalise:<7>", SSM_TR_LastBalise_7_SM3_SM1_ReverseDir},
    { "LastBalise:<8>", SSM_TR_LastBalise_8_SM3_SM1_ReverseDir},
    { "LastBalise:<8>", SSM_TR_LastBalise_8_SM3_SM1_ReverseDir},
    { "SecondBalise:<1>", SSM_TR_SecondBalise_1_SM3_SM1_ReverseDir},
    { "SecondBalise:<1>", SSM_TR_SecondBalise_1_SM3_SM1_ReverseDir},
    { "SecondBalise:<2>", SSM_TR_SecondBalise_2_SM3_SM1_ReverseDir},
    { "SecondBalise:<2>", SSM_TR_SecondBalise_2_SM3_SM1_ReverseDir},
    { "ThirdBalise:<1>", SSM_TR_ThirdBalise_1_SM3_SM1_ReverseDir},
    { "ThirdBalise:<1>", SSM_TR_ThirdBalise_1_SM3_SM1_ReverseDir},
    { "ThirdBalise:<2>", SSM_TR_ThirdBalise_2_SM3_SM1_ReverseDir},
    { "ThirdBalise:<2>", SSM_TR_ThirdBalise_2_SM3_SM1_ReverseDir},
    { "FourthBalise:<1>", SSM_TR_FourthBalise_1_SM3_SM1_ReverseDir},
    { "FourthBalise:<1>", SSM_TR_FourthBalise_1_SM3_SM1_ReverseDir},
    { "FourthBalise:<2>", SSM_TR_FourthBalise_2_SM3_SM1_ReverseDir},
    { "FourthBalise:<2>", SSM_TR_FourthBalise_2_SM3_SM1_ReverseDir},
    { "FifthBalise:<1>", SSM_TR_FifthBalise_1_SM3_SM1_ReverseDir},
    { "FifthBalise:<1>", SSM_TR_FifthBalise_1_SM3_SM1_ReverseDir},
    { "FifthBalise:<2>", SSM_TR_FifthBalise_2_SM3_SM1_ReverseDir},
    { "FifthBalise:<2>", SSM_TR_FifthBalise_2_SM3_SM1_ReverseDir},
    { "Wait:<1>", SSM_TR_Wait_1_SM3_SM1_ReverseDir},
    { "Wait:<1>", SSM_TR_Wait_1_SM3_SM1_ReverseDir},
    { "Wait:<2>", SSM_TR_Wait_2_SM3_SM1_ReverseDir},
    { "Wait:<2>", SSM_TR_Wait_2_SM3_SM1_ReverseDir},
    { "Wait:<3>", SSM_TR_Wait_3_SM3_SM1_ReverseDir},
    { "Wait:<3>", SSM_TR_Wait_3_SM3_SM1_ReverseDir},
    { "Wait:<4>", SSM_TR_Wait_4_SM3_SM1_ReverseDir},
    { "Wait:<4>", SSM_TR_Wait_4_SM3_SM1_ReverseDir},
    { "Wait:<5>", SSM_TR_Wait_5_SM3_SM1_ReverseDir},
    { "Wait:<5>", SSM_TR_Wait_5_SM3_SM1_ReverseDir},
    { "Wait:<6>", SSM_TR_Wait_6_SM3_SM1_ReverseDir},
    { "Wait:<6>", SSM_TR_Wait_6_SM3_SM1_ReverseDir},
    { "Wait:<7>", SSM_TR_Wait_7_SM3_SM1_ReverseDir},
    { "Wait:<7>", SSM_TR_Wait_7_SM3_SM1_ReverseDir},
    { "SixthBalise:<1>", SSM_TR_SixthBalise_1_SM3_SM1_ReverseDir},
    { "SixthBalise:<1>", SSM_TR_SixthBalise_1_SM3_SM1_ReverseDir},
    { "SixthBalise:<2>", SSM_TR_SixthBalise_2_SM3_SM1_ReverseDir},
    { "SixthBalise:<2>", SSM_TR_SixthBalise_2_SM3_SM1_ReverseDir},
    { "SeventhBalise:<1>", SSM_TR_SeventhBalise_1_SM3_SM1_ReverseDir},
    { "SeventhBalise:<1>", SSM_TR_SeventhBalise_1_SM3_SM1_ReverseDir},
    { "SeventhBalise:<2>", SSM_TR_SeventhBalise_2_SM3_SM1_ReverseDir},
    { "SeventhBalise:<2>", SSM_TR_SeventhBalise_2_SM3_SM1_ReverseDir},
};

int SSM_TR_SM3_SM1_ReverseDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_TR_SM3_SM1_ReverseDirVTable != NULL
        && pSimSSM_TR_SM3_SM1_ReverseDirVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM3_SM1_ReverseDirVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM3_SM1_ReverseDir*)pValue, SSM_TR_SM3_SM1_ReverseDir_values, 56, pfnStrAppend, pData);
}

int string_to_SSM_TR_SM3_SM1_ReverseDir(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM3_SM1_ReverseDirVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_TR_SM3_SM1_ReverseDirVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM3_SM1_ReverseDir_values, 56, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM3_SM1_ReverseDir*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM3_SM1_ReverseDir_double_convertion_allowed()
{
    if (pSimSSM_TR_SM3_SM1_ReverseDirVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_SM3_SM1_ReverseDirVTable);
    }
    return 1;
}

void compare_SSM_TR_SM3_SM1_ReverseDir(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_TR_SM3_SM1_ReverseDirVTable != NULL
        && pSimSSM_TR_SM3_SM1_ReverseDirVTable->m_version >= Scv612
        && pSimSSM_TR_SM3_SM1_ReverseDirVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM3_SM1_ReverseDirVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_TR_SM3_SM1_ReverseDirVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_TR_SM3_SM1_ReverseDirVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM3_SM1_ReverseDir*)pValue1), (int)(*(SSM_TR_SM3_SM1_ReverseDir*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_TR_SM3_SM1_ReverseDir_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_SM3_SM1_ReverseDirVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM3_SM1_ReverseDirVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_SM3_SM1_ReverseDir*)pValue);
    return 1;
}

int get_SSM_TR_SM3_SM1_ReverseDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_SM3_SM1_ReverseDir_values, 56, pfnStrAppend, pData);
}

int set_SSM_TR_SM3_SM1_ReverseDir_default_value(void *pValue)
{
    *(SSM_TR_SM3_SM1_ReverseDir*)pValue = 0;
    return 1;
}

int check_SSM_TR_SM3_SM1_ReverseDir_string(const char *str, char **endptr)
{
    static SSM_TR_SM3_SM1_ReverseDir rTemp;
    return string_to_SSM_TR_SM3_SM1_ReverseDir(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_TR_SM3_SM1_ReverseDir_Utils = {
    SSM_TR_SM3_SM1_ReverseDir_to_string,
    check_SSM_TR_SM3_SM1_ReverseDir_string,
    string_to_SSM_TR_SM3_SM1_ReverseDir,
    is_SSM_TR_SM3_SM1_ReverseDir_double_convertion_allowed,
    SSM_TR_SM3_SM1_ReverseDir_to_double,
    compare_SSM_TR_SM3_SM1_ReverseDir,
    get_SSM_TR_SM3_SM1_ReverseDir_signature,
    set_SSM_TR_SM3_SM1_ReverseDir_default_value,
    sizeof(SSM_TR_SM3_SM1_ReverseDir)
};

/****************************************************************
 ** SSM_ST_SM4_SM1_InconsistentDir 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_ST_SM4_SM1_InconsistentDirVTable;

static SimEnumValUtils SSM_ST_SM4_SM1_InconsistentDir_values[] = {
    { "FirstBalise", SSM_st_FirstBalise_SM1_InconsistentDir_SM4},
    { "FirstBalise", SSM_st_FirstBalise_SM1_InconsistentDir_SM4},
    { "Wait", SSM_st_Wait_SM1_InconsistentDir_SM4},
    { "Wait", SSM_st_Wait_SM1_InconsistentDir_SM4},
};

int SSM_ST_SM4_SM1_InconsistentDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM4_SM1_InconsistentDirVTable != NULL
        && pSimSSM_ST_SM4_SM1_InconsistentDirVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM4_SM1_InconsistentDirVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM4_SM1_InconsistentDir*)pValue, SSM_ST_SM4_SM1_InconsistentDir_values, 4, pfnStrAppend, pData);
}

int string_to_SSM_ST_SM4_SM1_InconsistentDir(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM4_SM1_InconsistentDirVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_ST_SM4_SM1_InconsistentDirVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM4_SM1_InconsistentDir_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM4_SM1_InconsistentDir*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM4_SM1_InconsistentDir_double_convertion_allowed()
{
    if (pSimSSM_ST_SM4_SM1_InconsistentDirVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_SM4_SM1_InconsistentDirVTable);
    }
    return 1;
}

void compare_SSM_ST_SM4_SM1_InconsistentDir(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_ST_SM4_SM1_InconsistentDirVTable != NULL
        && pSimSSM_ST_SM4_SM1_InconsistentDirVTable->m_version >= Scv612
        && pSimSSM_ST_SM4_SM1_InconsistentDirVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM4_SM1_InconsistentDirVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_ST_SM4_SM1_InconsistentDirVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_ST_SM4_SM1_InconsistentDirVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM4_SM1_InconsistentDir*)pValue1), (int)(*(SSM_ST_SM4_SM1_InconsistentDir*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_ST_SM4_SM1_InconsistentDir_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_SM4_SM1_InconsistentDirVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM4_SM1_InconsistentDirVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_SM4_SM1_InconsistentDir*)pValue);
    return 1;
}

int get_SSM_ST_SM4_SM1_InconsistentDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_SM4_SM1_InconsistentDir_values, 4, pfnStrAppend, pData);
}

int set_SSM_ST_SM4_SM1_InconsistentDir_default_value(void *pValue)
{
    *(SSM_ST_SM4_SM1_InconsistentDir*)pValue = SSM_st_FirstBalise_SM1_InconsistentDir_SM4;
    return 1;
}

int check_SSM_ST_SM4_SM1_InconsistentDir_string(const char *str, char **endptr)
{
    static SSM_ST_SM4_SM1_InconsistentDir rTemp;
    return string_to_SSM_ST_SM4_SM1_InconsistentDir(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_ST_SM4_SM1_InconsistentDir_Utils = {
    SSM_ST_SM4_SM1_InconsistentDir_to_string,
    check_SSM_ST_SM4_SM1_InconsistentDir_string,
    string_to_SSM_ST_SM4_SM1_InconsistentDir,
    is_SSM_ST_SM4_SM1_InconsistentDir_double_convertion_allowed,
    SSM_ST_SM4_SM1_InconsistentDir_to_double,
    compare_SSM_ST_SM4_SM1_InconsistentDir,
    get_SSM_ST_SM4_SM1_InconsistentDir_signature,
    set_SSM_ST_SM4_SM1_InconsistentDir_default_value,
    sizeof(SSM_ST_SM4_SM1_InconsistentDir)
};

/****************************************************************
 ** SSM_TR_SM4_SM1_InconsistentDir 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_TR_SM4_SM1_InconsistentDirVTable;

static SimEnumValUtils SSM_TR_SM4_SM1_InconsistentDir_values[] = {
    { "SSM_TR_SM4_SM1_InconsistentDir_no_trans", 0},
    { "SSM_TR_SM4_SM1_InconsistentDir_no_trans", 0},
    { "FirstBalise:<1>", SSM_TR_FirstBalise_1_SM4_SM1_InconsistentDir},
    { "FirstBalise:<1>", SSM_TR_FirstBalise_1_SM4_SM1_InconsistentDir},
    { "Wait:<1>", SSM_TR_Wait_1_SM4_SM1_InconsistentDir},
    { "Wait:<1>", SSM_TR_Wait_1_SM4_SM1_InconsistentDir},
};

int SSM_TR_SM4_SM1_InconsistentDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_TR_SM4_SM1_InconsistentDirVTable != NULL
        && pSimSSM_TR_SM4_SM1_InconsistentDirVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM4_SM1_InconsistentDirVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM4_SM1_InconsistentDir*)pValue, SSM_TR_SM4_SM1_InconsistentDir_values, 6, pfnStrAppend, pData);
}

int string_to_SSM_TR_SM4_SM1_InconsistentDir(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM4_SM1_InconsistentDirVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_TR_SM4_SM1_InconsistentDirVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM4_SM1_InconsistentDir_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM4_SM1_InconsistentDir*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM4_SM1_InconsistentDir_double_convertion_allowed()
{
    if (pSimSSM_TR_SM4_SM1_InconsistentDirVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_SM4_SM1_InconsistentDirVTable);
    }
    return 1;
}

void compare_SSM_TR_SM4_SM1_InconsistentDir(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_TR_SM4_SM1_InconsistentDirVTable != NULL
        && pSimSSM_TR_SM4_SM1_InconsistentDirVTable->m_version >= Scv612
        && pSimSSM_TR_SM4_SM1_InconsistentDirVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM4_SM1_InconsistentDirVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_TR_SM4_SM1_InconsistentDirVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_TR_SM4_SM1_InconsistentDirVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM4_SM1_InconsistentDir*)pValue1), (int)(*(SSM_TR_SM4_SM1_InconsistentDir*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_TR_SM4_SM1_InconsistentDir_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_SM4_SM1_InconsistentDirVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM4_SM1_InconsistentDirVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_SM4_SM1_InconsistentDir*)pValue);
    return 1;
}

int get_SSM_TR_SM4_SM1_InconsistentDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_SM4_SM1_InconsistentDir_values, 6, pfnStrAppend, pData);
}

int set_SSM_TR_SM4_SM1_InconsistentDir_default_value(void *pValue)
{
    *(SSM_TR_SM4_SM1_InconsistentDir*)pValue = 0;
    return 1;
}

int check_SSM_TR_SM4_SM1_InconsistentDir_string(const char *str, char **endptr)
{
    static SSM_TR_SM4_SM1_InconsistentDir rTemp;
    return string_to_SSM_TR_SM4_SM1_InconsistentDir(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_TR_SM4_SM1_InconsistentDir_Utils = {
    SSM_TR_SM4_SM1_InconsistentDir_to_string,
    check_SSM_TR_SM4_SM1_InconsistentDir_string,
    string_to_SSM_TR_SM4_SM1_InconsistentDir,
    is_SSM_TR_SM4_SM1_InconsistentDir_double_convertion_allowed,
    SSM_TR_SM4_SM1_InconsistentDir_to_double,
    compare_SSM_TR_SM4_SM1_InconsistentDir,
    get_SSM_TR_SM4_SM1_InconsistentDir_signature,
    set_SSM_TR_SM4_SM1_InconsistentDir_default_value,
    sizeof(SSM_TR_SM4_SM1_InconsistentDir)
};

/****************************************************************
 ** SSM_ST_SM3 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_ST_SM3VTable;

static SimEnumValUtils SSM_ST_SM3_values[] = {
    { "Wait", SSM_st_Wait_SM3},
    { "Wait", SSM_st_Wait_SM3},
    { "Receive_outputMessage", SSM_st_Receive_outputMessage_SM3},
    { "Receive_outputMessage", SSM_st_Receive_outputMessage_SM3},
};

int SSM_ST_SM3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM3VTable != NULL
        && pSimSSM_ST_SM3VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM3VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM3*)pValue, SSM_ST_SM3_values, 4, pfnStrAppend, pData);
}

int string_to_SSM_ST_SM3(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM3VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_ST_SM3VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM3_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM3*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM3_double_convertion_allowed()
{
    if (pSimSSM_ST_SM3VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_SM3VTable);
    }
    return 1;
}

void compare_SSM_ST_SM3(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_ST_SM3VTable != NULL
        && pSimSSM_ST_SM3VTable->m_version >= Scv612
        && pSimSSM_ST_SM3VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM3VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_ST_SM3VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_ST_SM3VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM3*)pValue1), (int)(*(SSM_ST_SM3*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_ST_SM3_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_SM3VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM3VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_SM3*)pValue);
    return 1;
}

int get_SSM_ST_SM3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_SM3_values, 4, pfnStrAppend, pData);
}

int set_SSM_ST_SM3_default_value(void *pValue)
{
    *(SSM_ST_SM3*)pValue = SSM_st_Wait_SM3;
    return 1;
}

int check_SSM_ST_SM3_string(const char *str, char **endptr)
{
    static SSM_ST_SM3 rTemp;
    return string_to_SSM_ST_SM3(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_ST_SM3_Utils = {
    SSM_ST_SM3_to_string,
    check_SSM_ST_SM3_string,
    string_to_SSM_ST_SM3,
    is_SSM_ST_SM3_double_convertion_allowed,
    SSM_ST_SM3_to_double,
    compare_SSM_ST_SM3,
    get_SSM_ST_SM3_signature,
    set_SSM_ST_SM3_default_value,
    sizeof(SSM_ST_SM3)
};

/****************************************************************
 ** SSM_TR_SM3 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_TR_SM3VTable;

static SimEnumValUtils SSM_TR_SM3_values[] = {
    { "SSM_TR_SM3_no_trans", 0},
    { "SSM_TR_SM3_no_trans", 0},
    { "Wait:<1>", SSM_TR_Wait_1_SM3},
    { "Wait:<1>", SSM_TR_Wait_1_SM3},
    { "Receive_outputMessage:<1>", SSM_TR_Receive_outputMessage_1_SM3},
    { "Receive_outputMessage:<1>", SSM_TR_Receive_outputMessage_1_SM3},
};

int SSM_TR_SM3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_TR_SM3VTable != NULL
        && pSimSSM_TR_SM3VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM3VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM3*)pValue, SSM_TR_SM3_values, 6, pfnStrAppend, pData);
}

int string_to_SSM_TR_SM3(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM3VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_TR_SM3VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM3_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM3*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM3_double_convertion_allowed()
{
    if (pSimSSM_TR_SM3VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_SM3VTable);
    }
    return 1;
}

void compare_SSM_TR_SM3(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_TR_SM3VTable != NULL
        && pSimSSM_TR_SM3VTable->m_version >= Scv612
        && pSimSSM_TR_SM3VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM3VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_TR_SM3VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_TR_SM3VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM3*)pValue1), (int)(*(SSM_TR_SM3*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_TR_SM3_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_SM3VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM3VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_SM3*)pValue);
    return 1;
}

int get_SSM_TR_SM3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_SM3_values, 6, pfnStrAppend, pData);
}

int set_SSM_TR_SM3_default_value(void *pValue)
{
    *(SSM_TR_SM3*)pValue = 0;
    return 1;
}

int check_SSM_TR_SM3_string(const char *str, char **endptr)
{
    static SSM_TR_SM3 rTemp;
    return string_to_SSM_TR_SM3(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_TR_SM3_Utils = {
    SSM_TR_SM3_to_string,
    check_SSM_TR_SM3_string,
    string_to_SSM_TR_SM3,
    is_SSM_TR_SM3_double_convertion_allowed,
    SSM_TR_SM3_to_double,
    compare_SSM_TR_SM3,
    get_SSM_TR_SM3_signature,
    set_SSM_TR_SM3_default_value,
    sizeof(SSM_TR_SM3)
};

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_ST_SM1VTable;

static SimEnumValUtils SSM_ST_SM1_values[] = {
    { "Reset", SSM_st_Reset_SM1},
    { "Reset", SSM_st_Reset_SM1},
    { "Driving", SSM_st_Driving_SM1},
    { "Driving", SSM_st_Driving_SM1},
};

int SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM1*)pValue, SSM_ST_SM1_values, 4, pfnStrAppend, pData);
}

int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM1VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM1_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM1*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM1_double_convertion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

void compare_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_version >= Scv612
        && pSimSSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM1*)pValue1), (int)(*(SSM_ST_SM1*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_ST_SM1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM1VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_SM1*)pValue);
    return 1;
}

int get_SSM_ST_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_SM1_values, 4, pfnStrAppend, pData);
}

int set_SSM_ST_SM1_default_value(void *pValue)
{
    *(SSM_ST_SM1*)pValue = SSM_st_Reset_SM1;
    return 1;
}

int check_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static SSM_ST_SM1 rTemp;
    return string_to_SSM_ST_SM1(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_ST_SM1_Utils = {
    SSM_ST_SM1_to_string,
    check_SSM_ST_SM1_string,
    string_to_SSM_ST_SM1,
    is_SSM_ST_SM1_double_convertion_allowed,
    SSM_ST_SM1_to_double,
    compare_SSM_ST_SM1,
    get_SSM_ST_SM1_signature,
    set_SSM_ST_SM1_default_value,
    sizeof(SSM_ST_SM1)
};

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_TR_SM1VTable;

static SimEnumValUtils SSM_TR_SM1_values[] = {
    { "SSM_TR_SM1_no_trans", 0},
    { "SSM_TR_SM1_no_trans", 0},
    { "Reset:<1>", SSM_TR_Reset_1_SM1},
    { "Reset:<1>", SSM_TR_Reset_1_SM1},
    { "Driving:<1>", SSM_TR_Driving_1_SM1},
    { "Driving:<1>", SSM_TR_Driving_1_SM1},
};

int SSM_TR_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM1*)pValue, SSM_TR_SM1_values, 6, pfnStrAppend, pData);
}

int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM1VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM1_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM1*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM1_double_convertion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

void compare_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_version >= Scv612
        && pSimSSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM1*)pValue1), (int)(*(SSM_TR_SM1*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_TR_SM1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM1VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_SM1*)pValue);
    return 1;
}

int get_SSM_TR_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_SM1_values, 6, pfnStrAppend, pData);
}

int set_SSM_TR_SM1_default_value(void *pValue)
{
    *(SSM_TR_SM1*)pValue = 0;
    return 1;
}

int check_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static SSM_TR_SM1 rTemp;
    return string_to_SSM_TR_SM1(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_TR_SM1_Utils = {
    SSM_TR_SM1_to_string,
    check_SSM_TR_SM1_string,
    string_to_SSM_TR_SM1,
    is_SSM_TR_SM1_double_convertion_allowed,
    SSM_TR_SM1_to_double,
    compare_SSM_TR_SM1,
    get_SSM_TR_SM1_signature,
    set_SSM_TR_SM1_default_value,
    sizeof(SSM_TR_SM1)
};

/****************************************************************
 ** kcg_real 
 ****************************************************************/

struct SimTypeVTable *pSimDoubleVTable;

int kcg_real_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimDoubleVTable != NULL
        && pSimDoubleVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimDoubleVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimDoubleVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            double value = (double)(*(const kcg_real*)pValue);
            return pfnStrAppend(*(char**)pSimDoubleVTable->m_pfnToType(SptString, &value), pData);
        }
    }
    return predef_kcg_real_to_string(*((kcg_real*)pValue), pConverter->m_RealFormat, pfnStrAppend, pData);
}

int string_to_kcg_real(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    static double rTemp;
    skip_whitespace(str);
    if (pSimDoubleVTable != NULL) {
        if (pSimDoubleVTable->m_version >= Scv65) {
            /*R15 and higher: VTable funtion must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimDoubleVTable, pValue, endptr);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            nRet=string_to_VTable(str, pSimDoubleVTable, &rTemp, endptr);
            if (nRet!=0) {
                *(kcg_real*)pValue = (kcg_real)rTemp;
            }
        }
    }
    if (nRet==0) {
        nRet = predef_string_to_kcg_real(str, (kcg_real*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_real_double_convertion_allowed()
{
    if (pSimDoubleVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimDoubleVTable);
    }
    return 1;
}

void compare_kcg_real(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    if (pSimDoubleVTable != NULL && pData!=NULL && pSimDoubleVTable->m_version >= Scv65 && pSimDoubleVTable->m_pfnCompareWithTol != NULL ) {
        /*Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimDoubleVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pData);
    } else if (pSimDoubleVTable != NULL && pData==NULL && pSimDoubleVTable->m_version >= Scv612 && pSimDoubleVTable->m_pfnCompare != NULL) {
        /*Customized comparison without tolerance: */
        if (pSimDoubleVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            unitResult = pSimDoubleVTable->m_pfnCompare(pResult, pValue1, pValue2);
         } else {
             /*Before R15: VTable funtion returns a standard C typed *variable: */
             double value1 = (double)(*(const kcg_real*)pValue1);
             double value2 = (double)(*(const kcg_real*)pValue2);
             pSimDoubleVTable->m_pfnCompare(&unitResult, &value1, &value2);
             updateCompareResult(unitResult, pResult);
         }
    } else {
        /*Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_real(pResult, *((kcg_real*)pValue1), *((kcg_real*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int kcg_real_to_double(const void *pValue, double *nRetValue)
{
    if (pSimDoubleVTable != NULL) {
        if (pSimDoubleVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            return VTable_to_double(pValue, pSimDoubleVTable, nRetValue);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            double value = (double)(*(const kcg_real*)pValue);
            return VTable_to_double(&value, pSimDoubleVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_real*)pValue);
    return 1;
}

int get_kcg_real_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return pfnStrAppend("R", pData);
}

int set_kcg_real_default_value(void *pValue)
{
    *(kcg_real*)pValue = 0.0;
    return 1;
}

int check_kcg_real_string(const char *str, char **endptr)
{
    static kcg_real rTemp;
    return string_to_kcg_real(str, &rTemp, endptr);
}

SimTypeUtils _Type_kcg_real_Utils = {
    kcg_real_to_string,
    check_kcg_real_string,
    string_to_kcg_real,
    is_kcg_real_double_convertion_allowed,
    kcg_real_to_double,
    compare_kcg_real,
    get_kcg_real_signature,
    set_kcg_real_default_value,
    sizeof(kcg_real)
};

/****************************************************************
 ** kcg_bool 
 ****************************************************************/

struct SimTypeVTable *pSimBoolVTable;

int kcg_bool_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, &value), pData);
        }
    }
    return predef_kcg_bool_to_string(*((kcg_bool*)pValue), pfnStrAppend, pData);
}

int string_to_kcg_bool(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    static SimBool rTemp;
    skip_whitespace(str);
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /*R15 and higher: VTable funtion must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            nRet=string_to_VTable(str, pSimBoolVTable, &rTemp, endptr);
            if (nRet!=0) {
                *(kcg_bool*)pValue = (rTemp == SbTrue)? kcg_true : kcg_false;
            }
        }
    }
    if (nRet==0) {
        nRet = predef_string_to_kcg_bool(str, (kcg_bool*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_bool_double_convertion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBoolVTable);
    }
    return 1;
}

void compare_kcg_bool(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_version >= Scv612
        && pSimBoolVTable->m_pfnCompare != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            SimBool value1 = (*((const kcg_bool*)pValue1) == kcg_true)? SbTrue : SbFalse;
            SimBool value2 = (*((const kcg_bool*)pValue2) == kcg_true)? SbTrue : SbFalse;
            pSimBoolVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_bool(pResult, *((kcg_bool*)pValue1), *((kcg_bool*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int kcg_bool_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            return VTable_to_double(pValue, pSimBoolVTable, nRetValue);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nRetValue);
        }
    }
    *nRetValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int get_kcg_bool_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return pfnStrAppend("B", pData);
}

int set_kcg_bool_default_value(void *pValue)
{
    *(kcg_bool*)pValue = kcg_false;
    return 1;
}

int check_kcg_bool_string(const char *str, char **endptr)
{
    static kcg_bool rTemp;
    return string_to_kcg_bool(str, &rTemp, endptr);
}

SimTypeUtils _Type_kcg_bool_Utils = {
    kcg_bool_to_string,
    check_kcg_bool_string,
    string_to_kcg_bool,
    is_kcg_bool_double_convertion_allowed,
    kcg_bool_to_double,
    compare_kcg_bool,
    get_kcg_bool_signature,
    set_kcg_bool_default_value,
    sizeof(kcg_bool)
};

/****************************************************************
 ** kcg_char 
 ****************************************************************/

struct SimTypeVTable *pSimCharVTable;

int kcg_char_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimCharVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, &value), pData);
        }
    }
    return predef_kcg_char_to_string(*((kcg_char*)pValue), pfnStrAppend, pData);
}

int string_to_kcg_char(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    static char rTemp;
    skip_whitespace(str);
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /*R15 and higher: VTable funtion must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            nRet=string_to_VTable(str, pSimCharVTable, &rTemp, endptr);
            if (nRet!=0) {
                *(kcg_char*)pValue = (kcg_char)rTemp;
            }
        }
    }
    if (nRet==0) {
        nRet = predef_string_to_kcg_char(str, (kcg_char*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_char_double_convertion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCharVTable);
    }
    return 1;
}

void compare_kcg_char(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_version >= Scv612
        && pSimCharVTable->m_pfnCompare != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            char value1 = (char)(*(const kcg_char*)pValue1);
            char value2 = (char)(*(const kcg_char*)pValue2);
            pSimCharVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_char(pResult, *((kcg_char*)pValue1), *((kcg_char*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int kcg_char_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            return VTable_to_double(pValue, pSimCharVTable, nRetValue);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_char*)pValue);
    return 1;
}

int get_kcg_char_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return pfnStrAppend("C", pData);
}

int set_kcg_char_default_value(void *pValue)
{
    *(kcg_char*)pValue = 0;
    return 1;
}

int check_kcg_char_string(const char *str, char **endptr)
{
    static kcg_char rTemp;
    return string_to_kcg_char(str, &rTemp, endptr);
}

SimTypeUtils _Type_kcg_char_Utils = {
    kcg_char_to_string,
    check_kcg_char_string,
    string_to_kcg_char,
    is_kcg_char_double_convertion_allowed,
    kcg_char_to_double,
    compare_kcg_char,
    get_kcg_char_signature,
    set_kcg_char_default_value,
    sizeof(kcg_char)
};

/****************************************************************
 ** kcg_int 
 ****************************************************************/

struct SimTypeVTable *pSimLongVTable;

int kcg_int_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimLongVTable != NULL
        && pSimLongVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimLongVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimLongVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            long value = (long)(*(const kcg_int*)pValue);
            return pfnStrAppend(*(char**)pSimLongVTable->m_pfnToType(SptString, &value), pData);
        }
    }
    return predef_kcg_int_to_string(*((kcg_int*)pValue), pfnStrAppend, pData);
}

int string_to_kcg_int(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    static long rTemp;
    skip_whitespace(str);
    if (pSimLongVTable != NULL) {
        if (pSimLongVTable->m_version >= Scv65) {
            /*R15 and higher: VTable funtion must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimLongVTable, pValue, endptr);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            nRet=string_to_VTable(str, pSimLongVTable, &rTemp, endptr);
            if (nRet!=0) {
                *(kcg_int*)pValue = (kcg_int)rTemp;
            }
        }
    }
    if (nRet==0) {
        nRet = predef_string_to_kcg_int(str, (kcg_int*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int_double_convertion_allowed()
{
    if (pSimLongVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimLongVTable);
    }
    return 1;
}

void compare_kcg_int(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimLongVTable != NULL
        && pSimLongVTable->m_version >= Scv612
        && pSimLongVTable->m_pfnCompare != NULL) {
        if (pSimLongVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            unitResult = pSimLongVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            long value1 = (long)(*(const kcg_int*)pValue1);
            long value2 = (long)(*(const kcg_int*)pValue2);
            pSimLongVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int(pResult, *((kcg_int*)pValue1), *((kcg_int*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int kcg_int_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLongVTable != NULL) {
        if (pSimLongVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            return VTable_to_double(pValue, pSimLongVTable, nRetValue);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            long value = (long)(*(const kcg_int*)pValue);
            return VTable_to_double(&value, pSimLongVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_int*)pValue);
    return 1;
}

int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return pfnStrAppend("I", pData);
}

int set_kcg_int_default_value(void *pValue)
{
    *(kcg_int*)pValue = 0;
    return 1;
}

int check_kcg_int_string(const char *str, char **endptr)
{
    static kcg_int rTemp;
    return string_to_kcg_int(str, &rTemp, endptr);
}

SimTypeUtils _Type_kcg_int_Utils = {
    kcg_int_to_string,
    check_kcg_int_string,
    string_to_kcg_int,
    is_kcg_int_double_convertion_allowed,
    kcg_int_to_double,
    compare_kcg_int,
    get_kcg_int_signature,
    set_kcg_int_default_value,
    sizeof(kcg_int)
};

/****************************************************************
 ** struct__17982 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__17982VTable;

static SimFieldUtils struct__17982_fields[] = {
    {"valid", offsetof(struct__17982,valid), &_Type_kcg_bool_Utils},
    {"level", offsetof(struct__17982,level), &_Type_M_LEVEL_Utils},
    {"Mode", offsetof(struct__17982,Mode), &_Type_M_MODE_Utils},
};

int struct__17982_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__17982VTable != NULL
        && pSimstruct__17982VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__17982VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__17982_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__17982(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__17982VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__17982VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__17982_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__17982_double_convertion_allowed()
{
    if (pSimstruct__17982VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__17982VTable);
    }
    return 0;
}

void compare_struct__17982(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__17982VTable != NULL
        && pSimstruct__17982VTable->m_version >= Scv612
        && pSimstruct__17982VTable->m_pfnCompare != NULL) {
        if (pSimstruct__17982VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__17982VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__17982VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__17982_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__17982_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__17982VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__17982VTable, nRetValue);
    }
    return 0;
}

int get_struct__17982_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__17982_fields, 3, pfnStrAppend, pData);
}

int set_struct__17982_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__17982*)pValue)->valid));
    set_M_LEVEL_default_value(&(((struct__17982*)pValue)->level));
    set_M_MODE_default_value(&(((struct__17982*)pValue)->Mode));
    return 1;
}

int check_struct__17982_string(const char *str, char **endptr)
{
    static struct__17982 rTemp;
    return string_to_struct__17982(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__17982_Utils = {
    struct__17982_to_string,
    check_struct__17982_string,
    string_to_struct__17982,
    is_struct__17982_double_convertion_allowed,
    struct__17982_to_double,
    compare_struct__17982,
    get_struct__17982_signature,
    set_struct__17982_default_value,
    sizeof(struct__17982)
};

/****************************************************************
 ** struct__17988 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__17988VTable;

static SimFieldUtils struct__17988_fields[] = {
    {"nominal", offsetof(struct__17988,nominal), &_Type_kcg_int_Utils},
    {"d_min", offsetof(struct__17988,d_min), &_Type_kcg_int_Utils},
    {"d_max", offsetof(struct__17988,d_max), &_Type_kcg_int_Utils},
};

int struct__17988_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__17988VTable != NULL
        && pSimstruct__17988VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__17988VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__17988_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__17988(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__17988VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__17988VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__17988_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__17988_double_convertion_allowed()
{
    if (pSimstruct__17988VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__17988VTable);
    }
    return 0;
}

void compare_struct__17988(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__17988VTable != NULL
        && pSimstruct__17988VTable->m_version >= Scv612
        && pSimstruct__17988VTable->m_pfnCompare != NULL) {
        if (pSimstruct__17988VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__17988VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__17988VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__17988_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__17988_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__17988VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__17988VTable, nRetValue);
    }
    return 0;
}

int get_struct__17988_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__17988_fields, 3, pfnStrAppend, pData);
}

int set_struct__17988_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__17988*)pValue)->nominal));
    set_kcg_int_default_value(&(((struct__17988*)pValue)->d_min));
    set_kcg_int_default_value(&(((struct__17988*)pValue)->d_max));
    return 1;
}

int check_struct__17988_string(const char *str, char **endptr)
{
    static struct__17988 rTemp;
    return string_to_struct__17988(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__17988_Utils = {
    struct__17988_to_string,
    check_struct__17988_string,
    string_to_struct__17988,
    is_struct__17988_double_convertion_allowed,
    struct__17988_to_double,
    compare_struct__17988,
    get_struct__17988_signature,
    set_struct__17988_default_value,
    sizeof(struct__17988)
};

/****************************************************************
 ** struct__17994 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__17994VTable;

static SimFieldUtils struct__17994_fields[] = {
    {"valid", offsetof(struct__17994,valid), &_Type_kcg_bool_Utils},
    {"nid_LRBG", offsetof(struct__17994,nid_LRBG), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__17994,q_dir), &_Type_Q_DIR_Utils},
    {"q_scale", offsetof(struct__17994,q_scale), &_Type_Q_SCALE_Utils},
    {"d_link", offsetof(struct__17994,d_link), &_Type_kcg_int_Utils},
    {"q_newcountry", offsetof(struct__17994,q_newcountry), &_Type_Q_NEWCOUNTRY_Utils},
    {"nid_c", offsetof(struct__17994,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__17994,nid_bg), &_Type_kcg_int_Utils},
    {"q_linkorientation", offsetof(struct__17994,q_linkorientation), &_Type_Q_LINKORIENTATION_Utils},
    {"q_linkreaction", offsetof(struct__17994,q_linkreaction), &_Type_Q_LINKREACTION_Utils},
    {"q_locacc", offsetof(struct__17994,q_locacc), &_Type_kcg_int_Utils},
};

int struct__17994_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__17994VTable != NULL
        && pSimstruct__17994VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__17994VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__17994_fields, 11, pfnStrAppend, pData);
}

int string_to_struct__17994(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__17994VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__17994VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__17994_fields, 11, endptr);
    }
    return nRet;
}

int is_struct__17994_double_convertion_allowed()
{
    if (pSimstruct__17994VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__17994VTable);
    }
    return 0;
}

void compare_struct__17994(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__17994VTable != NULL
        && pSimstruct__17994VTable->m_version >= Scv612
        && pSimstruct__17994VTable->m_pfnCompare != NULL) {
        if (pSimstruct__17994VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__17994VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__17994VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__17994_fields, 11, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__17994_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__17994VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__17994VTable, nRetValue);
    }
    return 0;
}

int get_struct__17994_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__17994_fields, 11, pfnStrAppend, pData);
}

int set_struct__17994_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__17994*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__17994*)pValue)->nid_LRBG));
    set_Q_DIR_default_value(&(((struct__17994*)pValue)->q_dir));
    set_Q_SCALE_default_value(&(((struct__17994*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__17994*)pValue)->d_link));
    set_Q_NEWCOUNTRY_default_value(&(((struct__17994*)pValue)->q_newcountry));
    set_kcg_int_default_value(&(((struct__17994*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__17994*)pValue)->nid_bg));
    set_Q_LINKORIENTATION_default_value(&(((struct__17994*)pValue)->q_linkorientation));
    set_Q_LINKREACTION_default_value(&(((struct__17994*)pValue)->q_linkreaction));
    set_kcg_int_default_value(&(((struct__17994*)pValue)->q_locacc));
    return 1;
}

int check_struct__17994_string(const char *str, char **endptr)
{
    static struct__17994 rTemp;
    return string_to_struct__17994(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__17994_Utils = {
    struct__17994_to_string,
    check_struct__17994_string,
    string_to_struct__17994,
    is_struct__17994_double_convertion_allowed,
    struct__17994_to_double,
    compare_struct__17994,
    get_struct__17994_signature,
    set_struct__17994_default_value,
    sizeof(struct__17994)
};

/****************************************************************
 ** struct__18008 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18008VTable;

static SimFieldUtils struct__18008_fields[] = {
    {"valid", offsetof(struct__18008,valid), &_Type_kcg_bool_Utils},
    {"nid_bg_fromLinkingBG", offsetof(struct__18008,nid_bg_fromLinkingBG), &_Type_kcg_int_Utils},
    {"nid_c_fromLinkingBG", offsetof(struct__18008,nid_c_fromLinkingBG), &_Type_kcg_int_Utils},
    {"expectedLocation", offsetof(struct__18008,expectedLocation), &_Type_struct__17988_Utils},
    {"d_link", offsetof(struct__18008,d_link), &_Type_struct__17988_Utils},
    {"linkingInfo", offsetof(struct__18008,linkingInfo), &_Type_struct__17994_Utils},
};

int struct__18008_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18008VTable != NULL
        && pSimstruct__18008VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18008VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18008_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__18008(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18008VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18008VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18008_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__18008_double_convertion_allowed()
{
    if (pSimstruct__18008VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18008VTable);
    }
    return 0;
}

void compare_struct__18008(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18008VTable != NULL
        && pSimstruct__18008VTable->m_version >= Scv612
        && pSimstruct__18008VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18008VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18008VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18008VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18008_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18008_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18008VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18008VTable, nRetValue);
    }
    return 0;
}

int get_struct__18008_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18008_fields, 6, pfnStrAppend, pData);
}

int set_struct__18008_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18008*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__18008*)pValue)->nid_bg_fromLinkingBG));
    set_kcg_int_default_value(&(((struct__18008*)pValue)->nid_c_fromLinkingBG));
    set_struct__17988_default_value(&(((struct__18008*)pValue)->expectedLocation));
    set_struct__17988_default_value(&(((struct__18008*)pValue)->d_link));
    set_struct__17994_default_value(&(((struct__18008*)pValue)->linkingInfo));
    return 1;
}

int check_struct__18008_string(const char *str, char **endptr)
{
    static struct__18008 rTemp;
    return string_to_struct__18008(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18008_Utils = {
    struct__18008_to_string,
    check_struct__18008_string,
    string_to_struct__18008,
    is_struct__18008_double_convertion_allowed,
    struct__18008_to_double,
    compare_struct__18008,
    get_struct__18008_signature,
    set_struct__18008_default_value,
    sizeof(struct__18008)
};

/****************************************************************
 ** array__18017 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18017VTable;

int array__18017_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18017VTable != NULL
        && pSimarray__18017VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18017VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__17994_to_string, 4, sizeof(struct__17994), pfnStrAppend, pData);
}

int string_to_array__18017(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18017VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18017VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__17994_Utils, 4, sizeof(struct__17994), endptr);
    }
    return nRet;
}

int is_array__18017_double_convertion_allowed()
{
    if (pSimarray__18017VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18017VTable);
    }
    return 0;
}

void compare_array__18017(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18017VTable != NULL
        && pSimarray__18017VTable->m_version >= Scv612
        && pSimarray__18017VTable->m_pfnCompare != NULL) {
        if (pSimarray__18017VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18017VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18017VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__17994, 4, sizeof(struct__17994), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18017_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18017VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18017VTable, nRetValue);
    }
    return 0;
}

int get_array__18017_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 4; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__17994_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18017_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 4; i++)
        set_struct__17994_default_value(&((struct__17994*)pValue)[i]);
    return 1;
}

int check_array__18017_string(const char *str, char **endptr)
{
    static array__18017 rTemp;
    return string_to_array__18017(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18017_Utils = {
    array__18017_to_string,
    check_array__18017_string,
    string_to_array__18017,
    is_array__18017_double_convertion_allowed,
    array__18017_to_double,
    compare_array__18017,
    get_array__18017_signature,
    set_array__18017_default_value,
    sizeof(array__18017)
};

/****************************************************************
 ** struct__18020 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18020VTable;

static SimFieldUtils struct__18020_fields[] = {
    {"v_safeNominal", offsetof(struct__18020,v_safeNominal), &_Type_kcg_int_Utils},
    {"v_rawNominal", offsetof(struct__18020,v_rawNominal), &_Type_kcg_int_Utils},
    {"v_lower", offsetof(struct__18020,v_lower), &_Type_kcg_int_Utils},
    {"v_upper", offsetof(struct__18020,v_upper), &_Type_kcg_int_Utils},
};

int struct__18020_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18020VTable != NULL
        && pSimstruct__18020VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18020VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18020_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__18020(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18020VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18020VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18020_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__18020_double_convertion_allowed()
{
    if (pSimstruct__18020VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18020VTable);
    }
    return 0;
}

void compare_struct__18020(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18020VTable != NULL
        && pSimstruct__18020VTable->m_version >= Scv612
        && pSimstruct__18020VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18020VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18020VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18020VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18020_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18020_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18020VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18020VTable, nRetValue);
    }
    return 0;
}

int get_struct__18020_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18020_fields, 4, pfnStrAppend, pData);
}

int set_struct__18020_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__18020*)pValue)->v_safeNominal));
    set_kcg_int_default_value(&(((struct__18020*)pValue)->v_rawNominal));
    set_kcg_int_default_value(&(((struct__18020*)pValue)->v_lower));
    set_kcg_int_default_value(&(((struct__18020*)pValue)->v_upper));
    return 1;
}

int check_struct__18020_string(const char *str, char **endptr)
{
    static struct__18020 rTemp;
    return string_to_struct__18020(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18020_Utils = {
    struct__18020_to_string,
    check_struct__18020_string,
    string_to_struct__18020,
    is_struct__18020_double_convertion_allowed,
    struct__18020_to_double,
    compare_struct__18020,
    get_struct__18020_signature,
    set_struct__18020_default_value,
    sizeof(struct__18020)
};

/****************************************************************
 ** struct__18027 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18027VTable;

static SimFieldUtils struct__18027_fields[] = {
    {"o_nominal", offsetof(struct__18027,o_nominal), &_Type_kcg_int_Utils},
    {"o_min", offsetof(struct__18027,o_min), &_Type_kcg_int_Utils},
    {"o_max", offsetof(struct__18027,o_max), &_Type_kcg_int_Utils},
};

int struct__18027_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18027VTable != NULL
        && pSimstruct__18027VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18027VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18027_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__18027(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18027VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18027VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18027_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__18027_double_convertion_allowed()
{
    if (pSimstruct__18027VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18027VTable);
    }
    return 0;
}

void compare_struct__18027(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18027VTable != NULL
        && pSimstruct__18027VTable->m_version >= Scv612
        && pSimstruct__18027VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18027VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18027VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18027VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18027_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18027_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18027VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18027VTable, nRetValue);
    }
    return 0;
}

int get_struct__18027_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18027_fields, 3, pfnStrAppend, pData);
}

int set_struct__18027_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__18027*)pValue)->o_nominal));
    set_kcg_int_default_value(&(((struct__18027*)pValue)->o_min));
    set_kcg_int_default_value(&(((struct__18027*)pValue)->o_max));
    return 1;
}

int check_struct__18027_string(const char *str, char **endptr)
{
    static struct__18027 rTemp;
    return string_to_struct__18027(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18027_Utils = {
    struct__18027_to_string,
    check_struct__18027_string,
    string_to_struct__18027,
    is_struct__18027_double_convertion_allowed,
    struct__18027_to_double,
    compare_struct__18027,
    get_struct__18027_signature,
    set_struct__18027_default_value,
    sizeof(struct__18027)
};

/****************************************************************
 ** struct__18033 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18033VTable;

static SimFieldUtils struct__18033_fields[] = {
    {"valid", offsetof(struct__18033,valid), &_Type_kcg_bool_Utils},
    {"timestamp", offsetof(struct__18033,timestamp), &_Type_kcg_int_Utils},
    {"odo", offsetof(struct__18033,odo), &_Type_struct__18027_Utils},
    {"speed", offsetof(struct__18033,speed), &_Type_struct__18020_Utils},
    {"acceleration", offsetof(struct__18033,acceleration), &_Type_kcg_int_Utils},
    {"motionState", offsetof(struct__18033,motionState), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils},
    {"motionDirection", offsetof(struct__18033,motionDirection), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils},
};

int struct__18033_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18033VTable != NULL
        && pSimstruct__18033VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18033VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18033_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__18033(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18033VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18033VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18033_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__18033_double_convertion_allowed()
{
    if (pSimstruct__18033VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18033VTable);
    }
    return 0;
}

void compare_struct__18033(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18033VTable != NULL
        && pSimstruct__18033VTable->m_version >= Scv612
        && pSimstruct__18033VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18033VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18033VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18033VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18033_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18033_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18033VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18033VTable, nRetValue);
    }
    return 0;
}

int get_struct__18033_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18033_fields, 7, pfnStrAppend, pData);
}

int set_struct__18033_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18033*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__18033*)pValue)->timestamp));
    set_struct__18027_default_value(&(((struct__18033*)pValue)->odo));
    set_struct__18020_default_value(&(((struct__18033*)pValue)->speed));
    set_kcg_int_default_value(&(((struct__18033*)pValue)->acceleration));
    set_odoMotionState_T_Obu_BasicTypes_Pkg_default_value(&(((struct__18033*)pValue)->motionState));
    set_odoMotionDirection_T_Obu_BasicTypes_Pkg_default_value(&(((struct__18033*)pValue)->motionDirection));
    return 1;
}

int check_struct__18033_string(const char *str, char **endptr)
{
    static struct__18033 rTemp;
    return string_to_struct__18033(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18033_Utils = {
    struct__18033_to_string,
    check_struct__18033_string,
    string_to_struct__18033,
    is_struct__18033_double_convertion_allowed,
    struct__18033_to_double,
    compare_struct__18033,
    get_struct__18033_signature,
    set_struct__18033_default_value,
    sizeof(struct__18033)
};

/****************************************************************
 ** struct__18043 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18043VTable;

static SimFieldUtils struct__18043_fields[] = {
    {"valid", offsetof(struct__18043,valid), &_Type_kcg_bool_Utils},
    {"q_updown", offsetof(struct__18043,q_updown), &_Type_Q_UPDOWN_Utils},
    {"m_version", offsetof(struct__18043,m_version), &_Type_M_VERSION_Utils},
    {"q_media", offsetof(struct__18043,q_media), &_Type_Q_MEDIA_Utils},
    {"n_total", offsetof(struct__18043,n_total), &_Type_N_TOTAL_Utils},
    {"m_mcount", offsetof(struct__18043,m_mcount), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(struct__18043,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__18043,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(struct__18043,q_link), &_Type_Q_LINK_Utils},
    {"bgPosition", offsetof(struct__18043,bgPosition), &_Type_struct__18033_Utils},
    {"BG_centerDetectionInaccuraccuracies", offsetof(struct__18043,BG_centerDetectionInaccuraccuracies), &_Type_struct__17988_Utils},
    {"q_nvlocacc", offsetof(struct__18043,q_nvlocacc), &_Type_kcg_int_Utils},
    {"noCoordinateSystemHasBeenAssigned", offsetof(struct__18043,noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils},
    {"trainOrientationToBG", offsetof(struct__18043,trainOrientationToBG), &_Type_Q_DIRLRBG_Utils},
    {"trainRunningDirectionToBG", offsetof(struct__18043,trainRunningDirectionToBG), &_Type_Q_DIRTRAIN_Utils},
};

int struct__18043_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18043VTable != NULL
        && pSimstruct__18043VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18043VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18043_fields, 15, pfnStrAppend, pData);
}

int string_to_struct__18043(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18043VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18043VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18043_fields, 15, endptr);
    }
    return nRet;
}

int is_struct__18043_double_convertion_allowed()
{
    if (pSimstruct__18043VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18043VTable);
    }
    return 0;
}

void compare_struct__18043(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18043VTable != NULL
        && pSimstruct__18043VTable->m_version >= Scv612
        && pSimstruct__18043VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18043VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18043VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18043VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18043_fields, 15, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18043_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18043VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18043VTable, nRetValue);
    }
    return 0;
}

int get_struct__18043_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18043_fields, 15, pfnStrAppend, pData);
}

int set_struct__18043_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18043*)pValue)->valid));
    set_Q_UPDOWN_default_value(&(((struct__18043*)pValue)->q_updown));
    set_M_VERSION_default_value(&(((struct__18043*)pValue)->m_version));
    set_Q_MEDIA_default_value(&(((struct__18043*)pValue)->q_media));
    set_N_TOTAL_default_value(&(((struct__18043*)pValue)->n_total));
    set_kcg_int_default_value(&(((struct__18043*)pValue)->m_mcount));
    set_kcg_int_default_value(&(((struct__18043*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__18043*)pValue)->nid_bg));
    set_Q_LINK_default_value(&(((struct__18043*)pValue)->q_link));
    set_struct__18033_default_value(&(((struct__18043*)pValue)->bgPosition));
    set_struct__17988_default_value(&(((struct__18043*)pValue)->BG_centerDetectionInaccuraccuracies));
    set_kcg_int_default_value(&(((struct__18043*)pValue)->q_nvlocacc));
    set_kcg_bool_default_value(&(((struct__18043*)pValue)->noCoordinateSystemHasBeenAssigned));
    set_Q_DIRLRBG_default_value(&(((struct__18043*)pValue)->trainOrientationToBG));
    set_Q_DIRTRAIN_default_value(&(((struct__18043*)pValue)->trainRunningDirectionToBG));
    return 1;
}

int check_struct__18043_string(const char *str, char **endptr)
{
    static struct__18043 rTemp;
    return string_to_struct__18043(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18043_Utils = {
    struct__18043_to_string,
    check_struct__18043_string,
    string_to_struct__18043,
    is_struct__18043_double_convertion_allowed,
    struct__18043_to_double,
    compare_struct__18043,
    get_struct__18043_signature,
    set_struct__18043_default_value,
    sizeof(struct__18043)
};

/****************************************************************
 ** struct__18061 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18061VTable;

static SimFieldUtils struct__18061_fields[] = {
    {"valid", offsetof(struct__18061,valid), &_Type_kcg_bool_Utils},
    {"BG_Header", offsetof(struct__18061,BG_Header), &_Type_struct__18043_Utils},
    {"linkedBGs", offsetof(struct__18061,linkedBGs), &_Type_array__18017_Utils},
};

int struct__18061_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18061VTable != NULL
        && pSimstruct__18061VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18061VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18061_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__18061(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18061VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18061VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18061_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__18061_double_convertion_allowed()
{
    if (pSimstruct__18061VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18061VTable);
    }
    return 0;
}

void compare_struct__18061(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18061VTable != NULL
        && pSimstruct__18061VTable->m_version >= Scv612
        && pSimstruct__18061VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18061VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18061VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18061VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18061_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18061_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18061VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18061VTable, nRetValue);
    }
    return 0;
}

int get_struct__18061_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18061_fields, 3, pfnStrAppend, pData);
}

int set_struct__18061_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18061*)pValue)->valid));
    set_struct__18043_default_value(&(((struct__18061*)pValue)->BG_Header));
    set_array__18017_default_value(&(((struct__18061*)pValue)->linkedBGs));
    return 1;
}

int check_struct__18061_string(const char *str, char **endptr)
{
    static struct__18061 rTemp;
    return string_to_struct__18061(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18061_Utils = {
    struct__18061_to_string,
    check_struct__18061_string,
    string_to_struct__18061,
    is_struct__18061_double_convertion_allowed,
    struct__18061_to_double,
    compare_struct__18061,
    get_struct__18061_signature,
    set_struct__18061_default_value,
    sizeof(struct__18061)
};

/****************************************************************
 ** struct__18067 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18067VTable;

static SimFieldUtils struct__18067_fields[] = {
    {"valid", offsetof(struct__18067,valid), &_Type_kcg_bool_Utils},
    {"nid_c", offsetof(struct__18067,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__18067,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(struct__18067,q_link), &_Type_Q_LINK_Utils},
    {"location", offsetof(struct__18067,location), &_Type_struct__17988_Utils},
    {"seqNoOnTrack", offsetof(struct__18067,seqNoOnTrack), &_Type_kcg_int_Utils},
    {"infoFromLinking", offsetof(struct__18067,infoFromLinking), &_Type_struct__18008_Utils},
    {"infoFromPassing", offsetof(struct__18067,infoFromPassing), &_Type_struct__18061_Utils},
};

int struct__18067_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18067VTable != NULL
        && pSimstruct__18067VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18067VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18067_fields, 8, pfnStrAppend, pData);
}

int string_to_struct__18067(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18067VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18067VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18067_fields, 8, endptr);
    }
    return nRet;
}

int is_struct__18067_double_convertion_allowed()
{
    if (pSimstruct__18067VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18067VTable);
    }
    return 0;
}

void compare_struct__18067(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18067VTable != NULL
        && pSimstruct__18067VTable->m_version >= Scv612
        && pSimstruct__18067VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18067VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18067VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18067VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18067_fields, 8, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18067_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18067VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18067VTable, nRetValue);
    }
    return 0;
}

int get_struct__18067_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18067_fields, 8, pfnStrAppend, pData);
}

int set_struct__18067_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18067*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__18067*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__18067*)pValue)->nid_bg));
    set_Q_LINK_default_value(&(((struct__18067*)pValue)->q_link));
    set_struct__17988_default_value(&(((struct__18067*)pValue)->location));
    set_kcg_int_default_value(&(((struct__18067*)pValue)->seqNoOnTrack));
    set_struct__18008_default_value(&(((struct__18067*)pValue)->infoFromLinking));
    set_struct__18061_default_value(&(((struct__18067*)pValue)->infoFromPassing));
    return 1;
}

int check_struct__18067_string(const char *str, char **endptr)
{
    static struct__18067 rTemp;
    return string_to_struct__18067(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18067_Utils = {
    struct__18067_to_string,
    check_struct__18067_string,
    string_to_struct__18067,
    is_struct__18067_double_convertion_allowed,
    struct__18067_to_double,
    compare_struct__18067,
    get_struct__18067_signature,
    set_struct__18067_default_value,
    sizeof(struct__18067)
};

/****************************************************************
 ** struct__18078 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18078VTable;

static SimFieldUtils struct__18078_fields[] = {
    {"valid", offsetof(struct__18078,valid), &_Type_kcg_bool_Utils},
    {"timestamp", offsetof(struct__18078,timestamp), &_Type_kcg_int_Utils},
    {"trainPositionIsUnknown", offsetof(struct__18078,trainPositionIsUnknown), &_Type_kcg_bool_Utils},
    {"noCoordinateSystemHasBeenAssigned", offsetof(struct__18078,noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils},
    {"trainPosition", offsetof(struct__18078,trainPosition), &_Type_struct__17988_Utils},
    {"estimatedFrontEndPosition", offsetof(struct__18078,estimatedFrontEndPosition), &_Type_kcg_int_Utils},
    {"minSafeFrontEndPosition", offsetof(struct__18078,minSafeFrontEndPosition), &_Type_kcg_int_Utils},
    {"maxSafeFrontEndPostion", offsetof(struct__18078,maxSafeFrontEndPostion), &_Type_kcg_int_Utils},
    {"LRBG", offsetof(struct__18078,LRBG), &_Type_struct__18067_Utils},
    {"prvLRBG", offsetof(struct__18078,prvLRBG), &_Type_struct__18067_Utils},
    {"nominalOrReverseToLRBG", offsetof(struct__18078,nominalOrReverseToLRBG), &_Type_Q_DLRBG_Utils},
    {"trainOrientationToLRBG", offsetof(struct__18078,trainOrientationToLRBG), &_Type_Q_DIRLRBG_Utils},
    {"trainRunningDirectionToLRBG", offsetof(struct__18078,trainRunningDirectionToLRBG), &_Type_Q_DIRTRAIN_Utils},
    {"linkingIsUsedOnboard", offsetof(struct__18078,linkingIsUsedOnboard), &_Type_kcg_bool_Utils},
};

int struct__18078_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18078VTable != NULL
        && pSimstruct__18078VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18078VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18078_fields, 14, pfnStrAppend, pData);
}

int string_to_struct__18078(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18078VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18078VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18078_fields, 14, endptr);
    }
    return nRet;
}

int is_struct__18078_double_convertion_allowed()
{
    if (pSimstruct__18078VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18078VTable);
    }
    return 0;
}

void compare_struct__18078(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18078VTable != NULL
        && pSimstruct__18078VTable->m_version >= Scv612
        && pSimstruct__18078VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18078VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18078VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18078VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18078_fields, 14, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18078_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18078VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18078VTable, nRetValue);
    }
    return 0;
}

int get_struct__18078_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18078_fields, 14, pfnStrAppend, pData);
}

int set_struct__18078_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18078*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__18078*)pValue)->timestamp));
    set_kcg_bool_default_value(&(((struct__18078*)pValue)->trainPositionIsUnknown));
    set_kcg_bool_default_value(&(((struct__18078*)pValue)->noCoordinateSystemHasBeenAssigned));
    set_struct__17988_default_value(&(((struct__18078*)pValue)->trainPosition));
    set_kcg_int_default_value(&(((struct__18078*)pValue)->estimatedFrontEndPosition));
    set_kcg_int_default_value(&(((struct__18078*)pValue)->minSafeFrontEndPosition));
    set_kcg_int_default_value(&(((struct__18078*)pValue)->maxSafeFrontEndPostion));
    set_struct__18067_default_value(&(((struct__18078*)pValue)->LRBG));
    set_struct__18067_default_value(&(((struct__18078*)pValue)->prvLRBG));
    set_Q_DLRBG_default_value(&(((struct__18078*)pValue)->nominalOrReverseToLRBG));
    set_Q_DIRLRBG_default_value(&(((struct__18078*)pValue)->trainOrientationToLRBG));
    set_Q_DIRTRAIN_default_value(&(((struct__18078*)pValue)->trainRunningDirectionToLRBG));
    set_kcg_bool_default_value(&(((struct__18078*)pValue)->linkingIsUsedOnboard));
    return 1;
}

int check_struct__18078_string(const char *str, char **endptr)
{
    static struct__18078 rTemp;
    return string_to_struct__18078(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18078_Utils = {
    struct__18078_to_string,
    check_struct__18078_string,
    string_to_struct__18078,
    is_struct__18078_double_convertion_allowed,
    struct__18078_to_double,
    compare_struct__18078,
    get_struct__18078_signature,
    set_struct__18078_default_value,
    sizeof(struct__18078)
};

/****************************************************************
 ** array__18095 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18095VTable;

int array__18095_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18095VTable != NULL
        && pSimarray__18095VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18095VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18067_to_string, 8, sizeof(struct__18067), pfnStrAppend, pData);
}

int string_to_array__18095(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18095VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18095VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18067_Utils, 8, sizeof(struct__18067), endptr);
    }
    return nRet;
}

int is_array__18095_double_convertion_allowed()
{
    if (pSimarray__18095VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18095VTable);
    }
    return 0;
}

void compare_array__18095(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18095VTable != NULL
        && pSimarray__18095VTable->m_version >= Scv612
        && pSimarray__18095VTable->m_pfnCompare != NULL) {
        if (pSimarray__18095VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18095VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18095VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18067, 8, sizeof(struct__18067), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18095_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18095VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18095VTable, nRetValue);
    }
    return 0;
}

int get_array__18095_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 8; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18067_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18095_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_struct__18067_default_value(&((struct__18067*)pValue)[i]);
    return 1;
}

int check_array__18095_string(const char *str, char **endptr)
{
    static array__18095 rTemp;
    return string_to_array__18095(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18095_Utils = {
    array__18095_to_string,
    check_array__18095_string,
    string_to_array__18095,
    is_array__18095_double_convertion_allowed,
    array__18095_to_double,
    compare_array__18095,
    get_array__18095_signature,
    set_array__18095_default_value,
    sizeof(array__18095)
};

/****************************************************************
 ** struct__18098 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18098VTable;

static SimFieldUtils struct__18098_fields[] = {
    {"q_updown", offsetof(struct__18098,q_updown), &_Type_kcg_int_Utils},
    {"m_version", offsetof(struct__18098,m_version), &_Type_kcg_int_Utils},
    {"q_media", offsetof(struct__18098,q_media), &_Type_kcg_int_Utils},
    {"n_pig", offsetof(struct__18098,n_pig), &_Type_kcg_int_Utils},
    {"n_total", offsetof(struct__18098,n_total), &_Type_kcg_int_Utils},
    {"m_dup", offsetof(struct__18098,m_dup), &_Type_kcg_int_Utils},
    {"m_mcount", offsetof(struct__18098,m_mcount), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(struct__18098,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__18098,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(struct__18098,q_link), &_Type_kcg_int_Utils},
};

int struct__18098_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18098VTable != NULL
        && pSimstruct__18098VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18098VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18098_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__18098(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18098VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18098VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18098_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__18098_double_convertion_allowed()
{
    if (pSimstruct__18098VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18098VTable);
    }
    return 0;
}

void compare_struct__18098(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18098VTable != NULL
        && pSimstruct__18098VTable->m_version >= Scv612
        && pSimstruct__18098VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18098VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18098VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18098VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18098_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18098_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18098VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18098VTable, nRetValue);
    }
    return 0;
}

int get_struct__18098_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18098_fields, 10, pfnStrAppend, pData);
}

int set_struct__18098_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__18098*)pValue)->q_updown));
    set_kcg_int_default_value(&(((struct__18098*)pValue)->m_version));
    set_kcg_int_default_value(&(((struct__18098*)pValue)->q_media));
    set_kcg_int_default_value(&(((struct__18098*)pValue)->n_pig));
    set_kcg_int_default_value(&(((struct__18098*)pValue)->n_total));
    set_kcg_int_default_value(&(((struct__18098*)pValue)->m_dup));
    set_kcg_int_default_value(&(((struct__18098*)pValue)->m_mcount));
    set_kcg_int_default_value(&(((struct__18098*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__18098*)pValue)->nid_bg));
    set_kcg_int_default_value(&(((struct__18098*)pValue)->q_link));
    return 1;
}

int check_struct__18098_string(const char *str, char **endptr)
{
    static struct__18098 rTemp;
    return string_to_struct__18098(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18098_Utils = {
    struct__18098_to_string,
    check_struct__18098_string,
    string_to_struct__18098,
    is_struct__18098_double_convertion_allowed,
    struct__18098_to_double,
    compare_struct__18098,
    get_struct__18098_signature,
    set_struct__18098_default_value,
    sizeof(struct__18098)
};

/****************************************************************
 ** array_int_500 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_500VTable;

int array_int_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_500VTable != NULL
        && pSimarray_int_500VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_500VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 500, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_500(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_500VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_500VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 500, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_500_double_convertion_allowed()
{
    if (pSimarray_int_500VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_500VTable);
    }
    return 0;
}

void compare_array_int_500(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_500VTable != NULL
        && pSimarray_int_500VTable->m_version >= Scv612
        && pSimarray_int_500VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_500VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_500VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_500VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 500, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_500_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_500VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_500VTable, nRetValue);
    }
    return 0;
}

int get_array_int_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 500; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_500_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 500; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_500_string(const char *str, char **endptr)
{
    static array_int_500 rTemp;
    return string_to_array_int_500(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_500_Utils = {
    array_int_500_to_string,
    check_array_int_500_string,
    string_to_array_int_500,
    is_array_int_500_double_convertion_allowed,
    array_int_500_to_double,
    compare_array_int_500,
    get_array_int_500_signature,
    set_array_int_500_default_value,
    sizeof(array_int_500)
};

/****************************************************************
 ** struct__18114 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18114VTable;

static SimFieldUtils struct__18114_fields[] = {
    {"nid_packet", offsetof(struct__18114,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__18114,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__18114,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__18114,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__18114,endAddress), &_Type_kcg_int_Utils},
};

int struct__18114_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18114VTable != NULL
        && pSimstruct__18114VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18114VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18114_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__18114(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18114VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18114VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18114_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__18114_double_convertion_allowed()
{
    if (pSimstruct__18114VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18114VTable);
    }
    return 0;
}

void compare_struct__18114(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18114VTable != NULL
        && pSimstruct__18114VTable->m_version >= Scv612
        && pSimstruct__18114VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18114VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18114VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18114VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18114_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18114_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18114VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18114VTable, nRetValue);
    }
    return 0;
}

int get_struct__18114_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18114_fields, 5, pfnStrAppend, pData);
}

int set_struct__18114_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__18114*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__18114*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__18114*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__18114*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__18114*)pValue)->endAddress));
    return 1;
}

int check_struct__18114_string(const char *str, char **endptr)
{
    static struct__18114 rTemp;
    return string_to_struct__18114(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18114_Utils = {
    struct__18114_to_string,
    check_struct__18114_string,
    string_to_struct__18114,
    is_struct__18114_double_convertion_allowed,
    struct__18114_to_double,
    compare_struct__18114,
    get_struct__18114_signature,
    set_struct__18114_default_value,
    sizeof(struct__18114)
};

/****************************************************************
 ** array__18122 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18122VTable;

int array__18122_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18122VTable != NULL
        && pSimarray__18122VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18122VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18114_to_string, 30, sizeof(struct__18114), pfnStrAppend, pData);
}

int string_to_array__18122(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18122VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18122VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18114_Utils, 30, sizeof(struct__18114), endptr);
    }
    return nRet;
}

int is_array__18122_double_convertion_allowed()
{
    if (pSimarray__18122VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18122VTable);
    }
    return 0;
}

void compare_array__18122(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18122VTable != NULL
        && pSimarray__18122VTable->m_version >= Scv612
        && pSimarray__18122VTable->m_pfnCompare != NULL) {
        if (pSimarray__18122VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18122VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18122VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18114, 30, sizeof(struct__18114), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18122_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18122VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18122VTable, nRetValue);
    }
    return 0;
}

int get_array__18122_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18114_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18122_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__18114_default_value(&((struct__18114*)pValue)[i]);
    return 1;
}

int check_array__18122_string(const char *str, char **endptr)
{
    static array__18122 rTemp;
    return string_to_array__18122(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18122_Utils = {
    array__18122_to_string,
    check_array__18122_string,
    string_to_array__18122,
    is_array__18122_double_convertion_allowed,
    array__18122_to_double,
    compare_array__18122,
    get_array__18122_signature,
    set_array__18122_default_value,
    sizeof(array__18122)
};

/****************************************************************
 ** struct__18125 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18125VTable;

static SimFieldUtils struct__18125_fields[] = {
    {"PacketHeaders", offsetof(struct__18125,PacketHeaders), &_Type_array__18122_Utils},
    {"PacketData", offsetof(struct__18125,PacketData), &_Type_array_int_500_Utils},
};

int struct__18125_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18125VTable != NULL
        && pSimstruct__18125VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18125VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18125_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__18125(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18125VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18125VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18125_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__18125_double_convertion_allowed()
{
    if (pSimstruct__18125VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18125VTable);
    }
    return 0;
}

void compare_struct__18125(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18125VTable != NULL
        && pSimstruct__18125VTable->m_version >= Scv612
        && pSimstruct__18125VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18125VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18125VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18125VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18125_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18125_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18125VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18125VTable, nRetValue);
    }
    return 0;
}

int get_struct__18125_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18125_fields, 2, pfnStrAppend, pData);
}

int set_struct__18125_default_value(void *pValue)
{
    set_array__18122_default_value(&(((struct__18125*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__18125*)pValue)->PacketData));
    return 1;
}

int check_struct__18125_string(const char *str, char **endptr)
{
    static struct__18125 rTemp;
    return string_to_struct__18125(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18125_Utils = {
    struct__18125_to_string,
    check_struct__18125_string,
    string_to_struct__18125,
    is_struct__18125_double_convertion_allowed,
    struct__18125_to_double,
    compare_struct__18125,
    get_struct__18125_signature,
    set_struct__18125_default_value,
    sizeof(struct__18125)
};

/****************************************************************
 ** struct__18130 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18130VTable;

static SimFieldUtils struct__18130_fields[] = {
    {"header", offsetof(struct__18130,header), &_Type_struct__18098_Utils},
    {"packets", offsetof(struct__18130,packets), &_Type_struct__18125_Utils},
    {"engineering_BG_location", offsetof(struct__18130,engineering_BG_location), &_Type_kcg_int_Utils},
    {"TrainPos", offsetof(struct__18130,TrainPos), &_Type_kcg_real_Utils},
    {"pig_nom_0", offsetof(struct__18130,pig_nom_0), &_Type_kcg_int_Utils},
    {"balise_passed", offsetof(struct__18130,balise_passed), &_Type_kcg_bool_Utils},
};

int struct__18130_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18130VTable != NULL
        && pSimstruct__18130VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18130VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18130_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__18130(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18130VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18130VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18130_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__18130_double_convertion_allowed()
{
    if (pSimstruct__18130VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18130VTable);
    }
    return 0;
}

void compare_struct__18130(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18130VTable != NULL
        && pSimstruct__18130VTable->m_version >= Scv612
        && pSimstruct__18130VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18130VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18130VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18130VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18130_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18130_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18130VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18130VTable, nRetValue);
    }
    return 0;
}

int get_struct__18130_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18130_fields, 6, pfnStrAppend, pData);
}

int set_struct__18130_default_value(void *pValue)
{
    set_struct__18098_default_value(&(((struct__18130*)pValue)->header));
    set_struct__18125_default_value(&(((struct__18130*)pValue)->packets));
    set_kcg_int_default_value(&(((struct__18130*)pValue)->engineering_BG_location));
    set_kcg_real_default_value(&(((struct__18130*)pValue)->TrainPos));
    set_kcg_int_default_value(&(((struct__18130*)pValue)->pig_nom_0));
    set_kcg_bool_default_value(&(((struct__18130*)pValue)->balise_passed));
    return 1;
}

int check_struct__18130_string(const char *str, char **endptr)
{
    static struct__18130 rTemp;
    return string_to_struct__18130(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18130_Utils = {
    struct__18130_to_string,
    check_struct__18130_string,
    string_to_struct__18130,
    is_struct__18130_double_convertion_allowed,
    struct__18130_to_double,
    compare_struct__18130,
    get_struct__18130_signature,
    set_struct__18130_default_value,
    sizeof(struct__18130)
};

/****************************************************************
 ** struct__18139 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18139VTable;

static SimFieldUtils struct__18139_fields[] = {
    {"Header", offsetof(struct__18139,Header), &_Type_struct__18098_Utils},
    {"Messages", offsetof(struct__18139,Messages), &_Type_struct__18125_Utils},
};

int struct__18139_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18139VTable != NULL
        && pSimstruct__18139VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18139VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18139_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__18139(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18139VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18139VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18139_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__18139_double_convertion_allowed()
{
    if (pSimstruct__18139VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18139VTable);
    }
    return 0;
}

void compare_struct__18139(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18139VTable != NULL
        && pSimstruct__18139VTable->m_version >= Scv612
        && pSimstruct__18139VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18139VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18139VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18139VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18139_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18139_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18139VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18139VTable, nRetValue);
    }
    return 0;
}

int get_struct__18139_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18139_fields, 2, pfnStrAppend, pData);
}

int set_struct__18139_default_value(void *pValue)
{
    set_struct__18098_default_value(&(((struct__18139*)pValue)->Header));
    set_struct__18125_default_value(&(((struct__18139*)pValue)->Messages));
    return 1;
}

int check_struct__18139_string(const char *str, char **endptr)
{
    static struct__18139 rTemp;
    return string_to_struct__18139(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18139_Utils = {
    struct__18139_to_string,
    check_struct__18139_string,
    string_to_struct__18139,
    is_struct__18139_double_convertion_allowed,
    struct__18139_to_double,
    compare_struct__18139,
    get_struct__18139_signature,
    set_struct__18139_default_value,
    sizeof(struct__18139)
};

/****************************************************************
 ** struct__18144 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18144VTable;

static SimFieldUtils struct__18144_fields[] = {
    {"NID_C", offsetof(struct__18144,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__18144,NID_BG), &_Type_kcg_int_Utils},
    {"Pos", offsetof(struct__18144,Pos), &_Type_kcg_int_Utils},
    {"Or_BG", offsetof(struct__18144,Or_BG), &_Type_OrBG_TM_Utils},
    {"Or_Line", offsetof(struct__18144,Or_Line), &_Type_OrLine_TM_Utils},
};

int struct__18144_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18144VTable != NULL
        && pSimstruct__18144VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18144VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18144_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__18144(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18144VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18144VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18144_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__18144_double_convertion_allowed()
{
    if (pSimstruct__18144VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18144VTable);
    }
    return 0;
}

void compare_struct__18144(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18144VTable != NULL
        && pSimstruct__18144VTable->m_version >= Scv612
        && pSimstruct__18144VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18144VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18144VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18144VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18144_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18144_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18144VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18144VTable, nRetValue);
    }
    return 0;
}

int get_struct__18144_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18144_fields, 5, pfnStrAppend, pData);
}

int set_struct__18144_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__18144*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__18144*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__18144*)pValue)->Pos));
    set_OrBG_TM_default_value(&(((struct__18144*)pValue)->Or_BG));
    set_OrLine_TM_default_value(&(((struct__18144*)pValue)->Or_Line));
    return 1;
}

int check_struct__18144_string(const char *str, char **endptr)
{
    static struct__18144 rTemp;
    return string_to_struct__18144(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18144_Utils = {
    struct__18144_to_string,
    check_struct__18144_string,
    string_to_struct__18144,
    is_struct__18144_double_convertion_allowed,
    struct__18144_to_double,
    compare_struct__18144,
    get_struct__18144_signature,
    set_struct__18144_default_value,
    sizeof(struct__18144)
};

/****************************************************************
 ** array_int_7 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_7VTable;

int array_int_7_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_7VTable != NULL
        && pSimarray_int_7VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_7VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 7, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_7(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_7VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_7VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 7, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_7_double_convertion_allowed()
{
    if (pSimarray_int_7VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_7VTable);
    }
    return 0;
}

void compare_array_int_7(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_7VTable != NULL
        && pSimarray_int_7VTable->m_version >= Scv612
        && pSimarray_int_7VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_7VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_7VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_7VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 7, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_7_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_7VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_7VTable, nRetValue);
    }
    return 0;
}

int get_array_int_7_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 7; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_7_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 7; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_7_string(const char *str, char **endptr)
{
    static array_int_7 rTemp;
    return string_to_array_int_7(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_7_Utils = {
    array_int_7_to_string,
    check_array_int_7_string,
    string_to_array_int_7,
    is_array_int_7_double_convertion_allowed,
    array_int_7_to_double,
    compare_array_int_7,
    get_array_int_7_signature,
    set_array_int_7_default_value,
    sizeof(array_int_7)
};

/****************************************************************
 ** struct__18155 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18155VTable;

static SimFieldUtils struct__18155_fields[] = {
    {"D_LINK", offsetof(struct__18155,D_LINK), &_Type_kcg_int_Utils},
    {"Q_NEWCOUNTRY", offsetof(struct__18155,Q_NEWCOUNTRY), &_Type_kcg_int_Utils},
    {"NID_C", offsetof(struct__18155,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__18155,NID_BG), &_Type_kcg_int_Utils},
    {"Q_LINKORIENTATION", offsetof(struct__18155,Q_LINKORIENTATION), &_Type_kcg_int_Utils},
    {"Q_LINKREACTION", offsetof(struct__18155,Q_LINKREACTION), &_Type_kcg_int_Utils},
    {"Q_LOCACC", offsetof(struct__18155,Q_LOCACC), &_Type_kcg_int_Utils},
};

int struct__18155_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18155VTable != NULL
        && pSimstruct__18155VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18155VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18155_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__18155(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18155VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18155VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18155_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__18155_double_convertion_allowed()
{
    if (pSimstruct__18155VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18155VTable);
    }
    return 0;
}

void compare_struct__18155(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18155VTable != NULL
        && pSimstruct__18155VTable->m_version >= Scv612
        && pSimstruct__18155VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18155VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18155VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18155VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18155_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18155_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18155VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18155VTable, nRetValue);
    }
    return 0;
}

int get_struct__18155_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18155_fields, 7, pfnStrAppend, pData);
}

int set_struct__18155_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__18155*)pValue)->D_LINK));
    set_kcg_int_default_value(&(((struct__18155*)pValue)->Q_NEWCOUNTRY));
    set_kcg_int_default_value(&(((struct__18155*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__18155*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__18155*)pValue)->Q_LINKORIENTATION));
    set_kcg_int_default_value(&(((struct__18155*)pValue)->Q_LINKREACTION));
    set_kcg_int_default_value(&(((struct__18155*)pValue)->Q_LOCACC));
    return 1;
}

int check_struct__18155_string(const char *str, char **endptr)
{
    static struct__18155 rTemp;
    return string_to_struct__18155(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18155_Utils = {
    struct__18155_to_string,
    check_struct__18155_string,
    string_to_struct__18155,
    is_struct__18155_double_convertion_allowed,
    struct__18155_to_double,
    compare_struct__18155,
    get_struct__18155_signature,
    set_struct__18155_default_value,
    sizeof(struct__18155)
};

/****************************************************************
 ** array_int_7_33 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_7_33VTable;

int array_int_7_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_7_33VTable != NULL
        && pSimarray_int_7_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_7_33VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_7_to_string, 33, sizeof(array_int_7), pfnStrAppend, pData);
}

int string_to_array_int_7_33(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_7_33VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_7_33VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_7_Utils, 33, sizeof(array_int_7), endptr);
    }
    return nRet;
}

int is_array_int_7_33_double_convertion_allowed()
{
    if (pSimarray_int_7_33VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_7_33VTable);
    }
    return 0;
}

void compare_array_int_7_33(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_7_33VTable != NULL
        && pSimarray_int_7_33VTable->m_version >= Scv612
        && pSimarray_int_7_33VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_7_33VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_7_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_7_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_7, 33, sizeof(array_int_7), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_7_33_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_7_33VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_7_33VTable, nRetValue);
    }
    return 0;
}

int get_array_int_7_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_7_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_7_33_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_array_int_7_default_value(&((array_int_7*)pValue)[i]);
    return 1;
}

int check_array_int_7_33_string(const char *str, char **endptr)
{
    static array_int_7_33 rTemp;
    return string_to_array_int_7_33(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_7_33_Utils = {
    array_int_7_33_to_string,
    check_array_int_7_33_string,
    string_to_array_int_7_33,
    is_array_int_7_33_double_convertion_allowed,
    array_int_7_33_to_double,
    compare_array_int_7_33,
    get_array_int_7_33_signature,
    set_array_int_7_33_default_value,
    sizeof(array_int_7_33)
};

/****************************************************************
 ** array_int_231 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_231VTable;

int array_int_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_231VTable != NULL
        && pSimarray_int_231VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_231VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 231, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_231(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_231VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_231VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 231, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_231_double_convertion_allowed()
{
    if (pSimarray_int_231VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_231VTable);
    }
    return 0;
}

void compare_array_int_231(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_231VTable != NULL
        && pSimarray_int_231VTable->m_version >= Scv612
        && pSimarray_int_231VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_231VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_231VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_231VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 231, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_231_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_231VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_231VTable, nRetValue);
    }
    return 0;
}

int get_array_int_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 231; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_231_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 231; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_231_string(const char *str, char **endptr)
{
    static array_int_231 rTemp;
    return string_to_array_int_231(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_231_Utils = {
    array_int_231_to_string,
    check_array_int_231_string,
    string_to_array_int_231,
    is_array_int_231_double_convertion_allowed,
    array_int_231_to_double,
    compare_array_int_231,
    get_array_int_231_signature,
    set_array_int_231_default_value,
    sizeof(array_int_231)
};

/****************************************************************
 ** array__18171 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18171VTable;

int array__18171_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18171VTable != NULL
        && pSimarray__18171VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18171VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18155_to_string, 33, sizeof(struct__18155), pfnStrAppend, pData);
}

int string_to_array__18171(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18171VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18171VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18155_Utils, 33, sizeof(struct__18155), endptr);
    }
    return nRet;
}

int is_array__18171_double_convertion_allowed()
{
    if (pSimarray__18171VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18171VTable);
    }
    return 0;
}

void compare_array__18171(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18171VTable != NULL
        && pSimarray__18171VTable->m_version >= Scv612
        && pSimarray__18171VTable->m_pfnCompare != NULL) {
        if (pSimarray__18171VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18171VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18171VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18155, 33, sizeof(struct__18155), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18171_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18171VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18171VTable, nRetValue);
    }
    return 0;
}

int get_array__18171_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18155_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18171_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__18155_default_value(&((struct__18155*)pValue)[i]);
    return 1;
}

int check_array__18171_string(const char *str, char **endptr)
{
    static array__18171 rTemp;
    return string_to_array__18171(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18171_Utils = {
    array__18171_to_string,
    check_array__18171_string,
    string_to_array__18171,
    is_array__18171_double_convertion_allowed,
    array__18171_to_double,
    compare_array__18171,
    get_array__18171_signature,
    set_array__18171_default_value,
    sizeof(array__18171)
};

/****************************************************************
 ** array__18174 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18174VTable;

int array__18174_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18174VTable != NULL
        && pSimarray__18174VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18174VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18155_to_string, 32, sizeof(struct__18155), pfnStrAppend, pData);
}

int string_to_array__18174(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18174VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18174VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18155_Utils, 32, sizeof(struct__18155), endptr);
    }
    return nRet;
}

int is_array__18174_double_convertion_allowed()
{
    if (pSimarray__18174VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18174VTable);
    }
    return 0;
}

void compare_array__18174(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18174VTable != NULL
        && pSimarray__18174VTable->m_version >= Scv612
        && pSimarray__18174VTable->m_pfnCompare != NULL) {
        if (pSimarray__18174VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18174VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18174VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18155, 32, sizeof(struct__18155), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18174_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18174VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18174VTable, nRetValue);
    }
    return 0;
}

int get_array__18174_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18155_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18174_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__18155_default_value(&((struct__18155*)pValue)[i]);
    return 1;
}

int check_array__18174_string(const char *str, char **endptr)
{
    static array__18174 rTemp;
    return string_to_array__18174(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18174_Utils = {
    array__18174_to_string,
    check_array__18174_string,
    string_to_array__18174,
    is_array__18174_double_convertion_allowed,
    array__18174_to_double,
    compare_array__18174,
    get_array__18174_signature,
    set_array__18174_default_value,
    sizeof(array__18174)
};

/****************************************************************
 ** struct__18177 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18177VTable;

static SimFieldUtils struct__18177_fields[] = {
    {"valid", offsetof(struct__18177,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__18177,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__18177,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__18177,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__18177,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_LINK", offsetof(struct__18177,D_LINK), &_Type_kcg_int_Utils},
    {"Q_NEWCOUNTRY", offsetof(struct__18177,Q_NEWCOUNTRY), &_Type_kcg_int_Utils},
    {"NID_C", offsetof(struct__18177,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__18177,NID_BG), &_Type_kcg_int_Utils},
    {"Q_LINKORIENTATION", offsetof(struct__18177,Q_LINKORIENTATION), &_Type_kcg_int_Utils},
    {"Q_LINKREACTION", offsetof(struct__18177,Q_LINKREACTION), &_Type_kcg_int_Utils},
    {"Q_LOCACC", offsetof(struct__18177,Q_LOCACC), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__18177,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__18177,SECTIONS), &_Type_array__18174_Utils},
};

int struct__18177_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18177VTable != NULL
        && pSimstruct__18177VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18177VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18177_fields, 14, pfnStrAppend, pData);
}

int string_to_struct__18177(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18177VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18177VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18177_fields, 14, endptr);
    }
    return nRet;
}

int is_struct__18177_double_convertion_allowed()
{
    if (pSimstruct__18177VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18177VTable);
    }
    return 0;
}

void compare_struct__18177(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18177VTable != NULL
        && pSimstruct__18177VTable->m_version >= Scv612
        && pSimstruct__18177VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18177VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18177VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18177VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18177_fields, 14, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18177_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18177VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18177VTable, nRetValue);
    }
    return 0;
}

int get_struct__18177_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18177_fields, 14, pfnStrAppend, pData);
}

int set_struct__18177_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18177*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->D_LINK));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->Q_NEWCOUNTRY));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->Q_LINKORIENTATION));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->Q_LINKREACTION));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->Q_LOCACC));
    set_kcg_int_default_value(&(((struct__18177*)pValue)->N_ITER));
    set_array__18174_default_value(&(((struct__18177*)pValue)->SECTIONS));
    return 1;
}

int check_struct__18177_string(const char *str, char **endptr)
{
    static struct__18177 rTemp;
    return string_to_struct__18177(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18177_Utils = {
    struct__18177_to_string,
    check_struct__18177_string,
    string_to_struct__18177,
    is_struct__18177_double_convertion_allowed,
    struct__18177_to_double,
    compare_struct__18177,
    get_struct__18177_signature,
    set_struct__18177_default_value,
    sizeof(struct__18177)
};

/****************************************************************
 ** struct__18194 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18194VTable;

static SimFieldUtils struct__18194_fields[] = {
    {"q_updown", offsetof(struct__18194,q_updown), &_Type_Q_UPDOWN_Utils},
    {"m_version", offsetof(struct__18194,m_version), &_Type_M_VERSION_Utils},
    {"q_media", offsetof(struct__18194,q_media), &_Type_Q_MEDIA_Utils},
    {"n_pig", offsetof(struct__18194,n_pig), &_Type_N_PIG_Utils},
    {"n_total", offsetof(struct__18194,n_total), &_Type_N_TOTAL_Utils},
    {"m_dup", offsetof(struct__18194,m_dup), &_Type_M_DUP_Utils},
    {"m_mcount", offsetof(struct__18194,m_mcount), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(struct__18194,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__18194,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(struct__18194,q_link), &_Type_Q_LINK_Utils},
};

int struct__18194_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18194VTable != NULL
        && pSimstruct__18194VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18194VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18194_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__18194(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18194VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18194VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18194_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__18194_double_convertion_allowed()
{
    if (pSimstruct__18194VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18194VTable);
    }
    return 0;
}

void compare_struct__18194(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18194VTable != NULL
        && pSimstruct__18194VTable->m_version >= Scv612
        && pSimstruct__18194VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18194VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18194VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18194VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18194_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18194_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18194VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18194VTable, nRetValue);
    }
    return 0;
}

int get_struct__18194_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18194_fields, 10, pfnStrAppend, pData);
}

int set_struct__18194_default_value(void *pValue)
{
    set_Q_UPDOWN_default_value(&(((struct__18194*)pValue)->q_updown));
    set_M_VERSION_default_value(&(((struct__18194*)pValue)->m_version));
    set_Q_MEDIA_default_value(&(((struct__18194*)pValue)->q_media));
    set_N_PIG_default_value(&(((struct__18194*)pValue)->n_pig));
    set_N_TOTAL_default_value(&(((struct__18194*)pValue)->n_total));
    set_M_DUP_default_value(&(((struct__18194*)pValue)->m_dup));
    set_kcg_int_default_value(&(((struct__18194*)pValue)->m_mcount));
    set_kcg_int_default_value(&(((struct__18194*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__18194*)pValue)->nid_bg));
    set_Q_LINK_default_value(&(((struct__18194*)pValue)->q_link));
    return 1;
}

int check_struct__18194_string(const char *str, char **endptr)
{
    static struct__18194 rTemp;
    return string_to_struct__18194(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18194_Utils = {
    struct__18194_to_string,
    check_struct__18194_string,
    string_to_struct__18194,
    is_struct__18194_double_convertion_allowed,
    struct__18194_to_double,
    compare_struct__18194,
    get_struct__18194_signature,
    set_struct__18194_default_value,
    sizeof(struct__18194)
};

/****************************************************************
 ** struct__18207 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18207VTable;

static SimFieldUtils struct__18207_fields[] = {
    {"o_nominal", offsetof(struct__18207,o_nominal), &_Type_kcg_real_Utils},
    {"o_min", offsetof(struct__18207,o_min), &_Type_kcg_real_Utils},
    {"o_max", offsetof(struct__18207,o_max), &_Type_kcg_real_Utils},
};

int struct__18207_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18207VTable != NULL
        && pSimstruct__18207VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18207VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18207_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__18207(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18207VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18207VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18207_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__18207_double_convertion_allowed()
{
    if (pSimstruct__18207VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18207VTable);
    }
    return 0;
}

void compare_struct__18207(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18207VTable != NULL
        && pSimstruct__18207VTable->m_version >= Scv612
        && pSimstruct__18207VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18207VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18207VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18207VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18207_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18207_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18207VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18207VTable, nRetValue);
    }
    return 0;
}

int get_struct__18207_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18207_fields, 3, pfnStrAppend, pData);
}

int set_struct__18207_default_value(void *pValue)
{
    set_kcg_real_default_value(&(((struct__18207*)pValue)->o_nominal));
    set_kcg_real_default_value(&(((struct__18207*)pValue)->o_min));
    set_kcg_real_default_value(&(((struct__18207*)pValue)->o_max));
    return 1;
}

int check_struct__18207_string(const char *str, char **endptr)
{
    static struct__18207 rTemp;
    return string_to_struct__18207(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18207_Utils = {
    struct__18207_to_string,
    check_struct__18207_string,
    string_to_struct__18207,
    is_struct__18207_double_convertion_allowed,
    struct__18207_to_double,
    compare_struct__18207,
    get_struct__18207_signature,
    set_struct__18207_default_value,
    sizeof(struct__18207)
};

/****************************************************************
 ** struct__18213 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18213VTable;

static SimFieldUtils struct__18213_fields[] = {
    {"radioDevice", offsetof(struct__18213,radioDevice), &_Type_kcg_int_Utils},
    {"receivedSystemTime", offsetof(struct__18213,receivedSystemTime), &_Type_kcg_int_Utils},
    {"nid_message", offsetof(struct__18213,nid_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__18213,t_train), &_Type_kcg_real_Utils},
    {"m_ack", offsetof(struct__18213,m_ack), &_Type_M_ACK_Utils},
    {"nid_lrbg", offsetof(struct__18213,nid_lrbg), &_Type_kcg_int_Utils},
    {"t_train_reference", offsetof(struct__18213,t_train_reference), &_Type_kcg_real_Utils},
    {"nid_em", offsetof(struct__18213,nid_em), &_Type_kcg_int_Utils},
    {"q_scale", offsetof(struct__18213,q_scale), &_Type_Q_SCALE_Utils},
    {"d_sr", offsetof(struct__18213,d_sr), &_Type_kcg_int_Utils},
    {"t_sh_rqst", offsetof(struct__18213,t_sh_rqst), &_Type_kcg_real_Utils},
    {"d_ref", offsetof(struct__18213,d_ref), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__18213,q_dir), &_Type_Q_DIR_Utils},
    {"d_emergencystop", offsetof(struct__18213,d_emergencystop), &_Type_kcg_int_Utils},
    {"m_version", offsetof(struct__18213,m_version), &_Type_M_VERSION_Utils},
};

int struct__18213_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18213VTable != NULL
        && pSimstruct__18213VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18213VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18213_fields, 15, pfnStrAppend, pData);
}

int string_to_struct__18213(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18213VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18213VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18213_fields, 15, endptr);
    }
    return nRet;
}

int is_struct__18213_double_convertion_allowed()
{
    if (pSimstruct__18213VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18213VTable);
    }
    return 0;
}

void compare_struct__18213(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18213VTable != NULL
        && pSimstruct__18213VTable->m_version >= Scv612
        && pSimstruct__18213VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18213VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18213VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18213VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18213_fields, 15, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18213_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18213VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18213VTable, nRetValue);
    }
    return 0;
}

int get_struct__18213_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18213_fields, 15, pfnStrAppend, pData);
}

int set_struct__18213_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__18213*)pValue)->radioDevice));
    set_kcg_int_default_value(&(((struct__18213*)pValue)->receivedSystemTime));
    set_kcg_int_default_value(&(((struct__18213*)pValue)->nid_message));
    set_kcg_real_default_value(&(((struct__18213*)pValue)->t_train));
    set_M_ACK_default_value(&(((struct__18213*)pValue)->m_ack));
    set_kcg_int_default_value(&(((struct__18213*)pValue)->nid_lrbg));
    set_kcg_real_default_value(&(((struct__18213*)pValue)->t_train_reference));
    set_kcg_int_default_value(&(((struct__18213*)pValue)->nid_em));
    set_Q_SCALE_default_value(&(((struct__18213*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__18213*)pValue)->d_sr));
    set_kcg_real_default_value(&(((struct__18213*)pValue)->t_sh_rqst));
    set_kcg_int_default_value(&(((struct__18213*)pValue)->d_ref));
    set_Q_DIR_default_value(&(((struct__18213*)pValue)->q_dir));
    set_kcg_int_default_value(&(((struct__18213*)pValue)->d_emergencystop));
    set_M_VERSION_default_value(&(((struct__18213*)pValue)->m_version));
    return 1;
}

int check_struct__18213_string(const char *str, char **endptr)
{
    static struct__18213 rTemp;
    return string_to_struct__18213(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18213_Utils = {
    struct__18213_to_string,
    check_struct__18213_string,
    string_to_struct__18213,
    is_struct__18213_double_convertion_allowed,
    struct__18213_to_double,
    compare_struct__18213,
    get_struct__18213_signature,
    set_struct__18213_default_value,
    sizeof(struct__18213)
};

/****************************************************************
 ** struct__18231 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18231VTable;

static SimFieldUtils struct__18231_fields[] = {
    {"t_train_reference", offsetof(struct__18231,t_train_reference), &_Type_kcg_bool_Utils},
    {"nid_em", offsetof(struct__18231,nid_em), &_Type_kcg_bool_Utils},
    {"q_scale", offsetof(struct__18231,q_scale), &_Type_kcg_bool_Utils},
    {"d_sr", offsetof(struct__18231,d_sr), &_Type_kcg_bool_Utils},
    {"t_sh_rqst", offsetof(struct__18231,t_sh_rqst), &_Type_kcg_bool_Utils},
    {"d_ref", offsetof(struct__18231,d_ref), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(struct__18231,q_dir), &_Type_kcg_bool_Utils},
    {"d_emergencystop", offsetof(struct__18231,d_emergencystop), &_Type_kcg_bool_Utils},
    {"m_version", offsetof(struct__18231,m_version), &_Type_kcg_bool_Utils},
};

int struct__18231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18231VTable != NULL
        && pSimstruct__18231VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18231VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18231_fields, 9, pfnStrAppend, pData);
}

int string_to_struct__18231(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18231VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18231VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18231_fields, 9, endptr);
    }
    return nRet;
}

int is_struct__18231_double_convertion_allowed()
{
    if (pSimstruct__18231VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18231VTable);
    }
    return 0;
}

void compare_struct__18231(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18231VTable != NULL
        && pSimstruct__18231VTable->m_version >= Scv612
        && pSimstruct__18231VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18231VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18231VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18231VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18231_fields, 9, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18231_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18231VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18231VTable, nRetValue);
    }
    return 0;
}

int get_struct__18231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18231_fields, 9, pfnStrAppend, pData);
}

int set_struct__18231_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18231*)pValue)->t_train_reference));
    set_kcg_bool_default_value(&(((struct__18231*)pValue)->nid_em));
    set_kcg_bool_default_value(&(((struct__18231*)pValue)->q_scale));
    set_kcg_bool_default_value(&(((struct__18231*)pValue)->d_sr));
    set_kcg_bool_default_value(&(((struct__18231*)pValue)->t_sh_rqst));
    set_kcg_bool_default_value(&(((struct__18231*)pValue)->d_ref));
    set_kcg_bool_default_value(&(((struct__18231*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__18231*)pValue)->d_emergencystop));
    set_kcg_bool_default_value(&(((struct__18231*)pValue)->m_version));
    return 1;
}

int check_struct__18231_string(const char *str, char **endptr)
{
    static struct__18231 rTemp;
    return string_to_struct__18231(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18231_Utils = {
    struct__18231_to_string,
    check_struct__18231_string,
    string_to_struct__18231,
    is_struct__18231_double_convertion_allowed,
    struct__18231_to_double,
    compare_struct__18231,
    get_struct__18231_signature,
    set_struct__18231_default_value,
    sizeof(struct__18231)
};

/****************************************************************
 ** struct__18243 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18243VTable;

static SimFieldUtils struct__18243_fields[] = {
    {"present", offsetof(struct__18243,present), &_Type_kcg_bool_Utils},
    {"apiConsistencyError", offsetof(struct__18243,apiConsistencyError), &_Type_kcg_bool_Utils},
    {"Radio_Common_Header", offsetof(struct__18243,Radio_Common_Header), &_Type_struct__18213_Utils},
    {"Radio_MetaData", offsetof(struct__18243,Radio_MetaData), &_Type_struct__18231_Utils},
};

int struct__18243_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18243VTable != NULL
        && pSimstruct__18243VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18243VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18243_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__18243(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18243VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18243VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18243_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__18243_double_convertion_allowed()
{
    if (pSimstruct__18243VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18243VTable);
    }
    return 0;
}

void compare_struct__18243(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18243VTable != NULL
        && pSimstruct__18243VTable->m_version >= Scv612
        && pSimstruct__18243VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18243VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18243VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18243VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18243_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18243_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18243VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18243VTable, nRetValue);
    }
    return 0;
}

int get_struct__18243_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18243_fields, 4, pfnStrAppend, pData);
}

int set_struct__18243_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18243*)pValue)->present));
    set_kcg_bool_default_value(&(((struct__18243*)pValue)->apiConsistencyError));
    set_struct__18213_default_value(&(((struct__18243*)pValue)->Radio_Common_Header));
    set_struct__18231_default_value(&(((struct__18243*)pValue)->Radio_MetaData));
    return 1;
}

int check_struct__18243_string(const char *str, char **endptr)
{
    static struct__18243 rTemp;
    return string_to_struct__18243(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18243_Utils = {
    struct__18243_to_string,
    check_struct__18243_string,
    string_to_struct__18243,
    is_struct__18243_double_convertion_allowed,
    struct__18243_to_double,
    compare_struct__18243,
    get_struct__18243_signature,
    set_struct__18243_default_value,
    sizeof(struct__18243)
};

/****************************************************************
 ** struct__18250 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18250VTable;

static SimFieldUtils struct__18250_fields[] = {
    {"odometerOfBaliseDetection", offsetof(struct__18250,odometerOfBaliseDetection), &_Type_struct__18033_Utils},
    {"BG_centerDetectionInaccuraccuracies", offsetof(struct__18250,BG_centerDetectionInaccuraccuracies), &_Type_struct__17988_Utils},
};

int struct__18250_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18250VTable != NULL
        && pSimstruct__18250VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18250VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18250_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__18250(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18250VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18250VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18250_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__18250_double_convertion_allowed()
{
    if (pSimstruct__18250VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18250VTable);
    }
    return 0;
}

void compare_struct__18250(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18250VTable != NULL
        && pSimstruct__18250VTable->m_version >= Scv612
        && pSimstruct__18250VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18250VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18250VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18250VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18250_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18250_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18250VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18250VTable, nRetValue);
    }
    return 0;
}

int get_struct__18250_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18250_fields, 2, pfnStrAppend, pData);
}

int set_struct__18250_default_value(void *pValue)
{
    set_struct__18033_default_value(&(((struct__18250*)pValue)->odometerOfBaliseDetection));
    set_struct__17988_default_value(&(((struct__18250*)pValue)->BG_centerDetectionInaccuraccuracies));
    return 1;
}

int check_struct__18250_string(const char *str, char **endptr)
{
    static struct__18250 rTemp;
    return string_to_struct__18250(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18250_Utils = {
    struct__18250_to_string,
    check_struct__18250_string,
    string_to_struct__18250,
    is_struct__18250_double_convertion_allowed,
    struct__18250_to_double,
    compare_struct__18250,
    get_struct__18250_signature,
    set_struct__18250_default_value,
    sizeof(struct__18250)
};

/****************************************************************
 ** struct__18255 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18255VTable;

static SimFieldUtils struct__18255_fields[] = {
    {"present", offsetof(struct__18255,present), &_Type_kcg_bool_Utils},
    {"checkResult", offsetof(struct__18255,checkResult), &_Type_kcg_bool_Utils},
    {"api_bad_balise_received", offsetof(struct__18255,api_bad_balise_received), &_Type_kcg_bool_Utils},
    {"api_header", offsetof(struct__18255,api_header), &_Type_struct__18194_Utils},
    {"centerOfBalisePosition", offsetof(struct__18255,centerOfBalisePosition), &_Type_struct__18250_Utils},
};

int struct__18255_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18255VTable != NULL
        && pSimstruct__18255VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18255VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18255_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__18255(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18255VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18255VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18255_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__18255_double_convertion_allowed()
{
    if (pSimstruct__18255VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18255VTable);
    }
    return 0;
}

void compare_struct__18255(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18255VTable != NULL
        && pSimstruct__18255VTable->m_version >= Scv612
        && pSimstruct__18255VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18255VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18255VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18255VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18255_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18255_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18255VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18255VTable, nRetValue);
    }
    return 0;
}

int get_struct__18255_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18255_fields, 5, pfnStrAppend, pData);
}

int set_struct__18255_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18255*)pValue)->present));
    set_kcg_bool_default_value(&(((struct__18255*)pValue)->checkResult));
    set_kcg_bool_default_value(&(((struct__18255*)pValue)->api_bad_balise_received));
    set_struct__18194_default_value(&(((struct__18255*)pValue)->api_header));
    set_struct__18250_default_value(&(((struct__18255*)pValue)->centerOfBalisePosition));
    return 1;
}

int check_struct__18255_string(const char *str, char **endptr)
{
    static struct__18255 rTemp;
    return string_to_struct__18255(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18255_Utils = {
    struct__18255_to_string,
    check_struct__18255_string,
    string_to_struct__18255,
    is_struct__18255_double_convertion_allowed,
    struct__18255_to_double,
    compare_struct__18255,
    get_struct__18255_signature,
    set_struct__18255_default_value,
    sizeof(struct__18255)
};

/****************************************************************
 ** struct__18263 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18263VTable;

static SimFieldUtils struct__18263_fields[] = {
    {"valid", offsetof(struct__18263,valid), &_Type_kcg_bool_Utils},
    {"systemTimeMsgReceived", offsetof(struct__18263,systemTimeMsgReceived), &_Type_kcg_int_Utils},
    {"msg_type", offsetof(struct__18263,msg_type), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"btm_msg", offsetof(struct__18263,btm_msg), &_Type_struct__18255_Utils},
    {"rtm_msg", offsetof(struct__18263,rtm_msg), &_Type_struct__18243_Utils},
    {"packets", offsetof(struct__18263,packets), &_Type_struct__18125_Utils},
};

int struct__18263_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18263VTable != NULL
        && pSimstruct__18263VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18263VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18263_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__18263(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18263VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18263VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18263_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__18263_double_convertion_allowed()
{
    if (pSimstruct__18263VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18263VTable);
    }
    return 0;
}

void compare_struct__18263(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18263VTable != NULL
        && pSimstruct__18263VTable->m_version >= Scv612
        && pSimstruct__18263VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18263VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18263VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18263VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18263_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18263_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18263VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18263VTable, nRetValue);
    }
    return 0;
}

int get_struct__18263_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18263_fields, 6, pfnStrAppend, pData);
}

int set_struct__18263_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18263*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__18263*)pValue)->systemTimeMsgReceived));
    set_MsgSource_T_Common_Types_Pkg_default_value(&(((struct__18263*)pValue)->msg_type));
    set_struct__18255_default_value(&(((struct__18263*)pValue)->btm_msg));
    set_struct__18243_default_value(&(((struct__18263*)pValue)->rtm_msg));
    set_struct__18125_default_value(&(((struct__18263*)pValue)->packets));
    return 1;
}

int check_struct__18263_string(const char *str, char **endptr)
{
    static struct__18263 rTemp;
    return string_to_struct__18263(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18263_Utils = {
    struct__18263_to_string,
    check_struct__18263_string,
    string_to_struct__18263,
    is_struct__18263_double_convertion_allowed,
    struct__18263_to_double,
    compare_struct__18263,
    get_struct__18263_signature,
    set_struct__18263_default_value,
    sizeof(struct__18263)
};

/****************************************************************
 ** struct__18272 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18272VTable;

static SimFieldUtils struct__18272_fields[] = {
    {"linkedBGError", offsetof(struct__18272,linkedBGError), &_Type_kcg_bool_Utils},
    {"unlinkedBGError", offsetof(struct__18272,unlinkedBGError), &_Type_kcg_bool_Utils},
    {"BG_versionIncompatible", offsetof(struct__18272,BG_versionIncompatible), &_Type_kcg_bool_Utils},
    {"radioSequenceError", offsetof(struct__18272,radioSequenceError), &_Type_kcg_bool_Utils},
    {"tNvContactError", offsetof(struct__18272,tNvContactError), &_Type_kcg_bool_Utils},
    {"otherTimingError", offsetof(struct__18272,otherTimingError), &_Type_kcg_bool_Utils},
    {"radioMessageConsistencyError", offsetof(struct__18272,radioMessageConsistencyError), &_Type_kcg_bool_Utils},
};

int struct__18272_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18272VTable != NULL
        && pSimstruct__18272VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18272VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18272_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__18272(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18272VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18272VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18272_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__18272_double_convertion_allowed()
{
    if (pSimstruct__18272VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18272VTable);
    }
    return 0;
}

void compare_struct__18272(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18272VTable != NULL
        && pSimstruct__18272VTable->m_version >= Scv612
        && pSimstruct__18272VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18272VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18272VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18272VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18272_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18272_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18272VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18272VTable, nRetValue);
    }
    return 0;
}

int get_struct__18272_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18272_fields, 7, pfnStrAppend, pData);
}

int set_struct__18272_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18272*)pValue)->linkedBGError));
    set_kcg_bool_default_value(&(((struct__18272*)pValue)->unlinkedBGError));
    set_kcg_bool_default_value(&(((struct__18272*)pValue)->BG_versionIncompatible));
    set_kcg_bool_default_value(&(((struct__18272*)pValue)->radioSequenceError));
    set_kcg_bool_default_value(&(((struct__18272*)pValue)->tNvContactError));
    set_kcg_bool_default_value(&(((struct__18272*)pValue)->otherTimingError));
    set_kcg_bool_default_value(&(((struct__18272*)pValue)->radioMessageConsistencyError));
    return 1;
}

int check_struct__18272_string(const char *str, char **endptr)
{
    static struct__18272 rTemp;
    return string_to_struct__18272(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18272_Utils = {
    struct__18272_to_string,
    check_struct__18272_string,
    string_to_struct__18272,
    is_struct__18272_double_convertion_allowed,
    struct__18272_to_double,
    compare_struct__18272,
    get_struct__18272_signature,
    set_struct__18272_default_value,
    sizeof(struct__18272)
};

/****************************************************************
 ** struct__18282 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18282VTable;

static SimFieldUtils struct__18282_fields[] = {
    {"valid", offsetof(struct__18282,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(struct__18282,q_dir), &_Type_Q_DIR_Utils},
    {"nid_mn", offsetof(struct__18282,nid_mn), &_Type_kcg_int_Utils},
};

int struct__18282_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18282VTable != NULL
        && pSimstruct__18282VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18282VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18282_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__18282(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18282VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18282VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18282_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__18282_double_convertion_allowed()
{
    if (pSimstruct__18282VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18282VTable);
    }
    return 0;
}

void compare_struct__18282(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18282VTable != NULL
        && pSimstruct__18282VTable->m_version >= Scv612
        && pSimstruct__18282VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18282VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18282VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18282VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18282_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18282_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18282VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18282VTable, nRetValue);
    }
    return 0;
}

int get_struct__18282_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18282_fields, 3, pfnStrAppend, pData);
}

int set_struct__18282_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18282*)pValue)->valid));
    set_Q_DIR_default_value(&(((struct__18282*)pValue)->q_dir));
    set_kcg_int_default_value(&(((struct__18282*)pValue)->nid_mn));
    return 1;
}

int check_struct__18282_string(const char *str, char **endptr)
{
    static struct__18282 rTemp;
    return string_to_struct__18282(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18282_Utils = {
    struct__18282_to_string,
    check_struct__18282_string,
    string_to_struct__18282,
    is_struct__18282_double_convertion_allowed,
    struct__18282_to_double,
    compare_struct__18282,
    get_struct__18282_signature,
    set_struct__18282_default_value,
    sizeof(struct__18282)
};

/****************************************************************
 ** struct__18288 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18288VTable;

static SimFieldUtils struct__18288_fields[] = {
    {"valid", offsetof(struct__18288,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(struct__18288,q_dir), &_Type_Q_DIR_Utils},
    {"q_rbc", offsetof(struct__18288,q_rbc), &_Type_Q_RBC_Utils},
    {"nid_c", offsetof(struct__18288,nid_c), &_Type_kcg_int_Utils},
    {"nid_rbc", offsetof(struct__18288,nid_rbc), &_Type_kcg_int_Utils},
    {"nid_radio", offsetof(struct__18288,nid_radio), &_Type_kcg_int_Utils},
    {"q_sleepsession", offsetof(struct__18288,q_sleepsession), &_Type_Q_SLEEPSESSION_Utils},
};

int struct__18288_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18288VTable != NULL
        && pSimstruct__18288VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18288VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18288_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__18288(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18288VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18288VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18288_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__18288_double_convertion_allowed()
{
    if (pSimstruct__18288VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18288VTable);
    }
    return 0;
}

void compare_struct__18288(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18288VTable != NULL
        && pSimstruct__18288VTable->m_version >= Scv612
        && pSimstruct__18288VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18288VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18288VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18288VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18288_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18288_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18288VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18288VTable, nRetValue);
    }
    return 0;
}

int get_struct__18288_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18288_fields, 7, pfnStrAppend, pData);
}

int set_struct__18288_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18288*)pValue)->valid));
    set_Q_DIR_default_value(&(((struct__18288*)pValue)->q_dir));
    set_Q_RBC_default_value(&(((struct__18288*)pValue)->q_rbc));
    set_kcg_int_default_value(&(((struct__18288*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__18288*)pValue)->nid_rbc));
    set_kcg_int_default_value(&(((struct__18288*)pValue)->nid_radio));
    set_Q_SLEEPSESSION_default_value(&(((struct__18288*)pValue)->q_sleepsession));
    return 1;
}

int check_struct__18288_string(const char *str, char **endptr)
{
    static struct__18288 rTemp;
    return string_to_struct__18288(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18288_Utils = {
    struct__18288_to_string,
    check_struct__18288_string,
    string_to_struct__18288,
    is_struct__18288_double_convertion_allowed,
    struct__18288_to_double,
    compare_struct__18288,
    get_struct__18288_signature,
    set_struct__18288_default_value,
    sizeof(struct__18288)
};

/****************************************************************
 ** struct__18298 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18298VTable;

static SimFieldUtils struct__18298_fields[] = {
    {"valid", offsetof(struct__18298,valid), &_Type_kcg_bool_Utils},
    {"messageSource", offsetof(struct__18298,messageSource), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"Radio_Common_Header", offsetof(struct__18298,Radio_Common_Header), &_Type_struct__18213_Utils},
    {"p42", offsetof(struct__18298,p42), &_Type_struct__18288_Utils},
    {"p45", offsetof(struct__18298,p45), &_Type_struct__18282_Utils},
};

int struct__18298_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18298VTable != NULL
        && pSimstruct__18298VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18298VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18298_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__18298(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18298VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18298VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18298_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__18298_double_convertion_allowed()
{
    if (pSimstruct__18298VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18298VTable);
    }
    return 0;
}

void compare_struct__18298(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18298VTable != NULL
        && pSimstruct__18298VTable->m_version >= Scv612
        && pSimstruct__18298VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18298VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18298VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18298VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18298_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18298_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18298VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18298VTable, nRetValue);
    }
    return 0;
}

int get_struct__18298_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18298_fields, 5, pfnStrAppend, pData);
}

int set_struct__18298_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18298*)pValue)->valid));
    set_MsgSource_T_Common_Types_Pkg_default_value(&(((struct__18298*)pValue)->messageSource));
    set_struct__18213_default_value(&(((struct__18298*)pValue)->Radio_Common_Header));
    set_struct__18288_default_value(&(((struct__18298*)pValue)->p42));
    set_struct__18282_default_value(&(((struct__18298*)pValue)->p45));
    return 1;
}

int check_struct__18298_string(const char *str, char **endptr)
{
    static struct__18298 rTemp;
    return string_to_struct__18298(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18298_Utils = {
    struct__18298_to_string,
    check_struct__18298_string,
    string_to_struct__18298,
    is_struct__18298_double_convertion_allowed,
    struct__18298_to_double,
    compare_struct__18298,
    get_struct__18298_signature,
    set_struct__18298_default_value,
    sizeof(struct__18298)
};

/****************************************************************
 ** struct__18306 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18306VTable;

static SimFieldUtils struct__18306_fields[] = {
    {"d_loc", offsetof(struct__18306,d_loc), &_Type_kcg_int_Utils},
    {"q_lgtloc", offsetof(struct__18306,q_lgtloc), &_Type_Q_LGTLOC_Utils},
};

int struct__18306_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18306VTable != NULL
        && pSimstruct__18306VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18306VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18306_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__18306(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18306VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18306VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18306_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__18306_double_convertion_allowed()
{
    if (pSimstruct__18306VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18306VTable);
    }
    return 0;
}

void compare_struct__18306(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18306VTable != NULL
        && pSimstruct__18306VTable->m_version >= Scv612
        && pSimstruct__18306VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18306VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18306VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18306VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18306_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18306_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18306VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18306VTable, nRetValue);
    }
    return 0;
}

int get_struct__18306_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18306_fields, 2, pfnStrAppend, pData);
}

int set_struct__18306_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__18306*)pValue)->d_loc));
    set_Q_LGTLOC_default_value(&(((struct__18306*)pValue)->q_lgtloc));
    return 1;
}

int check_struct__18306_string(const char *str, char **endptr)
{
    static struct__18306 rTemp;
    return string_to_struct__18306(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18306_Utils = {
    struct__18306_to_string,
    check_struct__18306_string,
    string_to_struct__18306,
    is_struct__18306_double_convertion_allowed,
    struct__18306_to_double,
    compare_struct__18306,
    get_struct__18306_signature,
    set_struct__18306_default_value,
    sizeof(struct__18306)
};

/****************************************************************
 ** array__18311 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18311VTable;

int array__18311_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18311VTable != NULL
        && pSimarray__18311VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18311VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18306_to_string, 2, sizeof(struct__18306), pfnStrAppend, pData);
}

int string_to_array__18311(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18311VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18311VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18306_Utils, 2, sizeof(struct__18306), endptr);
    }
    return nRet;
}

int is_array__18311_double_convertion_allowed()
{
    if (pSimarray__18311VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18311VTable);
    }
    return 0;
}

void compare_array__18311(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18311VTable != NULL
        && pSimarray__18311VTable->m_version >= Scv612
        && pSimarray__18311VTable->m_pfnCompare != NULL) {
        if (pSimarray__18311VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18311VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18311VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18306, 2, sizeof(struct__18306), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18311_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18311VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18311VTable, nRetValue);
    }
    return 0;
}

int get_array__18311_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 2; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18306_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18311_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_struct__18306_default_value(&((struct__18306*)pValue)[i]);
    return 1;
}

int check_array__18311_string(const char *str, char **endptr)
{
    static array__18311 rTemp;
    return string_to_array__18311(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18311_Utils = {
    array__18311_to_string,
    check_array__18311_string,
    string_to_array__18311,
    is_array__18311_double_convertion_allowed,
    array__18311_to_double,
    compare_array__18311,
    get_array__18311_signature,
    set_array__18311_default_value,
    sizeof(array__18311)
};

/****************************************************************
 ** struct__18314 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18314VTable;

static SimFieldUtils struct__18314_fields[] = {
    {"valid", offsetof(struct__18314,valid), &_Type_kcg_bool_Utils},
    {"nid_packet", offsetof(struct__18314,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__18314,q_dir), &_Type_Q_DIR_Utils},
    {"l_packet", offsetof(struct__18314,l_packet), &_Type_kcg_int_Utils},
    {"q_scale", offsetof(struct__18314,q_scale), &_Type_Q_SCALE_Utils},
    {"t_cycloc", offsetof(struct__18314,t_cycloc), &_Type_kcg_int_Utils},
    {"d_cycloc", offsetof(struct__18314,d_cycloc), &_Type_kcg_int_Utils},
    {"m_loc", offsetof(struct__18314,m_loc), &_Type_M_LOC_Utils},
    {"n_iter", offsetof(struct__18314,n_iter), &_Type_kcg_int_Utils},
    {"iterPacket58List", offsetof(struct__18314,iterPacket58List), &_Type_array__18311_Utils},
};

int struct__18314_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18314VTable != NULL
        && pSimstruct__18314VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18314VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18314_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__18314(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18314VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18314VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18314_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__18314_double_convertion_allowed()
{
    if (pSimstruct__18314VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18314VTable);
    }
    return 0;
}

void compare_struct__18314(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18314VTable != NULL
        && pSimstruct__18314VTable->m_version >= Scv612
        && pSimstruct__18314VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18314VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18314VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18314VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18314_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18314_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18314VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18314VTable, nRetValue);
    }
    return 0;
}

int get_struct__18314_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18314_fields, 10, pfnStrAppend, pData);
}

int set_struct__18314_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18314*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__18314*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__18314*)pValue)->q_dir));
    set_kcg_int_default_value(&(((struct__18314*)pValue)->l_packet));
    set_Q_SCALE_default_value(&(((struct__18314*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__18314*)pValue)->t_cycloc));
    set_kcg_int_default_value(&(((struct__18314*)pValue)->d_cycloc));
    set_M_LOC_default_value(&(((struct__18314*)pValue)->m_loc));
    set_kcg_int_default_value(&(((struct__18314*)pValue)->n_iter));
    set_array__18311_default_value(&(((struct__18314*)pValue)->iterPacket58List));
    return 1;
}

int check_struct__18314_string(const char *str, char **endptr)
{
    static struct__18314 rTemp;
    return string_to_struct__18314(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18314_Utils = {
    struct__18314_to_string,
    check_struct__18314_string,
    string_to_struct__18314,
    is_struct__18314_double_convertion_allowed,
    struct__18314_to_double,
    compare_struct__18314,
    get_struct__18314_signature,
    set_struct__18314_default_value,
    sizeof(struct__18314)
};

/****************************************************************
 ** struct__18327 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18327VTable;

static SimFieldUtils struct__18327_fields[] = {
    {"present", offsetof(struct__18327,present), &_Type_kcg_bool_Utils},
    {"nidBG", offsetof(struct__18327,nidBG), &_Type_kcg_int_Utils},
    {"bgLocation", offsetof(struct__18327,bgLocation), &_Type_kcg_int_Utils},
    {"packet58", offsetof(struct__18327,packet58), &_Type_struct__18314_Utils},
};

int struct__18327_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18327VTable != NULL
        && pSimstruct__18327VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18327VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18327_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__18327(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18327VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18327VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18327_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__18327_double_convertion_allowed()
{
    if (pSimstruct__18327VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18327VTable);
    }
    return 0;
}

void compare_struct__18327(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18327VTable != NULL
        && pSimstruct__18327VTable->m_version >= Scv612
        && pSimstruct__18327VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18327VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18327VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18327VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18327_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18327_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18327VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18327VTable, nRetValue);
    }
    return 0;
}

int get_struct__18327_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18327_fields, 4, pfnStrAppend, pData);
}

int set_struct__18327_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18327*)pValue)->present));
    set_kcg_int_default_value(&(((struct__18327*)pValue)->nidBG));
    set_kcg_int_default_value(&(((struct__18327*)pValue)->bgLocation));
    set_struct__18314_default_value(&(((struct__18327*)pValue)->packet58));
    return 1;
}

int check_struct__18327_string(const char *str, char **endptr)
{
    static struct__18327 rTemp;
    return string_to_struct__18327(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18327_Utils = {
    struct__18327_to_string,
    check_struct__18327_string,
    string_to_struct__18327,
    is_struct__18327_double_convertion_allowed,
    struct__18327_to_double,
    compare_struct__18327,
    get_struct__18327_signature,
    set_struct__18327_default_value,
    sizeof(struct__18327)
};

/****************************************************************
 ** struct__18334 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18334VTable;

static SimFieldUtils struct__18334_fields[] = {
    {"valid", offsetof(struct__18334,valid), &_Type_kcg_bool_Utils},
    {"source", offsetof(struct__18334,source), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"radioMetadata", offsetof(struct__18334,radioMetadata), &_Type_struct__18231_Utils},
    {"BG_Common_Header", offsetof(struct__18334,BG_Common_Header), &_Type_struct__18043_Utils},
    {"Radio_Common_Header", offsetof(struct__18334,Radio_Common_Header), &_Type_struct__18213_Utils},
    {"packets", offsetof(struct__18334,packets), &_Type_struct__18125_Utils},
};

int struct__18334_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18334VTable != NULL
        && pSimstruct__18334VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18334VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18334_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__18334(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18334VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18334VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18334_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__18334_double_convertion_allowed()
{
    if (pSimstruct__18334VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18334VTable);
    }
    return 0;
}

void compare_struct__18334(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18334VTable != NULL
        && pSimstruct__18334VTable->m_version >= Scv612
        && pSimstruct__18334VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18334VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18334VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18334VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18334_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18334_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18334VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18334VTable, nRetValue);
    }
    return 0;
}

int get_struct__18334_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18334_fields, 6, pfnStrAppend, pData);
}

int set_struct__18334_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18334*)pValue)->valid));
    set_MsgSource_T_Common_Types_Pkg_default_value(&(((struct__18334*)pValue)->source));
    set_struct__18231_default_value(&(((struct__18334*)pValue)->radioMetadata));
    set_struct__18043_default_value(&(((struct__18334*)pValue)->BG_Common_Header));
    set_struct__18213_default_value(&(((struct__18334*)pValue)->Radio_Common_Header));
    set_struct__18125_default_value(&(((struct__18334*)pValue)->packets));
    return 1;
}

int check_struct__18334_string(const char *str, char **endptr)
{
    static struct__18334 rTemp;
    return string_to_struct__18334(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18334_Utils = {
    struct__18334_to_string,
    check_struct__18334_string,
    string_to_struct__18334,
    is_struct__18334_double_convertion_allowed,
    struct__18334_to_double,
    compare_struct__18334,
    get_struct__18334_signature,
    set_struct__18334_default_value,
    sizeof(struct__18334)
};

/****************************************************************
 ** array__18343 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18343VTable;

int array__18343_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18343VTable != NULL
        && pSimarray__18343VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18343VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, ModeDecisionTableActionKind_DataDictionary_Pkg_to_string, 17, sizeof(ModeDecisionTableActionKind_DataDictionary_Pkg), pfnStrAppend, pData);
}

int string_to_array__18343(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18343VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18343VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_ModeDecisionTableActionKind_DataDictionary_Pkg_Utils, 17, sizeof(ModeDecisionTableActionKind_DataDictionary_Pkg), endptr);
    }
    return nRet;
}

int is_array__18343_double_convertion_allowed()
{
    if (pSimarray__18343VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18343VTable);
    }
    return 0;
}

void compare_array__18343(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18343VTable != NULL
        && pSimarray__18343VTable->m_version >= Scv612
        && pSimarray__18343VTable->m_pfnCompare != NULL) {
        if (pSimarray__18343VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18343VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18343VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_ModeDecisionTableActionKind_DataDictionary_Pkg, 17, sizeof(ModeDecisionTableActionKind_DataDictionary_Pkg), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18343_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18343VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18343VTable, nRetValue);
    }
    return 0;
}

int get_array__18343_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 17; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_ModeDecisionTableActionKind_DataDictionary_Pkg_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18343_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 17; i++)
        set_ModeDecisionTableActionKind_DataDictionary_Pkg_default_value(&((ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue)[i]);
    return 1;
}

int check_array__18343_string(const char *str, char **endptr)
{
    static array__18343 rTemp;
    return string_to_array__18343(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18343_Utils = {
    array__18343_to_string,
    check_array__18343_string,
    string_to_array__18343,
    is_array__18343_double_convertion_allowed,
    array__18343_to_double,
    compare_array__18343,
    get_array__18343_signature,
    set_array__18343_default_value,
    sizeof(array__18343)
};

/****************************************************************
 ** array__18346 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18346VTable;

int array__18346_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18346VTable != NULL
        && pSimarray__18346VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18346VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array__18343_to_string, 256, sizeof(array__18343), pfnStrAppend, pData);
}

int string_to_array__18346(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18346VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18346VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array__18343_Utils, 256, sizeof(array__18343), endptr);
    }
    return nRet;
}

int is_array__18346_double_convertion_allowed()
{
    if (pSimarray__18346VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18346VTable);
    }
    return 0;
}

void compare_array__18346(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18346VTable != NULL
        && pSimarray__18346VTable->m_version >= Scv612
        && pSimarray__18346VTable->m_pfnCompare != NULL) {
        if (pSimarray__18346VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18346VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18346VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array__18343, 256, sizeof(array__18343), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18346_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18346VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18346VTable, nRetValue);
    }
    return 0;
}

int get_array__18346_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 256; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array__18343_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18346_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 256; i++)
        set_array__18343_default_value(&((array__18343*)pValue)[i]);
    return 1;
}

int check_array__18346_string(const char *str, char **endptr)
{
    static array__18346 rTemp;
    return string_to_array__18346(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18346_Utils = {
    array__18346_to_string,
    check_array__18346_string,
    string_to_array__18346,
    is_array__18346_double_convertion_allowed,
    array__18346_to_double,
    compare_array__18346,
    get_array__18346_signature,
    set_array__18346_default_value,
    sizeof(array__18346)
};

/****************************************************************
 ** array__18349 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18349VTable;

int array__18349_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18349VTable != NULL
        && pSimarray__18349VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18349VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18334_to_string, 3, sizeof(struct__18334), pfnStrAppend, pData);
}

int string_to_array__18349(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18349VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18349VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18334_Utils, 3, sizeof(struct__18334), endptr);
    }
    return nRet;
}

int is_array__18349_double_convertion_allowed()
{
    if (pSimarray__18349VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18349VTable);
    }
    return 0;
}

void compare_array__18349(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18349VTable != NULL
        && pSimarray__18349VTable->m_version >= Scv612
        && pSimarray__18349VTable->m_pfnCompare != NULL) {
        if (pSimarray__18349VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18349VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18349VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18334, 3, sizeof(struct__18334), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18349_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18349VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18349VTable, nRetValue);
    }
    return 0;
}

int get_array__18349_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 3; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18334_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18349_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 3; i++)
        set_struct__18334_default_value(&((struct__18334*)pValue)[i]);
    return 1;
}

int check_array__18349_string(const char *str, char **endptr)
{
    static array__18349 rTemp;
    return string_to_array__18349(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18349_Utils = {
    array__18349_to_string,
    check_array__18349_string,
    string_to_array__18349,
    is_array__18349_double_convertion_allowed,
    array__18349_to_double,
    compare_array__18349,
    get_array__18349_signature,
    set_array__18349_default_value,
    sizeof(array__18349)
};

/****************************************************************
 ** array__18352 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18352VTable;

int array__18352_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18352VTable != NULL
        && pSimarray__18352VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18352VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, LevelDecisionTableActionKind_DataDictionary_Pkg_to_string, 5, sizeof(LevelDecisionTableActionKind_DataDictionary_Pkg), pfnStrAppend, pData);
}

int string_to_array__18352(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18352VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18352VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_LevelDecisionTableActionKind_DataDictionary_Pkg_Utils, 5, sizeof(LevelDecisionTableActionKind_DataDictionary_Pkg), endptr);
    }
    return nRet;
}

int is_array__18352_double_convertion_allowed()
{
    if (pSimarray__18352VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18352VTable);
    }
    return 0;
}

void compare_array__18352(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18352VTable != NULL
        && pSimarray__18352VTable->m_version >= Scv612
        && pSimarray__18352VTable->m_pfnCompare != NULL) {
        if (pSimarray__18352VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18352VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18352VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_LevelDecisionTableActionKind_DataDictionary_Pkg, 5, sizeof(LevelDecisionTableActionKind_DataDictionary_Pkg), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18352_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18352VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18352VTable, nRetValue);
    }
    return 0;
}

int get_array__18352_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 5; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_LevelDecisionTableActionKind_DataDictionary_Pkg_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18352_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 5; i++)
        set_LevelDecisionTableActionKind_DataDictionary_Pkg_default_value(&((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue)[i]);
    return 1;
}

int check_array__18352_string(const char *str, char **endptr)
{
    static array__18352 rTemp;
    return string_to_array__18352(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18352_Utils = {
    array__18352_to_string,
    check_array__18352_string,
    string_to_array__18352,
    is_array__18352_double_convertion_allowed,
    array__18352_to_double,
    compare_array__18352,
    get_array__18352_signature,
    set_array__18352_default_value,
    sizeof(array__18352)
};

/****************************************************************
 ** array__18355 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18355VTable;

int array__18355_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18355VTable != NULL
        && pSimarray__18355VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18355VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array__18352_to_string, 256, sizeof(array__18352), pfnStrAppend, pData);
}

int string_to_array__18355(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18355VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18355VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array__18352_Utils, 256, sizeof(array__18352), endptr);
    }
    return nRet;
}

int is_array__18355_double_convertion_allowed()
{
    if (pSimarray__18355VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18355VTable);
    }
    return 0;
}

void compare_array__18355(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18355VTable != NULL
        && pSimarray__18355VTable->m_version >= Scv612
        && pSimarray__18355VTable->m_pfnCompare != NULL) {
        if (pSimarray__18355VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18355VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18355VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array__18352, 256, sizeof(array__18352), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18355_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18355VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18355VTable, nRetValue);
    }
    return 0;
}

int get_array__18355_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 256; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array__18352_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18355_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 256; i++)
        set_array__18352_default_value(&((array__18352*)pValue)[i]);
    return 1;
}

int check_array__18355_string(const char *str, char **endptr)
{
    static array__18355 rTemp;
    return string_to_array__18355(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18355_Utils = {
    array__18355_to_string,
    check_array__18355_string,
    string_to_array__18355,
    is_array__18355_double_convertion_allowed,
    array__18355_to_double,
    compare_array__18355,
    get_array__18355_signature,
    set_array__18355_default_value,
    sizeof(array__18355)
};

/****************************************************************
 ** struct__18358 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18358VTable;

static SimFieldUtils struct__18358_fields[] = {
    {"valid", offsetof(struct__18358,valid), &_Type_kcg_bool_Utils},
    {"checkResult", offsetof(struct__18358,checkResult), &_Type_kcg_bool_Utils},
    {"telegramheader", offsetof(struct__18358,telegramheader), &_Type_struct__18194_Utils},
    {"packets", offsetof(struct__18358,packets), &_Type_struct__18125_Utils},
};

int struct__18358_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18358VTable != NULL
        && pSimstruct__18358VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18358VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18358_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__18358(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18358VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18358VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18358_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__18358_double_convertion_allowed()
{
    if (pSimstruct__18358VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18358VTable);
    }
    return 0;
}

void compare_struct__18358(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18358VTable != NULL
        && pSimstruct__18358VTable->m_version >= Scv612
        && pSimstruct__18358VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18358VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18358VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18358VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18358_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18358_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18358VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18358VTable, nRetValue);
    }
    return 0;
}

int get_struct__18358_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18358_fields, 4, pfnStrAppend, pData);
}

int set_struct__18358_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18358*)pValue)->valid));
    set_kcg_bool_default_value(&(((struct__18358*)pValue)->checkResult));
    set_struct__18194_default_value(&(((struct__18358*)pValue)->telegramheader));
    set_struct__18125_default_value(&(((struct__18358*)pValue)->packets));
    return 1;
}

int check_struct__18358_string(const char *str, char **endptr)
{
    static struct__18358 rTemp;
    return string_to_struct__18358(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18358_Utils = {
    struct__18358_to_string,
    check_struct__18358_string,
    string_to_struct__18358,
    is_struct__18358_double_convertion_allowed,
    struct__18358_to_double,
    compare_struct__18358,
    get_struct__18358_signature,
    set_struct__18358_default_value,
    sizeof(struct__18358)
};

/****************************************************************
 ** array__18365 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18365VTable;

int array__18365_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18365VTable != NULL
        && pSimarray__18365VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18365VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18358_to_string, 8, sizeof(struct__18358), pfnStrAppend, pData);
}

int string_to_array__18365(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18365VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18365VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18358_Utils, 8, sizeof(struct__18358), endptr);
    }
    return nRet;
}

int is_array__18365_double_convertion_allowed()
{
    if (pSimarray__18365VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18365VTable);
    }
    return 0;
}

void compare_array__18365(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18365VTable != NULL
        && pSimarray__18365VTable->m_version >= Scv612
        && pSimarray__18365VTable->m_pfnCompare != NULL) {
        if (pSimarray__18365VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18365VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18365VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18358, 8, sizeof(struct__18358), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18365_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18365VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18365VTable, nRetValue);
    }
    return 0;
}

int get_array__18365_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 8; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18358_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18365_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_struct__18358_default_value(&((struct__18358*)pValue)[i]);
    return 1;
}

int check_array__18365_string(const char *str, char **endptr)
{
    static array__18365 rTemp;
    return string_to_array__18365(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18365_Utils = {
    array__18365_to_string,
    check_array__18365_string,
    string_to_array__18365,
    is_array__18365_double_convertion_allowed,
    array__18365_to_double,
    compare_array__18365,
    get_array__18365_signature,
    set_array__18365_default_value,
    sizeof(array__18365)
};

/****************************************************************
 ** struct__18368 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18368VTable;

static SimFieldUtils struct__18368_fields[] = {
    {"present", offsetof(struct__18368,present), &_Type_kcg_bool_Utils},
    {"consistencyError", offsetof(struct__18368,consistencyError), &_Type_kcg_bool_Utils},
    {"header", offsetof(struct__18368,header), &_Type_struct__18213_Utils},
    {"radioMetadata", offsetof(struct__18368,radioMetadata), &_Type_struct__18231_Utils},
    {"packets", offsetof(struct__18368,packets), &_Type_struct__18125_Utils},
};

int struct__18368_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18368VTable != NULL
        && pSimstruct__18368VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18368VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18368_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__18368(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18368VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18368VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18368_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__18368_double_convertion_allowed()
{
    if (pSimstruct__18368VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18368VTable);
    }
    return 0;
}

void compare_struct__18368(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18368VTable != NULL
        && pSimstruct__18368VTable->m_version >= Scv612
        && pSimstruct__18368VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18368VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18368VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18368VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18368_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18368_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18368VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18368VTable, nRetValue);
    }
    return 0;
}

int get_struct__18368_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18368_fields, 5, pfnStrAppend, pData);
}

int set_struct__18368_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18368*)pValue)->present));
    set_kcg_bool_default_value(&(((struct__18368*)pValue)->consistencyError));
    set_struct__18213_default_value(&(((struct__18368*)pValue)->header));
    set_struct__18231_default_value(&(((struct__18368*)pValue)->radioMetadata));
    set_struct__18125_default_value(&(((struct__18368*)pValue)->packets));
    return 1;
}

int check_struct__18368_string(const char *str, char **endptr)
{
    static struct__18368 rTemp;
    return string_to_struct__18368(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18368_Utils = {
    struct__18368_to_string,
    check_struct__18368_string,
    string_to_struct__18368,
    is_struct__18368_double_convertion_allowed,
    struct__18368_to_double,
    compare_struct__18368,
    get_struct__18368_signature,
    set_struct__18368_default_value,
    sizeof(struct__18368)
};

/****************************************************************
 ** struct__18376 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18376VTable;

static SimFieldUtils struct__18376_fields[] = {
    {"present", offsetof(struct__18376,present), &_Type_kcg_bool_Utils},
    {"Telegrams", offsetof(struct__18376,Telegrams), &_Type_array__18365_Utils},
    {"numberBalises", offsetof(struct__18376,numberBalises), &_Type_kcg_int_Utils},
    {"centerOfBalisePosition", offsetof(struct__18376,centerOfBalisePosition), &_Type_struct__18250_Utils},
};

int struct__18376_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18376VTable != NULL
        && pSimstruct__18376VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18376VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18376_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__18376(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18376VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18376VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18376_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__18376_double_convertion_allowed()
{
    if (pSimstruct__18376VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18376VTable);
    }
    return 0;
}

void compare_struct__18376(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18376VTable != NULL
        && pSimstruct__18376VTable->m_version >= Scv612
        && pSimstruct__18376VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18376VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18376VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18376VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18376_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18376_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18376VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18376VTable, nRetValue);
    }
    return 0;
}

int get_struct__18376_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18376_fields, 4, pfnStrAppend, pData);
}

int set_struct__18376_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18376*)pValue)->present));
    set_array__18365_default_value(&(((struct__18376*)pValue)->Telegrams));
    set_kcg_int_default_value(&(((struct__18376*)pValue)->numberBalises));
    set_struct__18250_default_value(&(((struct__18376*)pValue)->centerOfBalisePosition));
    return 1;
}

int check_struct__18376_string(const char *str, char **endptr)
{
    static struct__18376 rTemp;
    return string_to_struct__18376(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18376_Utils = {
    struct__18376_to_string,
    check_struct__18376_string,
    string_to_struct__18376,
    is_struct__18376_double_convertion_allowed,
    struct__18376_to_double,
    compare_struct__18376,
    get_struct__18376_signature,
    set_struct__18376_default_value,
    sizeof(struct__18376)
};

/****************************************************************
 ** struct__18383 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18383VTable;

static SimFieldUtils struct__18383_fields[] = {
    {"valid", offsetof(struct__18383,valid), &_Type_kcg_bool_Utils},
    {"systemTime", offsetof(struct__18383,systemTime), &_Type_kcg_int_Utils},
    {"msg_type", offsetof(struct__18383,msg_type), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"telegramHeaders", offsetof(struct__18383,telegramHeaders), &_Type_struct__18376_Utils},
    {"radio_Msg", offsetof(struct__18383,radio_Msg), &_Type_struct__18368_Utils},
};

int struct__18383_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18383VTable != NULL
        && pSimstruct__18383VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18383VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18383_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__18383(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18383VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18383VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18383_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__18383_double_convertion_allowed()
{
    if (pSimstruct__18383VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18383VTable);
    }
    return 0;
}

void compare_struct__18383(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18383VTable != NULL
        && pSimstruct__18383VTable->m_version >= Scv612
        && pSimstruct__18383VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18383VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18383VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18383VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18383_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18383_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18383VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18383VTable, nRetValue);
    }
    return 0;
}

int get_struct__18383_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18383_fields, 5, pfnStrAppend, pData);
}

int set_struct__18383_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18383*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__18383*)pValue)->systemTime));
    set_MsgSource_T_Common_Types_Pkg_default_value(&(((struct__18383*)pValue)->msg_type));
    set_struct__18376_default_value(&(((struct__18383*)pValue)->telegramHeaders));
    set_struct__18368_default_value(&(((struct__18383*)pValue)->radio_Msg));
    return 1;
}

int check_struct__18383_string(const char *str, char **endptr)
{
    static struct__18383 rTemp;
    return string_to_struct__18383(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18383_Utils = {
    struct__18383_to_string,
    check_struct__18383_string,
    string_to_struct__18383,
    is_struct__18383_double_convertion_allowed,
    struct__18383_to_double,
    compare_struct__18383,
    get_struct__18383_signature,
    set_struct__18383_default_value,
    sizeof(struct__18383)
};

/****************************************************************
 ** struct__18391 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18391VTable;

static SimFieldUtils struct__18391_fields[] = {
    {"badBaliseFlag", offsetof(struct__18391,badBaliseFlag), &_Type_kcg_bool_Utils},
    {"BGMessageSent", offsetof(struct__18391,BGMessageSent), &_Type_kcg_bool_Utils},
    {"C_ID", offsetof(struct__18391,C_ID), &_Type_kcg_int_Utils},
    {"BG_ID", offsetof(struct__18391,BG_ID), &_Type_kcg_int_Utils},
    {"balisePosition", offsetof(struct__18391,balisePosition), &_Type_struct__18250_Utils},
    {"positionFirstContact", offsetof(struct__18391,positionFirstContact), &_Type_struct__18250_Utils},
    {"collectedTelegrams", offsetof(struct__18391,collectedTelegrams), &_Type_kcg_int_Utils},
    {"totalTelegrams", offsetof(struct__18391,totalTelegrams), &_Type_kcg_int_Utils},
};

int struct__18391_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18391VTable != NULL
        && pSimstruct__18391VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18391VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18391_fields, 8, pfnStrAppend, pData);
}

int string_to_struct__18391(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18391VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18391VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18391_fields, 8, endptr);
    }
    return nRet;
}

int is_struct__18391_double_convertion_allowed()
{
    if (pSimstruct__18391VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18391VTable);
    }
    return 0;
}

void compare_struct__18391(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18391VTable != NULL
        && pSimstruct__18391VTable->m_version >= Scv612
        && pSimstruct__18391VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18391VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18391VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18391VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18391_fields, 8, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18391_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18391VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18391VTable, nRetValue);
    }
    return 0;
}

int get_struct__18391_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18391_fields, 8, pfnStrAppend, pData);
}

int set_struct__18391_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18391*)pValue)->badBaliseFlag));
    set_kcg_bool_default_value(&(((struct__18391*)pValue)->BGMessageSent));
    set_kcg_int_default_value(&(((struct__18391*)pValue)->C_ID));
    set_kcg_int_default_value(&(((struct__18391*)pValue)->BG_ID));
    set_struct__18250_default_value(&(((struct__18391*)pValue)->balisePosition));
    set_struct__18250_default_value(&(((struct__18391*)pValue)->positionFirstContact));
    set_kcg_int_default_value(&(((struct__18391*)pValue)->collectedTelegrams));
    set_kcg_int_default_value(&(((struct__18391*)pValue)->totalTelegrams));
    return 1;
}

int check_struct__18391_string(const char *str, char **endptr)
{
    static struct__18391 rTemp;
    return string_to_struct__18391(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18391_Utils = {
    struct__18391_to_string,
    check_struct__18391_string,
    string_to_struct__18391,
    is_struct__18391_double_convertion_allowed,
    struct__18391_to_double,
    compare_struct__18391,
    get_struct__18391_signature,
    set_struct__18391_default_value,
    sizeof(struct__18391)
};

/****************************************************************
 ** struct__18402 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18402VTable;

static SimFieldUtils struct__18402_fields[] = {
    {"valid", offsetof(struct__18402,valid), &_Type_kcg_bool_Utils},
    {"telegram", offsetof(struct__18402,telegram), &_Type_struct__18358_Utils},
    {"position", offsetof(struct__18402,position), &_Type_struct__18250_Utils},
};

int struct__18402_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18402VTable != NULL
        && pSimstruct__18402VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18402VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18402_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__18402(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18402VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18402VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18402_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__18402_double_convertion_allowed()
{
    if (pSimstruct__18402VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18402VTable);
    }
    return 0;
}

void compare_struct__18402(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18402VTable != NULL
        && pSimstruct__18402VTable->m_version >= Scv612
        && pSimstruct__18402VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18402VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18402VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18402VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18402_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18402_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18402VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18402VTable, nRetValue);
    }
    return 0;
}

int get_struct__18402_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18402_fields, 3, pfnStrAppend, pData);
}

int set_struct__18402_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18402*)pValue)->valid));
    set_struct__18358_default_value(&(((struct__18402*)pValue)->telegram));
    set_struct__18250_default_value(&(((struct__18402*)pValue)->position));
    return 1;
}

int check_struct__18402_string(const char *str, char **endptr)
{
    static struct__18402 rTemp;
    return string_to_struct__18402(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18402_Utils = {
    struct__18402_to_string,
    check_struct__18402_string,
    string_to_struct__18402,
    is_struct__18402_double_convertion_allowed,
    struct__18402_to_double,
    compare_struct__18402,
    get_struct__18402_signature,
    set_struct__18402_default_value,
    sizeof(struct__18402)
};

/****************************************************************
 ** array_bool_256 
 ****************************************************************/

struct SimTypeVTable *pSimarray_bool_256VTable;

int array_bool_256_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_bool_256VTable != NULL
        && pSimarray_bool_256VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_bool_256VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_bool_to_string, 256, sizeof(kcg_bool), pfnStrAppend, pData);
}

int string_to_array_bool_256(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_bool_256VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_bool_256VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_bool_Utils, 256, sizeof(kcg_bool), endptr);
    }
    return nRet;
}

int is_array_bool_256_double_convertion_allowed()
{
    if (pSimarray_bool_256VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_bool_256VTable);
    }
    return 0;
}

void compare_array_bool_256(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_bool_256VTable != NULL
        && pSimarray_bool_256VTable->m_version >= Scv612
        && pSimarray_bool_256VTable->m_pfnCompare != NULL) {
        if (pSimarray_bool_256VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_bool_256VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_bool_256VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_bool, 256, sizeof(kcg_bool), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_bool_256_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_bool_256VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_bool_256VTable, nRetValue);
    }
    return 0;
}

int get_array_bool_256_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 256; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_bool_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_bool_256_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 256; i++)
        set_kcg_bool_default_value(&((kcg_bool*)pValue)[i]);
    return 1;
}

int check_array_bool_256_string(const char *str, char **endptr)
{
    static array_bool_256 rTemp;
    return string_to_array_bool_256(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_bool_256_Utils = {
    array_bool_256_to_string,
    check_array_bool_256_string,
    string_to_array_bool_256,
    is_array_bool_256_double_convertion_allowed,
    array_bool_256_to_double,
    compare_array_bool_256,
    get_array_bool_256_signature,
    set_array_bool_256_default_value,
    sizeof(array_bool_256)
};

/****************************************************************
 ** array_bool_256_46 
 ****************************************************************/

struct SimTypeVTable *pSimarray_bool_256_46VTable;

int array_bool_256_46_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_bool_256_46VTable != NULL
        && pSimarray_bool_256_46VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_bool_256_46VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_bool_256_to_string, 46, sizeof(array_bool_256), pfnStrAppend, pData);
}

int string_to_array_bool_256_46(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_bool_256_46VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_bool_256_46VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_bool_256_Utils, 46, sizeof(array_bool_256), endptr);
    }
    return nRet;
}

int is_array_bool_256_46_double_convertion_allowed()
{
    if (pSimarray_bool_256_46VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_bool_256_46VTable);
    }
    return 0;
}

void compare_array_bool_256_46(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_bool_256_46VTable != NULL
        && pSimarray_bool_256_46VTable->m_version >= Scv612
        && pSimarray_bool_256_46VTable->m_pfnCompare != NULL) {
        if (pSimarray_bool_256_46VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_bool_256_46VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_bool_256_46VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_bool_256, 46, sizeof(array_bool_256), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_bool_256_46_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_bool_256_46VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_bool_256_46VTable, nRetValue);
    }
    return 0;
}

int get_array_bool_256_46_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 46; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_bool_256_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_bool_256_46_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 46; i++)
        set_array_bool_256_default_value(&((array_bool_256*)pValue)[i]);
    return 1;
}

int check_array_bool_256_46_string(const char *str, char **endptr)
{
    static array_bool_256_46 rTemp;
    return string_to_array_bool_256_46(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_bool_256_46_Utils = {
    array_bool_256_46_to_string,
    check_array_bool_256_46_string,
    string_to_array_bool_256_46,
    is_array_bool_256_46_double_convertion_allowed,
    array_bool_256_46_to_double,
    compare_array_bool_256_46,
    get_array_bool_256_46_signature,
    set_array_bool_256_46_default_value,
    sizeof(array_bool_256_46)
};

/****************************************************************
 ** struct__18414 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18414VTable;

static SimFieldUtils struct__18414_fields[] = {
    {"valid", offsetof(struct__18414,valid), &_Type_kcg_bool_Utils},
    {"BG", offsetof(struct__18414,BG), &_Type_struct__18334_Utils},
    {"FromTrack", offsetof(struct__18414,FromTrack), &_Type_kcg_bool_Utils},
    {"FromOBU", offsetof(struct__18414,FromOBU), &_Type_kcg_bool_Utils},
    {"CorrectData", offsetof(struct__18414,CorrectData), &_Type_kcg_bool_Utils},
    {"Delay", offsetof(struct__18414,Delay), &_Type_kcg_int_Utils},
    {"LocDiff", offsetof(struct__18414,LocDiff), &_Type_struct__18027_Utils},
};

int struct__18414_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18414VTable != NULL
        && pSimstruct__18414VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18414VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18414_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__18414(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18414VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18414VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18414_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__18414_double_convertion_allowed()
{
    if (pSimstruct__18414VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18414VTable);
    }
    return 0;
}

void compare_struct__18414(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18414VTable != NULL
        && pSimstruct__18414VTable->m_version >= Scv612
        && pSimstruct__18414VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18414VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18414VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18414VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18414_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18414_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18414VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18414VTable, nRetValue);
    }
    return 0;
}

int get_struct__18414_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18414_fields, 7, pfnStrAppend, pData);
}

int set_struct__18414_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18414*)pValue)->valid));
    set_struct__18334_default_value(&(((struct__18414*)pValue)->BG));
    set_kcg_bool_default_value(&(((struct__18414*)pValue)->FromTrack));
    set_kcg_bool_default_value(&(((struct__18414*)pValue)->FromOBU));
    set_kcg_bool_default_value(&(((struct__18414*)pValue)->CorrectData));
    set_kcg_int_default_value(&(((struct__18414*)pValue)->Delay));
    set_struct__18027_default_value(&(((struct__18414*)pValue)->LocDiff));
    return 1;
}

int check_struct__18414_string(const char *str, char **endptr)
{
    static struct__18414 rTemp;
    return string_to_struct__18414(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18414_Utils = {
    struct__18414_to_string,
    check_struct__18414_string,
    string_to_struct__18414,
    is_struct__18414_double_convertion_allowed,
    struct__18414_to_double,
    compare_struct__18414,
    get_struct__18414_signature,
    set_struct__18414_default_value,
    sizeof(struct__18414)
};

/****************************************************************
 ** struct__18424 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__18424VTable;

static SimFieldUtils struct__18424_fields[] = {
    {"valid", offsetof(struct__18424,valid), &_Type_kcg_bool_Utils},
    {"BG", offsetof(struct__18424,BG), &_Type_struct__18334_Utils},
    {"complete", offsetof(struct__18424,complete), &_Type_kcg_bool_Utils},
    {"consistent", offsetof(struct__18424,consistent), &_Type_kcg_bool_Utils},
    {"TimeStamp", offsetof(struct__18424,TimeStamp), &_Type_kcg_int_Utils},
};

int struct__18424_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__18424VTable != NULL
        && pSimstruct__18424VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__18424VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__18424_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__18424(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__18424VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__18424VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__18424_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__18424_double_convertion_allowed()
{
    if (pSimstruct__18424VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__18424VTable);
    }
    return 0;
}

void compare_struct__18424(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__18424VTable != NULL
        && pSimstruct__18424VTable->m_version >= Scv612
        && pSimstruct__18424VTable->m_pfnCompare != NULL) {
        if (pSimstruct__18424VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__18424VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__18424VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__18424_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__18424_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__18424VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__18424VTable, nRetValue);
    }
    return 0;
}

int get_struct__18424_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__18424_fields, 5, pfnStrAppend, pData);
}

int set_struct__18424_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__18424*)pValue)->valid));
    set_struct__18334_default_value(&(((struct__18424*)pValue)->BG));
    set_kcg_bool_default_value(&(((struct__18424*)pValue)->complete));
    set_kcg_bool_default_value(&(((struct__18424*)pValue)->consistent));
    set_kcg_int_default_value(&(((struct__18424*)pValue)->TimeStamp));
    return 1;
}

int check_struct__18424_string(const char *str, char **endptr)
{
    static struct__18424 rTemp;
    return string_to_struct__18424(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__18424_Utils = {
    struct__18424_to_string,
    check_struct__18424_string,
    string_to_struct__18424,
    is_struct__18424_double_convertion_allowed,
    struct__18424_to_double,
    compare_struct__18424,
    get_struct__18424_signature,
    set_struct__18424_default_value,
    sizeof(struct__18424)
};

/****************************************************************
 ** array__18432 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18432VTable;

int array__18432_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18432VTable != NULL
        && pSimarray__18432VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18432VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18414_to_string, 10, sizeof(struct__18414), pfnStrAppend, pData);
}

int string_to_array__18432(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18432VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18432VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18414_Utils, 10, sizeof(struct__18414), endptr);
    }
    return nRet;
}

int is_array__18432_double_convertion_allowed()
{
    if (pSimarray__18432VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18432VTable);
    }
    return 0;
}

void compare_array__18432(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18432VTable != NULL
        && pSimarray__18432VTable->m_version >= Scv612
        && pSimarray__18432VTable->m_pfnCompare != NULL) {
        if (pSimarray__18432VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18432VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18432VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18414, 10, sizeof(struct__18414), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18432_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18432VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18432VTable, nRetValue);
    }
    return 0;
}

int get_array__18432_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 10; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18414_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18432_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 10; i++)
        set_struct__18414_default_value(&((struct__18414*)pValue)[i]);
    return 1;
}

int check_array__18432_string(const char *str, char **endptr)
{
    static array__18432 rTemp;
    return string_to_array__18432(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18432_Utils = {
    array__18432_to_string,
    check_array__18432_string,
    string_to_array__18432,
    is_array__18432_double_convertion_allowed,
    array__18432_to_double,
    compare_array__18432,
    get_array__18432_signature,
    set_array__18432_default_value,
    sizeof(array__18432)
};

/****************************************************************
 ** array__18435 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18435VTable;

int array__18435_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18435VTable != NULL
        && pSimarray__18435VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18435VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18424_to_string, 10, sizeof(struct__18424), pfnStrAppend, pData);
}

int string_to_array__18435(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18435VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18435VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18424_Utils, 10, sizeof(struct__18424), endptr);
    }
    return nRet;
}

int is_array__18435_double_convertion_allowed()
{
    if (pSimarray__18435VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18435VTable);
    }
    return 0;
}

void compare_array__18435(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18435VTable != NULL
        && pSimarray__18435VTable->m_version >= Scv612
        && pSimarray__18435VTable->m_pfnCompare != NULL) {
        if (pSimarray__18435VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18435VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18435VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18424, 10, sizeof(struct__18424), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18435_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18435VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18435VTable, nRetValue);
    }
    return 0;
}

int get_array__18435_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 10; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18424_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18435_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 10; i++)
        set_struct__18424_default_value(&((struct__18424*)pValue)[i]);
    return 1;
}

int check_array__18435_string(const char *str, char **endptr)
{
    static array__18435 rTemp;
    return string_to_array__18435(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18435_Utils = {
    array__18435_to_string,
    check_array__18435_string,
    string_to_array__18435,
    is_array__18435_double_convertion_allowed,
    array__18435_to_double,
    compare_array__18435,
    get_array__18435_signature,
    set_array__18435_default_value,
    sizeof(array__18435)
};

/****************************************************************
 ** array__18438 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18438VTable;

int array__18438_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18438VTable != NULL
        && pSimarray__18438VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18438VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, N_PIG_to_string, 8, sizeof(N_PIG), pfnStrAppend, pData);
}

int string_to_array__18438(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18438VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18438VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_N_PIG_Utils, 8, sizeof(N_PIG), endptr);
    }
    return nRet;
}

int is_array__18438_double_convertion_allowed()
{
    if (pSimarray__18438VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18438VTable);
    }
    return 0;
}

void compare_array__18438(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18438VTable != NULL
        && pSimarray__18438VTable->m_version >= Scv612
        && pSimarray__18438VTable->m_pfnCompare != NULL) {
        if (pSimarray__18438VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18438VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18438VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_N_PIG, 8, sizeof(N_PIG), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18438_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18438VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18438VTable, nRetValue);
    }
    return 0;
}

int get_array__18438_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 8; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_N_PIG_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18438_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_N_PIG_default_value(&((N_PIG*)pValue)[i]);
    return 1;
}

int check_array__18438_string(const char *str, char **endptr)
{
    static array__18438 rTemp;
    return string_to_array__18438(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18438_Utils = {
    array__18438_to_string,
    check_array__18438_string,
    string_to_array__18438,
    is_array__18438_double_convertion_allowed,
    array__18438_to_double,
    compare_array__18438,
    get_array__18438_signature,
    set_array__18438_default_value,
    sizeof(array__18438)
};

/****************************************************************
 ** array_bool_8 
 ****************************************************************/

struct SimTypeVTable *pSimarray_bool_8VTable;

int array_bool_8_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_bool_8VTable != NULL
        && pSimarray_bool_8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_bool_8VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_bool_to_string, 8, sizeof(kcg_bool), pfnStrAppend, pData);
}

int string_to_array_bool_8(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_bool_8VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_bool_8VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_bool_Utils, 8, sizeof(kcg_bool), endptr);
    }
    return nRet;
}

int is_array_bool_8_double_convertion_allowed()
{
    if (pSimarray_bool_8VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_bool_8VTable);
    }
    return 0;
}

void compare_array_bool_8(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_bool_8VTable != NULL
        && pSimarray_bool_8VTable->m_version >= Scv612
        && pSimarray_bool_8VTable->m_pfnCompare != NULL) {
        if (pSimarray_bool_8VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_bool_8VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_bool_8VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_bool, 8, sizeof(kcg_bool), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_bool_8_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_bool_8VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_bool_8VTable, nRetValue);
    }
    return 0;
}

int get_array_bool_8_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 8; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_bool_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_bool_8_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_kcg_bool_default_value(&((kcg_bool*)pValue)[i]);
    return 1;
}

int check_array_bool_8_string(const char *str, char **endptr)
{
    static array_bool_8 rTemp;
    return string_to_array_bool_8(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_bool_8_Utils = {
    array_bool_8_to_string,
    check_array_bool_8_string,
    string_to_array_bool_8,
    is_array_bool_8_double_convertion_allowed,
    array_bool_8_to_double,
    compare_array_bool_8,
    get_array_bool_8_signature,
    set_array_bool_8_default_value,
    sizeof(array_bool_8)
};

/****************************************************************
 ** array__18444 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18444VTable;

int array__18444_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18444VTable != NULL
        && pSimarray__18444VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18444VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18114_to_string, 29, sizeof(struct__18114), pfnStrAppend, pData);
}

int string_to_array__18444(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18444VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18444VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18114_Utils, 29, sizeof(struct__18114), endptr);
    }
    return nRet;
}

int is_array__18444_double_convertion_allowed()
{
    if (pSimarray__18444VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18444VTable);
    }
    return 0;
}

void compare_array__18444(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18444VTable != NULL
        && pSimarray__18444VTable->m_version >= Scv612
        && pSimarray__18444VTable->m_pfnCompare != NULL) {
        if (pSimarray__18444VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18444VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18444VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18114, 29, sizeof(struct__18114), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18444_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18444VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18444VTable, nRetValue);
    }
    return 0;
}

int get_array__18444_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 29; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18114_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18444_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 29; i++)
        set_struct__18114_default_value(&((struct__18114*)pValue)[i]);
    return 1;
}

int check_array__18444_string(const char *str, char **endptr)
{
    static array__18444 rTemp;
    return string_to_array__18444(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18444_Utils = {
    array__18444_to_string,
    check_array__18444_string,
    string_to_array__18444,
    is_array__18444_double_convertion_allowed,
    array__18444_to_double,
    compare_array__18444,
    get_array__18444_signature,
    set_array__18444_default_value,
    sizeof(array__18444)
};

/****************************************************************
 ** array__18447 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18447VTable;

int array__18447_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18447VTable != NULL
        && pSimarray__18447VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18447VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array__18122_to_string, 30, sizeof(array__18122), pfnStrAppend, pData);
}

int string_to_array__18447(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18447VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18447VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array__18122_Utils, 30, sizeof(array__18122), endptr);
    }
    return nRet;
}

int is_array__18447_double_convertion_allowed()
{
    if (pSimarray__18447VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18447VTable);
    }
    return 0;
}

void compare_array__18447(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18447VTable != NULL
        && pSimarray__18447VTable->m_version >= Scv612
        && pSimarray__18447VTable->m_pfnCompare != NULL) {
        if (pSimarray__18447VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18447VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18447VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array__18122, 30, sizeof(array__18122), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18447_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18447VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18447VTable, nRetValue);
    }
    return 0;
}

int get_array__18447_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array__18122_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18447_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_array__18122_default_value(&((array__18122*)pValue)[i]);
    return 1;
}

int check_array__18447_string(const char *str, char **endptr)
{
    static array__18447 rTemp;
    return string_to_array__18447(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18447_Utils = {
    array__18447_to_string,
    check_array__18447_string,
    string_to_array__18447,
    is_array__18447_double_convertion_allowed,
    array__18447_to_double,
    compare_array__18447,
    get_array__18447_signature,
    set_array__18447_default_value,
    sizeof(array__18447)
};

/****************************************************************
 ** array_int_500_500 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_500_500VTable;

int array_int_500_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_500_500VTable != NULL
        && pSimarray_int_500_500VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_500_500VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_500_to_string, 500, sizeof(array_int_500), pfnStrAppend, pData);
}

int string_to_array_int_500_500(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_500_500VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_500_500VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_500_Utils, 500, sizeof(array_int_500), endptr);
    }
    return nRet;
}

int is_array_int_500_500_double_convertion_allowed()
{
    if (pSimarray_int_500_500VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_500_500VTable);
    }
    return 0;
}

void compare_array_int_500_500(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_500_500VTable != NULL
        && pSimarray_int_500_500VTable->m_version >= Scv612
        && pSimarray_int_500_500VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_500_500VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_500_500VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_500_500VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_500, 500, sizeof(array_int_500), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_500_500_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_500_500VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_500_500VTable, nRetValue);
    }
    return 0;
}

int get_array_int_500_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 500; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_500_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_500_500_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 500; i++)
        set_array_int_500_default_value(&((array_int_500*)pValue)[i]);
    return 1;
}

int check_array_int_500_500_string(const char *str, char **endptr)
{
    static array_int_500_500 rTemp;
    return string_to_array_int_500_500(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_500_500_Utils = {
    array_int_500_500_to_string,
    check_array_int_500_500_string,
    string_to_array_int_500_500,
    is_array_int_500_500_double_convertion_allowed,
    array_int_500_500_to_double,
    compare_array_int_500_500,
    get_array_int_500_500_signature,
    set_array_int_500_500_default_value,
    sizeof(array_int_500_500)
};

/****************************************************************
 ** array__18453 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18453VTable;

int array__18453_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18453VTable != NULL
        && pSimarray__18453VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18453VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18358_to_string, 7, sizeof(struct__18358), pfnStrAppend, pData);
}

int string_to_array__18453(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18453VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18453VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18358_Utils, 7, sizeof(struct__18358), endptr);
    }
    return nRet;
}

int is_array__18453_double_convertion_allowed()
{
    if (pSimarray__18453VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18453VTable);
    }
    return 0;
}

void compare_array__18453(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18453VTable != NULL
        && pSimarray__18453VTable->m_version >= Scv612
        && pSimarray__18453VTable->m_pfnCompare != NULL) {
        if (pSimarray__18453VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18453VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18453VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18358, 7, sizeof(struct__18358), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18453_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18453VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18453VTable, nRetValue);
    }
    return 0;
}

int get_array__18453_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 7; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18358_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18453_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 7; i++)
        set_struct__18358_default_value(&((struct__18358*)pValue)[i]);
    return 1;
}

int check_array__18453_string(const char *str, char **endptr)
{
    static array__18453 rTemp;
    return string_to_array__18453(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18453_Utils = {
    array__18453_to_string,
    check_array__18453_string,
    string_to_array__18453,
    is_array__18453_double_convertion_allowed,
    array__18453_to_double,
    compare_array__18453,
    get_array__18453_signature,
    set_array__18453_default_value,
    sizeof(array__18453)
};

/****************************************************************
 ** array__18456 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18456VTable;

int array__18456_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18456VTable != NULL
        && pSimarray__18456VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18456VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, Q_DIRTRAIN_to_string, 30, sizeof(Q_DIRTRAIN), pfnStrAppend, pData);
}

int string_to_array__18456(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18456VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18456VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_Q_DIRTRAIN_Utils, 30, sizeof(Q_DIRTRAIN), endptr);
    }
    return nRet;
}

int is_array__18456_double_convertion_allowed()
{
    if (pSimarray__18456VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18456VTable);
    }
    return 0;
}

void compare_array__18456(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18456VTable != NULL
        && pSimarray__18456VTable->m_version >= Scv612
        && pSimarray__18456VTable->m_pfnCompare != NULL) {
        if (pSimarray__18456VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18456VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18456VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_Q_DIRTRAIN, 30, sizeof(Q_DIRTRAIN), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18456_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18456VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18456VTable, nRetValue);
    }
    return 0;
}

int get_array__18456_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_Q_DIRTRAIN_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18456_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_Q_DIRTRAIN_default_value(&((Q_DIRTRAIN*)pValue)[i]);
    return 1;
}

int check_array__18456_string(const char *str, char **endptr)
{
    static array__18456 rTemp;
    return string_to_array__18456(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18456_Utils = {
    array__18456_to_string,
    check_array__18456_string,
    string_to_array__18456,
    is_array__18456_double_convertion_allowed,
    array__18456_to_double,
    compare_array__18456,
    get_array__18456_signature,
    set_array__18456_default_value,
    sizeof(array__18456)
};

/****************************************************************
 ** array__18459 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18459VTable;

int array__18459_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18459VTable != NULL
        && pSimarray__18459VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18459VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18078_to_string, 30, sizeof(struct__18078), pfnStrAppend, pData);
}

int string_to_array__18459(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18459VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18459VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18078_Utils, 30, sizeof(struct__18078), endptr);
    }
    return nRet;
}

int is_array__18459_double_convertion_allowed()
{
    if (pSimarray__18459VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18459VTable);
    }
    return 0;
}

void compare_array__18459(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18459VTable != NULL
        && pSimarray__18459VTable->m_version >= Scv612
        && pSimarray__18459VTable->m_pfnCompare != NULL) {
        if (pSimarray__18459VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18459VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18459VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18078, 30, sizeof(struct__18078), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18459_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18459VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18459VTable, nRetValue);
    }
    return 0;
}

int get_array__18459_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18078_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18459_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__18078_default_value(&((struct__18078*)pValue)[i]);
    return 1;
}

int check_array__18459_string(const char *str, char **endptr)
{
    static array__18459 rTemp;
    return string_to_array__18459(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18459_Utils = {
    array__18459_to_string,
    check_array__18459_string,
    string_to_array__18459,
    is_array__18459_double_convertion_allowed,
    array__18459_to_double,
    compare_array__18459,
    get_array__18459_signature,
    set_array__18459_default_value,
    sizeof(array__18459)
};

/****************************************************************
 ** array_bool_30 
 ****************************************************************/

struct SimTypeVTable *pSimarray_bool_30VTable;

int array_bool_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_bool_30VTable != NULL
        && pSimarray_bool_30VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_bool_30VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_bool_to_string, 30, sizeof(kcg_bool), pfnStrAppend, pData);
}

int string_to_array_bool_30(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_bool_30VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_bool_30VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_bool_Utils, 30, sizeof(kcg_bool), endptr);
    }
    return nRet;
}

int is_array_bool_30_double_convertion_allowed()
{
    if (pSimarray_bool_30VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_bool_30VTable);
    }
    return 0;
}

void compare_array_bool_30(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_bool_30VTable != NULL
        && pSimarray_bool_30VTable->m_version >= Scv612
        && pSimarray_bool_30VTable->m_pfnCompare != NULL) {
        if (pSimarray_bool_30VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_bool_30VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_bool_30VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_bool, 30, sizeof(kcg_bool), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_bool_30_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_bool_30VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_bool_30VTable, nRetValue);
    }
    return 0;
}

int get_array_bool_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_bool_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_bool_30_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_kcg_bool_default_value(&((kcg_bool*)pValue)[i]);
    return 1;
}

int check_array_bool_30_string(const char *str, char **endptr)
{
    static array_bool_30 rTemp;
    return string_to_array_bool_30(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_bool_30_Utils = {
    array_bool_30_to_string,
    check_array_bool_30_string,
    string_to_array_bool_30,
    is_array_bool_30_double_convertion_allowed,
    array_bool_30_to_double,
    compare_array_bool_30,
    get_array_bool_30_signature,
    set_array_bool_30_default_value,
    sizeof(array_bool_30)
};

/****************************************************************
 ** array_int_8 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_8VTable;

int array_int_8_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_8VTable != NULL
        && pSimarray_int_8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_8VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 8, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_8(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_8VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_8VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 8, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_8_double_convertion_allowed()
{
    if (pSimarray_int_8VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_8VTable);
    }
    return 0;
}

void compare_array_int_8(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_8VTable != NULL
        && pSimarray_int_8VTable->m_version >= Scv612
        && pSimarray_int_8VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_8VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_8VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_8VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 8, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_8_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_8VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_8VTable, nRetValue);
    }
    return 0;
}

int get_array_int_8_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 8; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_8_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_8_string(const char *str, char **endptr)
{
    static array_int_8 rTemp;
    return string_to_array_int_8(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_8_Utils = {
    array_int_8_to_string,
    check_array_int_8_string,
    string_to_array_int_8,
    is_array_int_8_double_convertion_allowed,
    array_int_8_to_double,
    compare_array_int_8,
    get_array_int_8_signature,
    set_array_int_8_default_value,
    sizeof(array_int_8)
};

/****************************************************************
 ** array_int_30 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_30VTable;

int array_int_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_30VTable != NULL
        && pSimarray_int_30VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_30VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 30, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_30(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_30VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_30VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 30, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_30_double_convertion_allowed()
{
    if (pSimarray_int_30VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_30VTable);
    }
    return 0;
}

void compare_array_int_30(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_30VTable != NULL
        && pSimarray_int_30VTable->m_version >= Scv612
        && pSimarray_int_30VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_30VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_30VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_30VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 30, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_30_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_30VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_30VTable, nRetValue);
    }
    return 0;
}

int get_array_int_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_30_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_30_string(const char *str, char **endptr)
{
    static array_int_30 rTemp;
    return string_to_array_int_30(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_30_Utils = {
    array_int_30_to_string,
    check_array_int_30_string,
    string_to_array_int_30,
    is_array_int_30_double_convertion_allowed,
    array_int_30_to_double,
    compare_array_int_30,
    get_array_int_30_signature,
    set_array_int_30_default_value,
    sizeof(array_int_30)
};

/****************************************************************
 ** array_bool_256_46_30 
 ****************************************************************/

struct SimTypeVTable *pSimarray_bool_256_46_30VTable;

int array_bool_256_46_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_bool_256_46_30VTable != NULL
        && pSimarray_bool_256_46_30VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_bool_256_46_30VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_bool_256_46_to_string, 30, sizeof(array_bool_256_46), pfnStrAppend, pData);
}

int string_to_array_bool_256_46_30(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_bool_256_46_30VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_bool_256_46_30VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_bool_256_46_Utils, 30, sizeof(array_bool_256_46), endptr);
    }
    return nRet;
}

int is_array_bool_256_46_30_double_convertion_allowed()
{
    if (pSimarray_bool_256_46_30VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_bool_256_46_30VTable);
    }
    return 0;
}

void compare_array_bool_256_46_30(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_bool_256_46_30VTable != NULL
        && pSimarray_bool_256_46_30VTable->m_version >= Scv612
        && pSimarray_bool_256_46_30VTable->m_pfnCompare != NULL) {
        if (pSimarray_bool_256_46_30VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_bool_256_46_30VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_bool_256_46_30VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_bool_256_46, 30, sizeof(array_bool_256_46), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_bool_256_46_30_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_bool_256_46_30VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_bool_256_46_30VTable, nRetValue);
    }
    return 0;
}

int get_array_bool_256_46_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_bool_256_46_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_bool_256_46_30_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_array_bool_256_46_default_value(&((array_bool_256_46*)pValue)[i]);
    return 1;
}

int check_array_bool_256_46_30_string(const char *str, char **endptr)
{
    static array_bool_256_46_30 rTemp;
    return string_to_array_bool_256_46_30(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_bool_256_46_30_Utils = {
    array_bool_256_46_30_to_string,
    check_array_bool_256_46_30_string,
    string_to_array_bool_256_46_30,
    is_array_bool_256_46_30_double_convertion_allowed,
    array_bool_256_46_30_to_double,
    compare_array_bool_256_46_30,
    get_array_bool_256_46_30_signature,
    set_array_bool_256_46_30_default_value,
    sizeof(array_bool_256_46_30)
};

/****************************************************************
 ** array__18474 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18474VTable;

int array__18474_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18474VTable != NULL
        && pSimarray__18474VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18474VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, MsgSource_T_Common_Types_Pkg_to_string, 30, sizeof(MsgSource_T_Common_Types_Pkg), pfnStrAppend, pData);
}

int string_to_array__18474(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18474VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18474VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_MsgSource_T_Common_Types_Pkg_Utils, 30, sizeof(MsgSource_T_Common_Types_Pkg), endptr);
    }
    return nRet;
}

int is_array__18474_double_convertion_allowed()
{
    if (pSimarray__18474VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18474VTable);
    }
    return 0;
}

void compare_array__18474(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18474VTable != NULL
        && pSimarray__18474VTable->m_version >= Scv612
        && pSimarray__18474VTable->m_pfnCompare != NULL) {
        if (pSimarray__18474VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18474VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18474VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_MsgSource_T_Common_Types_Pkg, 30, sizeof(MsgSource_T_Common_Types_Pkg), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18474_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18474VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18474VTable, nRetValue);
    }
    return 0;
}

int get_array__18474_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_MsgSource_T_Common_Types_Pkg_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18474_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_MsgSource_T_Common_Types_Pkg_default_value(&((MsgSource_T_Common_Types_Pkg*)pValue)[i]);
    return 1;
}

int check_array__18474_string(const char *str, char **endptr)
{
    static array__18474 rTemp;
    return string_to_array__18474(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18474_Utils = {
    array__18474_to_string,
    check_array__18474_string,
    string_to_array__18474,
    is_array__18474_double_convertion_allowed,
    array__18474_to_double,
    compare_array__18474,
    get_array__18474_signature,
    set_array__18474_default_value,
    sizeof(array__18474)
};

/****************************************************************
 ** array__18477 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18477VTable;

int array__18477_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18477VTable != NULL
        && pSimarray__18477VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18477VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, M_LEVEL_to_string, 30, sizeof(M_LEVEL), pfnStrAppend, pData);
}

int string_to_array__18477(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18477VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18477VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_M_LEVEL_Utils, 30, sizeof(M_LEVEL), endptr);
    }
    return nRet;
}

int is_array__18477_double_convertion_allowed()
{
    if (pSimarray__18477VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18477VTable);
    }
    return 0;
}

void compare_array__18477(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18477VTable != NULL
        && pSimarray__18477VTable->m_version >= Scv612
        && pSimarray__18477VTable->m_pfnCompare != NULL) {
        if (pSimarray__18477VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18477VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18477VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_M_LEVEL, 30, sizeof(M_LEVEL), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18477_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18477VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18477VTable, nRetValue);
    }
    return 0;
}

int get_array__18477_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_M_LEVEL_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18477_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_M_LEVEL_default_value(&((M_LEVEL*)pValue)[i]);
    return 1;
}

int check_array__18477_string(const char *str, char **endptr)
{
    static array__18477 rTemp;
    return string_to_array__18477(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18477_Utils = {
    array__18477_to_string,
    check_array__18477_string,
    string_to_array__18477,
    is_array__18477_double_convertion_allowed,
    array__18477_to_double,
    compare_array__18477,
    get_array__18477_signature,
    set_array__18477_default_value,
    sizeof(array__18477)
};

/****************************************************************
 ** array__18480 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18480VTable;

int array__18480_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18480VTable != NULL
        && pSimarray__18480VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18480VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, M_MODE_to_string, 30, sizeof(M_MODE), pfnStrAppend, pData);
}

int string_to_array__18480(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18480VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18480VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_M_MODE_Utils, 30, sizeof(M_MODE), endptr);
    }
    return nRet;
}

int is_array__18480_double_convertion_allowed()
{
    if (pSimarray__18480VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18480VTable);
    }
    return 0;
}

void compare_array__18480(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18480VTable != NULL
        && pSimarray__18480VTable->m_version >= Scv612
        && pSimarray__18480VTable->m_pfnCompare != NULL) {
        if (pSimarray__18480VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18480VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18480VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_M_MODE, 30, sizeof(M_MODE), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18480_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18480VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18480VTable, nRetValue);
    }
    return 0;
}

int get_array__18480_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_M_MODE_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18480_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_M_MODE_default_value(&((M_MODE*)pValue)[i]);
    return 1;
}

int check_array__18480_string(const char *str, char **endptr)
{
    static array__18480 rTemp;
    return string_to_array__18480(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18480_Utils = {
    array__18480_to_string,
    check_array__18480_string,
    string_to_array__18480,
    is_array__18480_double_convertion_allowed,
    array__18480_to_double,
    compare_array__18480,
    get_array__18480_signature,
    set_array__18480_default_value,
    sizeof(array__18480)
};

/****************************************************************
 ** array_int_7_33_231 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_7_33_231VTable;

int array_int_7_33_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_7_33_231VTable != NULL
        && pSimarray_int_7_33_231VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_7_33_231VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_7_33_to_string, 231, sizeof(array_int_7_33), pfnStrAppend, pData);
}

int string_to_array_int_7_33_231(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_7_33_231VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_7_33_231VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_7_33_Utils, 231, sizeof(array_int_7_33), endptr);
    }
    return nRet;
}

int is_array_int_7_33_231_double_convertion_allowed()
{
    if (pSimarray_int_7_33_231VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_7_33_231VTable);
    }
    return 0;
}

void compare_array_int_7_33_231(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_7_33_231VTable != NULL
        && pSimarray_int_7_33_231VTable->m_version >= Scv612
        && pSimarray_int_7_33_231VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_7_33_231VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_7_33_231VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_7_33_231VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_7_33, 231, sizeof(array_int_7_33), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_7_33_231_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_7_33_231VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_7_33_231VTable, nRetValue);
    }
    return 0;
}

int get_array_int_7_33_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 231; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_7_33_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_7_33_231_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 231; i++)
        set_array_int_7_33_default_value(&((array_int_7_33*)pValue)[i]);
    return 1;
}

int check_array_int_7_33_231_string(const char *str, char **endptr)
{
    static array_int_7_33_231 rTemp;
    return string_to_array_int_7_33_231(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_7_33_231_Utils = {
    array_int_7_33_231_to_string,
    check_array_int_7_33_231_string,
    string_to_array_int_7_33_231,
    is_array_int_7_33_231_double_convertion_allowed,
    array_int_7_33_231_to_double,
    compare_array_int_7_33_231,
    get_array_int_7_33_231_signature,
    set_array_int_7_33_231_default_value,
    sizeof(array_int_7_33_231)
};

/****************************************************************
 ** array_int_264 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_264VTable;

int array_int_264_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_264VTable != NULL
        && pSimarray_int_264VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_264VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 264, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_264(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_264VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_264VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 264, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_264_double_convertion_allowed()
{
    if (pSimarray_int_264VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_264VTable);
    }
    return 0;
}

void compare_array_int_264(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_264VTable != NULL
        && pSimarray_int_264VTable->m_version >= Scv612
        && pSimarray_int_264VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_264VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_264VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_264VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 264, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_264_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_264VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_264VTable, nRetValue);
    }
    return 0;
}

int get_array_int_264_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 264; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_264_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 264; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_264_string(const char *str, char **endptr)
{
    static array_int_264 rTemp;
    return string_to_array_int_264(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_264_Utils = {
    array_int_264_to_string,
    check_array_int_264_string,
    string_to_array_int_264,
    is_array_int_264_double_convertion_allowed,
    array_int_264_to_double,
    compare_array_int_264,
    get_array_int_264_signature,
    set_array_int_264_default_value,
    sizeof(array_int_264)
};

/****************************************************************
 ** array_int_4 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_4VTable;

int array_int_4_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_4VTable != NULL
        && pSimarray_int_4VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_4VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 4, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_4(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_4VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_4VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 4, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_4_double_convertion_allowed()
{
    if (pSimarray_int_4VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_4VTable);
    }
    return 0;
}

void compare_array_int_4(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_4VTable != NULL
        && pSimarray_int_4VTable->m_version >= Scv612
        && pSimarray_int_4VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_4VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_4VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_4VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 4, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_4_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_4VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_4VTable, nRetValue);
    }
    return 0;
}

int get_array_int_4_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 4; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_4_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 4; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_4_string(const char *str, char **endptr)
{
    static array_int_4 rTemp;
    return string_to_array_int_4(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_4_Utils = {
    array_int_4_to_string,
    check_array_int_4_string,
    string_to_array_int_4,
    is_array_int_4_double_convertion_allowed,
    array_int_4_to_double,
    compare_array_int_4,
    get_array_int_4_signature,
    set_array_int_4_default_value,
    sizeof(array_int_4)
};

/****************************************************************
 ** array_int_1 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_1VTable;

int array_int_1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_1VTable != NULL
        && pSimarray_int_1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 1, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_1VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_1VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 1, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_1_double_convertion_allowed()
{
    if (pSimarray_int_1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_1VTable);
    }
    return 0;
}

void compare_array_int_1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_1VTable != NULL
        && pSimarray_int_1VTable->m_version >= Scv612
        && pSimarray_int_1VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 1, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_1VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_1VTable, nRetValue);
    }
    return 0;
}

int get_array_int_1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_1_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_1_string(const char *str, char **endptr)
{
    static array_int_1 rTemp;
    return string_to_array_int_1(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_1_Utils = {
    array_int_1_to_string,
    check_array_int_1_string,
    string_to_array_int_1,
    is_array_int_1_double_convertion_allowed,
    array_int_1_to_double,
    compare_array_int_1,
    get_array_int_1_signature,
    set_array_int_1_default_value,
    sizeof(array_int_1)
};

/****************************************************************
 ** array_int_5 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_5VTable;

int array_int_5_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_5VTable != NULL
        && pSimarray_int_5VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_5VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 5, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_5(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_5VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_5VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 5, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_5_double_convertion_allowed()
{
    if (pSimarray_int_5VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_5VTable);
    }
    return 0;
}

void compare_array_int_5(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_5VTable != NULL
        && pSimarray_int_5VTable->m_version >= Scv612
        && pSimarray_int_5VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_5VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_5VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_5VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 5, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_5_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_5VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_5VTable, nRetValue);
    }
    return 0;
}

int get_array_int_5_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 5; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_5_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 5; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_5_string(const char *str, char **endptr)
{
    static array_int_5 rTemp;
    return string_to_array_int_5(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_5_Utils = {
    array_int_5_to_string,
    check_array_int_5_string,
    string_to_array_int_5,
    is_array_int_5_double_convertion_allowed,
    array_int_5_to_double,
    compare_array_int_5,
    get_array_int_5_signature,
    set_array_int_5_default_value,
    sizeof(array_int_5)
};

/****************************************************************
 ** array_int_236 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_236VTable;

int array_int_236_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_236VTable != NULL
        && pSimarray_int_236VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_236VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 236, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_236(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_236VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_236VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 236, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_236_double_convertion_allowed()
{
    if (pSimarray_int_236VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_236VTable);
    }
    return 0;
}

void compare_array_int_236(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_236VTable != NULL
        && pSimarray_int_236VTable->m_version >= Scv612
        && pSimarray_int_236VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_236VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_236VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_236VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 236, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_236_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_236VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_236VTable, nRetValue);
    }
    return 0;
}

int get_array_int_236_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 236; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_236_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 236; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_236_string(const char *str, char **endptr)
{
    static array_int_236 rTemp;
    return string_to_array_int_236(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_236_Utils = {
    array_int_236_to_string,
    check_array_int_236_string,
    string_to_array_int_236,
    is_array_int_236_double_convertion_allowed,
    array_int_236_to_double,
    compare_array_int_236,
    get_array_int_236_signature,
    set_array_int_236_default_value,
    sizeof(array_int_236)
};

/****************************************************************
 ** array__18501 
 ****************************************************************/

struct SimTypeVTable *pSimarray__18501VTable;

int array__18501_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__18501VTable != NULL
        && pSimarray__18501VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__18501VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__18155_to_string, 1, sizeof(struct__18155), pfnStrAppend, pData);
}

int string_to_array__18501(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__18501VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__18501VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__18155_Utils, 1, sizeof(struct__18155), endptr);
    }
    return nRet;
}

int is_array__18501_double_convertion_allowed()
{
    if (pSimarray__18501VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__18501VTable);
    }
    return 0;
}

void compare_array__18501(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__18501VTable != NULL
        && pSimarray__18501VTable->m_version >= Scv612
        && pSimarray__18501VTable->m_pfnCompare != NULL) {
        if (pSimarray__18501VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__18501VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__18501VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__18155, 1, sizeof(struct__18155), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__18501_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__18501VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__18501VTable, nRetValue);
    }
    return 0;
}

int get_array__18501_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__18155_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__18501_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__18155_default_value(&((struct__18155*)pValue)[i]);
    return 1;
}

int check_array__18501_string(const char *str, char **endptr)
{
    static array__18501 rTemp;
    return string_to_array__18501(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__18501_Utils = {
    array__18501_to_string,
    check_array__18501_string,
    string_to_array__18501,
    is_array__18501_double_convertion_allowed,
    array__18501_to_double,
    compare_array__18501,
    get_array__18501_signature,
    set_array__18501_default_value,
    sizeof(array__18501)
};

/****************************************************************
 ** array_bool_10 
 ****************************************************************/

struct SimTypeVTable *pSimarray_bool_10VTable;

int array_bool_10_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_bool_10VTable != NULL
        && pSimarray_bool_10VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_bool_10VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_bool_to_string, 10, sizeof(kcg_bool), pfnStrAppend, pData);
}

int string_to_array_bool_10(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_bool_10VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_bool_10VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_bool_Utils, 10, sizeof(kcg_bool), endptr);
    }
    return nRet;
}

int is_array_bool_10_double_convertion_allowed()
{
    if (pSimarray_bool_10VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_bool_10VTable);
    }
    return 0;
}

void compare_array_bool_10(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_bool_10VTable != NULL
        && pSimarray_bool_10VTable->m_version >= Scv612
        && pSimarray_bool_10VTable->m_pfnCompare != NULL) {
        if (pSimarray_bool_10VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_bool_10VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_bool_10VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_bool, 10, sizeof(kcg_bool), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_bool_10_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_bool_10VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_bool_10VTable, nRetValue);
    }
    return 0;
}

int get_array_bool_10_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 10; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_bool_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_bool_10_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 10; i++)
        set_kcg_bool_default_value(&((kcg_bool*)pValue)[i]);
    return 1;
}

int check_array_bool_10_string(const char *str, char **endptr)
{
    static array_bool_10 rTemp;
    return string_to_array_bool_10(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_bool_10_Utils = {
    array_bool_10_to_string,
    check_array_bool_10_string,
    string_to_array_bool_10,
    is_array_bool_10_double_convertion_allowed,
    array_bool_10_to_double,
    compare_array_bool_10,
    get_array_bool_10_signature,
    set_array_bool_10_default_value,
    sizeof(array_bool_10)
};

/****************************************************************
 ** NID_C 
 ****************************************************************/

struct SimTypeVTable *pSimNID_CVTable;

int NID_C_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_CVTable != NULL
        && pSimNID_CVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_CVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_C(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_CVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_CVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_C_double_convertion_allowed()
{
    if (pSimNID_CVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_CVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_C(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_CVTable != NULL
        && pSimNID_CVTable->m_version >= Scv612
        && pSimNID_CVTable->m_pfnCompare != NULL) {
        if (pSimNID_CVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_CVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_CVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_C_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_CVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_CVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_C_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_C_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_C_string(const char *str, char **endptr)
{
    static NID_C rTemp;
    return string_to_NID_C(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_C_Utils = {
    NID_C_to_string,
    check_NID_C_string,
    string_to_NID_C,
    is_NID_C_double_convertion_allowed,
    NID_C_to_double,
    compare_NID_C,
    get_NID_C_signature,
    set_NID_C_default_value,
    sizeof(NID_C)
};

/****************************************************************
 ** NID_BG 
 ****************************************************************/

struct SimTypeVTable *pSimNID_BGVTable;

int NID_BG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_BGVTable != NULL
        && pSimNID_BGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_BGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_BG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_BGVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_BGVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_BG_double_convertion_allowed()
{
    if (pSimNID_BGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_BGVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_BG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_BGVTable != NULL
        && pSimNID_BGVTable->m_version >= Scv612
        && pSimNID_BGVTable->m_pfnCompare != NULL) {
        if (pSimNID_BGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_BGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_BGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_BG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_BGVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_BGVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_BG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_BG_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_BG_string(const char *str, char **endptr)
{
    static NID_BG rTemp;
    return string_to_NID_BG(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_BG_Utils = {
    NID_BG_to_string,
    check_NID_BG_string,
    string_to_NID_BG,
    is_NID_BG_double_convertion_allowed,
    NID_BG_to_double,
    compare_NID_BG,
    get_NID_BG_signature,
    set_NID_BG_default_value,
    sizeof(NID_BG)
};

/****************************************************************
 ** Q_UPDOWN 
 ****************************************************************/

struct SimTypeVTable *pSimQ_UPDOWNVTable;

static SimEnumValUtils Q_UPDOWN_values[] = {
    { "Q_UPDOWN_Down_link_telegram", Q_UPDOWN_Down_link_telegram},
    { "Q_UPDOWN_Down_link_telegram", Q_UPDOWN_Down_link_telegram},
    { "Q_UPDOWN_Up_link_telegram", Q_UPDOWN_Up_link_telegram},
    { "Q_UPDOWN_Up_link_telegram", Q_UPDOWN_Up_link_telegram},
};

int Q_UPDOWN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_UPDOWNVTable != NULL
        && pSimQ_UPDOWNVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_UPDOWNVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_UPDOWN*)pValue, Q_UPDOWN_values, 4, pfnStrAppend, pData);
}

int string_to_Q_UPDOWN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_UPDOWNVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_UPDOWNVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_UPDOWN_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_UPDOWN*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_UPDOWN_double_convertion_allowed()
{
    if (pSimQ_UPDOWNVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_UPDOWNVTable);
    }
    return 1;
}

void compare_Q_UPDOWN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_UPDOWNVTable != NULL
        && pSimQ_UPDOWNVTable->m_version >= Scv612
        && pSimQ_UPDOWNVTable->m_pfnCompare != NULL) {
        if (pSimQ_UPDOWNVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_UPDOWNVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_UPDOWNVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_UPDOWN*)pValue1), (int)(*(Q_UPDOWN*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_UPDOWN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_UPDOWNVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_UPDOWNVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_UPDOWN*)pValue);
    return 1;
}

int get_Q_UPDOWN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_UPDOWN_values, 4, pfnStrAppend, pData);
}

int set_Q_UPDOWN_default_value(void *pValue)
{
    *(Q_UPDOWN*)pValue = Q_UPDOWN_Down_link_telegram;
    return 1;
}

int check_Q_UPDOWN_string(const char *str, char **endptr)
{
    static Q_UPDOWN rTemp;
    return string_to_Q_UPDOWN(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_UPDOWN_Utils = {
    Q_UPDOWN_to_string,
    check_Q_UPDOWN_string,
    string_to_Q_UPDOWN,
    is_Q_UPDOWN_double_convertion_allowed,
    Q_UPDOWN_to_double,
    compare_Q_UPDOWN,
    get_Q_UPDOWN_signature,
    set_Q_UPDOWN_default_value,
    sizeof(Q_UPDOWN)
};

/****************************************************************
 ** M_VERSION 
 ****************************************************************/

struct SimTypeVTable *pSimM_VERSIONVTable;

static SimEnumValUtils M_VERSION_values[] = {
    { "M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS", M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS},
    { "M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS", M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS},
    { "M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0", M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0},
    { "M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0", M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0},
    { "M_VERSION_Version_1_1_introduced_in_SRS_3_3_0", M_VERSION_Version_1_1_introduced_in_SRS_3_3_0},
    { "M_VERSION_Version_1_1_introduced_in_SRS_3_3_0", M_VERSION_Version_1_1_introduced_in_SRS_3_3_0},
    { "M_VERSION_Version_2_0_introduced_in_SRS_3_3_0", M_VERSION_Version_2_0_introduced_in_SRS_3_3_0},
    { "M_VERSION_Version_2_0_introduced_in_SRS_3_3_0", M_VERSION_Version_2_0_introduced_in_SRS_3_3_0},
};

int M_VERSION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_VERSIONVTable != NULL
        && pSimM_VERSIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_VERSIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_VERSION*)pValue, M_VERSION_values, 8, pfnStrAppend, pData);
}

int string_to_M_VERSION(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_VERSIONVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_VERSIONVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_VERSION_values, 8, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_VERSION*)pValue = nTemp;
    }
    return nRet;
}

int is_M_VERSION_double_convertion_allowed()
{
    if (pSimM_VERSIONVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_VERSIONVTable);
    }
    return 1;
}

void compare_M_VERSION(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_VERSIONVTable != NULL
        && pSimM_VERSIONVTable->m_version >= Scv612
        && pSimM_VERSIONVTable->m_pfnCompare != NULL) {
        if (pSimM_VERSIONVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_VERSIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_VERSIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_VERSION*)pValue1), (int)(*(M_VERSION*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_VERSION_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_VERSIONVTable != NULL) {
        return VTable_to_double(pValue, pSimM_VERSIONVTable, nRetValue);
    }
    *nRetValue = (double)*((M_VERSION*)pValue);
    return 1;
}

int get_M_VERSION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_VERSION_values, 8, pfnStrAppend, pData);
}

int set_M_VERSION_default_value(void *pValue)
{
    *(M_VERSION*)pValue = M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    return 1;
}

int check_M_VERSION_string(const char *str, char **endptr)
{
    static M_VERSION rTemp;
    return string_to_M_VERSION(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_VERSION_Utils = {
    M_VERSION_to_string,
    check_M_VERSION_string,
    string_to_M_VERSION,
    is_M_VERSION_double_convertion_allowed,
    M_VERSION_to_double,
    compare_M_VERSION,
    get_M_VERSION_signature,
    set_M_VERSION_default_value,
    sizeof(M_VERSION)
};

/****************************************************************
 ** Q_MEDIA 
 ****************************************************************/

struct SimTypeVTable *pSimQ_MEDIAVTable;

static SimEnumValUtils Q_MEDIA_values[] = {
    { "Q_MEDIA_Balise", Q_MEDIA_Balise},
    { "Q_MEDIA_Balise", Q_MEDIA_Balise},
    { "Q_MEDIA_Loop", Q_MEDIA_Loop},
    { "Q_MEDIA_Loop", Q_MEDIA_Loop},
};

int Q_MEDIA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_MEDIAVTable != NULL
        && pSimQ_MEDIAVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_MEDIAVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_MEDIA*)pValue, Q_MEDIA_values, 4, pfnStrAppend, pData);
}

int string_to_Q_MEDIA(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_MEDIAVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_MEDIAVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_MEDIA_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_MEDIA*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_MEDIA_double_convertion_allowed()
{
    if (pSimQ_MEDIAVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_MEDIAVTable);
    }
    return 1;
}

void compare_Q_MEDIA(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_MEDIAVTable != NULL
        && pSimQ_MEDIAVTable->m_version >= Scv612
        && pSimQ_MEDIAVTable->m_pfnCompare != NULL) {
        if (pSimQ_MEDIAVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_MEDIAVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_MEDIAVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_MEDIA*)pValue1), (int)(*(Q_MEDIA*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_MEDIA_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_MEDIAVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_MEDIAVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_MEDIA*)pValue);
    return 1;
}

int get_Q_MEDIA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_MEDIA_values, 4, pfnStrAppend, pData);
}

int set_Q_MEDIA_default_value(void *pValue)
{
    *(Q_MEDIA*)pValue = Q_MEDIA_Balise;
    return 1;
}

int check_Q_MEDIA_string(const char *str, char **endptr)
{
    static Q_MEDIA rTemp;
    return string_to_Q_MEDIA(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_MEDIA_Utils = {
    Q_MEDIA_to_string,
    check_Q_MEDIA_string,
    string_to_Q_MEDIA,
    is_Q_MEDIA_double_convertion_allowed,
    Q_MEDIA_to_double,
    compare_Q_MEDIA,
    get_Q_MEDIA_signature,
    set_Q_MEDIA_default_value,
    sizeof(Q_MEDIA)
};

/****************************************************************
 ** N_PIG 
 ****************************************************************/

struct SimTypeVTable *pSimN_PIGVTable;

static SimEnumValUtils N_PIG_values[] = {
    { "N_PIG_I_am_the_1st", N_PIG_I_am_the_1st},
    { "N_PIG_I_am_the_1st", N_PIG_I_am_the_1st},
    { "N_PIG_I_am_the_2nd", N_PIG_I_am_the_2nd},
    { "N_PIG_I_am_the_2nd", N_PIG_I_am_the_2nd},
    { "N_PIG_I_am_the_3rd", N_PIG_I_am_the_3rd},
    { "N_PIG_I_am_the_3rd", N_PIG_I_am_the_3rd},
    { "N_PIG_I_am_the_4th", N_PIG_I_am_the_4th},
    { "N_PIG_I_am_the_4th", N_PIG_I_am_the_4th},
    { "N_PIG_I_am_the_5th", N_PIG_I_am_the_5th},
    { "N_PIG_I_am_the_5th", N_PIG_I_am_the_5th},
    { "N_PIG_I_am_the_6th", N_PIG_I_am_the_6th},
    { "N_PIG_I_am_the_6th", N_PIG_I_am_the_6th},
    { "N_PIG_I_am_the_7th", N_PIG_I_am_the_7th},
    { "N_PIG_I_am_the_7th", N_PIG_I_am_the_7th},
    { "N_PIG_I_am_the_8th", N_PIG_I_am_the_8th},
    { "N_PIG_I_am_the_8th", N_PIG_I_am_the_8th},
};

int N_PIG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimN_PIGVTable != NULL
        && pSimN_PIGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_PIGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(N_PIG*)pValue, N_PIG_values, 16, pfnStrAppend, pData);
}

int string_to_N_PIG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimN_PIGVTable != NULL) {
        nRet=string_to_VTable(str, pSimN_PIGVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, N_PIG_values, 16, endptr);
        if (pValue != NULL && nRet != 0)
            *(N_PIG*)pValue = nTemp;
    }
    return nRet;
}

int is_N_PIG_double_convertion_allowed()
{
    if (pSimN_PIGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimN_PIGVTable);
    }
    return 1;
}

void compare_N_PIG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimN_PIGVTable != NULL
        && pSimN_PIGVTable->m_version >= Scv612
        && pSimN_PIGVTable->m_pfnCompare != NULL) {
        if (pSimN_PIGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimN_PIGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimN_PIGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(N_PIG*)pValue1), (int)(*(N_PIG*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int N_PIG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimN_PIGVTable != NULL) {
        return VTable_to_double(pValue, pSimN_PIGVTable, nRetValue);
    }
    *nRetValue = (double)*((N_PIG*)pValue);
    return 1;
}

int get_N_PIG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(N_PIG_values, 16, pfnStrAppend, pData);
}

int set_N_PIG_default_value(void *pValue)
{
    *(N_PIG*)pValue = N_PIG_I_am_the_1st;
    return 1;
}

int check_N_PIG_string(const char *str, char **endptr)
{
    static N_PIG rTemp;
    return string_to_N_PIG(str, &rTemp, endptr);
}

SimTypeUtils _Type_N_PIG_Utils = {
    N_PIG_to_string,
    check_N_PIG_string,
    string_to_N_PIG,
    is_N_PIG_double_convertion_allowed,
    N_PIG_to_double,
    compare_N_PIG,
    get_N_PIG_signature,
    set_N_PIG_default_value,
    sizeof(N_PIG)
};

/****************************************************************
 ** N_TOTAL 
 ****************************************************************/

struct SimTypeVTable *pSimN_TOTALVTable;

static SimEnumValUtils N_TOTAL_values[] = {
    { "N_TOTAL_1_balise_in_the_group", N_TOTAL_1_balise_in_the_group},
    { "N_TOTAL_1_balise_in_the_group", N_TOTAL_1_balise_in_the_group},
    { "N_TOTAL_2_balises_in_the_group", N_TOTAL_2_balises_in_the_group},
    { "N_TOTAL_2_balises_in_the_group", N_TOTAL_2_balises_in_the_group},
    { "N_TOTAL_3_balises_in_the_group", N_TOTAL_3_balises_in_the_group},
    { "N_TOTAL_3_balises_in_the_group", N_TOTAL_3_balises_in_the_group},
    { "N_TOTAL_4_balises_in_the_group", N_TOTAL_4_balises_in_the_group},
    { "N_TOTAL_4_balises_in_the_group", N_TOTAL_4_balises_in_the_group},
    { "N_TOTAL_5_balises_in_the_group", N_TOTAL_5_balises_in_the_group},
    { "N_TOTAL_5_balises_in_the_group", N_TOTAL_5_balises_in_the_group},
    { "N_TOTAL_6_balises_in_the_group", N_TOTAL_6_balises_in_the_group},
    { "N_TOTAL_6_balises_in_the_group", N_TOTAL_6_balises_in_the_group},
    { "N_TOTAL_7_balises_in_the_group", N_TOTAL_7_balises_in_the_group},
    { "N_TOTAL_7_balises_in_the_group", N_TOTAL_7_balises_in_the_group},
    { "N_TOTAL_8_balises_in_the_group", N_TOTAL_8_balises_in_the_group},
    { "N_TOTAL_8_balises_in_the_group", N_TOTAL_8_balises_in_the_group},
};

int N_TOTAL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimN_TOTALVTable != NULL
        && pSimN_TOTALVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_TOTALVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(N_TOTAL*)pValue, N_TOTAL_values, 16, pfnStrAppend, pData);
}

int string_to_N_TOTAL(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimN_TOTALVTable != NULL) {
        nRet=string_to_VTable(str, pSimN_TOTALVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, N_TOTAL_values, 16, endptr);
        if (pValue != NULL && nRet != 0)
            *(N_TOTAL*)pValue = nTemp;
    }
    return nRet;
}

int is_N_TOTAL_double_convertion_allowed()
{
    if (pSimN_TOTALVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimN_TOTALVTable);
    }
    return 1;
}

void compare_N_TOTAL(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimN_TOTALVTable != NULL
        && pSimN_TOTALVTable->m_version >= Scv612
        && pSimN_TOTALVTable->m_pfnCompare != NULL) {
        if (pSimN_TOTALVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimN_TOTALVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimN_TOTALVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(N_TOTAL*)pValue1), (int)(*(N_TOTAL*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int N_TOTAL_to_double(const void *pValue, double *nRetValue)
{
    if (pSimN_TOTALVTable != NULL) {
        return VTable_to_double(pValue, pSimN_TOTALVTable, nRetValue);
    }
    *nRetValue = (double)*((N_TOTAL*)pValue);
    return 1;
}

int get_N_TOTAL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(N_TOTAL_values, 16, pfnStrAppend, pData);
}

int set_N_TOTAL_default_value(void *pValue)
{
    *(N_TOTAL*)pValue = N_TOTAL_1_balise_in_the_group;
    return 1;
}

int check_N_TOTAL_string(const char *str, char **endptr)
{
    static N_TOTAL rTemp;
    return string_to_N_TOTAL(str, &rTemp, endptr);
}

SimTypeUtils _Type_N_TOTAL_Utils = {
    N_TOTAL_to_string,
    check_N_TOTAL_string,
    string_to_N_TOTAL,
    is_N_TOTAL_double_convertion_allowed,
    N_TOTAL_to_double,
    compare_N_TOTAL,
    get_N_TOTAL_signature,
    set_N_TOTAL_default_value,
    sizeof(N_TOTAL)
};

/****************************************************************
 ** M_DUP 
 ****************************************************************/

struct SimTypeVTable *pSimM_DUPVTable;

static SimEnumValUtils M_DUP_values[] = {
    { "M_DUP_No_duplicates", M_DUP_No_duplicates},
    { "M_DUP_No_duplicates", M_DUP_No_duplicates},
    { "M_DUP_This_balise_is_a_duplicate_of_the_next_balise", _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise},
    { "M_DUP_This_balise_is_a_duplicate_of_the_next_balise", _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise},
    { "M_DUP_This_balise_is_a_duplicate_of_the_previous_balise", M_DUP_This_balise_is_a_duplicate_of_the_previous_balise},
    { "M_DUP_This_balise_is_a_duplicate_of_the_previous_balise", M_DUP_This_balise_is_a_duplicate_of_the_previous_balise},
};

int M_DUP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_DUPVTable != NULL
        && pSimM_DUPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_DUPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_DUP*)pValue, M_DUP_values, 6, pfnStrAppend, pData);
}

int string_to_M_DUP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_DUPVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_DUPVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_DUP_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_DUP*)pValue = nTemp;
    }
    return nRet;
}

int is_M_DUP_double_convertion_allowed()
{
    if (pSimM_DUPVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_DUPVTable);
    }
    return 1;
}

void compare_M_DUP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_DUPVTable != NULL
        && pSimM_DUPVTable->m_version >= Scv612
        && pSimM_DUPVTable->m_pfnCompare != NULL) {
        if (pSimM_DUPVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_DUPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_DUPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_DUP*)pValue1), (int)(*(M_DUP*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_DUP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_DUPVTable != NULL) {
        return VTable_to_double(pValue, pSimM_DUPVTable, nRetValue);
    }
    *nRetValue = (double)*((M_DUP*)pValue);
    return 1;
}

int get_M_DUP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_DUP_values, 6, pfnStrAppend, pData);
}

int set_M_DUP_default_value(void *pValue)
{
    *(M_DUP*)pValue = M_DUP_No_duplicates;
    return 1;
}

int check_M_DUP_string(const char *str, char **endptr)
{
    static M_DUP rTemp;
    return string_to_M_DUP(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_DUP_Utils = {
    M_DUP_to_string,
    check_M_DUP_string,
    string_to_M_DUP,
    is_M_DUP_double_convertion_allowed,
    M_DUP_to_double,
    compare_M_DUP,
    get_M_DUP_signature,
    set_M_DUP_default_value,
    sizeof(M_DUP)
};

/****************************************************************
 ** M_MCOUNT 
 ****************************************************************/

struct SimTypeVTable *pSimM_MCOUNTVTable;

int M_MCOUNT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_MCOUNTVTable != NULL
        && pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_MCOUNTVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_M_MCOUNT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_MCOUNTVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_MCOUNTVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_M_MCOUNT_double_convertion_allowed()
{
    if (pSimM_MCOUNTVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_MCOUNTVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_M_MCOUNT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_MCOUNTVTable != NULL
        && pSimM_MCOUNTVTable->m_version >= Scv612
        && pSimM_MCOUNTVTable->m_pfnCompare != NULL) {
        if (pSimM_MCOUNTVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_MCOUNTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_MCOUNTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_MCOUNT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_MCOUNTVTable != NULL) {
        return VTable_to_double(pValue, pSimM_MCOUNTVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_M_MCOUNT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_M_MCOUNT_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_M_MCOUNT_string(const char *str, char **endptr)
{
    static M_MCOUNT rTemp;
    return string_to_M_MCOUNT(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_MCOUNT_Utils = {
    M_MCOUNT_to_string,
    check_M_MCOUNT_string,
    string_to_M_MCOUNT,
    is_M_MCOUNT_double_convertion_allowed,
    M_MCOUNT_to_double,
    compare_M_MCOUNT,
    get_M_MCOUNT_signature,
    set_M_MCOUNT_default_value,
    sizeof(M_MCOUNT)
};

/****************************************************************
 ** Q_LINK 
 ****************************************************************/

struct SimTypeVTable *pSimQ_LINKVTable;

static SimEnumValUtils Q_LINK_values[] = {
    { "Q_LINK_Unlinked", Q_LINK_Unlinked},
    { "Q_LINK_Unlinked", Q_LINK_Unlinked},
    { "Q_LINK_Linked", Q_LINK_Linked},
    { "Q_LINK_Linked", Q_LINK_Linked},
};

int Q_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LINKVTable != NULL
        && pSimQ_LINKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LINKVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_LINK*)pValue, Q_LINK_values, 4, pfnStrAppend, pData);
}

int string_to_Q_LINK(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_LINKVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_LINKVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LINK_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LINK*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_LINK_double_convertion_allowed()
{
    if (pSimQ_LINKVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_LINKVTable);
    }
    return 1;
}

void compare_Q_LINK(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_LINKVTable != NULL
        && pSimQ_LINKVTable->m_version >= Scv612
        && pSimQ_LINKVTable->m_pfnCompare != NULL) {
        if (pSimQ_LINKVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LINKVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_LINKVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_LINK*)pValue1), (int)(*(Q_LINK*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_LINK_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_LINKVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LINKVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_LINK*)pValue);
    return 1;
}

int get_Q_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_LINK_values, 4, pfnStrAppend, pData);
}

int set_Q_LINK_default_value(void *pValue)
{
    *(Q_LINK*)pValue = Q_LINK_Unlinked;
    return 1;
}

int check_Q_LINK_string(const char *str, char **endptr)
{
    static Q_LINK rTemp;
    return string_to_Q_LINK(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_LINK_Utils = {
    Q_LINK_to_string,
    check_Q_LINK_string,
    string_to_Q_LINK,
    is_Q_LINK_double_convertion_allowed,
    Q_LINK_to_double,
    compare_Q_LINK,
    get_Q_LINK_signature,
    set_Q_LINK_default_value,
    sizeof(Q_LINK)
};

/****************************************************************
 ** NID_PACKET 
 ****************************************************************/

struct SimTypeVTable *pSimNID_PACKETVTable;

int NID_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_PACKETVTable != NULL
        && pSimNID_PACKETVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_PACKETVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_PACKET(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_PACKETVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_PACKETVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_PACKET_double_convertion_allowed()
{
    if (pSimNID_PACKETVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_PACKETVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_PACKET(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_PACKETVTable != NULL
        && pSimNID_PACKETVTable->m_version >= Scv612
        && pSimNID_PACKETVTable->m_pfnCompare != NULL) {
        if (pSimNID_PACKETVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_PACKETVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_PACKETVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_PACKET_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_PACKETVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_PACKETVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_PACKET_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_PACKET_string(const char *str, char **endptr)
{
    static NID_PACKET rTemp;
    return string_to_NID_PACKET(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_PACKET_Utils = {
    NID_PACKET_to_string,
    check_NID_PACKET_string,
    string_to_NID_PACKET,
    is_NID_PACKET_double_convertion_allowed,
    NID_PACKET_to_double,
    compare_NID_PACKET,
    get_NID_PACKET_signature,
    set_NID_PACKET_default_value,
    sizeof(NID_PACKET)
};

/****************************************************************
 ** Q_DIR 
 ****************************************************************/

struct SimTypeVTable *pSimQ_DIRVTable;

static SimEnumValUtils Q_DIR_values[] = {
    { "Q_DIR_Reverse", Q_DIR_Reverse},
    { "Q_DIR_Reverse", Q_DIR_Reverse},
    { "Q_DIR_Nominal", Q_DIR_Nominal},
    { "Q_DIR_Nominal", Q_DIR_Nominal},
    { "Q_DIR_Both_directions", Q_DIR_Both_directions},
    { "Q_DIR_Both_directions", Q_DIR_Both_directions},
};

int Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DIRVTable != NULL
        && pSimQ_DIRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIR*)pValue, Q_DIR_values, 6, pfnStrAppend, pData);
}

int string_to_Q_DIR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_DIRVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_DIRVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIR_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIR*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DIR_double_convertion_allowed()
{
    if (pSimQ_DIRVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_DIRVTable);
    }
    return 1;
}

void compare_Q_DIR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_DIRVTable != NULL
        && pSimQ_DIRVTable->m_version >= Scv612
        && pSimQ_DIRVTable->m_pfnCompare != NULL) {
        if (pSimQ_DIRVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DIRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_DIRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DIR*)pValue1), (int)(*(Q_DIR*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_DIR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_DIRVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DIRVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_DIR*)pValue);
    return 1;
}

int get_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DIR_values, 6, pfnStrAppend, pData);
}

int set_Q_DIR_default_value(void *pValue)
{
    *(Q_DIR*)pValue = Q_DIR_Reverse;
    return 1;
}

int check_Q_DIR_string(const char *str, char **endptr)
{
    static Q_DIR rTemp;
    return string_to_Q_DIR(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_DIR_Utils = {
    Q_DIR_to_string,
    check_Q_DIR_string,
    string_to_Q_DIR,
    is_Q_DIR_double_convertion_allowed,
    Q_DIR_to_double,
    compare_Q_DIR,
    get_Q_DIR_signature,
    set_Q_DIR_default_value,
    sizeof(Q_DIR)
};

/****************************************************************
 ** NID_MESSAGE 
 ****************************************************************/

struct SimTypeVTable *pSimNID_MESSAGEVTable;

int NID_MESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_MESSAGEVTable != NULL
        && pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_MESSAGEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_MESSAGE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_MESSAGEVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_MESSAGEVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_MESSAGE_double_convertion_allowed()
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_MESSAGEVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_MESSAGE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_MESSAGEVTable != NULL
        && pSimNID_MESSAGEVTable->m_version >= Scv612
        && pSimNID_MESSAGEVTable->m_pfnCompare != NULL) {
        if (pSimNID_MESSAGEVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_MESSAGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_MESSAGEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_MESSAGE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_MESSAGEVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_MESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_MESSAGE_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_MESSAGE_string(const char *str, char **endptr)
{
    static NID_MESSAGE rTemp;
    return string_to_NID_MESSAGE(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_MESSAGE_Utils = {
    NID_MESSAGE_to_string,
    check_NID_MESSAGE_string,
    string_to_NID_MESSAGE,
    is_NID_MESSAGE_double_convertion_allowed,
    NID_MESSAGE_to_double,
    compare_NID_MESSAGE,
    get_NID_MESSAGE_signature,
    set_NID_MESSAGE_default_value,
    sizeof(NID_MESSAGE)
};

/****************************************************************
 ** T_TRAIN 
 ****************************************************************/

struct SimTypeVTable *pSimT_TRAINVTable;

int T_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimT_TRAINVTable != NULL
        && pSimT_TRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_TRAINVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_real_to_string(pValue, pfnStrAppend, pData);
}

int string_to_T_TRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimT_TRAINVTable != NULL) {
        nRet=string_to_VTable(str, pSimT_TRAINVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_real(str, pValue, endptr);
    }
    return nRet;
}

int is_T_TRAIN_double_convertion_allowed()
{
    if (pSimT_TRAINVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimT_TRAINVTable);
    }
    return is_kcg_real_double_convertion_allowed();
}

void compare_T_TRAIN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimT_TRAINVTable != NULL
        && pSimT_TRAINVTable->m_version >= Scv612
        && pSimT_TRAINVTable->m_pfnCompare != NULL) {
        if (pSimT_TRAINVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimT_TRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimT_TRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_real(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int T_TRAIN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimT_TRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimT_TRAINVTable, nRetValue);
    }
    return kcg_real_to_double(pValue, nRetValue);
}

int get_T_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_real_signature(pfnStrAppend, pData);
}

int set_T_TRAIN_default_value(void *pValue)
{
    return set_kcg_real_default_value(pValue);
}

int check_T_TRAIN_string(const char *str, char **endptr)
{
    static T_TRAIN rTemp;
    return string_to_T_TRAIN(str, &rTemp, endptr);
}

SimTypeUtils _Type_T_TRAIN_Utils = {
    T_TRAIN_to_string,
    check_T_TRAIN_string,
    string_to_T_TRAIN,
    is_T_TRAIN_double_convertion_allowed,
    T_TRAIN_to_double,
    compare_T_TRAIN,
    get_T_TRAIN_signature,
    set_T_TRAIN_default_value,
    sizeof(T_TRAIN)
};

/****************************************************************
 ** M_ACK 
 ****************************************************************/

struct SimTypeVTable *pSimM_ACKVTable;

static SimEnumValUtils M_ACK_values[] = {
    { "M_ACK_No_acknowledgement_required", M_ACK_No_acknowledgement_required},
    { "M_ACK_No_acknowledgement_required", M_ACK_No_acknowledgement_required},
    { "M_ACK_Acknowledgement_required", M_ACK_Acknowledgement_required},
    { "M_ACK_Acknowledgement_required", M_ACK_Acknowledgement_required},
};

int M_ACK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_ACKVTable != NULL
        && pSimM_ACKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_ACKVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_ACK*)pValue, M_ACK_values, 4, pfnStrAppend, pData);
}

int string_to_M_ACK(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_ACKVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_ACKVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_ACK_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_ACK*)pValue = nTemp;
    }
    return nRet;
}

int is_M_ACK_double_convertion_allowed()
{
    if (pSimM_ACKVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_ACKVTable);
    }
    return 1;
}

void compare_M_ACK(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_ACKVTable != NULL
        && pSimM_ACKVTable->m_version >= Scv612
        && pSimM_ACKVTable->m_pfnCompare != NULL) {
        if (pSimM_ACKVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_ACKVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_ACKVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_ACK*)pValue1), (int)(*(M_ACK*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_ACK_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_ACKVTable != NULL) {
        return VTable_to_double(pValue, pSimM_ACKVTable, nRetValue);
    }
    *nRetValue = (double)*((M_ACK*)pValue);
    return 1;
}

int get_M_ACK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_ACK_values, 4, pfnStrAppend, pData);
}

int set_M_ACK_default_value(void *pValue)
{
    *(M_ACK*)pValue = M_ACK_No_acknowledgement_required;
    return 1;
}

int check_M_ACK_string(const char *str, char **endptr)
{
    static M_ACK rTemp;
    return string_to_M_ACK(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_ACK_Utils = {
    M_ACK_to_string,
    check_M_ACK_string,
    string_to_M_ACK,
    is_M_ACK_double_convertion_allowed,
    M_ACK_to_double,
    compare_M_ACK,
    get_M_ACK_signature,
    set_M_ACK_default_value,
    sizeof(M_ACK)
};

/****************************************************************
 ** NID_LRBG 
 ****************************************************************/

struct SimTypeVTable *pSimNID_LRBGVTable;

int NID_LRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_LRBGVTable != NULL
        && pSimNID_LRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_LRBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_LRBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_LRBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_LRBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_LRBG_double_convertion_allowed()
{
    if (pSimNID_LRBGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_LRBGVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_LRBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_LRBGVTable != NULL
        && pSimNID_LRBGVTable->m_version >= Scv612
        && pSimNID_LRBGVTable->m_pfnCompare != NULL) {
        if (pSimNID_LRBGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_LRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_LRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_LRBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_LRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_LRBGVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_LRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_LRBG_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_LRBG_string(const char *str, char **endptr)
{
    static NID_LRBG rTemp;
    return string_to_NID_LRBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_LRBG_Utils = {
    NID_LRBG_to_string,
    check_NID_LRBG_string,
    string_to_NID_LRBG,
    is_NID_LRBG_double_convertion_allowed,
    NID_LRBG_to_double,
    compare_NID_LRBG,
    get_NID_LRBG_signature,
    set_NID_LRBG_default_value,
    sizeof(NID_LRBG)
};

/****************************************************************
 ** NID_EM 
 ****************************************************************/

struct SimTypeVTable *pSimNID_EMVTable;

int NID_EM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_EMVTable != NULL
        && pSimNID_EMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_EMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_EM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_EMVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_EMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_EM_double_convertion_allowed()
{
    if (pSimNID_EMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_EMVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_EM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_EMVTable != NULL
        && pSimNID_EMVTable->m_version >= Scv612
        && pSimNID_EMVTable->m_pfnCompare != NULL) {
        if (pSimNID_EMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_EMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_EMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_EM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_EMVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_EMVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_EM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_EM_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_EM_string(const char *str, char **endptr)
{
    static NID_EM rTemp;
    return string_to_NID_EM(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_EM_Utils = {
    NID_EM_to_string,
    check_NID_EM_string,
    string_to_NID_EM,
    is_NID_EM_double_convertion_allowed,
    NID_EM_to_double,
    compare_NID_EM,
    get_NID_EM_signature,
    set_NID_EM_default_value,
    sizeof(NID_EM)
};

/****************************************************************
 ** Q_SCALE 
 ****************************************************************/

struct SimTypeVTable *pSimQ_SCALEVTable;

static SimEnumValUtils Q_SCALE_values[] = {
    { "Q_SCALE_10_cm_scale", Q_SCALE_10_cm_scale},
    { "Q_SCALE_10_cm_scale", Q_SCALE_10_cm_scale},
    { "Q_SCALE_1_m_scale", Q_SCALE_1_m_scale},
    { "Q_SCALE_1_m_scale", Q_SCALE_1_m_scale},
    { "Q_SCALE_10_m_scale", Q_SCALE_10_m_scale},
    { "Q_SCALE_10_m_scale", Q_SCALE_10_m_scale},
};

int Q_SCALE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_SCALEVTable != NULL
        && pSimQ_SCALEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_SCALEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_SCALE*)pValue, Q_SCALE_values, 6, pfnStrAppend, pData);
}

int string_to_Q_SCALE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_SCALEVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_SCALEVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_SCALE_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_SCALE*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_SCALE_double_convertion_allowed()
{
    if (pSimQ_SCALEVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_SCALEVTable);
    }
    return 1;
}

void compare_Q_SCALE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_SCALEVTable != NULL
        && pSimQ_SCALEVTable->m_version >= Scv612
        && pSimQ_SCALEVTable->m_pfnCompare != NULL) {
        if (pSimQ_SCALEVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_SCALEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_SCALEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_SCALE*)pValue1), (int)(*(Q_SCALE*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_SCALE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_SCALEVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_SCALEVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_SCALE*)pValue);
    return 1;
}

int get_Q_SCALE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_SCALE_values, 6, pfnStrAppend, pData);
}

int set_Q_SCALE_default_value(void *pValue)
{
    *(Q_SCALE*)pValue = Q_SCALE_10_cm_scale;
    return 1;
}

int check_Q_SCALE_string(const char *str, char **endptr)
{
    static Q_SCALE rTemp;
    return string_to_Q_SCALE(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_SCALE_Utils = {
    Q_SCALE_to_string,
    check_Q_SCALE_string,
    string_to_Q_SCALE,
    is_Q_SCALE_double_convertion_allowed,
    Q_SCALE_to_double,
    compare_Q_SCALE,
    get_Q_SCALE_signature,
    set_Q_SCALE_default_value,
    sizeof(Q_SCALE)
};

/****************************************************************
 ** D_SR 
 ****************************************************************/

struct SimTypeVTable *pSimD_SRVTable;

int D_SR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_SRVTable != NULL
        && pSimD_SRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_SRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_SR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_SRVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_SRVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_SR_double_convertion_allowed()
{
    if (pSimD_SRVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimD_SRVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_D_SR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_SRVTable != NULL
        && pSimD_SRVTable->m_version >= Scv612
        && pSimD_SRVTable->m_pfnCompare != NULL) {
        if (pSimD_SRVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_SRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_SRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_SR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_SRVTable != NULL) {
        return VTable_to_double(pValue, pSimD_SRVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_D_SR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_SR_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_SR_string(const char *str, char **endptr)
{
    static D_SR rTemp;
    return string_to_D_SR(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_SR_Utils = {
    D_SR_to_string,
    check_D_SR_string,
    string_to_D_SR,
    is_D_SR_double_convertion_allowed,
    D_SR_to_double,
    compare_D_SR,
    get_D_SR_signature,
    set_D_SR_default_value,
    sizeof(D_SR)
};

/****************************************************************
 ** D_REF 
 ****************************************************************/

struct SimTypeVTable *pSimD_REFVTable;

int D_REF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_REFVTable != NULL
        && pSimD_REFVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_REFVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_REF(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_REFVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_REFVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_REF_double_convertion_allowed()
{
    if (pSimD_REFVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimD_REFVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_D_REF(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_REFVTable != NULL
        && pSimD_REFVTable->m_version >= Scv612
        && pSimD_REFVTable->m_pfnCompare != NULL) {
        if (pSimD_REFVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_REFVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_REFVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_REF_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_REFVTable != NULL) {
        return VTable_to_double(pValue, pSimD_REFVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_D_REF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_REF_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_REF_string(const char *str, char **endptr)
{
    static D_REF rTemp;
    return string_to_D_REF(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_REF_Utils = {
    D_REF_to_string,
    check_D_REF_string,
    string_to_D_REF,
    is_D_REF_double_convertion_allowed,
    D_REF_to_double,
    compare_D_REF,
    get_D_REF_signature,
    set_D_REF_default_value,
    sizeof(D_REF)
};

/****************************************************************
 ** D_EMERGENCYSTOP 
 ****************************************************************/

struct SimTypeVTable *pSimD_EMERGENCYSTOPVTable;

int D_EMERGENCYSTOP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_EMERGENCYSTOPVTable != NULL
        && pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_EMERGENCYSTOPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_EMERGENCYSTOP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_EMERGENCYSTOPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_EMERGENCYSTOP_double_convertion_allowed()
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimD_EMERGENCYSTOPVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_D_EMERGENCYSTOP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_EMERGENCYSTOPVTable != NULL
        && pSimD_EMERGENCYSTOPVTable->m_version >= Scv612
        && pSimD_EMERGENCYSTOPVTable->m_pfnCompare != NULL) {
        if (pSimD_EMERGENCYSTOPVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_EMERGENCYSTOPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_EMERGENCYSTOPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_EMERGENCYSTOP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return VTable_to_double(pValue, pSimD_EMERGENCYSTOPVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_D_EMERGENCYSTOP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_EMERGENCYSTOP_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_EMERGENCYSTOP_string(const char *str, char **endptr)
{
    static D_EMERGENCYSTOP rTemp;
    return string_to_D_EMERGENCYSTOP(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_EMERGENCYSTOP_Utils = {
    D_EMERGENCYSTOP_to_string,
    check_D_EMERGENCYSTOP_string,
    string_to_D_EMERGENCYSTOP,
    is_D_EMERGENCYSTOP_double_convertion_allowed,
    D_EMERGENCYSTOP_to_double,
    compare_D_EMERGENCYSTOP,
    get_D_EMERGENCYSTOP_signature,
    set_D_EMERGENCYSTOP_default_value,
    sizeof(D_EMERGENCYSTOP)
};

/****************************************************************
 ** M_MODE 
 ****************************************************************/

struct SimTypeVTable *pSimM_MODEVTable;

static SimEnumValUtils M_MODE_values[] = {
    { "M_MODE_Full_Supervision", M_MODE_Full_Supervision},
    { "M_MODE_Full_Supervision", M_MODE_Full_Supervision},
    { "M_MODE_On_Sight", M_MODE_On_Sight},
    { "M_MODE_On_Sight", M_MODE_On_Sight},
    { "M_MODE_Staff_Responsible", M_MODE_Staff_Responsible},
    { "M_MODE_Staff_Responsible", M_MODE_Staff_Responsible},
    { "M_MODE_Shunting", M_MODE_Shunting},
    { "M_MODE_Shunting", M_MODE_Shunting},
    { "M_MODE_Unfitted", M_MODE_Unfitted},
    { "M_MODE_Unfitted", M_MODE_Unfitted},
    { "M_MODE_Sleeping", M_MODE_Sleeping},
    { "M_MODE_Sleeping", M_MODE_Sleeping},
    { "M_MODE_Stand_By", M_MODE_Stand_By},
    { "M_MODE_Stand_By", M_MODE_Stand_By},
    { "M_MODE_Trip", M_MODE_Trip},
    { "M_MODE_Trip", M_MODE_Trip},
    { "M_MODE_Post_Trip", M_MODE_Post_Trip},
    { "M_MODE_Post_Trip", M_MODE_Post_Trip},
    { "M_MODE_System_Failure", M_MODE_System_Failure},
    { "M_MODE_System_Failure", M_MODE_System_Failure},
    { "M_MODE_Isolation", M_MODE_Isolation},
    { "M_MODE_Isolation", M_MODE_Isolation},
    { "M_MODE_Non_Leading", M_MODE_Non_Leading},
    { "M_MODE_Non_Leading", M_MODE_Non_Leading},
    { "M_MODE_Limited_Supervision", M_MODE_Limited_Supervision},
    { "M_MODE_Limited_Supervision", M_MODE_Limited_Supervision},
    { "M_MODE_National_System", M_MODE_National_System},
    { "M_MODE_National_System", M_MODE_National_System},
    { "M_MODE_Reversing", M_MODE_Reversing},
    { "M_MODE_Reversing", M_MODE_Reversing},
    { "M_MODE_Passive_Shunting", M_MODE_Passive_Shunting},
    { "M_MODE_Passive_Shunting", M_MODE_Passive_Shunting},
    { "M_MODE_No_Power", M_MODE_No_Power},
    { "M_MODE_No_Power", M_MODE_No_Power},
};

int M_MODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_MODEVTable != NULL
        && pSimM_MODEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_MODEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_MODE*)pValue, M_MODE_values, 34, pfnStrAppend, pData);
}

int string_to_M_MODE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_MODEVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_MODEVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_MODE_values, 34, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_MODE*)pValue = nTemp;
    }
    return nRet;
}

int is_M_MODE_double_convertion_allowed()
{
    if (pSimM_MODEVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_MODEVTable);
    }
    return 1;
}

void compare_M_MODE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_MODEVTable != NULL
        && pSimM_MODEVTable->m_version >= Scv612
        && pSimM_MODEVTable->m_pfnCompare != NULL) {
        if (pSimM_MODEVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_MODEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_MODEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_MODE*)pValue1), (int)(*(M_MODE*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_MODE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_MODEVTable != NULL) {
        return VTable_to_double(pValue, pSimM_MODEVTable, nRetValue);
    }
    *nRetValue = (double)*((M_MODE*)pValue);
    return 1;
}

int get_M_MODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_MODE_values, 34, pfnStrAppend, pData);
}

int set_M_MODE_default_value(void *pValue)
{
    *(M_MODE*)pValue = M_MODE_Full_Supervision;
    return 1;
}

int check_M_MODE_string(const char *str, char **endptr)
{
    static M_MODE rTemp;
    return string_to_M_MODE(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_MODE_Utils = {
    M_MODE_to_string,
    check_M_MODE_string,
    string_to_M_MODE,
    is_M_MODE_double_convertion_allowed,
    M_MODE_to_double,
    compare_M_MODE,
    get_M_MODE_signature,
    set_M_MODE_default_value,
    sizeof(M_MODE)
};

/****************************************************************
 ** Q_NVLOCACC 
 ****************************************************************/

struct SimTypeVTable *pSimQ_NVLOCACCVTable;

int Q_NVLOCACC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_NVLOCACCVTable != NULL
        && pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_NVLOCACCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Q_NVLOCACC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_NVLOCACCVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_NVLOCACCVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_Q_NVLOCACC_double_convertion_allowed()
{
    if (pSimQ_NVLOCACCVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_NVLOCACCVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_Q_NVLOCACC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_NVLOCACCVTable != NULL
        && pSimQ_NVLOCACCVTable->m_version >= Scv612
        && pSimQ_NVLOCACCVTable->m_pfnCompare != NULL) {
        if (pSimQ_NVLOCACCVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_NVLOCACCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_NVLOCACCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_NVLOCACC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_NVLOCACCVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_NVLOCACCVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_Q_NVLOCACC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_Q_NVLOCACC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_Q_NVLOCACC_string(const char *str, char **endptr)
{
    static Q_NVLOCACC rTemp;
    return string_to_Q_NVLOCACC(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_NVLOCACC_Utils = {
    Q_NVLOCACC_to_string,
    check_Q_NVLOCACC_string,
    string_to_Q_NVLOCACC,
    is_Q_NVLOCACC_double_convertion_allowed,
    Q_NVLOCACC_to_double,
    compare_Q_NVLOCACC,
    get_Q_NVLOCACC_signature,
    set_Q_NVLOCACC_default_value,
    sizeof(Q_NVLOCACC)
};

/****************************************************************
 ** Q_DIRLRBG 
 ****************************************************************/

struct SimTypeVTable *pSimQ_DIRLRBGVTable;

static SimEnumValUtils Q_DIRLRBG_values[] = {
    { "Q_DIRLRBG_Reverse", Q_DIRLRBG_Reverse},
    { "Q_DIRLRBG_Reverse", Q_DIRLRBG_Reverse},
    { "Q_DIRLRBG_Nominal", Q_DIRLRBG_Nominal},
    { "Q_DIRLRBG_Nominal", Q_DIRLRBG_Nominal},
    { "Q_DIRLRBG_Unknown", Q_DIRLRBG_Unknown},
    { "Q_DIRLRBG_Unknown", Q_DIRLRBG_Unknown},
};

int Q_DIRLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DIRLRBGVTable != NULL
        && pSimQ_DIRLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRLRBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIRLRBG*)pValue, Q_DIRLRBG_values, 6, pfnStrAppend, pData);
}

int string_to_Q_DIRLRBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_DIRLRBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_DIRLRBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIRLRBG_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIRLRBG*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DIRLRBG_double_convertion_allowed()
{
    if (pSimQ_DIRLRBGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_DIRLRBGVTable);
    }
    return 1;
}

void compare_Q_DIRLRBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_DIRLRBGVTable != NULL
        && pSimQ_DIRLRBGVTable->m_version >= Scv612
        && pSimQ_DIRLRBGVTable->m_pfnCompare != NULL) {
        if (pSimQ_DIRLRBGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DIRLRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_DIRLRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DIRLRBG*)pValue1), (int)(*(Q_DIRLRBG*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_DIRLRBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_DIRLRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DIRLRBGVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_DIRLRBG*)pValue);
    return 1;
}

int get_Q_DIRLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DIRLRBG_values, 6, pfnStrAppend, pData);
}

int set_Q_DIRLRBG_default_value(void *pValue)
{
    *(Q_DIRLRBG*)pValue = Q_DIRLRBG_Reverse;
    return 1;
}

int check_Q_DIRLRBG_string(const char *str, char **endptr)
{
    static Q_DIRLRBG rTemp;
    return string_to_Q_DIRLRBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_DIRLRBG_Utils = {
    Q_DIRLRBG_to_string,
    check_Q_DIRLRBG_string,
    string_to_Q_DIRLRBG,
    is_Q_DIRLRBG_double_convertion_allowed,
    Q_DIRLRBG_to_double,
    compare_Q_DIRLRBG,
    get_Q_DIRLRBG_signature,
    set_Q_DIRLRBG_default_value,
    sizeof(Q_DIRLRBG)
};

/****************************************************************
 ** Q_DIRTRAIN 
 ****************************************************************/

struct SimTypeVTable *pSimQ_DIRTRAINVTable;

static SimEnumValUtils Q_DIRTRAIN_values[] = {
    { "Q_DIRTRAIN_Reverse", Q_DIRTRAIN_Reverse},
    { "Q_DIRTRAIN_Reverse", Q_DIRTRAIN_Reverse},
    { "Q_DIRTRAIN_Nominal", Q_DIRTRAIN_Nominal},
    { "Q_DIRTRAIN_Nominal", Q_DIRTRAIN_Nominal},
    { "Q_DIRTRAIN_Unknown", Q_DIRTRAIN_Unknown},
    { "Q_DIRTRAIN_Unknown", Q_DIRTRAIN_Unknown},
};

int Q_DIRTRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DIRTRAINVTable != NULL
        && pSimQ_DIRTRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRTRAINVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIRTRAIN*)pValue, Q_DIRTRAIN_values, 6, pfnStrAppend, pData);
}

int string_to_Q_DIRTRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_DIRTRAINVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_DIRTRAINVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIRTRAIN_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIRTRAIN*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DIRTRAIN_double_convertion_allowed()
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_DIRTRAINVTable);
    }
    return 1;
}

void compare_Q_DIRTRAIN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_DIRTRAINVTable != NULL
        && pSimQ_DIRTRAINVTable->m_version >= Scv612
        && pSimQ_DIRTRAINVTable->m_pfnCompare != NULL) {
        if (pSimQ_DIRTRAINVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DIRTRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_DIRTRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DIRTRAIN*)pValue1), (int)(*(Q_DIRTRAIN*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_DIRTRAIN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DIRTRAINVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_DIRTRAIN*)pValue);
    return 1;
}

int get_Q_DIRTRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DIRTRAIN_values, 6, pfnStrAppend, pData);
}

int set_Q_DIRTRAIN_default_value(void *pValue)
{
    *(Q_DIRTRAIN*)pValue = Q_DIRTRAIN_Reverse;
    return 1;
}

int check_Q_DIRTRAIN_string(const char *str, char **endptr)
{
    static Q_DIRTRAIN rTemp;
    return string_to_Q_DIRTRAIN(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_DIRTRAIN_Utils = {
    Q_DIRTRAIN_to_string,
    check_Q_DIRTRAIN_string,
    string_to_Q_DIRTRAIN,
    is_Q_DIRTRAIN_double_convertion_allowed,
    Q_DIRTRAIN_to_double,
    compare_Q_DIRTRAIN,
    get_Q_DIRTRAIN_signature,
    set_Q_DIRTRAIN_default_value,
    sizeof(Q_DIRTRAIN)
};

/****************************************************************
 ** Q_LINKORIENTATION 
 ****************************************************************/

struct SimTypeVTable *pSimQ_LINKORIENTATIONVTable;

static SimEnumValUtils Q_LINKORIENTATION_values[] = {
    { "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction", _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction},
    { "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction", _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction},
    { "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction", Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction},
    { "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction", Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction},
};

int Q_LINKORIENTATION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LINKORIENTATIONVTable != NULL
        && pSimQ_LINKORIENTATIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LINKORIENTATIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_LINKORIENTATION*)pValue, Q_LINKORIENTATION_values, 4, pfnStrAppend, pData);
}

int string_to_Q_LINKORIENTATION(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_LINKORIENTATIONVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_LINKORIENTATIONVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LINKORIENTATION_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LINKORIENTATION*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_LINKORIENTATION_double_convertion_allowed()
{
    if (pSimQ_LINKORIENTATIONVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_LINKORIENTATIONVTable);
    }
    return 1;
}

void compare_Q_LINKORIENTATION(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_LINKORIENTATIONVTable != NULL
        && pSimQ_LINKORIENTATIONVTable->m_version >= Scv612
        && pSimQ_LINKORIENTATIONVTable->m_pfnCompare != NULL) {
        if (pSimQ_LINKORIENTATIONVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LINKORIENTATIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_LINKORIENTATIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_LINKORIENTATION*)pValue1), (int)(*(Q_LINKORIENTATION*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_LINKORIENTATION_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_LINKORIENTATIONVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LINKORIENTATIONVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_LINKORIENTATION*)pValue);
    return 1;
}

int get_Q_LINKORIENTATION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_LINKORIENTATION_values, 4, pfnStrAppend, pData);
}

int set_Q_LINKORIENTATION_default_value(void *pValue)
{
    *(Q_LINKORIENTATION*)pValue = _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    return 1;
}

int check_Q_LINKORIENTATION_string(const char *str, char **endptr)
{
    static Q_LINKORIENTATION rTemp;
    return string_to_Q_LINKORIENTATION(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_LINKORIENTATION_Utils = {
    Q_LINKORIENTATION_to_string,
    check_Q_LINKORIENTATION_string,
    string_to_Q_LINKORIENTATION,
    is_Q_LINKORIENTATION_double_convertion_allowed,
    Q_LINKORIENTATION_to_double,
    compare_Q_LINKORIENTATION,
    get_Q_LINKORIENTATION_signature,
    set_Q_LINKORIENTATION_default_value,
    sizeof(Q_LINKORIENTATION)
};

/****************************************************************
 ** D_LINK 
 ****************************************************************/

struct SimTypeVTable *pSimD_LINKVTable;

int D_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_LINKVTable != NULL
        && pSimD_LINKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_LINKVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_LINK(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_LINKVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_LINKVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_LINK_double_convertion_allowed()
{
    if (pSimD_LINKVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimD_LINKVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_D_LINK(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_LINKVTable != NULL
        && pSimD_LINKVTable->m_version >= Scv612
        && pSimD_LINKVTable->m_pfnCompare != NULL) {
        if (pSimD_LINKVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_LINKVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_LINKVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_LINK_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_LINKVTable != NULL) {
        return VTable_to_double(pValue, pSimD_LINKVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_D_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_LINK_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_LINK_string(const char *str, char **endptr)
{
    static D_LINK rTemp;
    return string_to_D_LINK(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_LINK_Utils = {
    D_LINK_to_string,
    check_D_LINK_string,
    string_to_D_LINK,
    is_D_LINK_double_convertion_allowed,
    D_LINK_to_double,
    compare_D_LINK,
    get_D_LINK_signature,
    set_D_LINK_default_value,
    sizeof(D_LINK)
};

/****************************************************************
 ** Q_NEWCOUNTRY 
 ****************************************************************/

struct SimTypeVTable *pSimQ_NEWCOUNTRYVTable;

static SimEnumValUtils Q_NEWCOUNTRY_values[] = {
    { "Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows", Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows},
    { "Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows", Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows},
    { "Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows", Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows},
    { "Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows", Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows},
};

int Q_NEWCOUNTRY_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_NEWCOUNTRYVTable != NULL
        && pSimQ_NEWCOUNTRYVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_NEWCOUNTRYVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_NEWCOUNTRY*)pValue, Q_NEWCOUNTRY_values, 4, pfnStrAppend, pData);
}

int string_to_Q_NEWCOUNTRY(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_NEWCOUNTRYVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_NEWCOUNTRYVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_NEWCOUNTRY_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_NEWCOUNTRY*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_NEWCOUNTRY_double_convertion_allowed()
{
    if (pSimQ_NEWCOUNTRYVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_NEWCOUNTRYVTable);
    }
    return 1;
}

void compare_Q_NEWCOUNTRY(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_NEWCOUNTRYVTable != NULL
        && pSimQ_NEWCOUNTRYVTable->m_version >= Scv612
        && pSimQ_NEWCOUNTRYVTable->m_pfnCompare != NULL) {
        if (pSimQ_NEWCOUNTRYVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_NEWCOUNTRYVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_NEWCOUNTRYVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_NEWCOUNTRY*)pValue1), (int)(*(Q_NEWCOUNTRY*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_NEWCOUNTRY_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_NEWCOUNTRYVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_NEWCOUNTRYVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_NEWCOUNTRY*)pValue);
    return 1;
}

int get_Q_NEWCOUNTRY_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_NEWCOUNTRY_values, 4, pfnStrAppend, pData);
}

int set_Q_NEWCOUNTRY_default_value(void *pValue)
{
    *(Q_NEWCOUNTRY*)pValue = Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    return 1;
}

int check_Q_NEWCOUNTRY_string(const char *str, char **endptr)
{
    static Q_NEWCOUNTRY rTemp;
    return string_to_Q_NEWCOUNTRY(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_NEWCOUNTRY_Utils = {
    Q_NEWCOUNTRY_to_string,
    check_Q_NEWCOUNTRY_string,
    string_to_Q_NEWCOUNTRY,
    is_Q_NEWCOUNTRY_double_convertion_allowed,
    Q_NEWCOUNTRY_to_double,
    compare_Q_NEWCOUNTRY,
    get_Q_NEWCOUNTRY_signature,
    set_Q_NEWCOUNTRY_default_value,
    sizeof(Q_NEWCOUNTRY)
};

/****************************************************************
 ** Q_LINKREACTION 
 ****************************************************************/

struct SimTypeVTable *pSimQ_LINKREACTIONVTable;

static SimEnumValUtils Q_LINKREACTION_values[] = {
    { "Q_LINKREACTION_Train_trip", Q_LINKREACTION_Train_trip},
    { "Q_LINKREACTION_Train_trip", Q_LINKREACTION_Train_trip},
    { "Q_LINKREACTION_Apply_service_brake", Q_LINKREACTION_Apply_service_brake},
    { "Q_LINKREACTION_Apply_service_brake", Q_LINKREACTION_Apply_service_brake},
    { "Q_LINKREACTION_No_Reaction", Q_LINKREACTION_No_Reaction},
    { "Q_LINKREACTION_No_Reaction", Q_LINKREACTION_No_Reaction},
};

int Q_LINKREACTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LINKREACTIONVTable != NULL
        && pSimQ_LINKREACTIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LINKREACTIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_LINKREACTION*)pValue, Q_LINKREACTION_values, 6, pfnStrAppend, pData);
}

int string_to_Q_LINKREACTION(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_LINKREACTIONVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_LINKREACTIONVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LINKREACTION_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LINKREACTION*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_LINKREACTION_double_convertion_allowed()
{
    if (pSimQ_LINKREACTIONVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_LINKREACTIONVTable);
    }
    return 1;
}

void compare_Q_LINKREACTION(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_LINKREACTIONVTable != NULL
        && pSimQ_LINKREACTIONVTable->m_version >= Scv612
        && pSimQ_LINKREACTIONVTable->m_pfnCompare != NULL) {
        if (pSimQ_LINKREACTIONVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LINKREACTIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_LINKREACTIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_LINKREACTION*)pValue1), (int)(*(Q_LINKREACTION*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_LINKREACTION_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_LINKREACTIONVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LINKREACTIONVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_LINKREACTION*)pValue);
    return 1;
}

int get_Q_LINKREACTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_LINKREACTION_values, 6, pfnStrAppend, pData);
}

int set_Q_LINKREACTION_default_value(void *pValue)
{
    *(Q_LINKREACTION*)pValue = Q_LINKREACTION_Train_trip;
    return 1;
}

int check_Q_LINKREACTION_string(const char *str, char **endptr)
{
    static Q_LINKREACTION rTemp;
    return string_to_Q_LINKREACTION(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_LINKREACTION_Utils = {
    Q_LINKREACTION_to_string,
    check_Q_LINKREACTION_string,
    string_to_Q_LINKREACTION,
    is_Q_LINKREACTION_double_convertion_allowed,
    Q_LINKREACTION_to_double,
    compare_Q_LINKREACTION,
    get_Q_LINKREACTION_signature,
    set_Q_LINKREACTION_default_value,
    sizeof(Q_LINKREACTION)
};

/****************************************************************
 ** Q_LOCACC 
 ****************************************************************/

struct SimTypeVTable *pSimQ_LOCACCVTable;

int Q_LOCACC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LOCACCVTable != NULL
        && pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LOCACCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Q_LOCACC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_LOCACCVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_LOCACCVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_Q_LOCACC_double_convertion_allowed()
{
    if (pSimQ_LOCACCVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_LOCACCVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_Q_LOCACC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_LOCACCVTable != NULL
        && pSimQ_LOCACCVTable->m_version >= Scv612
        && pSimQ_LOCACCVTable->m_pfnCompare != NULL) {
        if (pSimQ_LOCACCVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LOCACCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_LOCACCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_LOCACC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_LOCACCVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LOCACCVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_Q_LOCACC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_Q_LOCACC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_Q_LOCACC_string(const char *str, char **endptr)
{
    static Q_LOCACC rTemp;
    return string_to_Q_LOCACC(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_LOCACC_Utils = {
    Q_LOCACC_to_string,
    check_Q_LOCACC_string,
    string_to_Q_LOCACC,
    is_Q_LOCACC_double_convertion_allowed,
    Q_LOCACC_to_double,
    compare_Q_LOCACC,
    get_Q_LOCACC_signature,
    set_Q_LOCACC_default_value,
    sizeof(Q_LOCACC)
};

/****************************************************************
 ** Q_DLRBG 
 ****************************************************************/

struct SimTypeVTable *pSimQ_DLRBGVTable;

static SimEnumValUtils Q_DLRBG_values[] = {
    { "Q_DLRBG_Reverse", Q_DLRBG_Reverse},
    { "Q_DLRBG_Reverse", Q_DLRBG_Reverse},
    { "Q_DLRBG_Nominal", Q_DLRBG_Nominal},
    { "Q_DLRBG_Nominal", Q_DLRBG_Nominal},
    { "Q_DLRBG_Unknown", Q_DLRBG_Unknown},
    { "Q_DLRBG_Unknown", Q_DLRBG_Unknown},
};

int Q_DLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DLRBGVTable != NULL
        && pSimQ_DLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DLRBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DLRBG*)pValue, Q_DLRBG_values, 6, pfnStrAppend, pData);
}

int string_to_Q_DLRBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_DLRBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_DLRBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DLRBG_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DLRBG*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DLRBG_double_convertion_allowed()
{
    if (pSimQ_DLRBGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_DLRBGVTable);
    }
    return 1;
}

void compare_Q_DLRBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_DLRBGVTable != NULL
        && pSimQ_DLRBGVTable->m_version >= Scv612
        && pSimQ_DLRBGVTable->m_pfnCompare != NULL) {
        if (pSimQ_DLRBGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DLRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_DLRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DLRBG*)pValue1), (int)(*(Q_DLRBG*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_DLRBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_DLRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DLRBGVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_DLRBG*)pValue);
    return 1;
}

int get_Q_DLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DLRBG_values, 6, pfnStrAppend, pData);
}

int set_Q_DLRBG_default_value(void *pValue)
{
    *(Q_DLRBG*)pValue = Q_DLRBG_Reverse;
    return 1;
}

int check_Q_DLRBG_string(const char *str, char **endptr)
{
    static Q_DLRBG rTemp;
    return string_to_Q_DLRBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_DLRBG_Utils = {
    Q_DLRBG_to_string,
    check_Q_DLRBG_string,
    string_to_Q_DLRBG,
    is_Q_DLRBG_double_convertion_allowed,
    Q_DLRBG_to_double,
    compare_Q_DLRBG,
    get_Q_DLRBG_signature,
    set_Q_DLRBG_default_value,
    sizeof(Q_DLRBG)
};

/****************************************************************
 ** MetadataTruthtable_T 
 ****************************************************************/

struct SimTypeVTable *pSimMetadataTruthtable_TVTable;

int MetadataTruthtable_T_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMetadataTruthtable_TVTable != NULL
        && pSimMetadataTruthtable_TVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMetadataTruthtable_TVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_bool_256_46_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataTruthtable_T(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataTruthtable_TVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataTruthtable_TVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_bool_256_46(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataTruthtable_T_double_convertion_allowed()
{
    if (pSimMetadataTruthtable_TVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMetadataTruthtable_TVTable);
    }
    return is_array_bool_256_46_double_convertion_allowed();
}

void compare_MetadataTruthtable_T(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimMetadataTruthtable_TVTable != NULL
        && pSimMetadataTruthtable_TVTable->m_version >= Scv612
        && pSimMetadataTruthtable_TVTable->m_pfnCompare != NULL) {
        if (pSimMetadataTruthtable_TVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMetadataTruthtable_TVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimMetadataTruthtable_TVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_bool_256_46(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataTruthtable_T_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataTruthtable_TVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataTruthtable_TVTable, nRetValue);
    }
    return array_bool_256_46_to_double(pValue, nRetValue);
}

int get_MetadataTruthtable_T_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_bool_256_46_signature(pfnStrAppend, pData);
}

int set_MetadataTruthtable_T_default_value(void *pValue)
{
    return set_array_bool_256_46_default_value(pValue);
}

int check_MetadataTruthtable_T_string(const char *str, char **endptr)
{
    static MetadataTruthtable_T rTemp;
    return string_to_MetadataTruthtable_T(str, &rTemp, endptr);
}

SimTypeUtils _Type_MetadataTruthtable_T_Utils = {
    MetadataTruthtable_T_to_string,
    check_MetadataTruthtable_T_string,
    string_to_MetadataTruthtable_T,
    is_MetadataTruthtable_T_double_convertion_allowed,
    MetadataTruthtable_T_to_double,
    compare_MetadataTruthtable_T,
    get_MetadataTruthtable_T_signature,
    set_MetadataTruthtable_T_default_value,
    sizeof(MetadataTruthtable_T)
};

/****************************************************************
 ** L_PACKET 
 ****************************************************************/

struct SimTypeVTable *pSimL_PACKETVTable;

int L_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimL_PACKETVTable != NULL
        && pSimL_PACKETVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimL_PACKETVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_L_PACKET(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimL_PACKETVTable != NULL) {
        nRet=string_to_VTable(str, pSimL_PACKETVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_L_PACKET_double_convertion_allowed()
{
    if (pSimL_PACKETVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimL_PACKETVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_L_PACKET(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimL_PACKETVTable != NULL
        && pSimL_PACKETVTable->m_version >= Scv612
        && pSimL_PACKETVTable->m_pfnCompare != NULL) {
        if (pSimL_PACKETVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimL_PACKETVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimL_PACKETVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int L_PACKET_to_double(const void *pValue, double *nRetValue)
{
    if (pSimL_PACKETVTable != NULL) {
        return VTable_to_double(pValue, pSimL_PACKETVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_L_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_L_PACKET_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_L_PACKET_string(const char *str, char **endptr)
{
    static L_PACKET rTemp;
    return string_to_L_PACKET(str, &rTemp, endptr);
}

SimTypeUtils _Type_L_PACKET_Utils = {
    L_PACKET_to_string,
    check_L_PACKET_string,
    string_to_L_PACKET,
    is_L_PACKET_double_convertion_allowed,
    L_PACKET_to_double,
    compare_L_PACKET,
    get_L_PACKET_signature,
    set_L_PACKET_default_value,
    sizeof(L_PACKET)
};

/****************************************************************
 ** T_CYCLOC 
 ****************************************************************/

struct SimTypeVTable *pSimT_CYCLOCVTable;

int T_CYCLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimT_CYCLOCVTable != NULL
        && pSimT_CYCLOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_CYCLOCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_T_CYCLOC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimT_CYCLOCVTable != NULL) {
        nRet=string_to_VTable(str, pSimT_CYCLOCVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_T_CYCLOC_double_convertion_allowed()
{
    if (pSimT_CYCLOCVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimT_CYCLOCVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_T_CYCLOC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimT_CYCLOCVTable != NULL
        && pSimT_CYCLOCVTable->m_version >= Scv612
        && pSimT_CYCLOCVTable->m_pfnCompare != NULL) {
        if (pSimT_CYCLOCVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimT_CYCLOCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimT_CYCLOCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int T_CYCLOC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimT_CYCLOCVTable != NULL) {
        return VTable_to_double(pValue, pSimT_CYCLOCVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_T_CYCLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_T_CYCLOC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_T_CYCLOC_string(const char *str, char **endptr)
{
    static T_CYCLOC rTemp;
    return string_to_T_CYCLOC(str, &rTemp, endptr);
}

SimTypeUtils _Type_T_CYCLOC_Utils = {
    T_CYCLOC_to_string,
    check_T_CYCLOC_string,
    string_to_T_CYCLOC,
    is_T_CYCLOC_double_convertion_allowed,
    T_CYCLOC_to_double,
    compare_T_CYCLOC,
    get_T_CYCLOC_signature,
    set_T_CYCLOC_default_value,
    sizeof(T_CYCLOC)
};

/****************************************************************
 ** D_CYCLOC 
 ****************************************************************/

struct SimTypeVTable *pSimD_CYCLOCVTable;

int D_CYCLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_CYCLOCVTable != NULL
        && pSimD_CYCLOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_CYCLOCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_CYCLOC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_CYCLOCVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_CYCLOCVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_CYCLOC_double_convertion_allowed()
{
    if (pSimD_CYCLOCVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimD_CYCLOCVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_D_CYCLOC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_CYCLOCVTable != NULL
        && pSimD_CYCLOCVTable->m_version >= Scv612
        && pSimD_CYCLOCVTable->m_pfnCompare != NULL) {
        if (pSimD_CYCLOCVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_CYCLOCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_CYCLOCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_CYCLOC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_CYCLOCVTable != NULL) {
        return VTable_to_double(pValue, pSimD_CYCLOCVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_D_CYCLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_CYCLOC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_CYCLOC_string(const char *str, char **endptr)
{
    static D_CYCLOC rTemp;
    return string_to_D_CYCLOC(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_CYCLOC_Utils = {
    D_CYCLOC_to_string,
    check_D_CYCLOC_string,
    string_to_D_CYCLOC,
    is_D_CYCLOC_double_convertion_allowed,
    D_CYCLOC_to_double,
    compare_D_CYCLOC,
    get_D_CYCLOC_signature,
    set_D_CYCLOC_default_value,
    sizeof(D_CYCLOC)
};

/****************************************************************
 ** M_LOC 
 ****************************************************************/

struct SimTypeVTable *pSimM_LOCVTable;

static SimEnumValUtils M_LOC_values[] = {
    { "M_LOC_Now", M_LOC_Now},
    { "M_LOC_Now", M_LOC_Now},
    { "M_LOC_Every_LRBG_compliant_balise_group", M_LOC_Every_LRBG_compliant_balise_group},
    { "M_LOC_Every_LRBG_compliant_balise_group", M_LOC_Every_LRBG_compliant_balise_group},
    { "M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group", M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group},
    { "M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group", M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group},
};

int M_LOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_LOCVTable != NULL
        && pSimM_LOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_LOCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_LOC*)pValue, M_LOC_values, 6, pfnStrAppend, pData);
}

int string_to_M_LOC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_LOCVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_LOCVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_LOC_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_LOC*)pValue = nTemp;
    }
    return nRet;
}

int is_M_LOC_double_convertion_allowed()
{
    if (pSimM_LOCVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_LOCVTable);
    }
    return 1;
}

void compare_M_LOC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_LOCVTable != NULL
        && pSimM_LOCVTable->m_version >= Scv612
        && pSimM_LOCVTable->m_pfnCompare != NULL) {
        if (pSimM_LOCVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_LOCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_LOCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_LOC*)pValue1), (int)(*(M_LOC*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_LOC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_LOCVTable != NULL) {
        return VTable_to_double(pValue, pSimM_LOCVTable, nRetValue);
    }
    *nRetValue = (double)*((M_LOC*)pValue);
    return 1;
}

int get_M_LOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_LOC_values, 6, pfnStrAppend, pData);
}

int set_M_LOC_default_value(void *pValue)
{
    *(M_LOC*)pValue = M_LOC_Now;
    return 1;
}

int check_M_LOC_string(const char *str, char **endptr)
{
    static M_LOC rTemp;
    return string_to_M_LOC(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_LOC_Utils = {
    M_LOC_to_string,
    check_M_LOC_string,
    string_to_M_LOC,
    is_M_LOC_double_convertion_allowed,
    M_LOC_to_double,
    compare_M_LOC,
    get_M_LOC_signature,
    set_M_LOC_default_value,
    sizeof(M_LOC)
};

/****************************************************************
 ** N_ITER 
 ****************************************************************/

struct SimTypeVTable *pSimN_ITERVTable;

int N_ITER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimN_ITERVTable != NULL
        && pSimN_ITERVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_ITERVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_N_ITER(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimN_ITERVTable != NULL) {
        nRet=string_to_VTable(str, pSimN_ITERVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_N_ITER_double_convertion_allowed()
{
    if (pSimN_ITERVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimN_ITERVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_N_ITER(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimN_ITERVTable != NULL
        && pSimN_ITERVTable->m_version >= Scv612
        && pSimN_ITERVTable->m_pfnCompare != NULL) {
        if (pSimN_ITERVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimN_ITERVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimN_ITERVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int N_ITER_to_double(const void *pValue, double *nRetValue)
{
    if (pSimN_ITERVTable != NULL) {
        return VTable_to_double(pValue, pSimN_ITERVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_N_ITER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_N_ITER_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_N_ITER_string(const char *str, char **endptr)
{
    static N_ITER rTemp;
    return string_to_N_ITER(str, &rTemp, endptr);
}

SimTypeUtils _Type_N_ITER_Utils = {
    N_ITER_to_string,
    check_N_ITER_string,
    string_to_N_ITER,
    is_N_ITER_double_convertion_allowed,
    N_ITER_to_double,
    compare_N_ITER,
    get_N_ITER_signature,
    set_N_ITER_default_value,
    sizeof(N_ITER)
};

/****************************************************************
 ** D_LOC 
 ****************************************************************/

struct SimTypeVTable *pSimD_LOCVTable;

int D_LOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_LOCVTable != NULL
        && pSimD_LOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_LOCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_LOC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_LOCVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_LOCVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_LOC_double_convertion_allowed()
{
    if (pSimD_LOCVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimD_LOCVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_D_LOC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_LOCVTable != NULL
        && pSimD_LOCVTable->m_version >= Scv612
        && pSimD_LOCVTable->m_pfnCompare != NULL) {
        if (pSimD_LOCVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_LOCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_LOCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_LOC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_LOCVTable != NULL) {
        return VTable_to_double(pValue, pSimD_LOCVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_D_LOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_LOC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_LOC_string(const char *str, char **endptr)
{
    static D_LOC rTemp;
    return string_to_D_LOC(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_LOC_Utils = {
    D_LOC_to_string,
    check_D_LOC_string,
    string_to_D_LOC,
    is_D_LOC_double_convertion_allowed,
    D_LOC_to_double,
    compare_D_LOC,
    get_D_LOC_signature,
    set_D_LOC_default_value,
    sizeof(D_LOC)
};

/****************************************************************
 ** Q_LGTLOC 
 ****************************************************************/

struct SimTypeVTable *pSimQ_LGTLOCVTable;

static SimEnumValUtils Q_LGTLOC_values[] = {
    { "Q_LGTLOC_Min_safe_rear_end", Q_LGTLOC_Min_safe_rear_end},
    { "Q_LGTLOC_Min_safe_rear_end", Q_LGTLOC_Min_safe_rear_end},
    { "Q_LGTLOC_Max_safe_front_end", Q_LGTLOC_Max_safe_front_end},
    { "Q_LGTLOC_Max_safe_front_end", Q_LGTLOC_Max_safe_front_end},
};

int Q_LGTLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LGTLOCVTable != NULL
        && pSimQ_LGTLOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LGTLOCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_LGTLOC*)pValue, Q_LGTLOC_values, 4, pfnStrAppend, pData);
}

int string_to_Q_LGTLOC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_LGTLOCVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_LGTLOCVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LGTLOC_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LGTLOC*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_LGTLOC_double_convertion_allowed()
{
    if (pSimQ_LGTLOCVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_LGTLOCVTable);
    }
    return 1;
}

void compare_Q_LGTLOC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_LGTLOCVTable != NULL
        && pSimQ_LGTLOCVTable->m_version >= Scv612
        && pSimQ_LGTLOCVTable->m_pfnCompare != NULL) {
        if (pSimQ_LGTLOCVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LGTLOCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_LGTLOCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_LGTLOC*)pValue1), (int)(*(Q_LGTLOC*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_LGTLOC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_LGTLOCVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LGTLOCVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_LGTLOC*)pValue);
    return 1;
}

int get_Q_LGTLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_LGTLOC_values, 4, pfnStrAppend, pData);
}

int set_Q_LGTLOC_default_value(void *pValue)
{
    *(Q_LGTLOC*)pValue = Q_LGTLOC_Min_safe_rear_end;
    return 1;
}

int check_Q_LGTLOC_string(const char *str, char **endptr)
{
    static Q_LGTLOC rTemp;
    return string_to_Q_LGTLOC(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_LGTLOC_Utils = {
    Q_LGTLOC_to_string,
    check_Q_LGTLOC_string,
    string_to_Q_LGTLOC,
    is_Q_LGTLOC_double_convertion_allowed,
    Q_LGTLOC_to_double,
    compare_Q_LGTLOC,
    get_Q_LGTLOC_signature,
    set_Q_LGTLOC_default_value,
    sizeof(Q_LGTLOC)
};

/****************************************************************
 ** Q_RBC 
 ****************************************************************/

struct SimTypeVTable *pSimQ_RBCVTable;

static SimEnumValUtils Q_RBC_values[] = {
    { "Q_RBC_Terminate_communication_session", Q_RBC_Terminate_communication_session},
    { "Q_RBC_Terminate_communication_session", Q_RBC_Terminate_communication_session},
    { "Q_RBC_Establish_communication_session", Q_RBC_Establish_communication_session},
    { "Q_RBC_Establish_communication_session", Q_RBC_Establish_communication_session},
};

int Q_RBC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_RBCVTable != NULL
        && pSimQ_RBCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_RBCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_RBC*)pValue, Q_RBC_values, 4, pfnStrAppend, pData);
}

int string_to_Q_RBC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_RBCVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_RBCVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_RBC_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_RBC*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_RBC_double_convertion_allowed()
{
    if (pSimQ_RBCVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_RBCVTable);
    }
    return 1;
}

void compare_Q_RBC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_RBCVTable != NULL
        && pSimQ_RBCVTable->m_version >= Scv612
        && pSimQ_RBCVTable->m_pfnCompare != NULL) {
        if (pSimQ_RBCVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_RBCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_RBCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_RBC*)pValue1), (int)(*(Q_RBC*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_RBC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_RBCVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_RBCVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_RBC*)pValue);
    return 1;
}

int get_Q_RBC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_RBC_values, 4, pfnStrAppend, pData);
}

int set_Q_RBC_default_value(void *pValue)
{
    *(Q_RBC*)pValue = Q_RBC_Terminate_communication_session;
    return 1;
}

int check_Q_RBC_string(const char *str, char **endptr)
{
    static Q_RBC rTemp;
    return string_to_Q_RBC(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_RBC_Utils = {
    Q_RBC_to_string,
    check_Q_RBC_string,
    string_to_Q_RBC,
    is_Q_RBC_double_convertion_allowed,
    Q_RBC_to_double,
    compare_Q_RBC,
    get_Q_RBC_signature,
    set_Q_RBC_default_value,
    sizeof(Q_RBC)
};

/****************************************************************
 ** NID_RBC 
 ****************************************************************/

struct SimTypeVTable *pSimNID_RBCVTable;

int NID_RBC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_RBCVTable != NULL
        && pSimNID_RBCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_RBCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_RBC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_RBCVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_RBCVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_RBC_double_convertion_allowed()
{
    if (pSimNID_RBCVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_RBCVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_RBC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_RBCVTable != NULL
        && pSimNID_RBCVTable->m_version >= Scv612
        && pSimNID_RBCVTable->m_pfnCompare != NULL) {
        if (pSimNID_RBCVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_RBCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_RBCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_RBC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_RBCVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_RBCVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_RBC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_RBC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_RBC_string(const char *str, char **endptr)
{
    static NID_RBC rTemp;
    return string_to_NID_RBC(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_RBC_Utils = {
    NID_RBC_to_string,
    check_NID_RBC_string,
    string_to_NID_RBC,
    is_NID_RBC_double_convertion_allowed,
    NID_RBC_to_double,
    compare_NID_RBC,
    get_NID_RBC_signature,
    set_NID_RBC_default_value,
    sizeof(NID_RBC)
};

/****************************************************************
 ** NID_RADIO 
 ****************************************************************/

struct SimTypeVTable *pSimNID_RADIOVTable;

int NID_RADIO_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_RADIOVTable != NULL
        && pSimNID_RADIOVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_RADIOVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_RADIO(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_RADIOVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_RADIOVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_RADIO_double_convertion_allowed()
{
    if (pSimNID_RADIOVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_RADIOVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_RADIO(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_RADIOVTable != NULL
        && pSimNID_RADIOVTable->m_version >= Scv612
        && pSimNID_RADIOVTable->m_pfnCompare != NULL) {
        if (pSimNID_RADIOVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_RADIOVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_RADIOVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_RADIO_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_RADIOVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_RADIOVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_RADIO_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_RADIO_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_RADIO_string(const char *str, char **endptr)
{
    static NID_RADIO rTemp;
    return string_to_NID_RADIO(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_RADIO_Utils = {
    NID_RADIO_to_string,
    check_NID_RADIO_string,
    string_to_NID_RADIO,
    is_NID_RADIO_double_convertion_allowed,
    NID_RADIO_to_double,
    compare_NID_RADIO,
    get_NID_RADIO_signature,
    set_NID_RADIO_default_value,
    sizeof(NID_RADIO)
};

/****************************************************************
 ** Q_SLEEPSESSION 
 ****************************************************************/

struct SimTypeVTable *pSimQ_SLEEPSESSIONVTable;

static SimEnumValUtils Q_SLEEPSESSION_values[] = {
    { "Q_SLEEPSESSION_Ignore_session_establishment_order", Q_SLEEPSESSION_Ignore_session_establishment_order},
    { "Q_SLEEPSESSION_Ignore_session_establishment_order", Q_SLEEPSESSION_Ignore_session_establishment_order},
    { "Q_SLEEPSESSION_Execute_session_establishment_order", Q_SLEEPSESSION_Execute_session_establishment_order},
    { "Q_SLEEPSESSION_Execute_session_establishment_order", Q_SLEEPSESSION_Execute_session_establishment_order},
};

int Q_SLEEPSESSION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_SLEEPSESSIONVTable != NULL
        && pSimQ_SLEEPSESSIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_SLEEPSESSIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_SLEEPSESSION*)pValue, Q_SLEEPSESSION_values, 4, pfnStrAppend, pData);
}

int string_to_Q_SLEEPSESSION(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_SLEEPSESSIONVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_SLEEPSESSIONVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_SLEEPSESSION_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_SLEEPSESSION*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_SLEEPSESSION_double_convertion_allowed()
{
    if (pSimQ_SLEEPSESSIONVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_SLEEPSESSIONVTable);
    }
    return 1;
}

void compare_Q_SLEEPSESSION(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_SLEEPSESSIONVTable != NULL
        && pSimQ_SLEEPSESSIONVTable->m_version >= Scv612
        && pSimQ_SLEEPSESSIONVTable->m_pfnCompare != NULL) {
        if (pSimQ_SLEEPSESSIONVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_SLEEPSESSIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_SLEEPSESSIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_SLEEPSESSION*)pValue1), (int)(*(Q_SLEEPSESSION*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_SLEEPSESSION_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_SLEEPSESSIONVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_SLEEPSESSIONVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_SLEEPSESSION*)pValue);
    return 1;
}

int get_Q_SLEEPSESSION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_SLEEPSESSION_values, 4, pfnStrAppend, pData);
}

int set_Q_SLEEPSESSION_default_value(void *pValue)
{
    *(Q_SLEEPSESSION*)pValue = Q_SLEEPSESSION_Ignore_session_establishment_order;
    return 1;
}

int check_Q_SLEEPSESSION_string(const char *str, char **endptr)
{
    static Q_SLEEPSESSION rTemp;
    return string_to_Q_SLEEPSESSION(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_SLEEPSESSION_Utils = {
    Q_SLEEPSESSION_to_string,
    check_Q_SLEEPSESSION_string,
    string_to_Q_SLEEPSESSION,
    is_Q_SLEEPSESSION_double_convertion_allowed,
    Q_SLEEPSESSION_to_double,
    compare_Q_SLEEPSESSION,
    get_Q_SLEEPSESSION_signature,
    set_Q_SLEEPSESSION_default_value,
    sizeof(Q_SLEEPSESSION)
};

/****************************************************************
 ** NID_MN 
 ****************************************************************/

struct SimTypeVTable *pSimNID_MNVTable;

int NID_MN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_MNVTable != NULL
        && pSimNID_MNVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_MNVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_MN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_MNVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_MNVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_MN_double_convertion_allowed()
{
    if (pSimNID_MNVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_MNVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_MN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_MNVTable != NULL
        && pSimNID_MNVTable->m_version >= Scv612
        && pSimNID_MNVTable->m_pfnCompare != NULL) {
        if (pSimNID_MNVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_MNVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_MNVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_MN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_MNVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_MNVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_MN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_MN_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_MN_string(const char *str, char **endptr)
{
    static NID_MN rTemp;
    return string_to_NID_MN(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_MN_Utils = {
    NID_MN_to_string,
    check_NID_MN_string,
    string_to_NID_MN,
    is_NID_MN_double_convertion_allowed,
    NID_MN_to_double,
    compare_NID_MN,
    get_NID_MN_signature,
    set_NID_MN_default_value,
    sizeof(NID_MN)
};

/****************************************************************
 ** M_LEVEL 
 ****************************************************************/

struct SimTypeVTable *pSimM_LEVELVTable;

static SimEnumValUtils M_LEVEL_values[] = {
    { "M_LEVEL_Level_0", M_LEVEL_Level_0},
    { "M_LEVEL_Level_0", M_LEVEL_Level_0},
    { "M_LEVEL_Level_NTC_specified_by_NID_NTC", M_LEVEL_Level_NTC_specified_by_NID_NTC},
    { "M_LEVEL_Level_NTC_specified_by_NID_NTC", M_LEVEL_Level_NTC_specified_by_NID_NTC},
    { "M_LEVEL_Level_1", M_LEVEL_Level_1},
    { "M_LEVEL_Level_1", M_LEVEL_Level_1},
    { "M_LEVEL_Level_2", M_LEVEL_Level_2},
    { "M_LEVEL_Level_2", M_LEVEL_Level_2},
    { "M_LEVEL_Level_3", M_LEVEL_Level_3},
    { "M_LEVEL_Level_3", M_LEVEL_Level_3},
};

int M_LEVEL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_LEVELVTable != NULL
        && pSimM_LEVELVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_LEVELVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_LEVEL*)pValue, M_LEVEL_values, 10, pfnStrAppend, pData);
}

int string_to_M_LEVEL(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_LEVELVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_LEVELVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_LEVEL_values, 10, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_LEVEL*)pValue = nTemp;
    }
    return nRet;
}

int is_M_LEVEL_double_convertion_allowed()
{
    if (pSimM_LEVELVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_LEVELVTable);
    }
    return 1;
}

void compare_M_LEVEL(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_LEVELVTable != NULL
        && pSimM_LEVELVTable->m_version >= Scv612
        && pSimM_LEVELVTable->m_pfnCompare != NULL) {
        if (pSimM_LEVELVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_LEVELVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_LEVELVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_LEVEL*)pValue1), (int)(*(M_LEVEL*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_LEVEL_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_LEVELVTable != NULL) {
        return VTable_to_double(pValue, pSimM_LEVELVTable, nRetValue);
    }
    *nRetValue = (double)*((M_LEVEL*)pValue);
    return 1;
}

int get_M_LEVEL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_LEVEL_values, 10, pfnStrAppend, pData);
}

int set_M_LEVEL_default_value(void *pValue)
{
    *(M_LEVEL*)pValue = M_LEVEL_Level_0;
    return 1;
}

int check_M_LEVEL_string(const char *str, char **endptr)
{
    static M_LEVEL rTemp;
    return string_to_M_LEVEL(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_LEVEL_Utils = {
    M_LEVEL_to_string,
    check_M_LEVEL_string,
    string_to_M_LEVEL,
    is_M_LEVEL_double_convertion_allowed,
    M_LEVEL_to_double,
    compare_M_LEVEL,
    get_M_LEVEL_signature,
    set_M_LEVEL_default_value,
    sizeof(M_LEVEL)
};

/****************************************************************
 ** ReceivedBG_CheckBGInputChannel_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimReceivedBG_CheckBGInputChannel_PkgVTable;

int ReceivedBG_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != NULL
        && pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18424_to_string(pValue, pfnStrAppend, pData);
}

int string_to_ReceivedBG_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimReceivedBG_CheckBGInputChannel_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18424(str, pValue, endptr);
    }
    return nRet;
}

int is_ReceivedBG_CheckBGInputChannel_Pkg_double_convertion_allowed()
{
    if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimReceivedBG_CheckBGInputChannel_PkgVTable);
    }
    return is_struct__18424_double_convertion_allowed();
}

void compare_ReceivedBG_CheckBGInputChannel_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != NULL
        && pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_version >= Scv612
        && pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnCompare != NULL) {
        if (pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18424(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int ReceivedBG_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimReceivedBG_CheckBGInputChannel_PkgVTable, nRetValue);
    }
    return struct__18424_to_double(pValue, nRetValue);
}

int get_ReceivedBG_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18424_signature(pfnStrAppend, pData);
}

int set_ReceivedBG_CheckBGInputChannel_Pkg_default_value(void *pValue)
{
    return set_struct__18424_default_value(pValue);
}

int check_ReceivedBG_CheckBGInputChannel_Pkg_string(const char *str, char **endptr)
{
    static ReceivedBG_CheckBGInputChannel_Pkg rTemp;
    return string_to_ReceivedBG_CheckBGInputChannel_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils = {
    ReceivedBG_CheckBGInputChannel_Pkg_to_string,
    check_ReceivedBG_CheckBGInputChannel_Pkg_string,
    string_to_ReceivedBG_CheckBGInputChannel_Pkg,
    is_ReceivedBG_CheckBGInputChannel_Pkg_double_convertion_allowed,
    ReceivedBG_CheckBGInputChannel_Pkg_to_double,
    compare_ReceivedBG_CheckBGInputChannel_Pkg,
    get_ReceivedBG_CheckBGInputChannel_Pkg_signature,
    set_ReceivedBG_CheckBGInputChannel_Pkg_default_value,
    sizeof(ReceivedBG_CheckBGInputChannel_Pkg)
};

/****************************************************************
 ** Completeness_CheckBGInputChannel_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimCompleteness_CheckBGInputChannel_PkgVTable;

int Completeness_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompleteness_CheckBGInputChannel_PkgVTable != NULL
        && pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_bool_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Completeness_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompleteness_CheckBGInputChannel_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompleteness_CheckBGInputChannel_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_bool(str, pValue, endptr);
    }
    return nRet;
}

int is_Completeness_CheckBGInputChannel_Pkg_double_convertion_allowed()
{
    if (pSimCompleteness_CheckBGInputChannel_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCompleteness_CheckBGInputChannel_PkgVTable);
    }
    return is_kcg_bool_double_convertion_allowed();
}

void compare_Completeness_CheckBGInputChannel_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompleteness_CheckBGInputChannel_PkgVTable != NULL
        && pSimCompleteness_CheckBGInputChannel_PkgVTable->m_version >= Scv612
        && pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnCompare != NULL) {
        if (pSimCompleteness_CheckBGInputChannel_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_bool(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Completeness_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompleteness_CheckBGInputChannel_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompleteness_CheckBGInputChannel_PkgVTable, nRetValue);
    }
    return kcg_bool_to_double(pValue, nRetValue);
}

int get_Completeness_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_bool_signature(pfnStrAppend, pData);
}

int set_Completeness_CheckBGInputChannel_Pkg_default_value(void *pValue)
{
    return set_kcg_bool_default_value(pValue);
}

int check_Completeness_CheckBGInputChannel_Pkg_string(const char *str, char **endptr)
{
    static Completeness_CheckBGInputChannel_Pkg rTemp;
    return string_to_Completeness_CheckBGInputChannel_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Completeness_CheckBGInputChannel_Pkg_Utils = {
    Completeness_CheckBGInputChannel_Pkg_to_string,
    check_Completeness_CheckBGInputChannel_Pkg_string,
    string_to_Completeness_CheckBGInputChannel_Pkg,
    is_Completeness_CheckBGInputChannel_Pkg_double_convertion_allowed,
    Completeness_CheckBGInputChannel_Pkg_to_double,
    compare_Completeness_CheckBGInputChannel_Pkg,
    get_Completeness_CheckBGInputChannel_Pkg_signature,
    set_Completeness_CheckBGInputChannel_Pkg_default_value,
    sizeof(Completeness_CheckBGInputChannel_Pkg)
};

/****************************************************************
 ** Consistency_CheckBGInputChannel_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimConsistency_CheckBGInputChannel_PkgVTable;

int Consistency_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimConsistency_CheckBGInputChannel_PkgVTable != NULL
        && pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_bool_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Consistency_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimConsistency_CheckBGInputChannel_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimConsistency_CheckBGInputChannel_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_bool(str, pValue, endptr);
    }
    return nRet;
}

int is_Consistency_CheckBGInputChannel_Pkg_double_convertion_allowed()
{
    if (pSimConsistency_CheckBGInputChannel_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimConsistency_CheckBGInputChannel_PkgVTable);
    }
    return is_kcg_bool_double_convertion_allowed();
}

void compare_Consistency_CheckBGInputChannel_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimConsistency_CheckBGInputChannel_PkgVTable != NULL
        && pSimConsistency_CheckBGInputChannel_PkgVTable->m_version >= Scv612
        && pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnCompare != NULL) {
        if (pSimConsistency_CheckBGInputChannel_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_bool(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Consistency_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimConsistency_CheckBGInputChannel_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimConsistency_CheckBGInputChannel_PkgVTable, nRetValue);
    }
    return kcg_bool_to_double(pValue, nRetValue);
}

int get_Consistency_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_bool_signature(pfnStrAppend, pData);
}

int set_Consistency_CheckBGInputChannel_Pkg_default_value(void *pValue)
{
    return set_kcg_bool_default_value(pValue);
}

int check_Consistency_CheckBGInputChannel_Pkg_string(const char *str, char **endptr)
{
    static Consistency_CheckBGInputChannel_Pkg rTemp;
    return string_to_Consistency_CheckBGInputChannel_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Consistency_CheckBGInputChannel_Pkg_Utils = {
    Consistency_CheckBGInputChannel_Pkg_to_string,
    check_Consistency_CheckBGInputChannel_Pkg_string,
    string_to_Consistency_CheckBGInputChannel_Pkg,
    is_Consistency_CheckBGInputChannel_Pkg_double_convertion_allowed,
    Consistency_CheckBGInputChannel_Pkg_to_double,
    compare_Consistency_CheckBGInputChannel_Pkg,
    get_Consistency_CheckBGInputChannel_Pkg_signature,
    set_Consistency_CheckBGInputChannel_Pkg_default_value,
    sizeof(Consistency_CheckBGInputChannel_Pkg)
};

/****************************************************************
 ** ReceivedBGs_CheckBGInputChannel_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimReceivedBGs_CheckBGInputChannel_PkgVTable;

int ReceivedBGs_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != NULL
        && pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18435_to_string(pValue, pfnStrAppend, pData);
}

int string_to_ReceivedBGs_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimReceivedBGs_CheckBGInputChannel_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18435(str, pValue, endptr);
    }
    return nRet;
}

int is_ReceivedBGs_CheckBGInputChannel_Pkg_double_convertion_allowed()
{
    if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimReceivedBGs_CheckBGInputChannel_PkgVTable);
    }
    return is_array__18435_double_convertion_allowed();
}

void compare_ReceivedBGs_CheckBGInputChannel_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != NULL
        && pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_version >= Scv612
        && pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnCompare != NULL) {
        if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18435(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int ReceivedBGs_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimReceivedBGs_CheckBGInputChannel_PkgVTable, nRetValue);
    }
    return array__18435_to_double(pValue, nRetValue);
}

int get_ReceivedBGs_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18435_signature(pfnStrAppend, pData);
}

int set_ReceivedBGs_CheckBGInputChannel_Pkg_default_value(void *pValue)
{
    return set_array__18435_default_value(pValue);
}

int check_ReceivedBGs_CheckBGInputChannel_Pkg_string(const char *str, char **endptr)
{
    static ReceivedBGs_CheckBGInputChannel_Pkg rTemp;
    return string_to_ReceivedBGs_CheckBGInputChannel_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_ReceivedBGs_CheckBGInputChannel_Pkg_Utils = {
    ReceivedBGs_CheckBGInputChannel_Pkg_to_string,
    check_ReceivedBGs_CheckBGInputChannel_Pkg_string,
    string_to_ReceivedBGs_CheckBGInputChannel_Pkg,
    is_ReceivedBGs_CheckBGInputChannel_Pkg_double_convertion_allowed,
    ReceivedBGs_CheckBGInputChannel_Pkg_to_double,
    compare_ReceivedBGs_CheckBGInputChannel_Pkg,
    get_ReceivedBGs_CheckBGInputChannel_Pkg_signature,
    set_ReceivedBGs_CheckBGInputChannel_Pkg_default_value,
    sizeof(ReceivedBGs_CheckBGInputChannel_Pkg)
};

/****************************************************************
 ** checkedBG_CheckBGInputChannel_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimcheckedBG_CheckBGInputChannel_PkgVTable;

int checkedBG_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimcheckedBG_CheckBGInputChannel_PkgVTable != NULL
        && pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18414_to_string(pValue, pfnStrAppend, pData);
}

int string_to_checkedBG_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimcheckedBG_CheckBGInputChannel_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimcheckedBG_CheckBGInputChannel_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18414(str, pValue, endptr);
    }
    return nRet;
}

int is_checkedBG_CheckBGInputChannel_Pkg_double_convertion_allowed()
{
    if (pSimcheckedBG_CheckBGInputChannel_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimcheckedBG_CheckBGInputChannel_PkgVTable);
    }
    return is_struct__18414_double_convertion_allowed();
}

void compare_checkedBG_CheckBGInputChannel_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimcheckedBG_CheckBGInputChannel_PkgVTable != NULL
        && pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_version >= Scv612
        && pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnCompare != NULL) {
        if (pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18414(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int checkedBG_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimcheckedBG_CheckBGInputChannel_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimcheckedBG_CheckBGInputChannel_PkgVTable, nRetValue);
    }
    return struct__18414_to_double(pValue, nRetValue);
}

int get_checkedBG_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18414_signature(pfnStrAppend, pData);
}

int set_checkedBG_CheckBGInputChannel_Pkg_default_value(void *pValue)
{
    return set_struct__18414_default_value(pValue);
}

int check_checkedBG_CheckBGInputChannel_Pkg_string(const char *str, char **endptr)
{
    static checkedBG_CheckBGInputChannel_Pkg rTemp;
    return string_to_checkedBG_CheckBGInputChannel_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_checkedBG_CheckBGInputChannel_Pkg_Utils = {
    checkedBG_CheckBGInputChannel_Pkg_to_string,
    check_checkedBG_CheckBGInputChannel_Pkg_string,
    string_to_checkedBG_CheckBGInputChannel_Pkg,
    is_checkedBG_CheckBGInputChannel_Pkg_double_convertion_allowed,
    checkedBG_CheckBGInputChannel_Pkg_to_double,
    compare_checkedBG_CheckBGInputChannel_Pkg,
    get_checkedBG_CheckBGInputChannel_Pkg_signature,
    set_checkedBG_CheckBGInputChannel_Pkg_default_value,
    sizeof(checkedBG_CheckBGInputChannel_Pkg)
};

/****************************************************************
 ** delaytime_T_CheckBGInputChannel_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimdelaytime_T_CheckBGInputChannel_PkgVTable;

int delaytime_T_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable != NULL
        && pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_delaytime_T_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimdelaytime_T_CheckBGInputChannel_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_delaytime_T_CheckBGInputChannel_Pkg_double_convertion_allowed()
{
    if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimdelaytime_T_CheckBGInputChannel_PkgVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_delaytime_T_CheckBGInputChannel_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable != NULL
        && pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_version >= Scv612
        && pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnCompare != NULL) {
        if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int delaytime_T_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimdelaytime_T_CheckBGInputChannel_PkgVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_delaytime_T_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_delaytime_T_CheckBGInputChannel_Pkg_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_delaytime_T_CheckBGInputChannel_Pkg_string(const char *str, char **endptr)
{
    static delaytime_T_CheckBGInputChannel_Pkg rTemp;
    return string_to_delaytime_T_CheckBGInputChannel_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_delaytime_T_CheckBGInputChannel_Pkg_Utils = {
    delaytime_T_CheckBGInputChannel_Pkg_to_string,
    check_delaytime_T_CheckBGInputChannel_Pkg_string,
    string_to_delaytime_T_CheckBGInputChannel_Pkg,
    is_delaytime_T_CheckBGInputChannel_Pkg_double_convertion_allowed,
    delaytime_T_CheckBGInputChannel_Pkg_to_double,
    compare_delaytime_T_CheckBGInputChannel_Pkg,
    get_delaytime_T_CheckBGInputChannel_Pkg_signature,
    set_delaytime_T_CheckBGInputChannel_Pkg_default_value,
    sizeof(delaytime_T_CheckBGInputChannel_Pkg)
};

/****************************************************************
 ** outBGchecks_CheckBGInputChannel_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimoutBGchecks_CheckBGInputChannel_PkgVTable;

int outBGchecks_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable != NULL
        && pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18432_to_string(pValue, pfnStrAppend, pData);
}

int string_to_outBGchecks_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimoutBGchecks_CheckBGInputChannel_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18432(str, pValue, endptr);
    }
    return nRet;
}

int is_outBGchecks_CheckBGInputChannel_Pkg_double_convertion_allowed()
{
    if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimoutBGchecks_CheckBGInputChannel_PkgVTable);
    }
    return is_array__18432_double_convertion_allowed();
}

void compare_outBGchecks_CheckBGInputChannel_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable != NULL
        && pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_version >= Scv612
        && pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnCompare != NULL) {
        if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18432(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int outBGchecks_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimoutBGchecks_CheckBGInputChannel_PkgVTable, nRetValue);
    }
    return array__18432_to_double(pValue, nRetValue);
}

int get_outBGchecks_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18432_signature(pfnStrAppend, pData);
}

int set_outBGchecks_CheckBGInputChannel_Pkg_default_value(void *pValue)
{
    return set_array__18432_default_value(pValue);
}

int check_outBGchecks_CheckBGInputChannel_Pkg_string(const char *str, char **endptr)
{
    static outBGchecks_CheckBGInputChannel_Pkg rTemp;
    return string_to_outBGchecks_CheckBGInputChannel_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_outBGchecks_CheckBGInputChannel_Pkg_Utils = {
    outBGchecks_CheckBGInputChannel_Pkg_to_string,
    check_outBGchecks_CheckBGInputChannel_Pkg_string,
    string_to_outBGchecks_CheckBGInputChannel_Pkg,
    is_outBGchecks_CheckBGInputChannel_Pkg_double_convertion_allowed,
    outBGchecks_CheckBGInputChannel_Pkg_to_double,
    compare_outBGchecks_CheckBGInputChannel_Pkg,
    get_outBGchecks_CheckBGInputChannel_Pkg_signature,
    set_outBGchecks_CheckBGInputChannel_Pkg_default_value,
    sizeof(outBGchecks_CheckBGInputChannel_Pkg)
};

/****************************************************************
 ** BGCollector_T_Receive_TrackSide_Msg_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable;

int BGCollector_T_Receive_TrackSide_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL
        && pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18391_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BGCollector_T_Receive_TrackSide_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18391(str, pValue, endptr);
    }
    return nRet;
}

int is_BGCollector_T_Receive_TrackSide_Msg_Pkg_double_convertion_allowed()
{
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable);
    }
    return is_struct__18391_double_convertion_allowed();
}

void compare_BGCollector_T_Receive_TrackSide_Msg_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL
        && pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_version >= Scv612
        && pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare != NULL) {
        if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18391(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BGCollector_T_Receive_TrackSide_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable, nRetValue);
    }
    return struct__18391_to_double(pValue, nRetValue);
}

int get_BGCollector_T_Receive_TrackSide_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18391_signature(pfnStrAppend, pData);
}

int set_BGCollector_T_Receive_TrackSide_Msg_Pkg_default_value(void *pValue)
{
    return set_struct__18391_default_value(pValue);
}

int check_BGCollector_T_Receive_TrackSide_Msg_Pkg_string(const char *str, char **endptr)
{
    static BGCollector_T_Receive_TrackSide_Msg_Pkg rTemp;
    return string_to_BGCollector_T_Receive_TrackSide_Msg_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils = {
    BGCollector_T_Receive_TrackSide_Msg_Pkg_to_string,
    check_BGCollector_T_Receive_TrackSide_Msg_Pkg_string,
    string_to_BGCollector_T_Receive_TrackSide_Msg_Pkg,
    is_BGCollector_T_Receive_TrackSide_Msg_Pkg_double_convertion_allowed,
    BGCollector_T_Receive_TrackSide_Msg_Pkg_to_double,
    compare_BGCollector_T_Receive_TrackSide_Msg_Pkg,
    get_BGCollector_T_Receive_TrackSide_Msg_Pkg_signature,
    set_BGCollector_T_Receive_TrackSide_Msg_Pkg_default_value,
    sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg)
};

/****************************************************************
 ** TelegramStore_T_Receive_TrackSide_Msg_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable;

int TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL
        && pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18402_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TelegramStore_T_Receive_TrackSide_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18402(str, pValue, endptr);
    }
    return nRet;
}

int is_TelegramStore_T_Receive_TrackSide_Msg_Pkg_double_convertion_allowed()
{
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable);
    }
    return is_struct__18402_double_convertion_allowed();
}

void compare_TelegramStore_T_Receive_TrackSide_Msg_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL
        && pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_version >= Scv612
        && pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare != NULL) {
        if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18402(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable, nRetValue);
    }
    return struct__18402_to_double(pValue, nRetValue);
}

int get_TelegramStore_T_Receive_TrackSide_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18402_signature(pfnStrAppend, pData);
}

int set_TelegramStore_T_Receive_TrackSide_Msg_Pkg_default_value(void *pValue)
{
    return set_struct__18402_default_value(pValue);
}

int check_TelegramStore_T_Receive_TrackSide_Msg_Pkg_string(const char *str, char **endptr)
{
    static TelegramStore_T_Receive_TrackSide_Msg_Pkg rTemp;
    return string_to_TelegramStore_T_Receive_TrackSide_Msg_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_TelegramStore_T_Receive_TrackSide_Msg_Pkg_Utils = {
    TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_string,
    check_TelegramStore_T_Receive_TrackSide_Msg_Pkg_string,
    string_to_TelegramStore_T_Receive_TrackSide_Msg_Pkg,
    is_TelegramStore_T_Receive_TrackSide_Msg_Pkg_double_convertion_allowed,
    TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_double,
    compare_TelegramStore_T_Receive_TrackSide_Msg_Pkg,
    get_TelegramStore_T_Receive_TrackSide_Msg_Pkg_signature,
    set_TelegramStore_T_Receive_TrackSide_Msg_Pkg_default_value,
    sizeof(TelegramStore_T_Receive_TrackSide_Msg_Pkg)
};

/****************************************************************
 ** MsgSource_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimMsgSource_T_Common_Types_PkgVTable;

static SimEnumValUtils MsgSource_T_Common_Types_Pkg_values[] = {
    { "Common_Types_Pkg::msrc_undefined", msrc_undefined_Common_Types_Pkg},
    { "msrc_undefined", msrc_undefined_Common_Types_Pkg},
    { "Common_Types_Pkg::msrc_Euroradio", msrc_Euroradio_Common_Types_Pkg},
    { "msrc_Euroradio", msrc_Euroradio_Common_Types_Pkg},
    { "Common_Types_Pkg::msrc_Eurobalise", msrc_Eurobalise_Common_Types_Pkg},
    { "msrc_Eurobalise", msrc_Eurobalise_Common_Types_Pkg},
    { "Common_Types_Pkg::msrc_RadioInfillUnit", msrc_RadioInfillUnit_Common_Types_Pkg},
    { "msrc_RadioInfillUnit", msrc_RadioInfillUnit_Common_Types_Pkg},
    { "Common_Types_Pkg::msrc_OBU", msrc_OBU_Common_Types_Pkg},
    { "msrc_OBU", msrc_OBU_Common_Types_Pkg},
};

int MsgSource_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL
        && pSimMsgSource_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMsgSource_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(MsgSource_T_Common_Types_Pkg*)pValue, MsgSource_T_Common_Types_Pkg_values, 10, pfnStrAppend, pData);
}

int string_to_MsgSource_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMsgSource_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, MsgSource_T_Common_Types_Pkg_values, 10, endptr);
        if (pValue != NULL && nRet != 0)
            *(MsgSource_T_Common_Types_Pkg*)pValue = nTemp;
    }
    return nRet;
}

int is_MsgSource_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMsgSource_T_Common_Types_PkgVTable);
    }
    return 1;
}

void compare_MsgSource_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL
        && pSimMsgSource_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMsgSource_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMsgSource_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMsgSource_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimMsgSource_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(MsgSource_T_Common_Types_Pkg*)pValue1), (int)(*(MsgSource_T_Common_Types_Pkg*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MsgSource_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMsgSource_T_Common_Types_PkgVTable, nRetValue);
    }
    *nRetValue = (double)*((MsgSource_T_Common_Types_Pkg*)pValue);
    return 1;
}

int get_MsgSource_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(MsgSource_T_Common_Types_Pkg_values, 10, pfnStrAppend, pData);
}

int set_MsgSource_T_Common_Types_Pkg_default_value(void *pValue)
{
    *(MsgSource_T_Common_Types_Pkg*)pValue = msrc_undefined_Common_Types_Pkg;
    return 1;
}

int check_MsgSource_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static MsgSource_T_Common_Types_Pkg rTemp;
    return string_to_MsgSource_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_MsgSource_T_Common_Types_Pkg_Utils = {
    MsgSource_T_Common_Types_Pkg_to_string,
    check_MsgSource_T_Common_Types_Pkg_string,
    string_to_MsgSource_T_Common_Types_Pkg,
    is_MsgSource_T_Common_Types_Pkg_double_convertion_allowed,
    MsgSource_T_Common_Types_Pkg_to_double,
    compare_MsgSource_T_Common_Types_Pkg,
    get_MsgSource_T_Common_Types_Pkg_signature,
    set_MsgSource_T_Common_Types_Pkg_default_value,
    sizeof(MsgSource_T_Common_Types_Pkg)
};

/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedPackets_T_Common_Types_PkgVTable;

int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18125_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18125(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__18125_double_convertion_allowed();
}

void compare_CompressedPackets_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18125(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__18125_to_double(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18125_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18125_default_value(pValue);
}

int check_CompressedPackets_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static CompressedPackets_T_Common_Types_Pkg rTemp;
    return string_to_CompressedPackets_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_CompressedPackets_T_Common_Types_Pkg_Utils = {
    CompressedPackets_T_Common_Types_Pkg_to_string,
    check_CompressedPackets_T_Common_Types_Pkg_string,
    string_to_CompressedPackets_T_Common_Types_Pkg,
    is_CompressedPackets_T_Common_Types_Pkg_double_convertion_allowed,
    CompressedPackets_T_Common_Types_Pkg_to_double,
    compare_CompressedPackets_T_Common_Types_Pkg,
    get_CompressedPackets_T_Common_Types_Pkg_signature,
    set_CompressedPackets_T_Common_Types_Pkg_default_value,
    sizeof(CompressedPackets_T_Common_Types_Pkg)
};

/****************************************************************
 ** Metadata_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimMetadata_T_Common_Types_PkgVTable;

int Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL
        && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18122_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18122(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__18122_double_convertion_allowed();
}

void compare_Metadata_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL
        && pSimMetadata_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMetadata_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18122(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__18122_to_double(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18122_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__18122_default_value(pValue);
}

int check_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static Metadata_T_Common_Types_Pkg rTemp;
    return string_to_Metadata_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Metadata_T_Common_Types_Pkg_Utils = {
    Metadata_T_Common_Types_Pkg_to_string,
    check_Metadata_T_Common_Types_Pkg_string,
    string_to_Metadata_T_Common_Types_Pkg,
    is_Metadata_T_Common_Types_Pkg_double_convertion_allowed,
    Metadata_T_Common_Types_Pkg_to_double,
    compare_Metadata_T_Common_Types_Pkg,
    get_Metadata_T_Common_Types_Pkg_signature,
    set_Metadata_T_Common_Types_Pkg_default_value,
    sizeof(Metadata_T_Common_Types_Pkg)
};

/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimMetadataElement_T_Common_Types_PkgVTable;

int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18114_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18114(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__18114_double_convertion_allowed();
}

void compare_MetadataElement_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMetadataElement_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18114(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__18114_to_double(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18114_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18114_default_value(pValue);
}

int check_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static MetadataElement_T_Common_Types_Pkg rTemp;
    return string_to_MetadataElement_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_MetadataElement_T_Common_Types_Pkg_Utils = {
    MetadataElement_T_Common_Types_Pkg_to_string,
    check_MetadataElement_T_Common_Types_Pkg_string,
    string_to_MetadataElement_T_Common_Types_Pkg,
    is_MetadataElement_T_Common_Types_Pkg_double_convertion_allowed,
    MetadataElement_T_Common_Types_Pkg_to_double,
    compare_MetadataElement_T_Common_Types_Pkg,
    get_MetadataElement_T_Common_Types_Pkg_signature,
    set_MetadataElement_T_Common_Types_Pkg_default_value,
    sizeof(MetadataElement_T_Common_Types_Pkg)
};

/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedPacketData_T_Common_Types_PkgVTable;

int CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_500_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPacketData_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_500(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPacketData_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCompressedPacketData_T_Common_Types_PkgVTable);
    }
    return is_array_int_500_double_convertion_allowed();
}

void compare_CompressedPacketData_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_500(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPacketData_T_Common_Types_PkgVTable, nRetValue);
    }
    return array_int_500_to_double(pValue, nRetValue);
}

int get_CompressedPacketData_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_500_signature(pfnStrAppend, pData);
}

int set_CompressedPacketData_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array_int_500_default_value(pValue);
}

int check_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static CompressedPacketData_T_Common_Types_Pkg rTemp;
    return string_to_CompressedPacketData_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_CompressedPacketData_T_Common_Types_Pkg_Utils = {
    CompressedPacketData_T_Common_Types_Pkg_to_string,
    check_CompressedPacketData_T_Common_Types_Pkg_string,
    string_to_CompressedPacketData_T_Common_Types_Pkg,
    is_CompressedPacketData_T_Common_Types_Pkg_double_convertion_allowed,
    CompressedPacketData_T_Common_Types_Pkg_to_double,
    compare_CompressedPacketData_T_Common_Types_Pkg,
    get_CompressedPacketData_T_Common_Types_Pkg_signature,
    set_CompressedPacketData_T_Common_Types_Pkg_default_value,
    sizeof(CompressedPacketData_T_Common_Types_Pkg)
};

/****************************************************************
 ** TrackSide_ForCheck_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimTrackSide_ForCheck_T_Common_Types_PkgVTable;

int TrackSide_ForCheck_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL
        && pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18383_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TrackSide_ForCheck_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTrackSide_ForCheck_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18383(str, pValue, endptr);
    }
    return nRet;
}

int is_TrackSide_ForCheck_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTrackSide_ForCheck_T_Common_Types_PkgVTable);
    }
    return is_struct__18383_double_convertion_allowed();
}

void compare_TrackSide_ForCheck_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL
        && pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18383(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TrackSide_ForCheck_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTrackSide_ForCheck_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__18383_to_double(pValue, nRetValue);
}

int get_TrackSide_ForCheck_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18383_signature(pfnStrAppend, pData);
}

int set_TrackSide_ForCheck_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18383_default_value(pValue);
}

int check_TrackSide_ForCheck_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static TrackSide_ForCheck_T_Common_Types_Pkg rTemp;
    return string_to_TrackSide_ForCheck_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_TrackSide_ForCheck_T_Common_Types_Pkg_Utils = {
    TrackSide_ForCheck_T_Common_Types_Pkg_to_string,
    check_TrackSide_ForCheck_T_Common_Types_Pkg_string,
    string_to_TrackSide_ForCheck_T_Common_Types_Pkg,
    is_TrackSide_ForCheck_T_Common_Types_Pkg_double_convertion_allowed,
    TrackSide_ForCheck_T_Common_Types_Pkg_to_double,
    compare_TrackSide_ForCheck_T_Common_Types_Pkg,
    get_TrackSide_ForCheck_T_Common_Types_Pkg_signature,
    set_TrackSide_ForCheck_T_Common_Types_Pkg_default_value,
    sizeof(TrackSide_ForCheck_T_Common_Types_Pkg)
};

/****************************************************************
 ** RadioMetadata_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRadioMetadata_T_Common_Types_PkgVTable;

int RadioMetadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL
        && pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18231_to_string(pValue, pfnStrAppend, pData);
}

int string_to_RadioMetadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRadioMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18231(str, pValue, endptr);
    }
    return nRet;
}

int is_RadioMetadata_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimRadioMetadata_T_Common_Types_PkgVTable);
    }
    return is_struct__18231_double_convertion_allowed();
}

void compare_RadioMetadata_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL
        && pSimRadioMetadata_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadioMetadata_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18231(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int RadioMetadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadioMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__18231_to_double(pValue, nRetValue);
}

int get_RadioMetadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18231_signature(pfnStrAppend, pData);
}

int set_RadioMetadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18231_default_value(pValue);
}

int check_RadioMetadata_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static RadioMetadata_T_Common_Types_Pkg rTemp;
    return string_to_RadioMetadata_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_RadioMetadata_T_Common_Types_Pkg_Utils = {
    RadioMetadata_T_Common_Types_Pkg_to_string,
    check_RadioMetadata_T_Common_Types_Pkg_string,
    string_to_RadioMetadata_T_Common_Types_Pkg,
    is_RadioMetadata_T_Common_Types_Pkg_double_convertion_allowed,
    RadioMetadata_T_Common_Types_Pkg_to_double,
    compare_RadioMetadata_T_Common_Types_Pkg,
    get_RadioMetadata_T_Common_Types_Pkg_signature,
    set_RadioMetadata_T_Common_Types_Pkg_default_value,
    sizeof(RadioMetadata_T_Common_Types_Pkg)
};

/****************************************************************
 ** ReceivedMessage_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimReceivedMessage_T_Common_Types_PkgVTable;

int ReceivedMessage_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL
        && pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18334_to_string(pValue, pfnStrAppend, pData);
}

int string_to_ReceivedMessage_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimReceivedMessage_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18334(str, pValue, endptr);
    }
    return nRet;
}

int is_ReceivedMessage_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimReceivedMessage_T_Common_Types_PkgVTable);
    }
    return is_struct__18334_double_convertion_allowed();
}

void compare_ReceivedMessage_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL
        && pSimReceivedMessage_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimReceivedMessage_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18334(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int ReceivedMessage_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimReceivedMessage_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__18334_to_double(pValue, nRetValue);
}

int get_ReceivedMessage_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18334_signature(pfnStrAppend, pData);
}

int set_ReceivedMessage_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18334_default_value(pValue);
}

int check_ReceivedMessage_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static ReceivedMessage_T_Common_Types_Pkg rTemp;
    return string_to_ReceivedMessage_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_ReceivedMessage_T_Common_Types_Pkg_Utils = {
    ReceivedMessage_T_Common_Types_Pkg_to_string,
    check_ReceivedMessage_T_Common_Types_Pkg_string,
    string_to_ReceivedMessage_T_Common_Types_Pkg,
    is_ReceivedMessage_T_Common_Types_Pkg_double_convertion_allowed,
    ReceivedMessage_T_Common_Types_Pkg_to_double,
    compare_ReceivedMessage_T_Common_Types_Pkg,
    get_ReceivedMessage_T_Common_Types_Pkg_signature,
    set_ReceivedMessage_T_Common_Types_Pkg_default_value,
    sizeof(ReceivedMessage_T_Common_Types_Pkg)
};

/****************************************************************
 ** PositionReportParameter_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimPositionReportParameter_T_Common_Types_PkgVTable;

int PositionReportParameter_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPositionReportParameter_T_Common_Types_PkgVTable != NULL
        && pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18327_to_string(pValue, pfnStrAppend, pData);
}

int string_to_PositionReportParameter_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPositionReportParameter_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimPositionReportParameter_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18327(str, pValue, endptr);
    }
    return nRet;
}

int is_PositionReportParameter_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimPositionReportParameter_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimPositionReportParameter_T_Common_Types_PkgVTable);
    }
    return is_struct__18327_double_convertion_allowed();
}

void compare_PositionReportParameter_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPositionReportParameter_T_Common_Types_PkgVTable != NULL
        && pSimPositionReportParameter_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPositionReportParameter_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18327(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int PositionReportParameter_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPositionReportParameter_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPositionReportParameter_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__18327_to_double(pValue, nRetValue);
}

int get_PositionReportParameter_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18327_signature(pfnStrAppend, pData);
}

int set_PositionReportParameter_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18327_default_value(pValue);
}

int check_PositionReportParameter_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static PositionReportParameter_T_Common_Types_Pkg rTemp;
    return string_to_PositionReportParameter_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_PositionReportParameter_T_Common_Types_Pkg_Utils = {
    PositionReportParameter_T_Common_Types_Pkg_to_string,
    check_PositionReportParameter_T_Common_Types_Pkg_string,
    string_to_PositionReportParameter_T_Common_Types_Pkg,
    is_PositionReportParameter_T_Common_Types_Pkg_double_convertion_allowed,
    PositionReportParameter_T_Common_Types_Pkg_to_double,
    compare_PositionReportParameter_T_Common_Types_Pkg,
    get_PositionReportParameter_T_Common_Types_Pkg_signature,
    set_PositionReportParameter_T_Common_Types_Pkg_default_value,
    sizeof(PositionReportParameter_T_Common_Types_Pkg)
};

/****************************************************************
 ** radioManagementMessage_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimradioManagementMessage_T_Common_Types_PkgVTable;

int radioManagementMessage_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimradioManagementMessage_T_Common_Types_PkgVTable != NULL
        && pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18298_to_string(pValue, pfnStrAppend, pData);
}

int string_to_radioManagementMessage_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimradioManagementMessage_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimradioManagementMessage_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18298(str, pValue, endptr);
    }
    return nRet;
}

int is_radioManagementMessage_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimradioManagementMessage_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimradioManagementMessage_T_Common_Types_PkgVTable);
    }
    return is_struct__18298_double_convertion_allowed();
}

void compare_radioManagementMessage_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimradioManagementMessage_T_Common_Types_PkgVTable != NULL
        && pSimradioManagementMessage_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimradioManagementMessage_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18298(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int radioManagementMessage_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimradioManagementMessage_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimradioManagementMessage_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__18298_to_double(pValue, nRetValue);
}

int get_radioManagementMessage_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18298_signature(pfnStrAppend, pData);
}

int set_radioManagementMessage_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18298_default_value(pValue);
}

int check_radioManagementMessage_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static radioManagementMessage_T_Common_Types_Pkg rTemp;
    return string_to_radioManagementMessage_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_radioManagementMessage_T_Common_Types_Pkg_Utils = {
    radioManagementMessage_T_Common_Types_Pkg_to_string,
    check_radioManagementMessage_T_Common_Types_Pkg_string,
    string_to_radioManagementMessage_T_Common_Types_Pkg,
    is_radioManagementMessage_T_Common_Types_Pkg_double_convertion_allowed,
    radioManagementMessage_T_Common_Types_Pkg_to_double,
    compare_radioManagementMessage_T_Common_Types_Pkg,
    get_radioManagementMessage_T_Common_Types_Pkg_signature,
    set_radioManagementMessage_T_Common_Types_Pkg_default_value,
    sizeof(radioManagementMessage_T_Common_Types_Pkg)
};

/****************************************************************
 ** MSG_Errors_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimMSG_Errors_T_Common_Types_PkgVTable;

int MSG_Errors_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMSG_Errors_T_Common_Types_PkgVTable != NULL
        && pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18272_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MSG_Errors_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMSG_Errors_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMSG_Errors_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18272(str, pValue, endptr);
    }
    return nRet;
}

int is_MSG_Errors_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMSG_Errors_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMSG_Errors_T_Common_Types_PkgVTable);
    }
    return is_struct__18272_double_convertion_allowed();
}

void compare_MSG_Errors_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimMSG_Errors_T_Common_Types_PkgVTable != NULL
        && pSimMSG_Errors_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMSG_Errors_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18272(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MSG_Errors_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMSG_Errors_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMSG_Errors_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__18272_to_double(pValue, nRetValue);
}

int get_MSG_Errors_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18272_signature(pfnStrAppend, pData);
}

int set_MSG_Errors_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18272_default_value(pValue);
}

int check_MSG_Errors_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static MSG_Errors_T_Common_Types_Pkg rTemp;
    return string_to_MSG_Errors_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_MSG_Errors_T_Common_Types_Pkg_Utils = {
    MSG_Errors_T_Common_Types_Pkg_to_string,
    check_MSG_Errors_T_Common_Types_Pkg_string,
    string_to_MSG_Errors_T_Common_Types_Pkg,
    is_MSG_Errors_T_Common_Types_Pkg_double_convertion_allowed,
    MSG_Errors_T_Common_Types_Pkg_to_double,
    compare_MSG_Errors_T_Common_Types_Pkg,
    get_MSG_Errors_T_Common_Types_Pkg_signature,
    set_MSG_Errors_T_Common_Types_Pkg_default_value,
    sizeof(MSG_Errors_T_Common_Types_Pkg)
};

/****************************************************************
 ** centerOfBalisePosition_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimcenterOfBalisePosition_T_BG_Types_PkgVTable;

int centerOfBalisePosition_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL
        && pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18250_to_string(pValue, pfnStrAppend, pData);
}

int string_to_centerOfBalisePosition_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimcenterOfBalisePosition_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18250(str, pValue, endptr);
    }
    return nRet;
}

int is_centerOfBalisePosition_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimcenterOfBalisePosition_T_BG_Types_PkgVTable);
    }
    return is_struct__18250_double_convertion_allowed();
}

void compare_centerOfBalisePosition_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL
        && pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18250(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int centerOfBalisePosition_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimcenterOfBalisePosition_T_BG_Types_PkgVTable, nRetValue);
    }
    return struct__18250_to_double(pValue, nRetValue);
}

int get_centerOfBalisePosition_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18250_signature(pfnStrAppend, pData);
}

int set_centerOfBalisePosition_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18250_default_value(pValue);
}

int check_centerOfBalisePosition_T_BG_Types_Pkg_string(const char *str, char **endptr)
{
    static centerOfBalisePosition_T_BG_Types_Pkg rTemp;
    return string_to_centerOfBalisePosition_T_BG_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils = {
    centerOfBalisePosition_T_BG_Types_Pkg_to_string,
    check_centerOfBalisePosition_T_BG_Types_Pkg_string,
    string_to_centerOfBalisePosition_T_BG_Types_Pkg,
    is_centerOfBalisePosition_T_BG_Types_Pkg_double_convertion_allowed,
    centerOfBalisePosition_T_BG_Types_Pkg_to_double,
    compare_centerOfBalisePosition_T_BG_Types_Pkg,
    get_centerOfBalisePosition_T_BG_Types_Pkg_signature,
    set_centerOfBalisePosition_T_BG_Types_Pkg_default_value,
    sizeof(centerOfBalisePosition_T_BG_Types_Pkg)
};

/****************************************************************
 ** TelegramArray_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimTelegramArray_T_BG_Types_PkgVTable;

int TelegramArray_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTelegramArray_T_BG_Types_PkgVTable != NULL
        && pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18365_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TelegramArray_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTelegramArray_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTelegramArray_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18365(str, pValue, endptr);
    }
    return nRet;
}

int is_TelegramArray_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimTelegramArray_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTelegramArray_T_BG_Types_PkgVTable);
    }
    return is_array__18365_double_convertion_allowed();
}

void compare_TelegramArray_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTelegramArray_T_BG_Types_PkgVTable != NULL
        && pSimTelegramArray_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimTelegramArray_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18365(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TelegramArray_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTelegramArray_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTelegramArray_T_BG_Types_PkgVTable, nRetValue);
    }
    return array__18365_to_double(pValue, nRetValue);
}

int get_TelegramArray_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18365_signature(pfnStrAppend, pData);
}

int set_TelegramArray_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_array__18365_default_value(pValue);
}

int check_TelegramArray_T_BG_Types_Pkg_string(const char *str, char **endptr)
{
    static TelegramArray_T_BG_Types_Pkg rTemp;
    return string_to_TelegramArray_T_BG_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_TelegramArray_T_BG_Types_Pkg_Utils = {
    TelegramArray_T_BG_Types_Pkg_to_string,
    check_TelegramArray_T_BG_Types_Pkg_string,
    string_to_TelegramArray_T_BG_Types_Pkg,
    is_TelegramArray_T_BG_Types_Pkg_double_convertion_allowed,
    TelegramArray_T_BG_Types_Pkg_to_double,
    compare_TelegramArray_T_BG_Types_Pkg,
    get_TelegramArray_T_BG_Types_Pkg_signature,
    set_TelegramArray_T_BG_Types_Pkg_default_value,
    sizeof(TelegramArray_T_BG_Types_Pkg)
};

/****************************************************************
 ** Telegram_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimTelegram_T_BG_Types_PkgVTable;

int Telegram_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL
        && pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTelegram_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18358_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Telegram_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTelegram_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18358(str, pValue, endptr);
    }
    return nRet;
}

int is_Telegram_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTelegram_T_BG_Types_PkgVTable);
    }
    return is_struct__18358_double_convertion_allowed();
}

void compare_Telegram_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL
        && pSimTelegram_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimTelegram_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimTelegram_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTelegram_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTelegram_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18358(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Telegram_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTelegram_T_BG_Types_PkgVTable, nRetValue);
    }
    return struct__18358_to_double(pValue, nRetValue);
}

int get_Telegram_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18358_signature(pfnStrAppend, pData);
}

int set_Telegram_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18358_default_value(pValue);
}

int check_Telegram_T_BG_Types_Pkg_string(const char *str, char **endptr)
{
    static Telegram_T_BG_Types_Pkg rTemp;
    return string_to_Telegram_T_BG_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Telegram_T_BG_Types_Pkg_Utils = {
    Telegram_T_BG_Types_Pkg_to_string,
    check_Telegram_T_BG_Types_Pkg_string,
    string_to_Telegram_T_BG_Types_Pkg,
    is_Telegram_T_BG_Types_Pkg_double_convertion_allowed,
    Telegram_T_BG_Types_Pkg_to_double,
    compare_Telegram_T_BG_Types_Pkg,
    get_Telegram_T_BG_Types_Pkg_signature,
    set_Telegram_T_BG_Types_Pkg_default_value,
    sizeof(Telegram_T_BG_Types_Pkg)
};

/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimTelegramHeader_T_BG_Types_PkgVTable;

int TelegramHeader_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL
        && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18194_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TelegramHeader_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTelegramHeader_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18194(str, pValue, endptr);
    }
    return nRet;
}

int is_TelegramHeader_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTelegramHeader_T_BG_Types_PkgVTable);
    }
    return is_struct__18194_double_convertion_allowed();
}

void compare_TelegramHeader_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL
        && pSimTelegramHeader_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimTelegramHeader_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18194(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TelegramHeader_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTelegramHeader_T_BG_Types_PkgVTable, nRetValue);
    }
    return struct__18194_to_double(pValue, nRetValue);
}

int get_TelegramHeader_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18194_signature(pfnStrAppend, pData);
}

int set_TelegramHeader_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18194_default_value(pValue);
}

int check_TelegramHeader_T_BG_Types_Pkg_string(const char *str, char **endptr)
{
    static TelegramHeader_T_BG_Types_Pkg rTemp;
    return string_to_TelegramHeader_T_BG_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_TelegramHeader_T_BG_Types_Pkg_Utils = {
    TelegramHeader_T_BG_Types_Pkg_to_string,
    check_TelegramHeader_T_BG_Types_Pkg_string,
    string_to_TelegramHeader_T_BG_Types_Pkg,
    is_TelegramHeader_T_BG_Types_Pkg_double_convertion_allowed,
    TelegramHeader_T_BG_Types_Pkg_to_double,
    compare_TelegramHeader_T_BG_Types_Pkg,
    get_TelegramHeader_T_BG_Types_Pkg_signature,
    set_TelegramHeader_T_BG_Types_Pkg_default_value,
    sizeof(TelegramHeader_T_BG_Types_Pkg)
};

/****************************************************************
 ** BG_Message_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimBG_Message_T_BG_Types_PkgVTable;

int BG_Message_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL
        && pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBG_Message_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18376_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BG_Message_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimBG_Message_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18376(str, pValue, endptr);
    }
    return nRet;
}

int is_BG_Message_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBG_Message_T_BG_Types_PkgVTable);
    }
    return is_struct__18376_double_convertion_allowed();
}

void compare_BG_Message_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL
        && pSimBG_Message_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimBG_Message_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimBG_Message_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBG_Message_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBG_Message_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18376(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BG_Message_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimBG_Message_T_BG_Types_PkgVTable, nRetValue);
    }
    return struct__18376_to_double(pValue, nRetValue);
}

int get_BG_Message_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18376_signature(pfnStrAppend, pData);
}

int set_BG_Message_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18376_default_value(pValue);
}

int check_BG_Message_T_BG_Types_Pkg_string(const char *str, char **endptr)
{
    static BG_Message_T_BG_Types_Pkg rTemp;
    return string_to_BG_Message_T_BG_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_BG_Message_T_BG_Types_Pkg_Utils = {
    BG_Message_T_BG_Types_Pkg_to_string,
    check_BG_Message_T_BG_Types_Pkg_string,
    string_to_BG_Message_T_BG_Types_Pkg,
    is_BG_Message_T_BG_Types_Pkg_double_convertion_allowed,
    BG_Message_T_BG_Types_Pkg_to_double,
    compare_BG_Message_T_BG_Types_Pkg,
    get_BG_Message_T_BG_Types_Pkg_signature,
    set_BG_Message_T_BG_Types_Pkg_default_value,
    sizeof(BG_Message_T_BG_Types_Pkg)
};

/****************************************************************
 ** BG_Header_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimBG_Header_T_BG_Types_PkgVTable;

int BG_Header_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL
        && pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBG_Header_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18043_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BG_Header_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimBG_Header_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18043(str, pValue, endptr);
    }
    return nRet;
}

int is_BG_Header_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBG_Header_T_BG_Types_PkgVTable);
    }
    return is_struct__18043_double_convertion_allowed();
}

void compare_BG_Header_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL
        && pSimBG_Header_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimBG_Header_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimBG_Header_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBG_Header_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBG_Header_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18043(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BG_Header_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimBG_Header_T_BG_Types_PkgVTable, nRetValue);
    }
    return struct__18043_to_double(pValue, nRetValue);
}

int get_BG_Header_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18043_signature(pfnStrAppend, pData);
}

int set_BG_Header_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18043_default_value(pValue);
}

int check_BG_Header_T_BG_Types_Pkg_string(const char *str, char **endptr)
{
    static BG_Header_T_BG_Types_Pkg rTemp;
    return string_to_BG_Header_T_BG_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_BG_Header_T_BG_Types_Pkg_Utils = {
    BG_Header_T_BG_Types_Pkg_to_string,
    check_BG_Header_T_BG_Types_Pkg_string,
    string_to_BG_Header_T_BG_Types_Pkg,
    is_BG_Header_T_BG_Types_Pkg_double_convertion_allowed,
    BG_Header_T_BG_Types_Pkg_to_double,
    compare_BG_Header_T_BG_Types_Pkg,
    get_BG_Header_T_BG_Types_Pkg_signature,
    set_BG_Header_T_BG_Types_Pkg_default_value,
    sizeof(BG_Header_T_BG_Types_Pkg)
};

/****************************************************************
 ** LinkedBG_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimLinkedBG_T_BG_Types_PkgVTable;

int LinkedBG_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimLinkedBG_T_BG_Types_PkgVTable != NULL
        && pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__17994_to_string(pValue, pfnStrAppend, pData);
}

int string_to_LinkedBG_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimLinkedBG_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimLinkedBG_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__17994(str, pValue, endptr);
    }
    return nRet;
}

int is_LinkedBG_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimLinkedBG_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimLinkedBG_T_BG_Types_PkgVTable);
    }
    return is_struct__17994_double_convertion_allowed();
}

void compare_LinkedBG_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimLinkedBG_T_BG_Types_PkgVTable != NULL
        && pSimLinkedBG_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimLinkedBG_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__17994(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int LinkedBG_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLinkedBG_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimLinkedBG_T_BG_Types_PkgVTable, nRetValue);
    }
    return struct__17994_to_double(pValue, nRetValue);
}

int get_LinkedBG_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__17994_signature(pfnStrAppend, pData);
}

int set_LinkedBG_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_struct__17994_default_value(pValue);
}

int check_LinkedBG_T_BG_Types_Pkg_string(const char *str, char **endptr)
{
    static LinkedBG_T_BG_Types_Pkg rTemp;
    return string_to_LinkedBG_T_BG_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_LinkedBG_T_BG_Types_Pkg_Utils = {
    LinkedBG_T_BG_Types_Pkg_to_string,
    check_LinkedBG_T_BG_Types_Pkg_string,
    string_to_LinkedBG_T_BG_Types_Pkg,
    is_LinkedBG_T_BG_Types_Pkg_double_convertion_allowed,
    LinkedBG_T_BG_Types_Pkg_to_double,
    compare_LinkedBG_T_BG_Types_Pkg,
    get_LinkedBG_T_BG_Types_Pkg_signature,
    set_LinkedBG_T_BG_Types_Pkg_default_value,
    sizeof(LinkedBG_T_BG_Types_Pkg)
};

/****************************************************************
 ** passedBG_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimpassedBG_T_BG_Types_PkgVTable;

int passedBG_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimpassedBG_T_BG_Types_PkgVTable != NULL
        && pSimpassedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimpassedBG_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18061_to_string(pValue, pfnStrAppend, pData);
}

int string_to_passedBG_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimpassedBG_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimpassedBG_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18061(str, pValue, endptr);
    }
    return nRet;
}

int is_passedBG_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimpassedBG_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimpassedBG_T_BG_Types_PkgVTable);
    }
    return is_struct__18061_double_convertion_allowed();
}

void compare_passedBG_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimpassedBG_T_BG_Types_PkgVTable != NULL
        && pSimpassedBG_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimpassedBG_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimpassedBG_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimpassedBG_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimpassedBG_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18061(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int passedBG_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimpassedBG_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimpassedBG_T_BG_Types_PkgVTable, nRetValue);
    }
    return struct__18061_to_double(pValue, nRetValue);
}

int get_passedBG_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18061_signature(pfnStrAppend, pData);
}

int set_passedBG_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18061_default_value(pValue);
}

int check_passedBG_T_BG_Types_Pkg_string(const char *str, char **endptr)
{
    static passedBG_T_BG_Types_Pkg rTemp;
    return string_to_passedBG_T_BG_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_passedBG_T_BG_Types_Pkg_Utils = {
    passedBG_T_BG_Types_Pkg_to_string,
    check_passedBG_T_BG_Types_Pkg_string,
    string_to_passedBG_T_BG_Types_Pkg,
    is_passedBG_T_BG_Types_Pkg_double_convertion_allowed,
    passedBG_T_BG_Types_Pkg_to_double,
    compare_passedBG_T_BG_Types_Pkg,
    get_passedBG_T_BG_Types_Pkg_signature,
    set_passedBG_T_BG_Types_Pkg_default_value,
    sizeof(passedBG_T_BG_Types_Pkg)
};

/****************************************************************
 ** LinkedBGs_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimLinkedBGs_T_BG_Types_PkgVTable;

int LinkedBGs_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimLinkedBGs_T_BG_Types_PkgVTable != NULL
        && pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18017_to_string(pValue, pfnStrAppend, pData);
}

int string_to_LinkedBGs_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimLinkedBGs_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimLinkedBGs_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18017(str, pValue, endptr);
    }
    return nRet;
}

int is_LinkedBGs_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimLinkedBGs_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimLinkedBGs_T_BG_Types_PkgVTable);
    }
    return is_array__18017_double_convertion_allowed();
}

void compare_LinkedBGs_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimLinkedBGs_T_BG_Types_PkgVTable != NULL
        && pSimLinkedBGs_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimLinkedBGs_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18017(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int LinkedBGs_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLinkedBGs_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimLinkedBGs_T_BG_Types_PkgVTable, nRetValue);
    }
    return array__18017_to_double(pValue, nRetValue);
}

int get_LinkedBGs_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18017_signature(pfnStrAppend, pData);
}

int set_LinkedBGs_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_array__18017_default_value(pValue);
}

int check_LinkedBGs_T_BG_Types_Pkg_string(const char *str, char **endptr)
{
    static LinkedBGs_T_BG_Types_Pkg rTemp;
    return string_to_LinkedBGs_T_BG_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_LinkedBGs_T_BG_Types_Pkg_Utils = {
    LinkedBGs_T_BG_Types_Pkg_to_string,
    check_LinkedBGs_T_BG_Types_Pkg_string,
    string_to_LinkedBGs_T_BG_Types_Pkg,
    is_LinkedBGs_T_BG_Types_Pkg_double_convertion_allowed,
    LinkedBGs_T_BG_Types_Pkg_to_double,
    compare_LinkedBGs_T_BG_Types_Pkg,
    get_LinkedBGs_T_BG_Types_Pkg_signature,
    set_LinkedBGs_T_BG_Types_Pkg_default_value,
    sizeof(LinkedBGs_T_BG_Types_Pkg)
};

/****************************************************************
 ** odometry_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimodometry_T_Obu_BasicTypes_PkgVTable;

int odometry_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18033_to_string(pValue, pfnStrAppend, pData);
}

int string_to_odometry_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimodometry_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18033(str, pValue, endptr);
    }
    return nRet;
}

int is_odometry_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimodometry_T_Obu_BasicTypes_PkgVTable);
    }
    return is_struct__18033_double_convertion_allowed();
}

void compare_odometry_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimodometry_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18033(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int odometry_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimodometry_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return struct__18033_to_double(pValue, nRetValue);
}

int get_odometry_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18033_signature(pfnStrAppend, pData);
}

int set_odometry_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_struct__18033_default_value(pValue);
}

int check_odometry_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static odometry_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_odometry_T_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_odometry_T_Obu_BasicTypes_Pkg_Utils = {
    odometry_T_Obu_BasicTypes_Pkg_to_string,
    check_odometry_T_Obu_BasicTypes_Pkg_string,
    string_to_odometry_T_Obu_BasicTypes_Pkg,
    is_odometry_T_Obu_BasicTypes_Pkg_double_convertion_allowed,
    odometry_T_Obu_BasicTypes_Pkg_to_double,
    compare_odometry_T_Obu_BasicTypes_Pkg,
    get_odometry_T_Obu_BasicTypes_Pkg_signature,
    set_odometry_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(odometry_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** T_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimT_internal_Type_Obu_BasicTypes_PkgVTable;

int T_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_T_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimT_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_T_internal_Type_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimT_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_T_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int T_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimT_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_T_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_T_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_T_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static T_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_T_internal_Type_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    T_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_T_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_T_internal_Type_Obu_BasicTypes_Pkg,
    is_T_internal_Type_Obu_BasicTypes_Pkg_double_convertion_allowed,
    T_internal_Type_Obu_BasicTypes_Pkg_to_double,
    compare_T_internal_Type_Obu_BasicTypes_Pkg,
    get_T_internal_Type_Obu_BasicTypes_Pkg_signature,
    set_T_internal_Type_Obu_BasicTypes_Pkg_default_value,
    sizeof(T_internal_Type_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** OdometryLocations_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable;

int OdometryLocations_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18027_to_string(pValue, pfnStrAppend, pData);
}

int string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18027(str, pValue, endptr);
    }
    return nRet;
}

int is_OdometryLocations_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable);
    }
    return is_struct__18027_double_convertion_allowed();
}

void compare_OdometryLocations_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18027(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OdometryLocations_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return struct__18027_to_double(pValue, nRetValue);
}

int get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18027_signature(pfnStrAppend, pData);
}

int set_OdometryLocations_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_struct__18027_default_value(pValue);
}

int check_OdometryLocations_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static OdometryLocations_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils = {
    OdometryLocations_T_Obu_BasicTypes_Pkg_to_string,
    check_OdometryLocations_T_Obu_BasicTypes_Pkg_string,
    string_to_OdometryLocations_T_Obu_BasicTypes_Pkg,
    is_OdometryLocations_T_Obu_BasicTypes_Pkg_double_convertion_allowed,
    OdometryLocations_T_Obu_BasicTypes_Pkg_to_double,
    compare_OdometryLocations_T_Obu_BasicTypes_Pkg,
    get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature,
    set_OdometryLocations_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** L_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimL_internal_Type_Obu_BasicTypes_PkgVTable;

int L_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_L_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimL_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_L_internal_Type_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimL_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_L_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int L_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimL_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_L_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_L_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static L_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_L_internal_Type_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    L_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_L_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_L_internal_Type_Obu_BasicTypes_Pkg,
    is_L_internal_Type_Obu_BasicTypes_Pkg_double_convertion_allowed,
    L_internal_Type_Obu_BasicTypes_Pkg_to_double,
    compare_L_internal_Type_Obu_BasicTypes_Pkg,
    get_L_internal_Type_Obu_BasicTypes_Pkg_signature,
    set_L_internal_Type_Obu_BasicTypes_Pkg_default_value,
    sizeof(L_internal_Type_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** OdometrySpeeds_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable;

int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18020_to_string(pValue, pfnStrAppend, pData);
}

int string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18020(str, pValue, endptr);
    }
    return nRet;
}

int is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable);
    }
    return is_struct__18020_double_convertion_allowed();
}

void compare_OdometrySpeeds_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18020(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return struct__18020_to_double(pValue, nRetValue);
}

int get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18020_signature(pfnStrAppend, pData);
}

int set_OdometrySpeeds_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_struct__18020_default_value(pValue);
}

int check_OdometrySpeeds_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static OdometrySpeeds_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils = {
    OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_string,
    check_OdometrySpeeds_T_Obu_BasicTypes_Pkg_string,
    string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg,
    is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_double_convertion_allowed,
    OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double,
    compare_OdometrySpeeds_T_Obu_BasicTypes_Pkg,
    get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature,
    set_OdometrySpeeds_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** V_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimV_internal_Type_Obu_BasicTypes_PkgVTable;

int V_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_internal_Type_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimV_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_V_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimV_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_V_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static V_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_V_internal_Type_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    V_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_V_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_V_internal_Type_Obu_BasicTypes_Pkg,
    is_V_internal_Type_Obu_BasicTypes_Pkg_double_convertion_allowed,
    V_internal_Type_Obu_BasicTypes_Pkg_to_double,
    compare_V_internal_Type_Obu_BasicTypes_Pkg,
    get_V_internal_Type_Obu_BasicTypes_Pkg_signature,
    set_V_internal_Type_Obu_BasicTypes_Pkg_default_value,
    sizeof(V_internal_Type_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** A_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimA_internal_Type_Obu_BasicTypes_PkgVTable;

int A_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_A_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimA_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_A_internal_Type_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimA_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_A_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int A_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimA_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_A_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_A_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_A_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static A_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_A_internal_Type_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    A_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_A_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_A_internal_Type_Obu_BasicTypes_Pkg,
    is_A_internal_Type_Obu_BasicTypes_Pkg_double_convertion_allowed,
    A_internal_Type_Obu_BasicTypes_Pkg_to_double,
    compare_A_internal_Type_Obu_BasicTypes_Pkg,
    get_A_internal_Type_Obu_BasicTypes_Pkg_signature,
    set_A_internal_Type_Obu_BasicTypes_Pkg_default_value,
    sizeof(A_internal_Type_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** odoMotionState_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimodoMotionState_T_Obu_BasicTypes_PkgVTable;

static SimEnumValUtils odoMotionState_T_Obu_BasicTypes_Pkg_values[] = {
    { "Obu_BasicTypes_Pkg::noMotion", noMotion_Obu_BasicTypes_Pkg},
    { "noMotion", noMotion_Obu_BasicTypes_Pkg},
    { "Obu_BasicTypes_Pkg::Motion", Motion_Obu_BasicTypes_Pkg},
    { "Motion", Motion_Obu_BasicTypes_Pkg},
};

int odoMotionState_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue, odoMotionState_T_Obu_BasicTypes_Pkg_values, 4, pfnStrAppend, pData);
}

int string_to_odoMotionState_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimodoMotionState_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, odoMotionState_T_Obu_BasicTypes_Pkg_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue = nTemp;
    }
    return nRet;
}

int is_odoMotionState_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimodoMotionState_T_Obu_BasicTypes_PkgVTable);
    }
    return 1;
}

void compare_odoMotionState_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue1), (int)(*(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int odoMotionState_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimodoMotionState_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    *nRetValue = (double)*((odoMotionState_T_Obu_BasicTypes_Pkg*)pValue);
    return 1;
}

int get_odoMotionState_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(odoMotionState_T_Obu_BasicTypes_Pkg_values, 4, pfnStrAppend, pData);
}

int set_odoMotionState_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    *(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue = noMotion_Obu_BasicTypes_Pkg;
    return 1;
}

int check_odoMotionState_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static odoMotionState_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_odoMotionState_T_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils = {
    odoMotionState_T_Obu_BasicTypes_Pkg_to_string,
    check_odoMotionState_T_Obu_BasicTypes_Pkg_string,
    string_to_odoMotionState_T_Obu_BasicTypes_Pkg,
    is_odoMotionState_T_Obu_BasicTypes_Pkg_double_convertion_allowed,
    odoMotionState_T_Obu_BasicTypes_Pkg_to_double,
    compare_odoMotionState_T_Obu_BasicTypes_Pkg,
    get_odoMotionState_T_Obu_BasicTypes_Pkg_signature,
    set_odoMotionState_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(odoMotionState_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** odoMotionDirection_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable;

static SimEnumValUtils odoMotionDirection_T_Obu_BasicTypes_Pkg_values[] = {
    { "Obu_BasicTypes_Pkg::unknownDirection", unknownDirection_Obu_BasicTypes_Pkg},
    { "unknownDirection", unknownDirection_Obu_BasicTypes_Pkg},
    { "Obu_BasicTypes_Pkg::cabAFirst", cabAFirst_Obu_BasicTypes_Pkg},
    { "cabAFirst", cabAFirst_Obu_BasicTypes_Pkg},
    { "Obu_BasicTypes_Pkg::cabBFirst", cabBFirst_Obu_BasicTypes_Pkg},
    { "cabBFirst", cabBFirst_Obu_BasicTypes_Pkg},
};

int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue, odoMotionDirection_T_Obu_BasicTypes_Pkg_values, 6, pfnStrAppend, pData);
}

int string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, odoMotionDirection_T_Obu_BasicTypes_Pkg_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue = nTemp;
    }
    return nRet;
}

int is_odoMotionDirection_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable);
    }
    return 1;
}

void compare_odoMotionDirection_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue1), (int)(*(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    *nRetValue = (double)*((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue);
    return 1;
}

int get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(odoMotionDirection_T_Obu_BasicTypes_Pkg_values, 6, pfnStrAppend, pData);
}

int set_odoMotionDirection_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    *(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue = unknownDirection_Obu_BasicTypes_Pkg;
    return 1;
}

int check_odoMotionDirection_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static odoMotionDirection_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils = {
    odoMotionDirection_T_Obu_BasicTypes_Pkg_to_string,
    check_odoMotionDirection_T_Obu_BasicTypes_Pkg_string,
    string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg,
    is_odoMotionDirection_T_Obu_BasicTypes_Pkg_double_convertion_allowed,
    odoMotionDirection_T_Obu_BasicTypes_Pkg_to_double,
    compare_odoMotionDirection_T_Obu_BasicTypes_Pkg,
    get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature,
    set_odoMotionDirection_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** LocWithInAcc_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable;

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__17988_to_string(pValue, pfnStrAppend, pData);
}

int string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__17988(str, pValue, endptr);
    }
    return nRet;
}

int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable);
    }
    return is_struct__17988_double_convertion_allowed();
}

void compare_LocWithInAcc_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__17988(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return struct__17988_to_double(pValue, nRetValue);
}

int get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__17988_signature(pfnStrAppend, pData);
}

int set_LocWithInAcc_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_struct__17988_default_value(pValue);
}

int check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static LocWithInAcc_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils = {
    LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string,
    check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string,
    string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg,
    is_LocWithInAcc_T_Obu_BasicTypes_Pkg_double_convertion_allowed,
    LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double,
    compare_LocWithInAcc_T_Obu_BasicTypes_Pkg,
    get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature,
    set_LocWithInAcc_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** Location_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimLocation_T_Obu_BasicTypes_PkgVTable;

int Location_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimLocation_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return L_internal_Type_Obu_BasicTypes_Pkg_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Location_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimLocation_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimLocation_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_L_internal_Type_Obu_BasicTypes_Pkg(str, pValue, endptr);
    }
    return nRet;
}

int is_Location_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimLocation_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimLocation_T_Obu_BasicTypes_PkgVTable);
    }
    return is_L_internal_Type_Obu_BasicTypes_Pkg_double_convertion_allowed();
}

void compare_Location_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimLocation_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimLocation_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimLocation_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_L_internal_Type_Obu_BasicTypes_Pkg(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Location_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLocation_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimLocation_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return L_internal_Type_Obu_BasicTypes_Pkg_to_double(pValue, nRetValue);
}

int get_Location_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_L_internal_Type_Obu_BasicTypes_Pkg_signature(pfnStrAppend, pData);
}

int set_Location_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(pValue);
}

int check_Location_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static Location_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_Location_T_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Location_T_Obu_BasicTypes_Pkg_Utils = {
    Location_T_Obu_BasicTypes_Pkg_to_string,
    check_Location_T_Obu_BasicTypes_Pkg_string,
    string_to_Location_T_Obu_BasicTypes_Pkg,
    is_Location_T_Obu_BasicTypes_Pkg_double_convertion_allowed,
    Location_T_Obu_BasicTypes_Pkg_to_double,
    compare_Location_T_Obu_BasicTypes_Pkg,
    get_Location_T_Obu_BasicTypes_Pkg_signature,
    set_Location_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(Location_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** Speed_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimSpeed_T_Obu_BasicTypes_PkgVTable;

int Speed_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return V_internal_Type_Obu_BasicTypes_Pkg_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Speed_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimSpeed_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_V_internal_Type_Obu_BasicTypes_Pkg(str, pValue, endptr);
    }
    return nRet;
}

int is_Speed_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSpeed_T_Obu_BasicTypes_PkgVTable);
    }
    return is_V_internal_Type_Obu_BasicTypes_Pkg_double_convertion_allowed();
}

void compare_Speed_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_V_internal_Type_Obu_BasicTypes_Pkg(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Speed_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimSpeed_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return V_internal_Type_Obu_BasicTypes_Pkg_to_double(pValue, nRetValue);
}

int get_Speed_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_V_internal_Type_Obu_BasicTypes_Pkg_signature(pfnStrAppend, pData);
}

int set_Speed_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_V_internal_Type_Obu_BasicTypes_Pkg_default_value(pValue);
}

int check_Speed_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static Speed_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_Speed_T_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Speed_T_Obu_BasicTypes_Pkg_Utils = {
    Speed_T_Obu_BasicTypes_Pkg_to_string,
    check_Speed_T_Obu_BasicTypes_Pkg_string,
    string_to_Speed_T_Obu_BasicTypes_Pkg,
    is_Speed_T_Obu_BasicTypes_Pkg_double_convertion_allowed,
    Speed_T_Obu_BasicTypes_Pkg_to_double,
    compare_Speed_T_Obu_BasicTypes_Pkg,
    get_Speed_T_Obu_BasicTypes_Pkg_signature,
    set_Speed_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(Speed_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** RadioMessage_T_Radio_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRadioMessage_T_Radio_Types_PkgVTable;

int RadioMessage_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL
        && pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18368_to_string(pValue, pfnStrAppend, pData);
}

int string_to_RadioMessage_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRadioMessage_T_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18368(str, pValue, endptr);
    }
    return nRet;
}

int is_RadioMessage_T_Radio_Types_Pkg_double_convertion_allowed()
{
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimRadioMessage_T_Radio_Types_PkgVTable);
    }
    return is_struct__18368_double_convertion_allowed();
}

void compare_RadioMessage_T_Radio_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL
        && pSimRadioMessage_T_Radio_Types_PkgVTable->m_version >= Scv612
        && pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadioMessage_T_Radio_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18368(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int RadioMessage_T_Radio_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadioMessage_T_Radio_Types_PkgVTable, nRetValue);
    }
    return struct__18368_to_double(pValue, nRetValue);
}

int get_RadioMessage_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18368_signature(pfnStrAppend, pData);
}

int set_RadioMessage_T_Radio_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18368_default_value(pValue);
}

int check_RadioMessage_T_Radio_Types_Pkg_string(const char *str, char **endptr)
{
    static RadioMessage_T_Radio_Types_Pkg rTemp;
    return string_to_RadioMessage_T_Radio_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_RadioMessage_T_Radio_Types_Pkg_Utils = {
    RadioMessage_T_Radio_Types_Pkg_to_string,
    check_RadioMessage_T_Radio_Types_Pkg_string,
    string_to_RadioMessage_T_Radio_Types_Pkg,
    is_RadioMessage_T_Radio_Types_Pkg_double_convertion_allowed,
    RadioMessage_T_Radio_Types_Pkg_to_double,
    compare_RadioMessage_T_Radio_Types_Pkg,
    get_RadioMessage_T_Radio_Types_Pkg_signature,
    set_RadioMessage_T_Radio_Types_Pkg_default_value,
    sizeof(RadioMessage_T_Radio_Types_Pkg)
};

/****************************************************************
 ** Radio_TrackTrain_Header_T_Radio_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable;

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18213_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18213(str, pValue, endptr);
    }
    return nRet;
}

int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_double_convertion_allowed()
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable);
    }
    return is_struct__18213_double_convertion_allowed();
}

void compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_version >= Scv612
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18213(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, nRetValue);
    }
    return struct__18213_to_double(pValue, nRetValue);
}

int get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18213_signature(pfnStrAppend, pData);
}

int set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18213_default_value(pValue);
}

int check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string(const char *str, char **endptr)
{
    static Radio_TrackTrain_Header_T_Radio_Types_Pkg rTemp;
    return string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils = {
    Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string,
    check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string,
    string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg,
    is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_double_convertion_allowed,
    Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double,
    compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg,
    get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature,
    set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value,
    sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg)
};

/****************************************************************
 ** sessionStatus_Type_Radio_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimsessionStatus_Type_Radio_Types_PkgVTable;

static SimEnumValUtils sessionStatus_Type_Radio_Types_Pkg_values[] = {
    { "Radio_Types_Pkg::morc_st_inactive", morc_st_inactive_Radio_Types_Pkg},
    { "morc_st_inactive", morc_st_inactive_Radio_Types_Pkg},
    { "Radio_Types_Pkg::morc_st_establishing", morc_st_establishing_Radio_Types_Pkg},
    { "morc_st_establishing", morc_st_establishing_Radio_Types_Pkg},
    { "Radio_Types_Pkg::morc_st_maintaining", morc_st_maintaining_Radio_Types_Pkg},
    { "morc_st_maintaining", morc_st_maintaining_Radio_Types_Pkg},
    { "Radio_Types_Pkg::morc_st_terminating", morc_st_terminating_Radio_Types_Pkg},
    { "morc_st_terminating", morc_st_terminating_Radio_Types_Pkg},
};

int sessionStatus_Type_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimsessionStatus_Type_Radio_Types_PkgVTable != NULL
        && pSimsessionStatus_Type_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsessionStatus_Type_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(sessionStatus_Type_Radio_Types_Pkg*)pValue, sessionStatus_Type_Radio_Types_Pkg_values, 8, pfnStrAppend, pData);
}

int string_to_sessionStatus_Type_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimsessionStatus_Type_Radio_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimsessionStatus_Type_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, sessionStatus_Type_Radio_Types_Pkg_values, 8, endptr);
        if (pValue != NULL && nRet != 0)
            *(sessionStatus_Type_Radio_Types_Pkg*)pValue = nTemp;
    }
    return nRet;
}

int is_sessionStatus_Type_Radio_Types_Pkg_double_convertion_allowed()
{
    if (pSimsessionStatus_Type_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimsessionStatus_Type_Radio_Types_PkgVTable);
    }
    return 1;
}

void compare_sessionStatus_Type_Radio_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimsessionStatus_Type_Radio_Types_PkgVTable != NULL
        && pSimsessionStatus_Type_Radio_Types_PkgVTable->m_version >= Scv612
        && pSimsessionStatus_Type_Radio_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimsessionStatus_Type_Radio_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimsessionStatus_Type_Radio_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimsessionStatus_Type_Radio_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(sessionStatus_Type_Radio_Types_Pkg*)pValue1), (int)(*(sessionStatus_Type_Radio_Types_Pkg*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int sessionStatus_Type_Radio_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimsessionStatus_Type_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimsessionStatus_Type_Radio_Types_PkgVTable, nRetValue);
    }
    *nRetValue = (double)*((sessionStatus_Type_Radio_Types_Pkg*)pValue);
    return 1;
}

int get_sessionStatus_Type_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(sessionStatus_Type_Radio_Types_Pkg_values, 8, pfnStrAppend, pData);
}

int set_sessionStatus_Type_Radio_Types_Pkg_default_value(void *pValue)
{
    *(sessionStatus_Type_Radio_Types_Pkg*)pValue = morc_st_inactive_Radio_Types_Pkg;
    return 1;
}

int check_sessionStatus_Type_Radio_Types_Pkg_string(const char *str, char **endptr)
{
    static sessionStatus_Type_Radio_Types_Pkg rTemp;
    return string_to_sessionStatus_Type_Radio_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_sessionStatus_Type_Radio_Types_Pkg_Utils = {
    sessionStatus_Type_Radio_Types_Pkg_to_string,
    check_sessionStatus_Type_Radio_Types_Pkg_string,
    string_to_sessionStatus_Type_Radio_Types_Pkg,
    is_sessionStatus_Type_Radio_Types_Pkg_double_convertion_allowed,
    sessionStatus_Type_Radio_Types_Pkg_to_double,
    compare_sessionStatus_Type_Radio_Types_Pkg,
    get_sessionStatus_Type_Radio_Types_Pkg_signature,
    set_sessionStatus_Type_Radio_Types_Pkg_default_value,
    sizeof(sessionStatus_Type_Radio_Types_Pkg)
};

/****************************************************************
 ** API_TrackSideInput_T_API_Msg_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimAPI_TrackSideInput_T_API_Msg_PkgVTable;

int API_TrackSideInput_T_API_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL
        && pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18263_to_string(pValue, pfnStrAppend, pData);
}

int string_to_API_TrackSideInput_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimAPI_TrackSideInput_T_API_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18263(str, pValue, endptr);
    }
    return nRet;
}

int is_API_TrackSideInput_T_API_Msg_Pkg_double_convertion_allowed()
{
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimAPI_TrackSideInput_T_API_Msg_PkgVTable);
    }
    return is_struct__18263_double_convertion_allowed();
}

void compare_API_TrackSideInput_T_API_Msg_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL
        && pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_version >= Scv612
        && pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnCompare != NULL) {
        if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18263(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int API_TrackSideInput_T_API_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimAPI_TrackSideInput_T_API_Msg_PkgVTable, nRetValue);
    }
    return struct__18263_to_double(pValue, nRetValue);
}

int get_API_TrackSideInput_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18263_signature(pfnStrAppend, pData);
}

int set_API_TrackSideInput_T_API_Msg_Pkg_default_value(void *pValue)
{
    return set_struct__18263_default_value(pValue);
}

int check_API_TrackSideInput_T_API_Msg_Pkg_string(const char *str, char **endptr)
{
    static API_TrackSideInput_T_API_Msg_Pkg rTemp;
    return string_to_API_TrackSideInput_T_API_Msg_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_API_TrackSideInput_T_API_Msg_Pkg_Utils = {
    API_TrackSideInput_T_API_Msg_Pkg_to_string,
    check_API_TrackSideInput_T_API_Msg_Pkg_string,
    string_to_API_TrackSideInput_T_API_Msg_Pkg,
    is_API_TrackSideInput_T_API_Msg_Pkg_double_convertion_allowed,
    API_TrackSideInput_T_API_Msg_Pkg_to_double,
    compare_API_TrackSideInput_T_API_Msg_Pkg,
    get_API_TrackSideInput_T_API_Msg_Pkg_signature,
    set_API_TrackSideInput_T_API_Msg_Pkg_default_value,
    sizeof(API_TrackSideInput_T_API_Msg_Pkg)
};

/****************************************************************
 ** API_TelegramHeader_T_API_Msg_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimAPI_TelegramHeader_T_API_Msg_PkgVTable;

int API_TelegramHeader_T_API_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL
        && pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18255_to_string(pValue, pfnStrAppend, pData);
}

int string_to_API_TelegramHeader_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimAPI_TelegramHeader_T_API_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18255(str, pValue, endptr);
    }
    return nRet;
}

int is_API_TelegramHeader_T_API_Msg_Pkg_double_convertion_allowed()
{
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimAPI_TelegramHeader_T_API_Msg_PkgVTable);
    }
    return is_struct__18255_double_convertion_allowed();
}

void compare_API_TelegramHeader_T_API_Msg_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL
        && pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_version >= Scv612
        && pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnCompare != NULL) {
        if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18255(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int API_TelegramHeader_T_API_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimAPI_TelegramHeader_T_API_Msg_PkgVTable, nRetValue);
    }
    return struct__18255_to_double(pValue, nRetValue);
}

int get_API_TelegramHeader_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18255_signature(pfnStrAppend, pData);
}

int set_API_TelegramHeader_T_API_Msg_Pkg_default_value(void *pValue)
{
    return set_struct__18255_default_value(pValue);
}

int check_API_TelegramHeader_T_API_Msg_Pkg_string(const char *str, char **endptr)
{
    static API_TelegramHeader_T_API_Msg_Pkg rTemp;
    return string_to_API_TelegramHeader_T_API_Msg_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_API_TelegramHeader_T_API_Msg_Pkg_Utils = {
    API_TelegramHeader_T_API_Msg_Pkg_to_string,
    check_API_TelegramHeader_T_API_Msg_Pkg_string,
    string_to_API_TelegramHeader_T_API_Msg_Pkg,
    is_API_TelegramHeader_T_API_Msg_Pkg_double_convertion_allowed,
    API_TelegramHeader_T_API_Msg_Pkg_to_double,
    compare_API_TelegramHeader_T_API_Msg_Pkg,
    get_API_TelegramHeader_T_API_Msg_Pkg_signature,
    set_API_TelegramHeader_T_API_Msg_Pkg_default_value,
    sizeof(API_TelegramHeader_T_API_Msg_Pkg)
};

/****************************************************************
 ** API_RadioMsgHeader_T_API_Msg_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable;

int API_RadioMsgHeader_T_API_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL
        && pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18243_to_string(pValue, pfnStrAppend, pData);
}

int string_to_API_RadioMsgHeader_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18243(str, pValue, endptr);
    }
    return nRet;
}

int is_API_RadioMsgHeader_T_API_Msg_Pkg_double_convertion_allowed()
{
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable);
    }
    return is_struct__18243_double_convertion_allowed();
}

void compare_API_RadioMsgHeader_T_API_Msg_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL
        && pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_version >= Scv612
        && pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnCompare != NULL) {
        if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18243(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int API_RadioMsgHeader_T_API_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable, nRetValue);
    }
    return struct__18243_to_double(pValue, nRetValue);
}

int get_API_RadioMsgHeader_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18243_signature(pfnStrAppend, pData);
}

int set_API_RadioMsgHeader_T_API_Msg_Pkg_default_value(void *pValue)
{
    return set_struct__18243_default_value(pValue);
}

int check_API_RadioMsgHeader_T_API_Msg_Pkg_string(const char *str, char **endptr)
{
    static API_RadioMsgHeader_T_API_Msg_Pkg rTemp;
    return string_to_API_RadioMsgHeader_T_API_Msg_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_API_RadioMsgHeader_T_API_Msg_Pkg_Utils = {
    API_RadioMsgHeader_T_API_Msg_Pkg_to_string,
    check_API_RadioMsgHeader_T_API_Msg_Pkg_string,
    string_to_API_RadioMsgHeader_T_API_Msg_Pkg,
    is_API_RadioMsgHeader_T_API_Msg_Pkg_double_convertion_allowed,
    API_RadioMsgHeader_T_API_Msg_Pkg_to_double,
    compare_API_RadioMsgHeader_T_API_Msg_Pkg,
    get_API_RadioMsgHeader_T_API_Msg_Pkg_signature,
    set_API_RadioMsgHeader_T_API_Msg_Pkg_default_value,
    sizeof(API_RadioMsgHeader_T_API_Msg_Pkg)
};

/****************************************************************
 ** positionedBG_T_TrainPosition_Types_Pck 
 ****************************************************************/

struct SimTypeVTable *pSimpositionedBG_T_TrainPosition_Types_PckVTable;

int positionedBG_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimpositionedBG_T_TrainPosition_Types_PckVTable != NULL
        && pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18067_to_string(pValue, pfnStrAppend, pData);
}

int string_to_positionedBG_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimpositionedBG_T_TrainPosition_Types_PckVTable != NULL) {
        nRet=string_to_VTable(str, pSimpositionedBG_T_TrainPosition_Types_PckVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18067(str, pValue, endptr);
    }
    return nRet;
}

int is_positionedBG_T_TrainPosition_Types_Pck_double_convertion_allowed()
{
    if (pSimpositionedBG_T_TrainPosition_Types_PckVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimpositionedBG_T_TrainPosition_Types_PckVTable);
    }
    return is_struct__18067_double_convertion_allowed();
}

void compare_positionedBG_T_TrainPosition_Types_Pck(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimpositionedBG_T_TrainPosition_Types_PckVTable != NULL
        && pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_version >= Scv612
        && pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnCompare != NULL) {
        if (pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18067(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int positionedBG_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nRetValue)
{
    if (pSimpositionedBG_T_TrainPosition_Types_PckVTable != NULL) {
        return VTable_to_double(pValue, pSimpositionedBG_T_TrainPosition_Types_PckVTable, nRetValue);
    }
    return struct__18067_to_double(pValue, nRetValue);
}

int get_positionedBG_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18067_signature(pfnStrAppend, pData);
}

int set_positionedBG_T_TrainPosition_Types_Pck_default_value(void *pValue)
{
    return set_struct__18067_default_value(pValue);
}

int check_positionedBG_T_TrainPosition_Types_Pck_string(const char *str, char **endptr)
{
    static positionedBG_T_TrainPosition_Types_Pck rTemp;
    return string_to_positionedBG_T_TrainPosition_Types_Pck(str, &rTemp, endptr);
}

SimTypeUtils _Type_positionedBG_T_TrainPosition_Types_Pck_Utils = {
    positionedBG_T_TrainPosition_Types_Pck_to_string,
    check_positionedBG_T_TrainPosition_Types_Pck_string,
    string_to_positionedBG_T_TrainPosition_Types_Pck,
    is_positionedBG_T_TrainPosition_Types_Pck_double_convertion_allowed,
    positionedBG_T_TrainPosition_Types_Pck_to_double,
    compare_positionedBG_T_TrainPosition_Types_Pck,
    get_positionedBG_T_TrainPosition_Types_Pck_signature,
    set_positionedBG_T_TrainPosition_Types_Pck_default_value,
    sizeof(positionedBG_T_TrainPosition_Types_Pck)
};

/****************************************************************
 ** infoFromLinking_T_TrainPosition_Types_Pck 
 ****************************************************************/

struct SimTypeVTable *pSiminfoFromLinking_T_TrainPosition_Types_PckVTable;

int infoFromLinking_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable != NULL
        && pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18008_to_string(pValue, pfnStrAppend, pData);
}

int string_to_infoFromLinking_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable != NULL) {
        nRet=string_to_VTable(str, pSiminfoFromLinking_T_TrainPosition_Types_PckVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18008(str, pValue, endptr);
    }
    return nRet;
}

int is_infoFromLinking_T_TrainPosition_Types_Pck_double_convertion_allowed()
{
    if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSiminfoFromLinking_T_TrainPosition_Types_PckVTable);
    }
    return is_struct__18008_double_convertion_allowed();
}

void compare_infoFromLinking_T_TrainPosition_Types_Pck(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable != NULL
        && pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_version >= Scv612
        && pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnCompare != NULL) {
        if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18008(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int infoFromLinking_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nRetValue)
{
    if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable != NULL) {
        return VTable_to_double(pValue, pSiminfoFromLinking_T_TrainPosition_Types_PckVTable, nRetValue);
    }
    return struct__18008_to_double(pValue, nRetValue);
}

int get_infoFromLinking_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18008_signature(pfnStrAppend, pData);
}

int set_infoFromLinking_T_TrainPosition_Types_Pck_default_value(void *pValue)
{
    return set_struct__18008_default_value(pValue);
}

int check_infoFromLinking_T_TrainPosition_Types_Pck_string(const char *str, char **endptr)
{
    static infoFromLinking_T_TrainPosition_Types_Pck rTemp;
    return string_to_infoFromLinking_T_TrainPosition_Types_Pck(str, &rTemp, endptr);
}

SimTypeUtils _Type_infoFromLinking_T_TrainPosition_Types_Pck_Utils = {
    infoFromLinking_T_TrainPosition_Types_Pck_to_string,
    check_infoFromLinking_T_TrainPosition_Types_Pck_string,
    string_to_infoFromLinking_T_TrainPosition_Types_Pck,
    is_infoFromLinking_T_TrainPosition_Types_Pck_double_convertion_allowed,
    infoFromLinking_T_TrainPosition_Types_Pck_to_double,
    compare_infoFromLinking_T_TrainPosition_Types_Pck,
    get_infoFromLinking_T_TrainPosition_Types_Pck_signature,
    set_infoFromLinking_T_TrainPosition_Types_Pck_default_value,
    sizeof(infoFromLinking_T_TrainPosition_Types_Pck)
};

/****************************************************************
 ** positionedBGs_T_TrainPosition_Types_Pck 
 ****************************************************************/

struct SimTypeVTable *pSimpositionedBGs_T_TrainPosition_Types_PckVTable;

int positionedBGs_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable != NULL
        && pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18095_to_string(pValue, pfnStrAppend, pData);
}

int string_to_positionedBGs_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable != NULL) {
        nRet=string_to_VTable(str, pSimpositionedBGs_T_TrainPosition_Types_PckVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18095(str, pValue, endptr);
    }
    return nRet;
}

int is_positionedBGs_T_TrainPosition_Types_Pck_double_convertion_allowed()
{
    if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimpositionedBGs_T_TrainPosition_Types_PckVTable);
    }
    return is_array__18095_double_convertion_allowed();
}

void compare_positionedBGs_T_TrainPosition_Types_Pck(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable != NULL
        && pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_version >= Scv612
        && pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnCompare != NULL) {
        if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18095(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int positionedBGs_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nRetValue)
{
    if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable != NULL) {
        return VTable_to_double(pValue, pSimpositionedBGs_T_TrainPosition_Types_PckVTable, nRetValue);
    }
    return array__18095_to_double(pValue, nRetValue);
}

int get_positionedBGs_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18095_signature(pfnStrAppend, pData);
}

int set_positionedBGs_T_TrainPosition_Types_Pck_default_value(void *pValue)
{
    return set_array__18095_default_value(pValue);
}

int check_positionedBGs_T_TrainPosition_Types_Pck_string(const char *str, char **endptr)
{
    static positionedBGs_T_TrainPosition_Types_Pck rTemp;
    return string_to_positionedBGs_T_TrainPosition_Types_Pck(str, &rTemp, endptr);
}

SimTypeUtils _Type_positionedBGs_T_TrainPosition_Types_Pck_Utils = {
    positionedBGs_T_TrainPosition_Types_Pck_to_string,
    check_positionedBGs_T_TrainPosition_Types_Pck_string,
    string_to_positionedBGs_T_TrainPosition_Types_Pck,
    is_positionedBGs_T_TrainPosition_Types_Pck_double_convertion_allowed,
    positionedBGs_T_TrainPosition_Types_Pck_to_double,
    compare_positionedBGs_T_TrainPosition_Types_Pck,
    get_positionedBGs_T_TrainPosition_Types_Pck_signature,
    set_positionedBGs_T_TrainPosition_Types_Pck_default_value,
    sizeof(positionedBGs_T_TrainPosition_Types_Pck)
};

/****************************************************************
 ** trainPosition_T_TrainPosition_Types_Pck 
 ****************************************************************/

struct SimTypeVTable *pSimtrainPosition_T_TrainPosition_Types_PckVTable;

int trainPosition_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimtrainPosition_T_TrainPosition_Types_PckVTable != NULL
        && pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18078_to_string(pValue, pfnStrAppend, pData);
}

int string_to_trainPosition_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimtrainPosition_T_TrainPosition_Types_PckVTable != NULL) {
        nRet=string_to_VTable(str, pSimtrainPosition_T_TrainPosition_Types_PckVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18078(str, pValue, endptr);
    }
    return nRet;
}

int is_trainPosition_T_TrainPosition_Types_Pck_double_convertion_allowed()
{
    if (pSimtrainPosition_T_TrainPosition_Types_PckVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimtrainPosition_T_TrainPosition_Types_PckVTable);
    }
    return is_struct__18078_double_convertion_allowed();
}

void compare_trainPosition_T_TrainPosition_Types_Pck(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimtrainPosition_T_TrainPosition_Types_PckVTable != NULL
        && pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_version >= Scv612
        && pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnCompare != NULL) {
        if (pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18078(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int trainPosition_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nRetValue)
{
    if (pSimtrainPosition_T_TrainPosition_Types_PckVTable != NULL) {
        return VTable_to_double(pValue, pSimtrainPosition_T_TrainPosition_Types_PckVTable, nRetValue);
    }
    return struct__18078_to_double(pValue, nRetValue);
}

int get_trainPosition_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18078_signature(pfnStrAppend, pData);
}

int set_trainPosition_T_TrainPosition_Types_Pck_default_value(void *pValue)
{
    return set_struct__18078_default_value(pValue);
}

int check_trainPosition_T_TrainPosition_Types_Pck_string(const char *str, char **endptr)
{
    static trainPosition_T_TrainPosition_Types_Pck rTemp;
    return string_to_trainPosition_T_TrainPosition_Types_Pck(str, &rTemp, endptr);
}

SimTypeUtils _Type_trainPosition_T_TrainPosition_Types_Pck_Utils = {
    trainPosition_T_TrainPosition_Types_Pck_to_string,
    check_trainPosition_T_TrainPosition_Types_Pck_string,
    string_to_trainPosition_T_TrainPosition_Types_Pck,
    is_trainPosition_T_TrainPosition_Types_Pck_double_convertion_allowed,
    trainPosition_T_TrainPosition_Types_Pck_to_double,
    compare_trainPosition_T_TrainPosition_Types_Pck,
    get_trainPosition_T_TrainPosition_Types_Pck_signature,
    set_trainPosition_T_TrainPosition_Types_Pck_default_value,
    sizeof(trainPosition_T_TrainPosition_Types_Pck)
};

/****************************************************************
 ** P58_PositionReportParameters_T_Packet_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable;

int P58_PositionReportParameters_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable != NULL
        && pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18314_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P58_PositionReportParameters_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18314(str, pValue, endptr);
    }
    return nRet;
}

int is_P58_PositionReportParameters_T_Packet_Types_Pkg_double_convertion_allowed()
{
    if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable);
    }
    return is_struct__18314_double_convertion_allowed();
}

void compare_P58_PositionReportParameters_T_Packet_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable != NULL
        && pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_version >= Scv612
        && pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18314(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P58_PositionReportParameters_T_Packet_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable, nRetValue);
    }
    return struct__18314_to_double(pValue, nRetValue);
}

int get_P58_PositionReportParameters_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18314_signature(pfnStrAppend, pData);
}

int set_P58_PositionReportParameters_T_Packet_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18314_default_value(pValue);
}

int check_P58_PositionReportParameters_T_Packet_Types_Pkg_string(const char *str, char **endptr)
{
    static P58_PositionReportParameters_T_Packet_Types_Pkg rTemp;
    return string_to_P58_PositionReportParameters_T_Packet_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_P58_PositionReportParameters_T_Packet_Types_Pkg_Utils = {
    P58_PositionReportParameters_T_Packet_Types_Pkg_to_string,
    check_P58_PositionReportParameters_T_Packet_Types_Pkg_string,
    string_to_P58_PositionReportParameters_T_Packet_Types_Pkg,
    is_P58_PositionReportParameters_T_Packet_Types_Pkg_double_convertion_allowed,
    P58_PositionReportParameters_T_Packet_Types_Pkg_to_double,
    compare_P58_PositionReportParameters_T_Packet_Types_Pkg,
    get_P58_PositionReportParameters_T_Packet_Types_Pkg_signature,
    set_P58_PositionReportParameters_T_Packet_Types_Pkg_default_value,
    sizeof(P58_PositionReportParameters_T_Packet_Types_Pkg)
};

/****************************************************************
 ** IterPacket58List_T_Packet_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimIterPacket58List_T_Packet_Types_PkgVTable;

int IterPacket58List_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimIterPacket58List_T_Packet_Types_PkgVTable != NULL
        && pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18311_to_string(pValue, pfnStrAppend, pData);
}

int string_to_IterPacket58List_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimIterPacket58List_T_Packet_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimIterPacket58List_T_Packet_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18311(str, pValue, endptr);
    }
    return nRet;
}

int is_IterPacket58List_T_Packet_Types_Pkg_double_convertion_allowed()
{
    if (pSimIterPacket58List_T_Packet_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimIterPacket58List_T_Packet_Types_PkgVTable);
    }
    return is_array__18311_double_convertion_allowed();
}

void compare_IterPacket58List_T_Packet_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimIterPacket58List_T_Packet_Types_PkgVTable != NULL
        && pSimIterPacket58List_T_Packet_Types_PkgVTable->m_version >= Scv612
        && pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimIterPacket58List_T_Packet_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18311(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int IterPacket58List_T_Packet_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimIterPacket58List_T_Packet_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimIterPacket58List_T_Packet_Types_PkgVTable, nRetValue);
    }
    return array__18311_to_double(pValue, nRetValue);
}

int get_IterPacket58List_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18311_signature(pfnStrAppend, pData);
}

int set_IterPacket58List_T_Packet_Types_Pkg_default_value(void *pValue)
{
    return set_array__18311_default_value(pValue);
}

int check_IterPacket58List_T_Packet_Types_Pkg_string(const char *str, char **endptr)
{
    static IterPacket58List_T_Packet_Types_Pkg rTemp;
    return string_to_IterPacket58List_T_Packet_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_IterPacket58List_T_Packet_Types_Pkg_Utils = {
    IterPacket58List_T_Packet_Types_Pkg_to_string,
    check_IterPacket58List_T_Packet_Types_Pkg_string,
    string_to_IterPacket58List_T_Packet_Types_Pkg,
    is_IterPacket58List_T_Packet_Types_Pkg_double_convertion_allowed,
    IterPacket58List_T_Packet_Types_Pkg_to_double,
    compare_IterPacket58List_T_Packet_Types_Pkg,
    get_IterPacket58List_T_Packet_Types_Pkg_signature,
    set_IterPacket58List_T_Packet_Types_Pkg_default_value,
    sizeof(IterPacket58List_T_Packet_Types_Pkg)
};

/****************************************************************
 ** IterPacket58_T_Packet_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimIterPacket58_T_Packet_Types_PkgVTable;

int IterPacket58_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimIterPacket58_T_Packet_Types_PkgVTable != NULL
        && pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18306_to_string(pValue, pfnStrAppend, pData);
}

int string_to_IterPacket58_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimIterPacket58_T_Packet_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimIterPacket58_T_Packet_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18306(str, pValue, endptr);
    }
    return nRet;
}

int is_IterPacket58_T_Packet_Types_Pkg_double_convertion_allowed()
{
    if (pSimIterPacket58_T_Packet_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimIterPacket58_T_Packet_Types_PkgVTable);
    }
    return is_struct__18306_double_convertion_allowed();
}

void compare_IterPacket58_T_Packet_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimIterPacket58_T_Packet_Types_PkgVTable != NULL
        && pSimIterPacket58_T_Packet_Types_PkgVTable->m_version >= Scv612
        && pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimIterPacket58_T_Packet_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18306(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int IterPacket58_T_Packet_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimIterPacket58_T_Packet_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimIterPacket58_T_Packet_Types_PkgVTable, nRetValue);
    }
    return struct__18306_to_double(pValue, nRetValue);
}

int get_IterPacket58_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18306_signature(pfnStrAppend, pData);
}

int set_IterPacket58_T_Packet_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18306_default_value(pValue);
}

int check_IterPacket58_T_Packet_Types_Pkg_string(const char *str, char **endptr)
{
    static IterPacket58_T_Packet_Types_Pkg rTemp;
    return string_to_IterPacket58_T_Packet_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_IterPacket58_T_Packet_Types_Pkg_Utils = {
    IterPacket58_T_Packet_Types_Pkg_to_string,
    check_IterPacket58_T_Packet_Types_Pkg_string,
    string_to_IterPacket58_T_Packet_Types_Pkg,
    is_IterPacket58_T_Packet_Types_Pkg_double_convertion_allowed,
    IterPacket58_T_Packet_Types_Pkg_to_double,
    compare_IterPacket58_T_Packet_Types_Pkg,
    get_IterPacket58_T_Packet_Types_Pkg_signature,
    set_IterPacket58_T_Packet_Types_Pkg_default_value,
    sizeof(IterPacket58_T_Packet_Types_Pkg)
};

/****************************************************************
 ** P42_SessionManagement_T_Packet_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimP42_SessionManagement_T_Packet_Types_PkgVTable;

int P42_SessionManagement_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL
        && pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18288_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P42_SessionManagement_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimP42_SessionManagement_T_Packet_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18288(str, pValue, endptr);
    }
    return nRet;
}

int is_P42_SessionManagement_T_Packet_Types_Pkg_double_convertion_allowed()
{
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP42_SessionManagement_T_Packet_Types_PkgVTable);
    }
    return is_struct__18288_double_convertion_allowed();
}

void compare_P42_SessionManagement_T_Packet_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL
        && pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_version >= Scv612
        && pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18288(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P42_SessionManagement_T_Packet_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimP42_SessionManagement_T_Packet_Types_PkgVTable, nRetValue);
    }
    return struct__18288_to_double(pValue, nRetValue);
}

int get_P42_SessionManagement_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18288_signature(pfnStrAppend, pData);
}

int set_P42_SessionManagement_T_Packet_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18288_default_value(pValue);
}

int check_P42_SessionManagement_T_Packet_Types_Pkg_string(const char *str, char **endptr)
{
    static P42_SessionManagement_T_Packet_Types_Pkg rTemp;
    return string_to_P42_SessionManagement_T_Packet_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_P42_SessionManagement_T_Packet_Types_Pkg_Utils = {
    P42_SessionManagement_T_Packet_Types_Pkg_to_string,
    check_P42_SessionManagement_T_Packet_Types_Pkg_string,
    string_to_P42_SessionManagement_T_Packet_Types_Pkg,
    is_P42_SessionManagement_T_Packet_Types_Pkg_double_convertion_allowed,
    P42_SessionManagement_T_Packet_Types_Pkg_to_double,
    compare_P42_SessionManagement_T_Packet_Types_Pkg,
    get_P42_SessionManagement_T_Packet_Types_Pkg_signature,
    set_P42_SessionManagement_T_Packet_Types_Pkg_default_value,
    sizeof(P42_SessionManagement_T_Packet_Types_Pkg)
};

/****************************************************************
 ** P45_RadioNetworkRegistration_T_Packet_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable;

int P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL
        && pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18282_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18282(str, pValue, endptr);
    }
    return nRet;
}

int is_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_double_convertion_allowed()
{
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable);
    }
    return is_struct__18282_double_convertion_allowed();
}

void compare_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL
        && pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_version >= Scv612
        && pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18282(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable, nRetValue);
    }
    return struct__18282_to_double(pValue, nRetValue);
}

int get_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18282_signature(pfnStrAppend, pData);
}

int set_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_default_value(void *pValue)
{
    return set_struct__18282_default_value(pValue);
}

int check_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_string(const char *str, char **endptr)
{
    static P45_RadioNetworkRegistration_T_Packet_Types_Pkg rTemp;
    return string_to_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils = {
    P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_string,
    check_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_string,
    string_to_P45_RadioNetworkRegistration_T_Packet_Types_Pkg,
    is_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_double_convertion_allowed,
    P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_double,
    compare_P45_RadioNetworkRegistration_T_Packet_Types_Pkg,
    get_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_signature,
    set_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_default_value,
    sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg)
};

/****************************************************************
 ** CompressedBaliseMessage_TM 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedBaliseMessage_TMVTable;

int CompressedBaliseMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL
        && pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18139_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedBaliseMessage_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18139(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedBaliseMessage_TM_double_convertion_allowed()
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCompressedBaliseMessage_TMVTable);
    }
    return is_struct__18139_double_convertion_allowed();
}

void compare_CompressedBaliseMessage_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedBaliseMessage_TMVTable != NULL
        && pSimCompressedBaliseMessage_TMVTable->m_version >= Scv612
        && pSimCompressedBaliseMessage_TMVTable->m_pfnCompare != NULL) {
        if (pSimCompressedBaliseMessage_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedBaliseMessage_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedBaliseMessage_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18139(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedBaliseMessage_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedBaliseMessage_TMVTable, nRetValue);
    }
    return struct__18139_to_double(pValue, nRetValue);
}

int get_CompressedBaliseMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18139_signature(pfnStrAppend, pData);
}

int set_CompressedBaliseMessage_TM_default_value(void *pValue)
{
    return set_struct__18139_default_value(pValue);
}

int check_CompressedBaliseMessage_TM_string(const char *str, char **endptr)
{
    static CompressedBaliseMessage_TM rTemp;
    return string_to_CompressedBaliseMessage_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_CompressedBaliseMessage_TM_Utils = {
    CompressedBaliseMessage_TM_to_string,
    check_CompressedBaliseMessage_TM_string,
    string_to_CompressedBaliseMessage_TM,
    is_CompressedBaliseMessage_TM_double_convertion_allowed,
    CompressedBaliseMessage_TM_to_double,
    compare_CompressedBaliseMessage_TM,
    get_CompressedBaliseMessage_TM_signature,
    set_CompressedBaliseMessage_TM_default_value,
    sizeof(CompressedBaliseMessage_TM)
};

/****************************************************************
 ** BaliseTelegramHeader_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimBaliseTelegramHeader_int_T_TMVTable;

int BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18098_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseTelegramHeader_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18098(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseTelegramHeader_int_T_TM_double_convertion_allowed()
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBaliseTelegramHeader_int_T_TMVTable);
    }
    return is_struct__18098_double_convertion_allowed();
}

void compare_BaliseTelegramHeader_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_version >= Scv612
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimBaliseTelegramHeader_int_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18098(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseTelegramHeader_int_T_TMVTable, nRetValue);
    }
    return struct__18098_to_double(pValue, nRetValue);
}

int get_BaliseTelegramHeader_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18098_signature(pfnStrAppend, pData);
}

int set_BaliseTelegramHeader_int_T_TM_default_value(void *pValue)
{
    return set_struct__18098_default_value(pValue);
}

int check_BaliseTelegramHeader_int_T_TM_string(const char *str, char **endptr)
{
    static BaliseTelegramHeader_int_T_TM rTemp;
    return string_to_BaliseTelegramHeader_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_BaliseTelegramHeader_int_T_TM_Utils = {
    BaliseTelegramHeader_int_T_TM_to_string,
    check_BaliseTelegramHeader_int_T_TM_string,
    string_to_BaliseTelegramHeader_int_T_TM,
    is_BaliseTelegramHeader_int_T_TM_double_convertion_allowed,
    BaliseTelegramHeader_int_T_TM_to_double,
    compare_BaliseTelegramHeader_int_T_TM,
    get_BaliseTelegramHeader_int_T_TM_signature,
    set_BaliseTelegramHeader_int_T_TM_default_value,
    sizeof(BaliseTelegramHeader_int_T_TM)
};

/****************************************************************
 ** OrBG_TM 
 ****************************************************************/

struct SimTypeVTable *pSimOrBG_TMVTable;

static SimEnumValUtils OrBG_TM_values[] = {
    { "TM::Amsterdam", Amsterdam_TM},
    { "Amsterdam", Amsterdam_TM},
    { "TM::Utrecht", Utrecht_TM},
    { "Utrecht", Utrecht_TM},
};

int OrBG_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrBG_TMVTable != NULL
        && pSimOrBG_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrBG_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(OrBG_TM*)pValue, OrBG_TM_values, 4, pfnStrAppend, pData);
}

int string_to_OrBG_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOrBG_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimOrBG_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, OrBG_TM_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(OrBG_TM*)pValue = nTemp;
    }
    return nRet;
}

int is_OrBG_TM_double_convertion_allowed()
{
    if (pSimOrBG_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOrBG_TMVTable);
    }
    return 1;
}

void compare_OrBG_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOrBG_TMVTable != NULL
        && pSimOrBG_TMVTable->m_version >= Scv612
        && pSimOrBG_TMVTable->m_pfnCompare != NULL) {
        if (pSimOrBG_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrBG_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOrBG_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(OrBG_TM*)pValue1), (int)(*(OrBG_TM*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OrBG_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOrBG_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimOrBG_TMVTable, nRetValue);
    }
    *nRetValue = (double)*((OrBG_TM*)pValue);
    return 1;
}

int get_OrBG_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(OrBG_TM_values, 4, pfnStrAppend, pData);
}

int set_OrBG_TM_default_value(void *pValue)
{
    *(OrBG_TM*)pValue = Amsterdam_TM;
    return 1;
}

int check_OrBG_TM_string(const char *str, char **endptr)
{
    static OrBG_TM rTemp;
    return string_to_OrBG_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_OrBG_TM_Utils = {
    OrBG_TM_to_string,
    check_OrBG_TM_string,
    string_to_OrBG_TM,
    is_OrBG_TM_double_convertion_allowed,
    OrBG_TM_to_double,
    compare_OrBG_TM,
    get_OrBG_TM_signature,
    set_OrBG_TM_default_value,
    sizeof(OrBG_TM)
};

/****************************************************************
 ** OrLine_TM 
 ****************************************************************/

struct SimTypeVTable *pSimOrLine_TMVTable;

static SimEnumValUtils OrLine_TM_values[] = {
    { "TM::N", N_TM},
    { "N", N_TM},
    { "TM::Z", Z_TM},
    { "Z", Z_TM},
};

int OrLine_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrLine_TMVTable != NULL
        && pSimOrLine_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrLine_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(OrLine_TM*)pValue, OrLine_TM_values, 4, pfnStrAppend, pData);
}

int string_to_OrLine_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOrLine_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimOrLine_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, OrLine_TM_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(OrLine_TM*)pValue = nTemp;
    }
    return nRet;
}

int is_OrLine_TM_double_convertion_allowed()
{
    if (pSimOrLine_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOrLine_TMVTable);
    }
    return 1;
}

void compare_OrLine_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOrLine_TMVTable != NULL
        && pSimOrLine_TMVTable->m_version >= Scv612
        && pSimOrLine_TMVTable->m_pfnCompare != NULL) {
        if (pSimOrLine_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrLine_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOrLine_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(OrLine_TM*)pValue1), (int)(*(OrLine_TM*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OrLine_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOrLine_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimOrLine_TMVTable, nRetValue);
    }
    *nRetValue = (double)*((OrLine_TM*)pValue);
    return 1;
}

int get_OrLine_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(OrLine_TM_values, 4, pfnStrAppend, pData);
}

int set_OrLine_TM_default_value(void *pValue)
{
    *(OrLine_TM*)pValue = N_TM;
    return 1;
}

int check_OrLine_TM_string(const char *str, char **endptr)
{
    static OrLine_TM rTemp;
    return string_to_OrLine_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_OrLine_TM_Utils = {
    OrLine_TM_to_string,
    check_OrLine_TM_string,
    string_to_OrLine_TM,
    is_OrLine_TM_double_convertion_allowed,
    OrLine_TM_to_double,
    compare_OrLine_TM,
    get_OrLine_TM_signature,
    set_OrLine_TM_default_value,
    sizeof(OrLine_TM)
};

/****************************************************************
 ** P005_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_trackside_int_T_TMVTable;

int P005_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_trackside_int_T_TMVTable != NULL
        && pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18177_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18177(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_trackside_int_T_TM_double_convertion_allowed()
{
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP005_trackside_int_T_TMVTable);
    }
    return is_struct__18177_double_convertion_allowed();
}

void compare_P005_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_trackside_int_T_TMVTable != NULL
        && pSimP005_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP005_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_trackside_int_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18177(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__18177_to_double(pValue, nRetValue);
}

int get_P005_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18177_signature(pfnStrAppend, pData);
}

int set_P005_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__18177_default_value(pValue);
}

int check_P005_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P005_trackside_int_T_TM rTemp;
    return string_to_P005_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_trackside_int_T_TM_Utils = {
    P005_trackside_int_T_TM_to_string,
    check_P005_trackside_int_T_TM_string,
    string_to_P005_trackside_int_T_TM,
    is_P005_trackside_int_T_TM_double_convertion_allowed,
    P005_trackside_int_T_TM_to_double,
    compare_P005_trackside_int_T_TM,
    get_P005_trackside_int_T_TM_signature,
    set_P005_trackside_int_T_TM_default_value,
    sizeof(P005_trackside_int_T_TM)
};

/****************************************************************
 ** P005_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_trackide_sectionlist_T_TMVTable;

int P005_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL
        && pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18174_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18174(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_trackide_sectionlist_T_TM_double_convertion_allowed()
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP005_trackide_sectionlist_T_TMVTable);
    }
    return is_array__18174_double_convertion_allowed();
}

void compare_P005_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL
        && pSimP005_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimP005_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18174(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__18174_to_double(pValue, nRetValue);
}

int get_P005_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18174_signature(pfnStrAppend, pData);
}

int set_P005_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__18174_default_value(pValue);
}

int check_P005_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static P005_trackide_sectionlist_T_TM rTemp;
    return string_to_P005_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_trackide_sectionlist_T_TM_Utils = {
    P005_trackide_sectionlist_T_TM_to_string,
    check_P005_trackide_sectionlist_T_TM_string,
    string_to_P005_trackide_sectionlist_T_TM,
    is_P005_trackide_sectionlist_T_TM_double_convertion_allowed,
    P005_trackide_sectionlist_T_TM_to_double,
    compare_P005_trackide_sectionlist_T_TM,
    get_P005_trackide_sectionlist_T_TM_signature,
    set_P005_trackide_sectionlist_T_TM_default_value,
    sizeof(P005_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** P005_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_section_int_T_TMVTable;

int P005_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_section_int_T_TMVTable != NULL
        && pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18155_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18155(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_section_int_T_TM_double_convertion_allowed()
{
    if (pSimP005_section_int_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP005_section_int_T_TMVTable);
    }
    return is_struct__18155_double_convertion_allowed();
}

void compare_P005_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_section_int_T_TMVTable != NULL
        && pSimP005_section_int_T_TMVTable->m_version >= Scv612
        && pSimP005_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_section_int_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18155(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_section_int_T_TMVTable, nRetValue);
    }
    return struct__18155_to_double(pValue, nRetValue);
}

int get_P005_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18155_signature(pfnStrAppend, pData);
}

int set_P005_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__18155_default_value(pValue);
}

int check_P005_section_int_T_TM_string(const char *str, char **endptr)
{
    static P005_section_int_T_TM rTemp;
    return string_to_P005_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_section_int_T_TM_Utils = {
    P005_section_int_T_TM_to_string,
    check_P005_section_int_T_TM_string,
    string_to_P005_section_int_T_TM,
    is_P005_section_int_T_TM_double_convertion_allowed,
    P005_section_int_T_TM_to_double,
    compare_P005_section_int_T_TM,
    get_P005_section_int_T_TM_signature,
    set_P005_section_int_T_TM_default_value,
    sizeof(P005_section_int_T_TM)
};

/****************************************************************
 ** P005_sections_array_flat_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_sections_array_flat_T_TMVTable;

int P005_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_sections_array_flat_T_TMVTable != NULL
        && pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_231_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_sections_array_flat_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_sections_array_flat_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_231(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_sections_array_flat_T_TM_double_convertion_allowed()
{
    if (pSimP005_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP005_sections_array_flat_T_TMVTable);
    }
    return is_array_int_231_double_convertion_allowed();
}

void compare_P005_sections_array_flat_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_sections_array_flat_T_TMVTable != NULL
        && pSimP005_sections_array_flat_T_TMVTable->m_version >= Scv612
        && pSimP005_sections_array_flat_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_sections_array_flat_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_sections_array_flat_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_sections_array_flat_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_231(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_sections_array_flat_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_231_to_double(pValue, nRetValue);
}

int get_P005_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_231_signature(pfnStrAppend, pData);
}

int set_P005_sections_array_flat_T_TM_default_value(void *pValue)
{
    return set_array_int_231_default_value(pValue);
}

int check_P005_sections_array_flat_T_TM_string(const char *str, char **endptr)
{
    static P005_sections_array_flat_T_TM rTemp;
    return string_to_P005_sections_array_flat_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_sections_array_flat_T_TM_Utils = {
    P005_sections_array_flat_T_TM_to_string,
    check_P005_sections_array_flat_T_TM_string,
    string_to_P005_sections_array_flat_T_TM,
    is_P005_sections_array_flat_T_TM_double_convertion_allowed,
    P005_sections_array_flat_T_TM_to_double,
    compare_P005_sections_array_flat_T_TM,
    get_P005_sections_array_flat_T_TM_signature,
    set_P005_sections_array_flat_T_TM_default_value,
    sizeof(P005_sections_array_flat_T_TM)
};

/****************************************************************
 ** P005_OBU_sectionlist_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_OBU_sectionlist_array_T_TMVTable;

int P005_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_7_33_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_OBU_sectionlist_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_7_33(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_OBU_sectionlist_array_T_TM_double_convertion_allowed()
{
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP005_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_7_33_double_convertion_allowed();
}

void compare_P005_OBU_sectionlist_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP005_OBU_sectionlist_array_T_TMVTable->m_version >= Scv612
        && pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_OBU_sectionlist_array_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_7_33(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_7_33_to_double(pValue, nRetValue);
}

int get_P005_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_7_33_signature(pfnStrAppend, pData);
}

int set_P005_OBU_sectionlist_array_T_TM_default_value(void *pValue)
{
    return set_array_int_7_33_default_value(pValue);
}

int check_P005_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr)
{
    static P005_OBU_sectionlist_array_T_TM rTemp;
    return string_to_P005_OBU_sectionlist_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_OBU_sectionlist_array_T_TM_Utils = {
    P005_OBU_sectionlist_array_T_TM_to_string,
    check_P005_OBU_sectionlist_array_T_TM_string,
    string_to_P005_OBU_sectionlist_array_T_TM,
    is_P005_OBU_sectionlist_array_T_TM_double_convertion_allowed,
    P005_OBU_sectionlist_array_T_TM_to_double,
    compare_P005_OBU_sectionlist_array_T_TM,
    get_P005_OBU_sectionlist_array_T_TM_signature,
    set_P005_OBU_sectionlist_array_T_TM_default_value,
    sizeof(P005_OBU_sectionlist_array_T_TM)
};

/****************************************************************
 ** P005_section_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_section_array_T_TMVTable;

int P005_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_section_array_T_TMVTable != NULL
        && pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_section_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_7_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_section_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_section_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_section_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_7(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_section_array_T_TM_double_convertion_allowed()
{
    if (pSimP005_section_array_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP005_section_array_T_TMVTable);
    }
    return is_array_int_7_double_convertion_allowed();
}

void compare_P005_section_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_section_array_T_TMVTable != NULL
        && pSimP005_section_array_T_TMVTable->m_version >= Scv612
        && pSimP005_section_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_section_array_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_section_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_section_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_7(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_section_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_section_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_section_array_T_TMVTable, nRetValue);
    }
    return array_int_7_to_double(pValue, nRetValue);
}

int get_P005_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_7_signature(pfnStrAppend, pData);
}

int set_P005_section_array_T_TM_default_value(void *pValue)
{
    return set_array_int_7_default_value(pValue);
}

int check_P005_section_array_T_TM_string(const char *str, char **endptr)
{
    static P005_section_array_T_TM rTemp;
    return string_to_P005_section_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_section_array_T_TM_Utils = {
    P005_section_array_T_TM_to_string,
    check_P005_section_array_T_TM_string,
    string_to_P005_section_array_T_TM,
    is_P005_section_array_T_TM_double_convertion_allowed,
    P005_section_array_T_TM_to_double,
    compare_P005_section_array_T_TM,
    get_P005_section_array_T_TM_signature,
    set_P005_section_array_T_TM_default_value,
    sizeof(P005_section_array_T_TM)
};

/****************************************************************
 ** P005_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_OBU_sectionlist_int_T_TMVTable;

int P005_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18171_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18171(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_OBU_sectionlist_int_T_TM_double_convertion_allowed()
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP005_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__18171_double_convertion_allowed();
}

void compare_P005_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP005_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18171(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__18171_to_double(pValue, nRetValue);
}

int get_P005_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18171_signature(pfnStrAppend, pData);
}

int set_P005_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__18171_default_value(pValue);
}

int check_P005_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static P005_OBU_sectionlist_int_T_TM rTemp;
    return string_to_P005_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_OBU_sectionlist_int_T_TM_Utils = {
    P005_OBU_sectionlist_int_T_TM_to_string,
    check_P005_OBU_sectionlist_int_T_TM_string,
    string_to_P005_OBU_sectionlist_int_T_TM,
    is_P005_OBU_sectionlist_int_T_TM_double_convertion_allowed,
    P005_OBU_sectionlist_int_T_TM_to_double,
    compare_P005_OBU_sectionlist_int_T_TM,
    get_P005_OBU_sectionlist_int_T_TM_signature,
    set_P005_OBU_sectionlist_int_T_TM_default_value,
    sizeof(P005_OBU_sectionlist_int_T_TM)
};

/****************************************************************
 ** BaliseGroupData_TM 
 ****************************************************************/

struct SimTypeVTable *pSimBaliseGroupData_TMVTable;

int BaliseGroupData_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBaliseGroupData_TMVTable != NULL
        && pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseGroupData_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18144_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseGroupData_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseGroupData_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseGroupData_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18144(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseGroupData_TM_double_convertion_allowed()
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBaliseGroupData_TMVTable);
    }
    return is_struct__18144_double_convertion_allowed();
}

void compare_BaliseGroupData_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseGroupData_TMVTable != NULL
        && pSimBaliseGroupData_TMVTable->m_version >= Scv612
        && pSimBaliseGroupData_TMVTable->m_pfnCompare != NULL) {
        if (pSimBaliseGroupData_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseGroupData_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseGroupData_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18144(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseGroupData_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseGroupData_TMVTable, nRetValue);
    }
    return struct__18144_to_double(pValue, nRetValue);
}

int get_BaliseGroupData_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18144_signature(pfnStrAppend, pData);
}

int set_BaliseGroupData_TM_default_value(void *pValue)
{
    return set_struct__18144_default_value(pValue);
}

int check_BaliseGroupData_TM_string(const char *str, char **endptr)
{
    static BaliseGroupData_TM rTemp;
    return string_to_BaliseGroupData_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_BaliseGroupData_TM_Utils = {
    BaliseGroupData_TM_to_string,
    check_BaliseGroupData_TM_string,
    string_to_BaliseGroupData_TM,
    is_BaliseGroupData_TM_double_convertion_allowed,
    BaliseGroupData_TM_to_double,
    compare_BaliseGroupData_TM,
    get_BaliseGroupData_TM_signature,
    set_BaliseGroupData_TM_default_value,
    sizeof(BaliseGroupData_TM)
};

/****************************************************************
 ** LevelDecisionTableActionKind_DataDictionary_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable;

static SimEnumValUtils LevelDecisionTableActionKind_DataDictionary_Pkg_values[] = {
    { "DataDictionary_Pkg::LD_Invalid", LD_Invalid_DataDictionary_Pkg},
    { "LD_Invalid", LD_Invalid_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_Accept", LD_Accept_DataDictionary_Pkg},
    { "LD_Accept", LD_Accept_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_Reject", LD_Reject_DataDictionary_Pkg},
    { "LD_Reject", LD_Reject_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_NotRelevant", LD_NotRelevant_DataDictionary_Pkg},
    { "LD_NotRelevant", LD_NotRelevant_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_StoreIfPendingL1Transition", LD_StoreIfPendingL1Transition_DataDictionary_Pkg},
    { "LD_StoreIfPendingL1Transition", LD_StoreIfPendingL1Transition_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_StoreIfPendingL2L3Transition", LD_StoreIfPendingL2L3Transition_DataDictionary_Pkg},
    { "LD_StoreIfPendingL2L3Transition", LD_StoreIfPendingL2L3Transition_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_RejectIfPendingAckOfTrainData", LD_RejectIfPendingAckOfTrainData_DataDictionary_Pkg},
    { "LD_RejectIfPendingAckOfTrainData", LD_RejectIfPendingAckOfTrainData_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_DUMMY1", LD_DUMMY1_DataDictionary_Pkg},
    { "LD_DUMMY1", LD_DUMMY1_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_RejectIfEmergencyBrakeActive", LD_RejectIfEmergencyBrakeActive_DataDictionary_Pkg},
    { "LD_RejectIfEmergencyBrakeActive", LD_RejectIfEmergencyBrakeActive_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_StoreIfPendingNTCTransition", LD_StoreIfPendingNTCTransition_DataDictionary_Pkg},
    { "LD_StoreIfPendingNTCTransition", LD_StoreIfPendingNTCTransition_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_RejectIfNoPendingNTCTransition", LD_RejectIfNoPendingNTCTransition_DataDictionary_Pkg},
    { "LD_RejectIfNoPendingNTCTransition", LD_RejectIfNoPendingNTCTransition_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_DUMMY2", LD_DUMMY2_DataDictionary_Pkg},
    { "LD_DUMMY2", LD_DUMMY2_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_RejectIfNoL2L3TransitionStored", LD_RejectIfNoL2L3TransitionStored_DataDictionary_Pkg},
    { "LD_RejectIfNoL2L3TransitionStored", LD_RejectIfNoL2L3TransitionStored_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_DUMMY3", LD_DUMMY3_DataDictionary_Pkg},
    { "LD_DUMMY3", LD_DUMMY3_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_DUMMY4", LD_DUMMY4_DataDictionary_Pkg},
    { "LD_DUMMY4", LD_DUMMY4_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_DUMMY5", LD_DUMMY5_DataDictionary_Pkg},
    { "LD_DUMMY5", LD_DUMMY5_DataDictionary_Pkg},
    { "DataDictionary_Pkg::LD_DUMMY6", LD_DUMMY6_DataDictionary_Pkg},
    { "LD_DUMMY6", LD_DUMMY6_DataDictionary_Pkg},
};

int LevelDecisionTableActionKind_DataDictionary_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable != NULL
        && pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue, LevelDecisionTableActionKind_DataDictionary_Pkg_values, 34, pfnStrAppend, pData);
}

int string_to_LevelDecisionTableActionKind_DataDictionary_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, LevelDecisionTableActionKind_DataDictionary_Pkg_values, 34, endptr);
        if (pValue != NULL && nRet != 0)
            *(LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue = nTemp;
    }
    return nRet;
}

int is_LevelDecisionTableActionKind_DataDictionary_Pkg_double_convertion_allowed()
{
    if (pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable);
    }
    return 1;
}

void compare_LevelDecisionTableActionKind_DataDictionary_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable != NULL
        && pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable->m_version >= Scv612
        && pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnCompare != NULL) {
        if (pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue1), (int)(*(LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int LevelDecisionTableActionKind_DataDictionary_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable, nRetValue);
    }
    *nRetValue = (double)*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue);
    return 1;
}

int get_LevelDecisionTableActionKind_DataDictionary_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(LevelDecisionTableActionKind_DataDictionary_Pkg_values, 34, pfnStrAppend, pData);
}

int set_LevelDecisionTableActionKind_DataDictionary_Pkg_default_value(void *pValue)
{
    *(LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue = LD_Invalid_DataDictionary_Pkg;
    return 1;
}

int check_LevelDecisionTableActionKind_DataDictionary_Pkg_string(const char *str, char **endptr)
{
    static LevelDecisionTableActionKind_DataDictionary_Pkg rTemp;
    return string_to_LevelDecisionTableActionKind_DataDictionary_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_LevelDecisionTableActionKind_DataDictionary_Pkg_Utils = {
    LevelDecisionTableActionKind_DataDictionary_Pkg_to_string,
    check_LevelDecisionTableActionKind_DataDictionary_Pkg_string,
    string_to_LevelDecisionTableActionKind_DataDictionary_Pkg,
    is_LevelDecisionTableActionKind_DataDictionary_Pkg_double_convertion_allowed,
    LevelDecisionTableActionKind_DataDictionary_Pkg_to_double,
    compare_LevelDecisionTableActionKind_DataDictionary_Pkg,
    get_LevelDecisionTableActionKind_DataDictionary_Pkg_signature,
    set_LevelDecisionTableActionKind_DataDictionary_Pkg_default_value,
    sizeof(LevelDecisionTableActionKind_DataDictionary_Pkg)
};

/****************************************************************
 ** LevelDecisionTableType_DataDictionary_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimLevelDecisionTableType_DataDictionary_PkgVTable;

int LevelDecisionTableType_DataDictionary_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimLevelDecisionTableType_DataDictionary_PkgVTable != NULL
        && pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18355_to_string(pValue, pfnStrAppend, pData);
}

int string_to_LevelDecisionTableType_DataDictionary_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimLevelDecisionTableType_DataDictionary_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimLevelDecisionTableType_DataDictionary_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18355(str, pValue, endptr);
    }
    return nRet;
}

int is_LevelDecisionTableType_DataDictionary_Pkg_double_convertion_allowed()
{
    if (pSimLevelDecisionTableType_DataDictionary_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimLevelDecisionTableType_DataDictionary_PkgVTable);
    }
    return is_array__18355_double_convertion_allowed();
}

void compare_LevelDecisionTableType_DataDictionary_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimLevelDecisionTableType_DataDictionary_PkgVTable != NULL
        && pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_version >= Scv612
        && pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnCompare != NULL) {
        if (pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18355(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int LevelDecisionTableType_DataDictionary_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLevelDecisionTableType_DataDictionary_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimLevelDecisionTableType_DataDictionary_PkgVTable, nRetValue);
    }
    return array__18355_to_double(pValue, nRetValue);
}

int get_LevelDecisionTableType_DataDictionary_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18355_signature(pfnStrAppend, pData);
}

int set_LevelDecisionTableType_DataDictionary_Pkg_default_value(void *pValue)
{
    return set_array__18355_default_value(pValue);
}

int check_LevelDecisionTableType_DataDictionary_Pkg_string(const char *str, char **endptr)
{
    static LevelDecisionTableType_DataDictionary_Pkg rTemp;
    return string_to_LevelDecisionTableType_DataDictionary_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_LevelDecisionTableType_DataDictionary_Pkg_Utils = {
    LevelDecisionTableType_DataDictionary_Pkg_to_string,
    check_LevelDecisionTableType_DataDictionary_Pkg_string,
    string_to_LevelDecisionTableType_DataDictionary_Pkg,
    is_LevelDecisionTableType_DataDictionary_Pkg_double_convertion_allowed,
    LevelDecisionTableType_DataDictionary_Pkg_to_double,
    compare_LevelDecisionTableType_DataDictionary_Pkg,
    get_LevelDecisionTableType_DataDictionary_Pkg_signature,
    set_LevelDecisionTableType_DataDictionary_Pkg_default_value,
    sizeof(LevelDecisionTableType_DataDictionary_Pkg)
};

/****************************************************************
 ** ModeDecisionTableType_DataDictionary_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimModeDecisionTableType_DataDictionary_PkgVTable;

int ModeDecisionTableType_DataDictionary_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimModeDecisionTableType_DataDictionary_PkgVTable != NULL
        && pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18346_to_string(pValue, pfnStrAppend, pData);
}

int string_to_ModeDecisionTableType_DataDictionary_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimModeDecisionTableType_DataDictionary_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimModeDecisionTableType_DataDictionary_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18346(str, pValue, endptr);
    }
    return nRet;
}

int is_ModeDecisionTableType_DataDictionary_Pkg_double_convertion_allowed()
{
    if (pSimModeDecisionTableType_DataDictionary_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimModeDecisionTableType_DataDictionary_PkgVTable);
    }
    return is_array__18346_double_convertion_allowed();
}

void compare_ModeDecisionTableType_DataDictionary_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimModeDecisionTableType_DataDictionary_PkgVTable != NULL
        && pSimModeDecisionTableType_DataDictionary_PkgVTable->m_version >= Scv612
        && pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnCompare != NULL) {
        if (pSimModeDecisionTableType_DataDictionary_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18346(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int ModeDecisionTableType_DataDictionary_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimModeDecisionTableType_DataDictionary_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimModeDecisionTableType_DataDictionary_PkgVTable, nRetValue);
    }
    return array__18346_to_double(pValue, nRetValue);
}

int get_ModeDecisionTableType_DataDictionary_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18346_signature(pfnStrAppend, pData);
}

int set_ModeDecisionTableType_DataDictionary_Pkg_default_value(void *pValue)
{
    return set_array__18346_default_value(pValue);
}

int check_ModeDecisionTableType_DataDictionary_Pkg_string(const char *str, char **endptr)
{
    static ModeDecisionTableType_DataDictionary_Pkg rTemp;
    return string_to_ModeDecisionTableType_DataDictionary_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_ModeDecisionTableType_DataDictionary_Pkg_Utils = {
    ModeDecisionTableType_DataDictionary_Pkg_to_string,
    check_ModeDecisionTableType_DataDictionary_Pkg_string,
    string_to_ModeDecisionTableType_DataDictionary_Pkg,
    is_ModeDecisionTableType_DataDictionary_Pkg_double_convertion_allowed,
    ModeDecisionTableType_DataDictionary_Pkg_to_double,
    compare_ModeDecisionTableType_DataDictionary_Pkg,
    get_ModeDecisionTableType_DataDictionary_Pkg_signature,
    set_ModeDecisionTableType_DataDictionary_Pkg_default_value,
    sizeof(ModeDecisionTableType_DataDictionary_Pkg)
};

/****************************************************************
 ** ModeDecisionTableActionKind_DataDictionary_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimModeDecisionTableActionKind_DataDictionary_PkgVTable;

static SimEnumValUtils ModeDecisionTableActionKind_DataDictionary_Pkg_values[] = {
    { "DataDictionary_Pkg::Accept", Accept_DataDictionary_Pkg},
    { "Accept", Accept_DataDictionary_Pkg},
    { "DataDictionary_Pkg::Reject", Reject_DataDictionary_Pkg},
    { "Reject", Reject_DataDictionary_Pkg},
    { "DataDictionary_Pkg::NotRelevant", NotRelevant_DataDictionary_Pkg},
    { "NotRelevant", NotRelevant_DataDictionary_Pkg},
    { "DataDictionary_Pkg::IfCabActive", IfCabActive_DataDictionary_Pkg},
    { "IfCabActive", IfCabActive_DataDictionary_Pkg},
    { "DataDictionary_Pkg::IfTrainDataStored", IfTrainDataStored_DataDictionary_Pkg},
    { "IfTrainDataStored", IfTrainDataStored_DataDictionary_Pkg},
    { "DataDictionary_Pkg::IfFollowingExitTRMode", IfFollowingExitTRMode_DataDictionary_Pkg},
    { "IfFollowingExitTRMode", IfFollowingExitTRMode_DataDictionary_Pkg},
};

int ModeDecisionTableActionKind_DataDictionary_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimModeDecisionTableActionKind_DataDictionary_PkgVTable != NULL
        && pSimModeDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimModeDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue, ModeDecisionTableActionKind_DataDictionary_Pkg_values, 12, pfnStrAppend, pData);
}

int string_to_ModeDecisionTableActionKind_DataDictionary_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimModeDecisionTableActionKind_DataDictionary_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimModeDecisionTableActionKind_DataDictionary_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, ModeDecisionTableActionKind_DataDictionary_Pkg_values, 12, endptr);
        if (pValue != NULL && nRet != 0)
            *(ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue = nTemp;
    }
    return nRet;
}

int is_ModeDecisionTableActionKind_DataDictionary_Pkg_double_convertion_allowed()
{
    if (pSimModeDecisionTableActionKind_DataDictionary_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimModeDecisionTableActionKind_DataDictionary_PkgVTable);
    }
    return 1;
}

void compare_ModeDecisionTableActionKind_DataDictionary_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimModeDecisionTableActionKind_DataDictionary_PkgVTable != NULL
        && pSimModeDecisionTableActionKind_DataDictionary_PkgVTable->m_version >= Scv612
        && pSimModeDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnCompare != NULL) {
        if (pSimModeDecisionTableActionKind_DataDictionary_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimModeDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimModeDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue1), (int)(*(ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int ModeDecisionTableActionKind_DataDictionary_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimModeDecisionTableActionKind_DataDictionary_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimModeDecisionTableActionKind_DataDictionary_PkgVTable, nRetValue);
    }
    *nRetValue = (double)*((ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue);
    return 1;
}

int get_ModeDecisionTableActionKind_DataDictionary_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(ModeDecisionTableActionKind_DataDictionary_Pkg_values, 12, pfnStrAppend, pData);
}

int set_ModeDecisionTableActionKind_DataDictionary_Pkg_default_value(void *pValue)
{
    *(ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue = Accept_DataDictionary_Pkg;
    return 1;
}

int check_ModeDecisionTableActionKind_DataDictionary_Pkg_string(const char *str, char **endptr)
{
    static ModeDecisionTableActionKind_DataDictionary_Pkg rTemp;
    return string_to_ModeDecisionTableActionKind_DataDictionary_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_ModeDecisionTableActionKind_DataDictionary_Pkg_Utils = {
    ModeDecisionTableActionKind_DataDictionary_Pkg_to_string,
    check_ModeDecisionTableActionKind_DataDictionary_Pkg_string,
    string_to_ModeDecisionTableActionKind_DataDictionary_Pkg,
    is_ModeDecisionTableActionKind_DataDictionary_Pkg_double_convertion_allowed,
    ModeDecisionTableActionKind_DataDictionary_Pkg_to_double,
    compare_ModeDecisionTableActionKind_DataDictionary_Pkg,
    get_ModeDecisionTableActionKind_DataDictionary_Pkg_signature,
    set_ModeDecisionTableActionKind_DataDictionary_Pkg_default_value,
    sizeof(ModeDecisionTableActionKind_DataDictionary_Pkg)
};

/****************************************************************
 ** Buffer_DataDictionary_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimBuffer_DataDictionary_PkgVTable;

int Buffer_DataDictionary_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBuffer_DataDictionary_PkgVTable != NULL
        && pSimBuffer_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBuffer_DataDictionary_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__18349_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Buffer_DataDictionary_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBuffer_DataDictionary_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimBuffer_DataDictionary_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__18349(str, pValue, endptr);
    }
    return nRet;
}

int is_Buffer_DataDictionary_Pkg_double_convertion_allowed()
{
    if (pSimBuffer_DataDictionary_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBuffer_DataDictionary_PkgVTable);
    }
    return is_array__18349_double_convertion_allowed();
}

void compare_Buffer_DataDictionary_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBuffer_DataDictionary_PkgVTable != NULL
        && pSimBuffer_DataDictionary_PkgVTable->m_version >= Scv612
        && pSimBuffer_DataDictionary_PkgVTable->m_pfnCompare != NULL) {
        if (pSimBuffer_DataDictionary_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBuffer_DataDictionary_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBuffer_DataDictionary_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__18349(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Buffer_DataDictionary_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBuffer_DataDictionary_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimBuffer_DataDictionary_PkgVTable, nRetValue);
    }
    return array__18349_to_double(pValue, nRetValue);
}

int get_Buffer_DataDictionary_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__18349_signature(pfnStrAppend, pData);
}

int set_Buffer_DataDictionary_Pkg_default_value(void *pValue)
{
    return set_array__18349_default_value(pValue);
}

int check_Buffer_DataDictionary_Pkg_string(const char *str, char **endptr)
{
    static Buffer_DataDictionary_Pkg rTemp;
    return string_to_Buffer_DataDictionary_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Buffer_DataDictionary_Pkg_Utils = {
    Buffer_DataDictionary_Pkg_to_string,
    check_Buffer_DataDictionary_Pkg_string,
    string_to_Buffer_DataDictionary_Pkg,
    is_Buffer_DataDictionary_Pkg_double_convertion_allowed,
    Buffer_DataDictionary_Pkg_to_double,
    compare_Buffer_DataDictionary_Pkg,
    get_Buffer_DataDictionary_Pkg_signature,
    set_Buffer_DataDictionary_Pkg_default_value,
    sizeof(Buffer_DataDictionary_Pkg)
};

/****************************************************************
 ** T_Mode_Level_Level_And_Mode_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable;

int T_Mode_Level_Level_And_Mode_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable != NULL
        && pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__17982_to_string(pValue, pfnStrAppend, pData);
}

int string_to_T_Mode_Level_Level_And_Mode_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__17982(str, pValue, endptr);
    }
    return nRet;
}

int is_T_Mode_Level_Level_And_Mode_Types_Pkg_double_convertion_allowed()
{
    if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable);
    }
    return is_struct__17982_double_convertion_allowed();
}

void compare_T_Mode_Level_Level_And_Mode_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable != NULL
        && pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_version >= Scv612
        && pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__17982(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int T_Mode_Level_Level_And_Mode_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable, nRetValue);
    }
    return struct__17982_to_double(pValue, nRetValue);
}

int get_T_Mode_Level_Level_And_Mode_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__17982_signature(pfnStrAppend, pData);
}

int set_T_Mode_Level_Level_And_Mode_Types_Pkg_default_value(void *pValue)
{
    return set_struct__17982_default_value(pValue);
}

int check_T_Mode_Level_Level_And_Mode_Types_Pkg_string(const char *str, char **endptr)
{
    static T_Mode_Level_Level_And_Mode_Types_Pkg rTemp;
    return string_to_T_Mode_Level_Level_And_Mode_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_T_Mode_Level_Level_And_Mode_Types_Pkg_Utils = {
    T_Mode_Level_Level_And_Mode_Types_Pkg_to_string,
    check_T_Mode_Level_Level_And_Mode_Types_Pkg_string,
    string_to_T_Mode_Level_Level_And_Mode_Types_Pkg,
    is_T_Mode_Level_Level_And_Mode_Types_Pkg_double_convertion_allowed,
    T_Mode_Level_Level_And_Mode_Types_Pkg_to_double,
    compare_T_Mode_Level_Level_And_Mode_Types_Pkg,
    get_T_Mode_Level_Level_And_Mode_Types_Pkg_signature,
    set_T_Mode_Level_Level_And_Mode_Types_Pkg_default_value,
    sizeof(T_Mode_Level_Level_And_Mode_Types_Pkg)
};

/****************************************************************
 ** odometryFactors_T_Toolbox 
 ****************************************************************/

struct SimTypeVTable *pSimodometryFactors_T_ToolboxVTable;

int odometryFactors_T_Toolbox_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimodometryFactors_T_ToolboxVTable != NULL
        && pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodometryFactors_T_ToolboxVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18207_to_string(pValue, pfnStrAppend, pData);
}

int string_to_odometryFactors_T_Toolbox(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimodometryFactors_T_ToolboxVTable != NULL) {
        nRet=string_to_VTable(str, pSimodometryFactors_T_ToolboxVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18207(str, pValue, endptr);
    }
    return nRet;
}

int is_odometryFactors_T_Toolbox_double_convertion_allowed()
{
    if (pSimodometryFactors_T_ToolboxVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimodometryFactors_T_ToolboxVTable);
    }
    return is_struct__18207_double_convertion_allowed();
}

void compare_odometryFactors_T_Toolbox(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimodometryFactors_T_ToolboxVTable != NULL
        && pSimodometryFactors_T_ToolboxVTable->m_version >= Scv612
        && pSimodometryFactors_T_ToolboxVTable->m_pfnCompare != NULL) {
        if (pSimodometryFactors_T_ToolboxVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimodometryFactors_T_ToolboxVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimodometryFactors_T_ToolboxVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18207(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int odometryFactors_T_Toolbox_to_double(const void *pValue, double *nRetValue)
{
    if (pSimodometryFactors_T_ToolboxVTable != NULL) {
        return VTable_to_double(pValue, pSimodometryFactors_T_ToolboxVTable, nRetValue);
    }
    return struct__18207_to_double(pValue, nRetValue);
}

int get_odometryFactors_T_Toolbox_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18207_signature(pfnStrAppend, pData);
}

int set_odometryFactors_T_Toolbox_default_value(void *pValue)
{
    return set_struct__18207_default_value(pValue);
}

int check_odometryFactors_T_Toolbox_string(const char *str, char **endptr)
{
    static odometryFactors_T_Toolbox rTemp;
    return string_to_odometryFactors_T_Toolbox(str, &rTemp, endptr);
}

SimTypeUtils _Type_odometryFactors_T_Toolbox_Utils = {
    odometryFactors_T_Toolbox_to_string,
    check_odometryFactors_T_Toolbox_string,
    string_to_odometryFactors_T_Toolbox,
    is_odometryFactors_T_Toolbox_double_convertion_allowed,
    odometryFactors_T_Toolbox_to_double,
    compare_odometryFactors_T_Toolbox,
    get_odometryFactors_T_Toolbox_signature,
    set_odometryFactors_T_Toolbox_default_value,
    sizeof(odometryFactors_T_Toolbox)
};

/****************************************************************
 ** BaliseGroupData_Basics 
 ****************************************************************/

struct SimTypeVTable *pSimBaliseGroupData_BasicsVTable;

int BaliseGroupData_Basics_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBaliseGroupData_BasicsVTable != NULL
        && pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18144_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseGroupData_BasicsVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18144(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseGroupData_Basics_double_convertion_allowed()
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBaliseGroupData_BasicsVTable);
    }
    return is_struct__18144_double_convertion_allowed();
}

void compare_BaliseGroupData_Basics(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseGroupData_BasicsVTable != NULL
        && pSimBaliseGroupData_BasicsVTable->m_version >= Scv612
        && pSimBaliseGroupData_BasicsVTable->m_pfnCompare != NULL) {
        if (pSimBaliseGroupData_BasicsVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseGroupData_BasicsVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseGroupData_BasicsVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18144(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseGroupData_Basics_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseGroupData_BasicsVTable, nRetValue);
    }
    return struct__18144_to_double(pValue, nRetValue);
}

int get_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18144_signature(pfnStrAppend, pData);
}

int set_BaliseGroupData_Basics_default_value(void *pValue)
{
    return set_struct__18144_default_value(pValue);
}

int check_BaliseGroupData_Basics_string(const char *str, char **endptr)
{
    static BaliseGroupData_Basics rTemp;
    return string_to_BaliseGroupData_Basics(str, &rTemp, endptr);
}

SimTypeUtils _Type_BaliseGroupData_Basics_Utils = {
    BaliseGroupData_Basics_to_string,
    check_BaliseGroupData_Basics_string,
    string_to_BaliseGroupData_Basics,
    is_BaliseGroupData_Basics_double_convertion_allowed,
    BaliseGroupData_Basics_to_double,
    compare_BaliseGroupData_Basics,
    get_BaliseGroupData_Basics_signature,
    set_BaliseGroupData_Basics_default_value,
    sizeof(BaliseGroupData_Basics)
};

/****************************************************************
 ** B_data_internal_T_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimB_data_internal_T_InfraLibVTable;

int B_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimB_data_internal_T_InfraLibVTable != NULL
        && pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__18130_to_string(pValue, pfnStrAppend, pData);
}

int string_to_B_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimB_data_internal_T_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimB_data_internal_T_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__18130(str, pValue, endptr);
    }
    return nRet;
}

int is_B_data_internal_T_InfraLib_double_convertion_allowed()
{
    if (pSimB_data_internal_T_InfraLibVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimB_data_internal_T_InfraLibVTable);
    }
    return is_struct__18130_double_convertion_allowed();
}

void compare_B_data_internal_T_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimB_data_internal_T_InfraLibVTable != NULL
        && pSimB_data_internal_T_InfraLibVTable->m_version >= Scv612
        && pSimB_data_internal_T_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimB_data_internal_T_InfraLibVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimB_data_internal_T_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimB_data_internal_T_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__18130(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int B_data_internal_T_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimB_data_internal_T_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimB_data_internal_T_InfraLibVTable, nRetValue);
    }
    return struct__18130_to_double(pValue, nRetValue);
}

int get_B_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__18130_signature(pfnStrAppend, pData);
}

int set_B_data_internal_T_InfraLib_default_value(void *pValue)
{
    return set_struct__18130_default_value(pValue);
}

int check_B_data_internal_T_InfraLib_string(const char *str, char **endptr)
{
    static B_data_internal_T_InfraLib rTemp;
    return string_to_B_data_internal_T_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_B_data_internal_T_InfraLib_Utils = {
    B_data_internal_T_InfraLib_to_string,
    check_B_data_internal_T_InfraLib_string,
    string_to_B_data_internal_T_InfraLib,
    is_B_data_internal_T_InfraLib_double_convertion_allowed,
    B_data_internal_T_InfraLib_to_double,
    compare_B_data_internal_T_InfraLib,
    get_B_data_internal_T_InfraLib_signature,
    set_B_data_internal_T_InfraLib_default_value,
    sizeof(B_data_internal_T_InfraLib)
};

#include "C:/Program Files (x86)/Esterel Technologies/SCADE R15.2/SCADE/lib/kcg_conv.c"
