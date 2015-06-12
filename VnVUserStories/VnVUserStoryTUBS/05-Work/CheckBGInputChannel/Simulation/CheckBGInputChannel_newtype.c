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
 ** SSM_ST_SM1 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_ST_SM1VTable;

static SimEnumValUtils SSM_ST_SM1_values[] = {
    { "NominalDir", SSM_st_NominalDir_SM1},
    { "NominalDir", SSM_st_NominalDir_SM1},
    { "ReverseDir", SSM_st_ReverseDir_SM1},
    { "ReverseDir", SSM_st_ReverseDir_SM1},
    { "No_BG", SSM_st_No_BG_SM1},
    { "No_BG", SSM_st_No_BG_SM1},
};

int SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM1*)pValue, SSM_ST_SM1_values, 6, pfnStrAppend, pData);
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM1_values, 6, endptr);
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
    return get_enum_signature(SSM_ST_SM1_values, 6, pfnStrAppend, pData);
}

int set_SSM_ST_SM1_default_value(void *pValue)
{
    *(SSM_ST_SM1*)pValue = SSM_st_NominalDir_SM1;
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
    { "NominalDir:<2>", SSM_TR_NominalDir_2_SM1},
    { "NominalDir:<2>", SSM_TR_NominalDir_2_SM1},
    { "NominalDir:<1>", SSM_TR_NominalDir_1_SM1},
    { "NominalDir:<1>", SSM_TR_NominalDir_1_SM1},
    { "No_BG:<1>", SSM_TR_No_BG_1_SM1},
    { "No_BG:<1>", SSM_TR_No_BG_1_SM1},
    { "No_BG:<2>", SSM_TR_No_BG_2_SM1},
    { "No_BG:<2>", SSM_TR_No_BG_2_SM1},
};

int SSM_TR_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM1*)pValue, SSM_TR_SM1_values, 10, pfnStrAppend, pData);
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM1_values, 10, endptr);
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
    return get_enum_signature(SSM_TR_SM1_values, 10, pfnStrAppend, pData);
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
 ** struct__2603 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2603VTable;

static SimFieldUtils struct__2603_fields[] = {
    {"radioDevice", offsetof(struct__2603,radioDevice), &_Type_kcg_int_Utils},
    {"receivedSystemTime", offsetof(struct__2603,receivedSystemTime), &_Type_kcg_int_Utils},
    {"nid_message", offsetof(struct__2603,nid_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__2603,t_train), &_Type_kcg_real_Utils},
    {"m_ack", offsetof(struct__2603,m_ack), &_Type_M_ACK_Utils},
    {"nid_lrbg", offsetof(struct__2603,nid_lrbg), &_Type_kcg_int_Utils},
    {"t_train_reference", offsetof(struct__2603,t_train_reference), &_Type_kcg_real_Utils},
    {"nid_em", offsetof(struct__2603,nid_em), &_Type_kcg_int_Utils},
    {"q_scale", offsetof(struct__2603,q_scale), &_Type_Q_SCALE_Utils},
    {"d_sr", offsetof(struct__2603,d_sr), &_Type_kcg_int_Utils},
    {"t_sh_rqst", offsetof(struct__2603,t_sh_rqst), &_Type_kcg_real_Utils},
    {"d_ref", offsetof(struct__2603,d_ref), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__2603,q_dir), &_Type_Q_DIR_Utils},
    {"d_emergencystop", offsetof(struct__2603,d_emergencystop), &_Type_kcg_int_Utils},
    {"m_version", offsetof(struct__2603,m_version), &_Type_M_VERSION_Utils},
};

int struct__2603_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2603VTable != NULL
        && pSimstruct__2603VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2603VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2603_fields, 15, pfnStrAppend, pData);
}

int string_to_struct__2603(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2603VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2603VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2603_fields, 15, endptr);
    }
    return nRet;
}

int is_struct__2603_double_convertion_allowed()
{
    if (pSimstruct__2603VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2603VTable);
    }
    return 0;
}

void compare_struct__2603(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2603VTable != NULL
        && pSimstruct__2603VTable->m_version >= Scv612
        && pSimstruct__2603VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2603VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2603VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2603VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2603_fields, 15, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2603_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2603VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2603VTable, nRetValue);
    }
    return 0;
}

int get_struct__2603_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2603_fields, 15, pfnStrAppend, pData);
}

int set_struct__2603_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__2603*)pValue)->radioDevice));
    set_kcg_int_default_value(&(((struct__2603*)pValue)->receivedSystemTime));
    set_kcg_int_default_value(&(((struct__2603*)pValue)->nid_message));
    set_kcg_real_default_value(&(((struct__2603*)pValue)->t_train));
    set_M_ACK_default_value(&(((struct__2603*)pValue)->m_ack));
    set_kcg_int_default_value(&(((struct__2603*)pValue)->nid_lrbg));
    set_kcg_real_default_value(&(((struct__2603*)pValue)->t_train_reference));
    set_kcg_int_default_value(&(((struct__2603*)pValue)->nid_em));
    set_Q_SCALE_default_value(&(((struct__2603*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__2603*)pValue)->d_sr));
    set_kcg_real_default_value(&(((struct__2603*)pValue)->t_sh_rqst));
    set_kcg_int_default_value(&(((struct__2603*)pValue)->d_ref));
    set_Q_DIR_default_value(&(((struct__2603*)pValue)->q_dir));
    set_kcg_int_default_value(&(((struct__2603*)pValue)->d_emergencystop));
    set_M_VERSION_default_value(&(((struct__2603*)pValue)->m_version));
    return 1;
}

int check_struct__2603_string(const char *str, char **endptr)
{
    static struct__2603 rTemp;
    return string_to_struct__2603(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2603_Utils = {
    struct__2603_to_string,
    check_struct__2603_string,
    string_to_struct__2603,
    is_struct__2603_double_convertion_allowed,
    struct__2603_to_double,
    compare_struct__2603,
    get_struct__2603_signature,
    set_struct__2603_default_value,
    sizeof(struct__2603)
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
 ** struct__2624 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2624VTable;

static SimFieldUtils struct__2624_fields[] = {
    {"nid_packet", offsetof(struct__2624,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__2624,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__2624,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__2624,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__2624,endAddress), &_Type_kcg_int_Utils},
};

int struct__2624_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2624VTable != NULL
        && pSimstruct__2624VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2624VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2624_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__2624(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2624VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2624VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2624_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__2624_double_convertion_allowed()
{
    if (pSimstruct__2624VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2624VTable);
    }
    return 0;
}

void compare_struct__2624(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2624VTable != NULL
        && pSimstruct__2624VTable->m_version >= Scv612
        && pSimstruct__2624VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2624VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2624VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2624VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2624_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2624_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2624VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2624VTable, nRetValue);
    }
    return 0;
}

int get_struct__2624_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2624_fields, 5, pfnStrAppend, pData);
}

int set_struct__2624_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__2624*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__2624*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__2624*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2624*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__2624*)pValue)->endAddress));
    return 1;
}

int check_struct__2624_string(const char *str, char **endptr)
{
    static struct__2624 rTemp;
    return string_to_struct__2624(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2624_Utils = {
    struct__2624_to_string,
    check_struct__2624_string,
    string_to_struct__2624,
    is_struct__2624_double_convertion_allowed,
    struct__2624_to_double,
    compare_struct__2624,
    get_struct__2624_signature,
    set_struct__2624_default_value,
    sizeof(struct__2624)
};

/****************************************************************
 ** array__2632 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2632VTable;

int array__2632_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2632VTable != NULL
        && pSimarray__2632VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2632VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2624_to_string, 30, sizeof(struct__2624), pfnStrAppend, pData);
}

int string_to_array__2632(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2632VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2632VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2624_Utils, 30, sizeof(struct__2624), endptr);
    }
    return nRet;
}

int is_array__2632_double_convertion_allowed()
{
    if (pSimarray__2632VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__2632VTable);
    }
    return 0;
}

void compare_array__2632(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2632VTable != NULL
        && pSimarray__2632VTable->m_version >= Scv612
        && pSimarray__2632VTable->m_pfnCompare != NULL) {
        if (pSimarray__2632VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2632VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2632VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2624, 30, sizeof(struct__2624), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2632_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2632VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2632VTable, nRetValue);
    }
    return 0;
}

int get_array__2632_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2624_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2632_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__2624_default_value(&((struct__2624*)pValue)[i]);
    return 1;
}

int check_array__2632_string(const char *str, char **endptr)
{
    static array__2632 rTemp;
    return string_to_array__2632(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2632_Utils = {
    array__2632_to_string,
    check_array__2632_string,
    string_to_array__2632,
    is_array__2632_double_convertion_allowed,
    array__2632_to_double,
    compare_array__2632,
    get_array__2632_signature,
    set_array__2632_default_value,
    sizeof(array__2632)
};

/****************************************************************
 ** struct__2635 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2635VTable;

static SimFieldUtils struct__2635_fields[] = {
    {"PacketHeaders", offsetof(struct__2635,PacketHeaders), &_Type_array__2632_Utils},
    {"PacketData", offsetof(struct__2635,PacketData), &_Type_array_int_500_Utils},
};

int struct__2635_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2635VTable != NULL
        && pSimstruct__2635VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2635VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2635_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__2635(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2635VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2635VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2635_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__2635_double_convertion_allowed()
{
    if (pSimstruct__2635VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2635VTable);
    }
    return 0;
}

void compare_struct__2635(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2635VTable != NULL
        && pSimstruct__2635VTable->m_version >= Scv612
        && pSimstruct__2635VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2635VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2635VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2635VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2635_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2635_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2635VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2635VTable, nRetValue);
    }
    return 0;
}

int get_struct__2635_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2635_fields, 2, pfnStrAppend, pData);
}

int set_struct__2635_default_value(void *pValue)
{
    set_array__2632_default_value(&(((struct__2635*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__2635*)pValue)->PacketData));
    return 1;
}

int check_struct__2635_string(const char *str, char **endptr)
{
    static struct__2635 rTemp;
    return string_to_struct__2635(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2635_Utils = {
    struct__2635_to_string,
    check_struct__2635_string,
    string_to_struct__2635,
    is_struct__2635_double_convertion_allowed,
    struct__2635_to_double,
    compare_struct__2635,
    get_struct__2635_signature,
    set_struct__2635_default_value,
    sizeof(struct__2635)
};

/****************************************************************
 ** struct__2640 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2640VTable;

static SimFieldUtils struct__2640_fields[] = {
    {"t_train_reference", offsetof(struct__2640,t_train_reference), &_Type_kcg_bool_Utils},
    {"nid_em", offsetof(struct__2640,nid_em), &_Type_kcg_bool_Utils},
    {"q_scale", offsetof(struct__2640,q_scale), &_Type_kcg_bool_Utils},
    {"d_sr", offsetof(struct__2640,d_sr), &_Type_kcg_bool_Utils},
    {"t_sh_rqst", offsetof(struct__2640,t_sh_rqst), &_Type_kcg_bool_Utils},
    {"d_ref", offsetof(struct__2640,d_ref), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(struct__2640,q_dir), &_Type_kcg_bool_Utils},
    {"d_emergencystop", offsetof(struct__2640,d_emergencystop), &_Type_kcg_bool_Utils},
    {"m_version", offsetof(struct__2640,m_version), &_Type_kcg_bool_Utils},
};

int struct__2640_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2640VTable != NULL
        && pSimstruct__2640VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2640VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2640_fields, 9, pfnStrAppend, pData);
}

int string_to_struct__2640(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2640VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2640VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2640_fields, 9, endptr);
    }
    return nRet;
}

int is_struct__2640_double_convertion_allowed()
{
    if (pSimstruct__2640VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2640VTable);
    }
    return 0;
}

void compare_struct__2640(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2640VTable != NULL
        && pSimstruct__2640VTable->m_version >= Scv612
        && pSimstruct__2640VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2640VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2640VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2640VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2640_fields, 9, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2640_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2640VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2640VTable, nRetValue);
    }
    return 0;
}

int get_struct__2640_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2640_fields, 9, pfnStrAppend, pData);
}

int set_struct__2640_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2640*)pValue)->t_train_reference));
    set_kcg_bool_default_value(&(((struct__2640*)pValue)->nid_em));
    set_kcg_bool_default_value(&(((struct__2640*)pValue)->q_scale));
    set_kcg_bool_default_value(&(((struct__2640*)pValue)->d_sr));
    set_kcg_bool_default_value(&(((struct__2640*)pValue)->t_sh_rqst));
    set_kcg_bool_default_value(&(((struct__2640*)pValue)->d_ref));
    set_kcg_bool_default_value(&(((struct__2640*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__2640*)pValue)->d_emergencystop));
    set_kcg_bool_default_value(&(((struct__2640*)pValue)->m_version));
    return 1;
}

int check_struct__2640_string(const char *str, char **endptr)
{
    static struct__2640 rTemp;
    return string_to_struct__2640(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2640_Utils = {
    struct__2640_to_string,
    check_struct__2640_string,
    string_to_struct__2640,
    is_struct__2640_double_convertion_allowed,
    struct__2640_to_double,
    compare_struct__2640,
    get_struct__2640_signature,
    set_struct__2640_default_value,
    sizeof(struct__2640)
};

/****************************************************************
 ** struct__2652 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2652VTable;

static SimFieldUtils struct__2652_fields[] = {
    {"nominal", offsetof(struct__2652,nominal), &_Type_kcg_int_Utils},
    {"d_min", offsetof(struct__2652,d_min), &_Type_kcg_int_Utils},
    {"d_max", offsetof(struct__2652,d_max), &_Type_kcg_int_Utils},
};

int struct__2652_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2652VTable != NULL
        && pSimstruct__2652VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2652VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2652_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__2652(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2652VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2652VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2652_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__2652_double_convertion_allowed()
{
    if (pSimstruct__2652VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2652VTable);
    }
    return 0;
}

void compare_struct__2652(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2652VTable != NULL
        && pSimstruct__2652VTable->m_version >= Scv612
        && pSimstruct__2652VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2652VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2652VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2652VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2652_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2652_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2652VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2652VTable, nRetValue);
    }
    return 0;
}

int get_struct__2652_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2652_fields, 3, pfnStrAppend, pData);
}

int set_struct__2652_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__2652*)pValue)->nominal));
    set_kcg_int_default_value(&(((struct__2652*)pValue)->d_min));
    set_kcg_int_default_value(&(((struct__2652*)pValue)->d_max));
    return 1;
}

int check_struct__2652_string(const char *str, char **endptr)
{
    static struct__2652 rTemp;
    return string_to_struct__2652(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2652_Utils = {
    struct__2652_to_string,
    check_struct__2652_string,
    string_to_struct__2652,
    is_struct__2652_double_convertion_allowed,
    struct__2652_to_double,
    compare_struct__2652,
    get_struct__2652_signature,
    set_struct__2652_default_value,
    sizeof(struct__2652)
};

/****************************************************************
 ** struct__2658 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2658VTable;

static SimFieldUtils struct__2658_fields[] = {
    {"v_safeNominal", offsetof(struct__2658,v_safeNominal), &_Type_kcg_int_Utils},
    {"v_rawNominal", offsetof(struct__2658,v_rawNominal), &_Type_kcg_int_Utils},
    {"v_lower", offsetof(struct__2658,v_lower), &_Type_kcg_int_Utils},
    {"v_upper", offsetof(struct__2658,v_upper), &_Type_kcg_int_Utils},
};

int struct__2658_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2658VTable != NULL
        && pSimstruct__2658VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2658VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2658_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__2658(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2658VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2658VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2658_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__2658_double_convertion_allowed()
{
    if (pSimstruct__2658VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2658VTable);
    }
    return 0;
}

void compare_struct__2658(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2658VTable != NULL
        && pSimstruct__2658VTable->m_version >= Scv612
        && pSimstruct__2658VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2658VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2658VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2658VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2658_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2658_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2658VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2658VTable, nRetValue);
    }
    return 0;
}

int get_struct__2658_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2658_fields, 4, pfnStrAppend, pData);
}

int set_struct__2658_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__2658*)pValue)->v_safeNominal));
    set_kcg_int_default_value(&(((struct__2658*)pValue)->v_rawNominal));
    set_kcg_int_default_value(&(((struct__2658*)pValue)->v_lower));
    set_kcg_int_default_value(&(((struct__2658*)pValue)->v_upper));
    return 1;
}

int check_struct__2658_string(const char *str, char **endptr)
{
    static struct__2658 rTemp;
    return string_to_struct__2658(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2658_Utils = {
    struct__2658_to_string,
    check_struct__2658_string,
    string_to_struct__2658,
    is_struct__2658_double_convertion_allowed,
    struct__2658_to_double,
    compare_struct__2658,
    get_struct__2658_signature,
    set_struct__2658_default_value,
    sizeof(struct__2658)
};

/****************************************************************
 ** struct__2665 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2665VTable;

static SimFieldUtils struct__2665_fields[] = {
    {"o_nominal", offsetof(struct__2665,o_nominal), &_Type_kcg_int_Utils},
    {"o_min", offsetof(struct__2665,o_min), &_Type_kcg_int_Utils},
    {"o_max", offsetof(struct__2665,o_max), &_Type_kcg_int_Utils},
};

int struct__2665_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2665VTable != NULL
        && pSimstruct__2665VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2665VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2665_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__2665(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2665VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2665VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2665_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__2665_double_convertion_allowed()
{
    if (pSimstruct__2665VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2665VTable);
    }
    return 0;
}

void compare_struct__2665(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2665VTable != NULL
        && pSimstruct__2665VTable->m_version >= Scv612
        && pSimstruct__2665VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2665VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2665VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2665VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2665_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2665_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2665VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2665VTable, nRetValue);
    }
    return 0;
}

int get_struct__2665_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2665_fields, 3, pfnStrAppend, pData);
}

int set_struct__2665_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__2665*)pValue)->o_nominal));
    set_kcg_int_default_value(&(((struct__2665*)pValue)->o_min));
    set_kcg_int_default_value(&(((struct__2665*)pValue)->o_max));
    return 1;
}

int check_struct__2665_string(const char *str, char **endptr)
{
    static struct__2665 rTemp;
    return string_to_struct__2665(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2665_Utils = {
    struct__2665_to_string,
    check_struct__2665_string,
    string_to_struct__2665,
    is_struct__2665_double_convertion_allowed,
    struct__2665_to_double,
    compare_struct__2665,
    get_struct__2665_signature,
    set_struct__2665_default_value,
    sizeof(struct__2665)
};

/****************************************************************
 ** struct__2671 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2671VTable;

static SimFieldUtils struct__2671_fields[] = {
    {"present", offsetof(struct__2671,present), &_Type_kcg_bool_Utils},
    {"apiConsistencyError", offsetof(struct__2671,apiConsistencyError), &_Type_kcg_bool_Utils},
    {"Radio_Common_Header", offsetof(struct__2671,Radio_Common_Header), &_Type_struct__2603_Utils},
    {"Radio_MetaData", offsetof(struct__2671,Radio_MetaData), &_Type_struct__2640_Utils},
};

int struct__2671_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2671VTable != NULL
        && pSimstruct__2671VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2671VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2671_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__2671(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2671VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2671VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2671_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__2671_double_convertion_allowed()
{
    if (pSimstruct__2671VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2671VTable);
    }
    return 0;
}

void compare_struct__2671(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2671VTable != NULL
        && pSimstruct__2671VTable->m_version >= Scv612
        && pSimstruct__2671VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2671VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2671VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2671VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2671_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2671_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2671VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2671VTable, nRetValue);
    }
    return 0;
}

int get_struct__2671_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2671_fields, 4, pfnStrAppend, pData);
}

int set_struct__2671_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2671*)pValue)->present));
    set_kcg_bool_default_value(&(((struct__2671*)pValue)->apiConsistencyError));
    set_struct__2603_default_value(&(((struct__2671*)pValue)->Radio_Common_Header));
    set_struct__2640_default_value(&(((struct__2671*)pValue)->Radio_MetaData));
    return 1;
}

int check_struct__2671_string(const char *str, char **endptr)
{
    static struct__2671 rTemp;
    return string_to_struct__2671(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2671_Utils = {
    struct__2671_to_string,
    check_struct__2671_string,
    string_to_struct__2671,
    is_struct__2671_double_convertion_allowed,
    struct__2671_to_double,
    compare_struct__2671,
    get_struct__2671_signature,
    set_struct__2671_default_value,
    sizeof(struct__2671)
};

/****************************************************************
 ** struct__2678 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2678VTable;

static SimFieldUtils struct__2678_fields[] = {
    {"valid", offsetof(struct__2678,valid), &_Type_kcg_bool_Utils},
    {"timestamp", offsetof(struct__2678,timestamp), &_Type_kcg_int_Utils},
    {"odo", offsetof(struct__2678,odo), &_Type_struct__2665_Utils},
    {"speed", offsetof(struct__2678,speed), &_Type_struct__2658_Utils},
    {"acceleration", offsetof(struct__2678,acceleration), &_Type_kcg_int_Utils},
    {"motionState", offsetof(struct__2678,motionState), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils},
    {"motionDirection", offsetof(struct__2678,motionDirection), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils},
};

int struct__2678_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2678VTable != NULL
        && pSimstruct__2678VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2678VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2678_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__2678(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2678VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2678VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2678_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__2678_double_convertion_allowed()
{
    if (pSimstruct__2678VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2678VTable);
    }
    return 0;
}

void compare_struct__2678(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2678VTable != NULL
        && pSimstruct__2678VTable->m_version >= Scv612
        && pSimstruct__2678VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2678VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2678VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2678VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2678_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2678_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2678VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2678VTable, nRetValue);
    }
    return 0;
}

int get_struct__2678_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2678_fields, 7, pfnStrAppend, pData);
}

int set_struct__2678_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2678*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2678*)pValue)->timestamp));
    set_struct__2665_default_value(&(((struct__2678*)pValue)->odo));
    set_struct__2658_default_value(&(((struct__2678*)pValue)->speed));
    set_kcg_int_default_value(&(((struct__2678*)pValue)->acceleration));
    set_odoMotionState_T_Obu_BasicTypes_Pkg_default_value(&(((struct__2678*)pValue)->motionState));
    set_odoMotionDirection_T_Obu_BasicTypes_Pkg_default_value(&(((struct__2678*)pValue)->motionDirection));
    return 1;
}

int check_struct__2678_string(const char *str, char **endptr)
{
    static struct__2678 rTemp;
    return string_to_struct__2678(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2678_Utils = {
    struct__2678_to_string,
    check_struct__2678_string,
    string_to_struct__2678,
    is_struct__2678_double_convertion_allowed,
    struct__2678_to_double,
    compare_struct__2678,
    get_struct__2678_signature,
    set_struct__2678_default_value,
    sizeof(struct__2678)
};

/****************************************************************
 ** struct__2688 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2688VTable;

static SimFieldUtils struct__2688_fields[] = {
    {"odometerOfBaliseDetection", offsetof(struct__2688,odometerOfBaliseDetection), &_Type_struct__2678_Utils},
    {"BG_centerDetectionInaccuraccuracies", offsetof(struct__2688,BG_centerDetectionInaccuraccuracies), &_Type_struct__2652_Utils},
};

int struct__2688_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2688VTable != NULL
        && pSimstruct__2688VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2688VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2688_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__2688(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2688VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2688VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2688_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__2688_double_convertion_allowed()
{
    if (pSimstruct__2688VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2688VTable);
    }
    return 0;
}

void compare_struct__2688(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2688VTable != NULL
        && pSimstruct__2688VTable->m_version >= Scv612
        && pSimstruct__2688VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2688VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2688VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2688VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2688_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2688_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2688VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2688VTable, nRetValue);
    }
    return 0;
}

int get_struct__2688_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2688_fields, 2, pfnStrAppend, pData);
}

int set_struct__2688_default_value(void *pValue)
{
    set_struct__2678_default_value(&(((struct__2688*)pValue)->odometerOfBaliseDetection));
    set_struct__2652_default_value(&(((struct__2688*)pValue)->BG_centerDetectionInaccuraccuracies));
    return 1;
}

int check_struct__2688_string(const char *str, char **endptr)
{
    static struct__2688 rTemp;
    return string_to_struct__2688(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2688_Utils = {
    struct__2688_to_string,
    check_struct__2688_string,
    string_to_struct__2688,
    is_struct__2688_double_convertion_allowed,
    struct__2688_to_double,
    compare_struct__2688,
    get_struct__2688_signature,
    set_struct__2688_default_value,
    sizeof(struct__2688)
};

/****************************************************************
 ** struct__2693 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2693VTable;

static SimFieldUtils struct__2693_fields[] = {
    {"q_updown", offsetof(struct__2693,q_updown), &_Type_Q_UPDOWN_Utils},
    {"m_version", offsetof(struct__2693,m_version), &_Type_M_VERSION_Utils},
    {"q_media", offsetof(struct__2693,q_media), &_Type_Q_MEDIA_Utils},
    {"n_pig", offsetof(struct__2693,n_pig), &_Type_N_PIG_Utils},
    {"n_total", offsetof(struct__2693,n_total), &_Type_N_TOTAL_Utils},
    {"m_dup", offsetof(struct__2693,m_dup), &_Type_M_DUP_Utils},
    {"m_mcount", offsetof(struct__2693,m_mcount), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(struct__2693,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__2693,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(struct__2693,q_link), &_Type_Q_LINK_Utils},
};

int struct__2693_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2693VTable != NULL
        && pSimstruct__2693VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2693VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2693_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__2693(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2693VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2693VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2693_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__2693_double_convertion_allowed()
{
    if (pSimstruct__2693VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2693VTable);
    }
    return 0;
}

void compare_struct__2693(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2693VTable != NULL
        && pSimstruct__2693VTable->m_version >= Scv612
        && pSimstruct__2693VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2693VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2693VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2693VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2693_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2693_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2693VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2693VTable, nRetValue);
    }
    return 0;
}

int get_struct__2693_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2693_fields, 10, pfnStrAppend, pData);
}

int set_struct__2693_default_value(void *pValue)
{
    set_Q_UPDOWN_default_value(&(((struct__2693*)pValue)->q_updown));
    set_M_VERSION_default_value(&(((struct__2693*)pValue)->m_version));
    set_Q_MEDIA_default_value(&(((struct__2693*)pValue)->q_media));
    set_N_PIG_default_value(&(((struct__2693*)pValue)->n_pig));
    set_N_TOTAL_default_value(&(((struct__2693*)pValue)->n_total));
    set_M_DUP_default_value(&(((struct__2693*)pValue)->m_dup));
    set_kcg_int_default_value(&(((struct__2693*)pValue)->m_mcount));
    set_kcg_int_default_value(&(((struct__2693*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__2693*)pValue)->nid_bg));
    set_Q_LINK_default_value(&(((struct__2693*)pValue)->q_link));
    return 1;
}

int check_struct__2693_string(const char *str, char **endptr)
{
    static struct__2693 rTemp;
    return string_to_struct__2693(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2693_Utils = {
    struct__2693_to_string,
    check_struct__2693_string,
    string_to_struct__2693,
    is_struct__2693_double_convertion_allowed,
    struct__2693_to_double,
    compare_struct__2693,
    get_struct__2693_signature,
    set_struct__2693_default_value,
    sizeof(struct__2693)
};

/****************************************************************
 ** struct__2706 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2706VTable;

static SimFieldUtils struct__2706_fields[] = {
    {"present", offsetof(struct__2706,present), &_Type_kcg_bool_Utils},
    {"checkResult", offsetof(struct__2706,checkResult), &_Type_kcg_bool_Utils},
    {"api_bad_balise_received", offsetof(struct__2706,api_bad_balise_received), &_Type_kcg_bool_Utils},
    {"api_header", offsetof(struct__2706,api_header), &_Type_struct__2693_Utils},
    {"centerOfBalisePosition", offsetof(struct__2706,centerOfBalisePosition), &_Type_struct__2688_Utils},
};

int struct__2706_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2706VTable != NULL
        && pSimstruct__2706VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2706VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2706_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__2706(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2706VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2706VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2706_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__2706_double_convertion_allowed()
{
    if (pSimstruct__2706VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2706VTable);
    }
    return 0;
}

void compare_struct__2706(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2706VTable != NULL
        && pSimstruct__2706VTable->m_version >= Scv612
        && pSimstruct__2706VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2706VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2706VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2706VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2706_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2706_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2706VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2706VTable, nRetValue);
    }
    return 0;
}

int get_struct__2706_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2706_fields, 5, pfnStrAppend, pData);
}

int set_struct__2706_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2706*)pValue)->present));
    set_kcg_bool_default_value(&(((struct__2706*)pValue)->checkResult));
    set_kcg_bool_default_value(&(((struct__2706*)pValue)->api_bad_balise_received));
    set_struct__2693_default_value(&(((struct__2706*)pValue)->api_header));
    set_struct__2688_default_value(&(((struct__2706*)pValue)->centerOfBalisePosition));
    return 1;
}

int check_struct__2706_string(const char *str, char **endptr)
{
    static struct__2706 rTemp;
    return string_to_struct__2706(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2706_Utils = {
    struct__2706_to_string,
    check_struct__2706_string,
    string_to_struct__2706,
    is_struct__2706_double_convertion_allowed,
    struct__2706_to_double,
    compare_struct__2706,
    get_struct__2706_signature,
    set_struct__2706_default_value,
    sizeof(struct__2706)
};

/****************************************************************
 ** struct__2714 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2714VTable;

static SimFieldUtils struct__2714_fields[] = {
    {"valid", offsetof(struct__2714,valid), &_Type_kcg_bool_Utils},
    {"systemTimeMsgReceived", offsetof(struct__2714,systemTimeMsgReceived), &_Type_kcg_int_Utils},
    {"msg_type", offsetof(struct__2714,msg_type), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"btm_msg", offsetof(struct__2714,btm_msg), &_Type_struct__2706_Utils},
    {"rtm_msg", offsetof(struct__2714,rtm_msg), &_Type_struct__2671_Utils},
    {"packets", offsetof(struct__2714,packets), &_Type_struct__2635_Utils},
};

int struct__2714_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2714VTable != NULL
        && pSimstruct__2714VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2714VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2714_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__2714(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2714VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2714VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2714_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__2714_double_convertion_allowed()
{
    if (pSimstruct__2714VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2714VTable);
    }
    return 0;
}

void compare_struct__2714(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2714VTable != NULL
        && pSimstruct__2714VTable->m_version >= Scv612
        && pSimstruct__2714VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2714VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2714VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2714VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2714_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2714_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2714VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2714VTable, nRetValue);
    }
    return 0;
}

int get_struct__2714_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2714_fields, 6, pfnStrAppend, pData);
}

int set_struct__2714_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2714*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2714*)pValue)->systemTimeMsgReceived));
    set_MsgSource_T_Common_Types_Pkg_default_value(&(((struct__2714*)pValue)->msg_type));
    set_struct__2706_default_value(&(((struct__2714*)pValue)->btm_msg));
    set_struct__2671_default_value(&(((struct__2714*)pValue)->rtm_msg));
    set_struct__2635_default_value(&(((struct__2714*)pValue)->packets));
    return 1;
}

int check_struct__2714_string(const char *str, char **endptr)
{
    static struct__2714 rTemp;
    return string_to_struct__2714(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2714_Utils = {
    struct__2714_to_string,
    check_struct__2714_string,
    string_to_struct__2714,
    is_struct__2714_double_convertion_allowed,
    struct__2714_to_double,
    compare_struct__2714,
    get_struct__2714_signature,
    set_struct__2714_default_value,
    sizeof(struct__2714)
};

/****************************************************************
 ** struct__2723 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2723VTable;

static SimFieldUtils struct__2723_fields[] = {
    {"valid", offsetof(struct__2723,valid), &_Type_kcg_bool_Utils},
    {"q_updown", offsetof(struct__2723,q_updown), &_Type_Q_UPDOWN_Utils},
    {"m_version", offsetof(struct__2723,m_version), &_Type_M_VERSION_Utils},
    {"q_media", offsetof(struct__2723,q_media), &_Type_Q_MEDIA_Utils},
    {"n_total", offsetof(struct__2723,n_total), &_Type_N_TOTAL_Utils},
    {"m_mcount", offsetof(struct__2723,m_mcount), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(struct__2723,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__2723,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(struct__2723,q_link), &_Type_Q_LINK_Utils},
    {"bgPosition", offsetof(struct__2723,bgPosition), &_Type_struct__2678_Utils},
    {"BG_centerDetectionInaccuraccuracies", offsetof(struct__2723,BG_centerDetectionInaccuraccuracies), &_Type_struct__2652_Utils},
    {"q_nvlocacc", offsetof(struct__2723,q_nvlocacc), &_Type_kcg_int_Utils},
    {"noCoordinateSystemHasBeenAssigned", offsetof(struct__2723,noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils},
    {"trainOrientationToBG", offsetof(struct__2723,trainOrientationToBG), &_Type_Q_DIRLRBG_Utils},
    {"trainRunningDirectionToBG", offsetof(struct__2723,trainRunningDirectionToBG), &_Type_Q_DIRTRAIN_Utils},
};

int struct__2723_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2723VTable != NULL
        && pSimstruct__2723VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2723VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2723_fields, 15, pfnStrAppend, pData);
}

int string_to_struct__2723(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2723VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2723VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2723_fields, 15, endptr);
    }
    return nRet;
}

int is_struct__2723_double_convertion_allowed()
{
    if (pSimstruct__2723VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2723VTable);
    }
    return 0;
}

void compare_struct__2723(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2723VTable != NULL
        && pSimstruct__2723VTable->m_version >= Scv612
        && pSimstruct__2723VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2723VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2723VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2723VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2723_fields, 15, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2723_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2723VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2723VTable, nRetValue);
    }
    return 0;
}

int get_struct__2723_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2723_fields, 15, pfnStrAppend, pData);
}

int set_struct__2723_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2723*)pValue)->valid));
    set_Q_UPDOWN_default_value(&(((struct__2723*)pValue)->q_updown));
    set_M_VERSION_default_value(&(((struct__2723*)pValue)->m_version));
    set_Q_MEDIA_default_value(&(((struct__2723*)pValue)->q_media));
    set_N_TOTAL_default_value(&(((struct__2723*)pValue)->n_total));
    set_kcg_int_default_value(&(((struct__2723*)pValue)->m_mcount));
    set_kcg_int_default_value(&(((struct__2723*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__2723*)pValue)->nid_bg));
    set_Q_LINK_default_value(&(((struct__2723*)pValue)->q_link));
    set_struct__2678_default_value(&(((struct__2723*)pValue)->bgPosition));
    set_struct__2652_default_value(&(((struct__2723*)pValue)->BG_centerDetectionInaccuraccuracies));
    set_kcg_int_default_value(&(((struct__2723*)pValue)->q_nvlocacc));
    set_kcg_bool_default_value(&(((struct__2723*)pValue)->noCoordinateSystemHasBeenAssigned));
    set_Q_DIRLRBG_default_value(&(((struct__2723*)pValue)->trainOrientationToBG));
    set_Q_DIRTRAIN_default_value(&(((struct__2723*)pValue)->trainRunningDirectionToBG));
    return 1;
}

int check_struct__2723_string(const char *str, char **endptr)
{
    static struct__2723 rTemp;
    return string_to_struct__2723(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2723_Utils = {
    struct__2723_to_string,
    check_struct__2723_string,
    string_to_struct__2723,
    is_struct__2723_double_convertion_allowed,
    struct__2723_to_double,
    compare_struct__2723,
    get_struct__2723_signature,
    set_struct__2723_default_value,
    sizeof(struct__2723)
};

/****************************************************************
 ** struct__2741 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2741VTable;

static SimFieldUtils struct__2741_fields[] = {
    {"valid", offsetof(struct__2741,valid), &_Type_kcg_bool_Utils},
    {"source", offsetof(struct__2741,source), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"radioMetadata", offsetof(struct__2741,radioMetadata), &_Type_struct__2640_Utils},
    {"BG_Common_Header", offsetof(struct__2741,BG_Common_Header), &_Type_struct__2723_Utils},
    {"Radio_Common_Header", offsetof(struct__2741,Radio_Common_Header), &_Type_struct__2603_Utils},
    {"packets", offsetof(struct__2741,packets), &_Type_struct__2635_Utils},
};

int struct__2741_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2741VTable != NULL
        && pSimstruct__2741VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2741VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2741_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__2741(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2741VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2741VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2741_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__2741_double_convertion_allowed()
{
    if (pSimstruct__2741VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2741VTable);
    }
    return 0;
}

void compare_struct__2741(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2741VTable != NULL
        && pSimstruct__2741VTable->m_version >= Scv612
        && pSimstruct__2741VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2741VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2741VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2741VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2741_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2741_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2741VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2741VTable, nRetValue);
    }
    return 0;
}

int get_struct__2741_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2741_fields, 6, pfnStrAppend, pData);
}

int set_struct__2741_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2741*)pValue)->valid));
    set_MsgSource_T_Common_Types_Pkg_default_value(&(((struct__2741*)pValue)->source));
    set_struct__2640_default_value(&(((struct__2741*)pValue)->radioMetadata));
    set_struct__2723_default_value(&(((struct__2741*)pValue)->BG_Common_Header));
    set_struct__2603_default_value(&(((struct__2741*)pValue)->Radio_Common_Header));
    set_struct__2635_default_value(&(((struct__2741*)pValue)->packets));
    return 1;
}

int check_struct__2741_string(const char *str, char **endptr)
{
    static struct__2741 rTemp;
    return string_to_struct__2741(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2741_Utils = {
    struct__2741_to_string,
    check_struct__2741_string,
    string_to_struct__2741,
    is_struct__2741_double_convertion_allowed,
    struct__2741_to_double,
    compare_struct__2741,
    get_struct__2741_signature,
    set_struct__2741_default_value,
    sizeof(struct__2741)
};

/****************************************************************
 ** struct__2750 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2750VTable;

static SimFieldUtils struct__2750_fields[] = {
    {"valid", offsetof(struct__2750,valid), &_Type_kcg_bool_Utils},
    {"BG", offsetof(struct__2750,BG), &_Type_struct__2741_Utils},
    {"complete", offsetof(struct__2750,complete), &_Type_kcg_bool_Utils},
    {"consistent", offsetof(struct__2750,consistent), &_Type_kcg_bool_Utils},
    {"TimeStamp", offsetof(struct__2750,TimeStamp), &_Type_kcg_int_Utils},
};

int struct__2750_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2750VTable != NULL
        && pSimstruct__2750VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2750VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2750_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__2750(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2750VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2750VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2750_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__2750_double_convertion_allowed()
{
    if (pSimstruct__2750VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__2750VTable);
    }
    return 0;
}

void compare_struct__2750(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2750VTable != NULL
        && pSimstruct__2750VTable->m_version >= Scv612
        && pSimstruct__2750VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2750VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2750VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2750VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2750_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2750_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2750VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2750VTable, nRetValue);
    }
    return 0;
}

int get_struct__2750_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2750_fields, 5, pfnStrAppend, pData);
}

int set_struct__2750_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2750*)pValue)->valid));
    set_struct__2741_default_value(&(((struct__2750*)pValue)->BG));
    set_kcg_bool_default_value(&(((struct__2750*)pValue)->complete));
    set_kcg_bool_default_value(&(((struct__2750*)pValue)->consistent));
    set_kcg_int_default_value(&(((struct__2750*)pValue)->TimeStamp));
    return 1;
}

int check_struct__2750_string(const char *str, char **endptr)
{
    static struct__2750 rTemp;
    return string_to_struct__2750(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2750_Utils = {
    struct__2750_to_string,
    check_struct__2750_string,
    string_to_struct__2750,
    is_struct__2750_double_convertion_allowed,
    struct__2750_to_double,
    compare_struct__2750,
    get_struct__2750_signature,
    set_struct__2750_default_value,
    sizeof(struct__2750)
};

/****************************************************************
 ** array__2758 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2758VTable;

int array__2758_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2758VTable != NULL
        && pSimarray__2758VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2758VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2750_to_string, 10, sizeof(struct__2750), pfnStrAppend, pData);
}

int string_to_array__2758(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2758VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2758VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2750_Utils, 10, sizeof(struct__2750), endptr);
    }
    return nRet;
}

int is_array__2758_double_convertion_allowed()
{
    if (pSimarray__2758VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__2758VTable);
    }
    return 0;
}

void compare_array__2758(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2758VTable != NULL
        && pSimarray__2758VTable->m_version >= Scv612
        && pSimarray__2758VTable->m_pfnCompare != NULL) {
        if (pSimarray__2758VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2758VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2758VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2750, 10, sizeof(struct__2750), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2758_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2758VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2758VTable, nRetValue);
    }
    return 0;
}

int get_array__2758_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 10; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2750_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2758_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 10; i++)
        set_struct__2750_default_value(&((struct__2750*)pValue)[i]);
    return 1;
}

int check_array__2758_string(const char *str, char **endptr)
{
    static array__2758 rTemp;
    return string_to_array__2758(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2758_Utils = {
    array__2758_to_string,
    check_array__2758_string,
    string_to_array__2758,
    is_array__2758_double_convertion_allowed,
    array__2758_to_double,
    compare_array__2758,
    get_array__2758_signature,
    set_array__2758_default_value,
    sizeof(array__2758)
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
    { "M_DUP_This_balise_is_a_duplicate_of_the_next_balise", _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise},
    { "M_DUP_This_balise_is_a_duplicate_of_the_next_balise", _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise},
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
 ** ReceivedBG_CheckBGInputChannel_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimReceivedBG_CheckBGInputChannel_PkgVTable;

int ReceivedBG_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != NULL
        && pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2750_to_string(pValue, pfnStrAppend, pData);
}

int string_to_ReceivedBG_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimReceivedBG_CheckBGInputChannel_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2750(str, pValue, endptr);
    }
    return nRet;
}

int is_ReceivedBG_CheckBGInputChannel_Pkg_double_convertion_allowed()
{
    if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimReceivedBG_CheckBGInputChannel_PkgVTable);
    }
    return is_struct__2750_double_convertion_allowed();
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
        compare_struct__2750(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int ReceivedBG_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimReceivedBG_CheckBGInputChannel_PkgVTable, nRetValue);
    }
    return struct__2750_to_double(pValue, nRetValue);
}

int get_ReceivedBG_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2750_signature(pfnStrAppend, pData);
}

int set_ReceivedBG_CheckBGInputChannel_Pkg_default_value(void *pValue)
{
    return set_struct__2750_default_value(pValue);
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
    return array__2758_to_string(pValue, pfnStrAppend, pData);
}

int string_to_ReceivedBGs_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimReceivedBGs_CheckBGInputChannel_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2758(str, pValue, endptr);
    }
    return nRet;
}

int is_ReceivedBGs_CheckBGInputChannel_Pkg_double_convertion_allowed()
{
    if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimReceivedBGs_CheckBGInputChannel_PkgVTable);
    }
    return is_array__2758_double_convertion_allowed();
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
        compare_array__2758(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int ReceivedBGs_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimReceivedBGs_CheckBGInputChannel_PkgVTable, nRetValue);
    }
    return array__2758_to_double(pValue, nRetValue);
}

int get_ReceivedBGs_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2758_signature(pfnStrAppend, pData);
}

int set_ReceivedBGs_CheckBGInputChannel_Pkg_default_value(void *pValue)
{
    return set_array__2758_default_value(pValue);
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
 ** API_TrackSideInput_T_API_Msg_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimAPI_TrackSideInput_T_API_Msg_PkgVTable;

int API_TrackSideInput_T_API_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL
        && pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2714_to_string(pValue, pfnStrAppend, pData);
}

int string_to_API_TrackSideInput_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimAPI_TrackSideInput_T_API_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2714(str, pValue, endptr);
    }
    return nRet;
}

int is_API_TrackSideInput_T_API_Msg_Pkg_double_convertion_allowed()
{
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimAPI_TrackSideInput_T_API_Msg_PkgVTable);
    }
    return is_struct__2714_double_convertion_allowed();
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
        compare_struct__2714(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int API_TrackSideInput_T_API_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimAPI_TrackSideInput_T_API_Msg_PkgVTable, nRetValue);
    }
    return struct__2714_to_double(pValue, nRetValue);
}

int get_API_TrackSideInput_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2714_signature(pfnStrAppend, pData);
}

int set_API_TrackSideInput_T_API_Msg_Pkg_default_value(void *pValue)
{
    return set_struct__2714_default_value(pValue);
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
    return struct__2706_to_string(pValue, pfnStrAppend, pData);
}

int string_to_API_TelegramHeader_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimAPI_TelegramHeader_T_API_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2706(str, pValue, endptr);
    }
    return nRet;
}

int is_API_TelegramHeader_T_API_Msg_Pkg_double_convertion_allowed()
{
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimAPI_TelegramHeader_T_API_Msg_PkgVTable);
    }
    return is_struct__2706_double_convertion_allowed();
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
        compare_struct__2706(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int API_TelegramHeader_T_API_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimAPI_TelegramHeader_T_API_Msg_PkgVTable, nRetValue);
    }
    return struct__2706_to_double(pValue, nRetValue);
}

int get_API_TelegramHeader_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2706_signature(pfnStrAppend, pData);
}

int set_API_TelegramHeader_T_API_Msg_Pkg_default_value(void *pValue)
{
    return set_struct__2706_default_value(pValue);
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
    return struct__2671_to_string(pValue, pfnStrAppend, pData);
}

int string_to_API_RadioMsgHeader_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2671(str, pValue, endptr);
    }
    return nRet;
}

int is_API_RadioMsgHeader_T_API_Msg_Pkg_double_convertion_allowed()
{
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable);
    }
    return is_struct__2671_double_convertion_allowed();
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
        compare_struct__2671(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int API_RadioMsgHeader_T_API_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable, nRetValue);
    }
    return struct__2671_to_double(pValue, nRetValue);
}

int get_API_RadioMsgHeader_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2671_signature(pfnStrAppend, pData);
}

int set_API_RadioMsgHeader_T_API_Msg_Pkg_default_value(void *pValue)
{
    return set_struct__2671_default_value(pValue);
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
 ** odometry_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimodometry_T_Obu_BasicTypes_PkgVTable;

int odometry_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2678_to_string(pValue, pfnStrAppend, pData);
}

int string_to_odometry_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimodometry_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2678(str, pValue, endptr);
    }
    return nRet;
}

int is_odometry_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimodometry_T_Obu_BasicTypes_PkgVTable);
    }
    return is_struct__2678_double_convertion_allowed();
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
        compare_struct__2678(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int odometry_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimodometry_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return struct__2678_to_double(pValue, nRetValue);
}

int get_odometry_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2678_signature(pfnStrAppend, pData);
}

int set_odometry_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_struct__2678_default_value(pValue);
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
 ** OdometryLocations_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable;

int OdometryLocations_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2665_to_string(pValue, pfnStrAppend, pData);
}

int string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2665(str, pValue, endptr);
    }
    return nRet;
}

int is_OdometryLocations_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable);
    }
    return is_struct__2665_double_convertion_allowed();
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
        compare_struct__2665(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OdometryLocations_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return struct__2665_to_double(pValue, nRetValue);
}

int get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2665_signature(pfnStrAppend, pData);
}

int set_OdometryLocations_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_struct__2665_default_value(pValue);
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
    return struct__2658_to_string(pValue, pfnStrAppend, pData);
}

int string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2658(str, pValue, endptr);
    }
    return nRet;
}

int is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable);
    }
    return is_struct__2658_double_convertion_allowed();
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
        compare_struct__2658(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return struct__2658_to_double(pValue, nRetValue);
}

int get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2658_signature(pfnStrAppend, pData);
}

int set_OdometrySpeeds_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_struct__2658_default_value(pValue);
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
    return struct__2652_to_string(pValue, pfnStrAppend, pData);
}

int string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2652(str, pValue, endptr);
    }
    return nRet;
}

int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_double_convertion_allowed()
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable);
    }
    return is_struct__2652_double_convertion_allowed();
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
        compare_struct__2652(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return struct__2652_to_double(pValue, nRetValue);
}

int get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2652_signature(pfnStrAppend, pData);
}

int set_LocWithInAcc_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_struct__2652_default_value(pValue);
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
 ** RadioMetadata_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRadioMetadata_T_Common_Types_PkgVTable;

int RadioMetadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL
        && pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2640_to_string(pValue, pfnStrAppend, pData);
}

int string_to_RadioMetadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRadioMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2640(str, pValue, endptr);
    }
    return nRet;
}

int is_RadioMetadata_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimRadioMetadata_T_Common_Types_PkgVTable);
    }
    return is_struct__2640_double_convertion_allowed();
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
        compare_struct__2640(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int RadioMetadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadioMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2640_to_double(pValue, nRetValue);
}

int get_RadioMetadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2640_signature(pfnStrAppend, pData);
}

int set_RadioMetadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2640_default_value(pValue);
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
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedPackets_T_Common_Types_PkgVTable;

int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2635_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2635(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__2635_double_convertion_allowed();
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
        compare_struct__2635(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2635_to_double(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2635_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2635_default_value(pValue);
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
    return array__2632_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2632(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__2632_double_convertion_allowed();
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
        compare_array__2632(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__2632_to_double(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2632_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__2632_default_value(pValue);
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
    return struct__2624_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2624(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__2624_double_convertion_allowed();
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
        compare_struct__2624(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2624_to_double(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2624_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2624_default_value(pValue);
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
 ** ReceivedMessage_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimReceivedMessage_T_Common_Types_PkgVTable;

int ReceivedMessage_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL
        && pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2741_to_string(pValue, pfnStrAppend, pData);
}

int string_to_ReceivedMessage_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimReceivedMessage_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2741(str, pValue, endptr);
    }
    return nRet;
}

int is_ReceivedMessage_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimReceivedMessage_T_Common_Types_PkgVTable);
    }
    return is_struct__2741_double_convertion_allowed();
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
        compare_struct__2741(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int ReceivedMessage_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimReceivedMessage_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2741_to_double(pValue, nRetValue);
}

int get_ReceivedMessage_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2741_signature(pfnStrAppend, pData);
}

int set_ReceivedMessage_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2741_default_value(pValue);
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
 ** TelegramHeader_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimTelegramHeader_T_BG_Types_PkgVTable;

int TelegramHeader_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL
        && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2693_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TelegramHeader_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTelegramHeader_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2693(str, pValue, endptr);
    }
    return nRet;
}

int is_TelegramHeader_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTelegramHeader_T_BG_Types_PkgVTable);
    }
    return is_struct__2693_double_convertion_allowed();
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
        compare_struct__2693(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TelegramHeader_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTelegramHeader_T_BG_Types_PkgVTable, nRetValue);
    }
    return struct__2693_to_double(pValue, nRetValue);
}

int get_TelegramHeader_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2693_signature(pfnStrAppend, pData);
}

int set_TelegramHeader_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2693_default_value(pValue);
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
 ** centerOfBalisePosition_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimcenterOfBalisePosition_T_BG_Types_PkgVTable;

int centerOfBalisePosition_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL
        && pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2688_to_string(pValue, pfnStrAppend, pData);
}

int string_to_centerOfBalisePosition_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimcenterOfBalisePosition_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2688(str, pValue, endptr);
    }
    return nRet;
}

int is_centerOfBalisePosition_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimcenterOfBalisePosition_T_BG_Types_PkgVTable);
    }
    return is_struct__2688_double_convertion_allowed();
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
        compare_struct__2688(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int centerOfBalisePosition_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimcenterOfBalisePosition_T_BG_Types_PkgVTable, nRetValue);
    }
    return struct__2688_to_double(pValue, nRetValue);
}

int get_centerOfBalisePosition_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2688_signature(pfnStrAppend, pData);
}

int set_centerOfBalisePosition_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2688_default_value(pValue);
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
 ** BG_Header_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimBG_Header_T_BG_Types_PkgVTable;

int BG_Header_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL
        && pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBG_Header_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2723_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BG_Header_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimBG_Header_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2723(str, pValue, endptr);
    }
    return nRet;
}

int is_BG_Header_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBG_Header_T_BG_Types_PkgVTable);
    }
    return is_struct__2723_double_convertion_allowed();
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
        compare_struct__2723(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BG_Header_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimBG_Header_T_BG_Types_PkgVTable, nRetValue);
    }
    return struct__2723_to_double(pValue, nRetValue);
}

int get_BG_Header_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2723_signature(pfnStrAppend, pData);
}

int set_BG_Header_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2723_default_value(pValue);
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
 ** Radio_TrackTrain_Header_T_Radio_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable;

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2603_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2603(str, pValue, endptr);
    }
    return nRet;
}

int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_double_convertion_allowed()
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable);
    }
    return is_struct__2603_double_convertion_allowed();
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
        compare_struct__2603(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, nRetValue);
    }
    return struct__2603_to_double(pValue, nRetValue);
}

int get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2603_signature(pfnStrAppend, pData);
}

int set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2603_default_value(pValue);
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

#include "C:/Program Files (x86)/Esterel Technologies/SCADE R15.2/SCADE/lib/kcg_conv.c"
