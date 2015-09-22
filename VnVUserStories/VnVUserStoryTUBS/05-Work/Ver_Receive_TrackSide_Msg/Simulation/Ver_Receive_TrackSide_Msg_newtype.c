#include <stdlib.h>
#include <stddef.h>
#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "Ver_Receive_TrackSide_Msg_newtype.h"
#include "kcg_conv.h"

char* strDefaultRealFormat="%.5g"; /* (from .etp) */

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

static int is_VTable_double_conversion_allowed(const struct SimTypeVTable *pVTable)
{
    if (pVTable != NULL) {
        int nConversionAllowed = 0;
        nConversionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
        nConversionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
        nConversionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
        nConversionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
        return nConversionAllowed;
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

static int is_VTable_long_convertion_allowed(const struct SimTypeVTable *pVTable)
{
    if (pVTable != NULL) {
        int nConvertionAllowed = 0;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
        return nConvertionAllowed;
    }
    return 1;
}

int VTable_to_long(const void *pValue, const struct SimTypeVTable *pVTable, long *nRetValue)
{
    if (pVTable != NULL) {
        if (pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
            *nRetValue = (*(long*)pVTable->m_pfnToType(SptLong, pValue));
        else if (pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
            *nRetValue = (long)(*(int*)pVTable->m_pfnToType(SptShort, pValue));
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
    { "Reset", SSM_st_Reset_SM1},
    { "Reset", SSM_st_Reset_SM1},
    { "Driving", SSM_st_Driving_SM1},
    { "Driving", SSM_st_Driving_SM1},
};
const int SSM_ST_SM1_nb_values = 4;

int SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM1*)pValue, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM1*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int is_SSM_ST_SM1_long_convertion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimSSM_ST_SM1VTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int SSM_ST_SM1_to_long(const void *pValue, long *nRetValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM1VTable, nRetValue);
    }
    *nRetValue = (long)*((SSM_ST_SM1*)pValue);
    return 1;
}

int get_SSM_ST_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pData);
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
    is_SSM_ST_SM1_double_conversion_allowed,
    SSM_ST_SM1_to_double,
    is_SSM_ST_SM1_long_convertion_allowed,
    SSM_ST_SM1_to_long,
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
const int SSM_TR_SM1_nb_values = 6;

int SSM_TR_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM1*)pValue, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM1*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int is_SSM_TR_SM1_long_convertion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimSSM_TR_SM1VTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int SSM_TR_SM1_to_long(const void *pValue, long *nRetValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM1VTable, nRetValue);
    }
    *nRetValue = (long)*((SSM_TR_SM1*)pValue);
    return 1;
}

int get_SSM_TR_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pData);
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
    is_SSM_TR_SM1_double_conversion_allowed,
    SSM_TR_SM1_to_double,
    is_SSM_TR_SM1_long_convertion_allowed,
    SSM_TR_SM1_to_long,
    compare_SSM_TR_SM1,
    get_SSM_TR_SM1_signature,
    set_SSM_TR_SM1_default_value,
    sizeof(SSM_TR_SM1)
};

/****************************************************************
 ** odometryFactors_T_Toolbox 
 ****************************************************************/

struct SimTypeVTable *pSimodometryFactors_T_ToolboxVTable;

static SimFieldUtils odometryFactors_T_Toolbox_fields[] = {
    {"o_nominal", offsetof(odometryFactors_T_Toolbox,o_nominal), &_Type_kcg_real_Utils},
    {"o_min", offsetof(odometryFactors_T_Toolbox,o_min), &_Type_kcg_real_Utils},
    {"o_max", offsetof(odometryFactors_T_Toolbox,o_max), &_Type_kcg_real_Utils},
};

int odometryFactors_T_Toolbox_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimodometryFactors_T_ToolboxVTable != NULL
        && pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodometryFactors_T_ToolboxVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, odometryFactors_T_Toolbox_fields, 3, pfnStrAppend, pData);
}

int string_to_odometryFactors_T_Toolbox(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimodometryFactors_T_ToolboxVTable != NULL) {
        nRet=string_to_VTable(str, pSimodometryFactors_T_ToolboxVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, odometryFactors_T_Toolbox_fields, 3, endptr);
    }
    return nRet;
}

int is_odometryFactors_T_Toolbox_double_conversion_allowed()
{
    if (pSimodometryFactors_T_ToolboxVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimodometryFactors_T_ToolboxVTable);
    }
    return 0;
}

int is_odometryFactors_T_Toolbox_long_convertion_allowed()
{
    if (pSimodometryFactors_T_ToolboxVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimodometryFactors_T_ToolboxVTable);
    }
    return 0;
}

void compare_odometryFactors_T_Toolbox(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimodometryFactors_T_ToolboxVTable != NULL
        && pSimodometryFactors_T_ToolboxVTable->m_version >= Scv612
        && pSimodometryFactors_T_ToolboxVTable->m_pfnCompare != NULL) {
        if (pSimodometryFactors_T_ToolboxVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimodometryFactors_T_ToolboxVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimodometryFactors_T_ToolboxVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, odometryFactors_T_Toolbox_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int odometryFactors_T_Toolbox_to_double(const void *pValue, double *nRetValue)
{
    if (pSimodometryFactors_T_ToolboxVTable != NULL) {
        return VTable_to_double(pValue, pSimodometryFactors_T_ToolboxVTable, nRetValue);
    }
    return 0;
}

int odometryFactors_T_Toolbox_to_long(const void *pValue, long *nRetValue)
{
    if (pSimodometryFactors_T_ToolboxVTable != NULL) {
        return VTable_to_long(pValue, pSimodometryFactors_T_ToolboxVTable, nRetValue);
    }
    return 0;
}

int get_odometryFactors_T_Toolbox_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(odometryFactors_T_Toolbox_fields, 3, pfnStrAppend, pData);
}

int set_odometryFactors_T_Toolbox_default_value(void *pValue)
{
    set_kcg_real_default_value(&(((odometryFactors_T_Toolbox*)pValue)->o_nominal));
    set_kcg_real_default_value(&(((odometryFactors_T_Toolbox*)pValue)->o_min));
    set_kcg_real_default_value(&(((odometryFactors_T_Toolbox*)pValue)->o_max));
    return 1;
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
    is_odometryFactors_T_Toolbox_double_conversion_allowed,
    odometryFactors_T_Toolbox_to_double,
    is_odometryFactors_T_Toolbox_long_convertion_allowed,
    odometryFactors_T_Toolbox_to_long,
    compare_odometryFactors_T_Toolbox,
    get_odometryFactors_T_Toolbox_signature,
    set_odometryFactors_T_Toolbox_default_value,
    sizeof(odometryFactors_T_Toolbox)
};

/****************************************************************
 ** odometry_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimodometry_T_Obu_BasicTypes_PkgVTable;

static SimFieldUtils odometry_T_Obu_BasicTypes_Pkg_fields[] = {
    {"valid", offsetof(odometry_T_Obu_BasicTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"timestamp", offsetof(odometry_T_Obu_BasicTypes_Pkg,timestamp), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"odo", offsetof(odometry_T_Obu_BasicTypes_Pkg,odo), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils},
    {"speed", offsetof(odometry_T_Obu_BasicTypes_Pkg,speed), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils},
    {"acceleration", offsetof(odometry_T_Obu_BasicTypes_Pkg,acceleration), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"motionState", offsetof(odometry_T_Obu_BasicTypes_Pkg,motionState), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils},
    {"motionDirection", offsetof(odometry_T_Obu_BasicTypes_Pkg,motionDirection), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils},
};

int odometry_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, odometry_T_Obu_BasicTypes_Pkg_fields, 7, pfnStrAppend, pData);
}

int string_to_odometry_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimodometry_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, odometry_T_Obu_BasicTypes_Pkg_fields, 7, endptr);
    }
    return nRet;
}

int is_odometry_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimodometry_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int is_odometry_T_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimodometry_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

void compare_odometry_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimodometry_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, odometry_T_Obu_BasicTypes_Pkg_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int odometry_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimodometry_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return 0;
}

int odometry_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimodometry_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return 0;
}

int get_odometry_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(odometry_T_Obu_BasicTypes_Pkg_fields, 7, pfnStrAppend, pData);
}

int set_odometry_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->valid));
    set_T_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->timestamp));
    set_OdometryLocations_T_Obu_BasicTypes_Pkg_default_value(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->odo));
    set_OdometrySpeeds_T_Obu_BasicTypes_Pkg_default_value(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->speed));
    set_A_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->acceleration));
    set_odoMotionState_T_Obu_BasicTypes_Pkg_default_value(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->motionState));
    set_odoMotionDirection_T_Obu_BasicTypes_Pkg_default_value(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->motionDirection));
    return 1;
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
    is_odometry_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    odometry_T_Obu_BasicTypes_Pkg_to_double,
    is_odometry_T_Obu_BasicTypes_Pkg_long_convertion_allowed,
    odometry_T_Obu_BasicTypes_Pkg_to_long,
    compare_odometry_T_Obu_BasicTypes_Pkg,
    get_odometry_T_Obu_BasicTypes_Pkg_signature,
    set_odometry_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(odometry_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** OdometryLocations_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable;

static SimFieldUtils OdometryLocations_T_Obu_BasicTypes_Pkg_fields[] = {
    {"o_nominal", offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg,o_nominal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"o_min", offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg,o_min), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"o_max", offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg,o_max), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
};

int OdometryLocations_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, OdometryLocations_T_Obu_BasicTypes_Pkg_fields, 3, pfnStrAppend, pData);
}

int string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, OdometryLocations_T_Obu_BasicTypes_Pkg_fields, 3, endptr);
    }
    return nRet;
}

int is_OdometryLocations_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int is_OdometryLocations_T_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

void compare_OdometryLocations_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, OdometryLocations_T_Obu_BasicTypes_Pkg_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OdometryLocations_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return 0;
}

int OdometryLocations_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return 0;
}

int get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(OdometryLocations_T_Obu_BasicTypes_Pkg_fields, 3, pfnStrAppend, pData);
}

int set_OdometryLocations_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((OdometryLocations_T_Obu_BasicTypes_Pkg*)pValue)->o_nominal));
    set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((OdometryLocations_T_Obu_BasicTypes_Pkg*)pValue)->o_min));
    set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((OdometryLocations_T_Obu_BasicTypes_Pkg*)pValue)->o_max));
    return 1;
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
    is_OdometryLocations_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    OdometryLocations_T_Obu_BasicTypes_Pkg_to_double,
    is_OdometryLocations_T_Obu_BasicTypes_Pkg_long_convertion_allowed,
    OdometryLocations_T_Obu_BasicTypes_Pkg_to_long,
    compare_OdometryLocations_T_Obu_BasicTypes_Pkg,
    get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature,
    set_OdometryLocations_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** OdometrySpeeds_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable;

static SimFieldUtils OdometrySpeeds_T_Obu_BasicTypes_Pkg_fields[] = {
    {"v_safeNominal", offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg,v_safeNominal), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"v_rawNominal", offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg,v_rawNominal), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"v_lower", offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg,v_lower), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"v_upper", offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg,v_upper), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils},
};

int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, OdometrySpeeds_T_Obu_BasicTypes_Pkg_fields, 4, pfnStrAppend, pData);
}

int string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, OdometrySpeeds_T_Obu_BasicTypes_Pkg_fields, 4, endptr);
    }
    return nRet;
}

int is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

void compare_OdometrySpeeds_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, OdometrySpeeds_T_Obu_BasicTypes_Pkg_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return 0;
}

int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return 0;
}

int get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(OdometrySpeeds_T_Obu_BasicTypes_Pkg_fields, 4, pfnStrAppend, pData);
}

int set_OdometrySpeeds_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    set_V_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pValue)->v_safeNominal));
    set_V_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pValue)->v_rawNominal));
    set_V_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pValue)->v_lower));
    set_V_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pValue)->v_upper));
    return 1;
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
    is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double,
    is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_long_convertion_allowed,
    OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_long,
    compare_OdometrySpeeds_T_Obu_BasicTypes_Pkg,
    get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature,
    set_OdometrySpeeds_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** LocWithInAcc_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable;

static SimFieldUtils LocWithInAcc_T_Obu_BasicTypes_Pkg_fields[] = {
    {"nominal", offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg,nominal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"d_min", offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg,d_min), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"d_max", offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg,d_max), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
};

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, LocWithInAcc_T_Obu_BasicTypes_Pkg_fields, 3, pfnStrAppend, pData);
}

int string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, LocWithInAcc_T_Obu_BasicTypes_Pkg_fields, 3, endptr);
    }
    return nRet;
}

int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

void compare_LocWithInAcc_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, LocWithInAcc_T_Obu_BasicTypes_Pkg_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return 0;
}

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return 0;
}

int get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(LocWithInAcc_T_Obu_BasicTypes_Pkg_fields, 3, pfnStrAppend, pData);
}

int set_LocWithInAcc_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((LocWithInAcc_T_Obu_BasicTypes_Pkg*)pValue)->nominal));
    set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((LocWithInAcc_T_Obu_BasicTypes_Pkg*)pValue)->d_min));
    set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((LocWithInAcc_T_Obu_BasicTypes_Pkg*)pValue)->d_max));
    return 1;
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
    is_LocWithInAcc_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double,
    is_LocWithInAcc_T_Obu_BasicTypes_Pkg_long_convertion_allowed,
    LocWithInAcc_T_Obu_BasicTypes_Pkg_to_long,
    compare_LocWithInAcc_T_Obu_BasicTypes_Pkg,
    get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature,
    set_LocWithInAcc_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** CompressedBaliseMessage_TM 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedBaliseMessage_TMVTable;

static SimFieldUtils CompressedBaliseMessage_TM_fields[] = {
    {"Header", offsetof(CompressedBaliseMessage_TM,Header), &_Type_BaliseTelegramHeader_int_T_TM_Utils},
    {"Messages", offsetof(CompressedBaliseMessage_TM,Messages), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils},
};

int CompressedBaliseMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL
        && pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, CompressedBaliseMessage_TM_fields, 2, pfnStrAppend, pData);
}

int string_to_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedBaliseMessage_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, CompressedBaliseMessage_TM_fields, 2, endptr);
    }
    return nRet;
}

int is_CompressedBaliseMessage_TM_double_conversion_allowed()
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedBaliseMessage_TMVTable);
    }
    return 0;
}

int is_CompressedBaliseMessage_TM_long_convertion_allowed()
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedBaliseMessage_TMVTable);
    }
    return 0;
}

void compare_CompressedBaliseMessage_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedBaliseMessage_TMVTable != NULL
        && pSimCompressedBaliseMessage_TMVTable->m_version >= Scv612
        && pSimCompressedBaliseMessage_TMVTable->m_pfnCompare != NULL) {
        if (pSimCompressedBaliseMessage_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedBaliseMessage_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedBaliseMessage_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, CompressedBaliseMessage_TM_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedBaliseMessage_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedBaliseMessage_TMVTable, nRetValue);
    }
    return 0;
}

int CompressedBaliseMessage_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedBaliseMessage_TMVTable, nRetValue);
    }
    return 0;
}

int get_CompressedBaliseMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(CompressedBaliseMessage_TM_fields, 2, pfnStrAppend, pData);
}

int set_CompressedBaliseMessage_TM_default_value(void *pValue)
{
    set_BaliseTelegramHeader_int_T_TM_default_value(&(((CompressedBaliseMessage_TM*)pValue)->Header));
    set_CompressedPackets_T_Common_Types_Pkg_default_value(&(((CompressedBaliseMessage_TM*)pValue)->Messages));
    return 1;
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
    is_CompressedBaliseMessage_TM_double_conversion_allowed,
    CompressedBaliseMessage_TM_to_double,
    is_CompressedBaliseMessage_TM_long_convertion_allowed,
    CompressedBaliseMessage_TM_to_long,
    compare_CompressedBaliseMessage_TM,
    get_CompressedBaliseMessage_TM_signature,
    set_CompressedBaliseMessage_TM_default_value,
    sizeof(CompressedBaliseMessage_TM)
};

/****************************************************************
 ** BaliseTelegramHeader_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimBaliseTelegramHeader_int_T_TMVTable;

static SimFieldUtils BaliseTelegramHeader_int_T_TM_fields[] = {
    {"q_updown", offsetof(BaliseTelegramHeader_int_T_TM,q_updown), &_Type_kcg_int_Utils},
    {"m_version", offsetof(BaliseTelegramHeader_int_T_TM,m_version), &_Type_kcg_int_Utils},
    {"q_media", offsetof(BaliseTelegramHeader_int_T_TM,q_media), &_Type_kcg_int_Utils},
    {"n_pig", offsetof(BaliseTelegramHeader_int_T_TM,n_pig), &_Type_kcg_int_Utils},
    {"n_total", offsetof(BaliseTelegramHeader_int_T_TM,n_total), &_Type_kcg_int_Utils},
    {"m_dup", offsetof(BaliseTelegramHeader_int_T_TM,m_dup), &_Type_kcg_int_Utils},
    {"m_mcount", offsetof(BaliseTelegramHeader_int_T_TM,m_mcount), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(BaliseTelegramHeader_int_T_TM,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(BaliseTelegramHeader_int_T_TM,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(BaliseTelegramHeader_int_T_TM,q_link), &_Type_kcg_int_Utils},
};

int BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, BaliseTelegramHeader_int_T_TM_fields, 10, pfnStrAppend, pData);
}

int string_to_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseTelegramHeader_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, BaliseTelegramHeader_int_T_TM_fields, 10, endptr);
    }
    return nRet;
}

int is_BaliseTelegramHeader_int_T_TM_double_conversion_allowed()
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBaliseTelegramHeader_int_T_TMVTable);
    }
    return 0;
}

int is_BaliseTelegramHeader_int_T_TM_long_convertion_allowed()
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimBaliseTelegramHeader_int_T_TMVTable);
    }
    return 0;
}

void compare_BaliseTelegramHeader_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_version >= Scv612
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimBaliseTelegramHeader_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, BaliseTelegramHeader_int_T_TM_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseTelegramHeader_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int BaliseTelegramHeader_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimBaliseTelegramHeader_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int get_BaliseTelegramHeader_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(BaliseTelegramHeader_int_T_TM_fields, 10, pfnStrAppend, pData);
}

int set_BaliseTelegramHeader_int_T_TM_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((BaliseTelegramHeader_int_T_TM*)pValue)->q_updown));
    set_kcg_int_default_value(&(((BaliseTelegramHeader_int_T_TM*)pValue)->m_version));
    set_kcg_int_default_value(&(((BaliseTelegramHeader_int_T_TM*)pValue)->q_media));
    set_kcg_int_default_value(&(((BaliseTelegramHeader_int_T_TM*)pValue)->n_pig));
    set_kcg_int_default_value(&(((BaliseTelegramHeader_int_T_TM*)pValue)->n_total));
    set_kcg_int_default_value(&(((BaliseTelegramHeader_int_T_TM*)pValue)->m_dup));
    set_kcg_int_default_value(&(((BaliseTelegramHeader_int_T_TM*)pValue)->m_mcount));
    set_kcg_int_default_value(&(((BaliseTelegramHeader_int_T_TM*)pValue)->nid_c));
    set_kcg_int_default_value(&(((BaliseTelegramHeader_int_T_TM*)pValue)->nid_bg));
    set_kcg_int_default_value(&(((BaliseTelegramHeader_int_T_TM*)pValue)->q_link));
    return 1;
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
    is_BaliseTelegramHeader_int_T_TM_double_conversion_allowed,
    BaliseTelegramHeader_int_T_TM_to_double,
    is_BaliseTelegramHeader_int_T_TM_long_convertion_allowed,
    BaliseTelegramHeader_int_T_TM_to_long,
    compare_BaliseTelegramHeader_int_T_TM,
    get_BaliseTelegramHeader_int_T_TM_signature,
    set_BaliseTelegramHeader_int_T_TM_default_value,
    sizeof(BaliseTelegramHeader_int_T_TM)
};

/****************************************************************
 ** X_TEXT_trackside_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimX_TEXT_trackside_T_TMVTable;

int X_TEXT_trackside_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimX_TEXT_trackside_T_TMVTable != NULL
        && pSimX_TEXT_trackside_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimX_TEXT_trackside_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 255, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_X_TEXT_trackside_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimX_TEXT_trackside_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimX_TEXT_trackside_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 255, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_X_TEXT_trackside_T_TM_double_conversion_allowed()
{
    if (pSimX_TEXT_trackside_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimX_TEXT_trackside_T_TMVTable);
    }
    return 0;
}

int is_X_TEXT_trackside_T_TM_long_convertion_allowed()
{
    if (pSimX_TEXT_trackside_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimX_TEXT_trackside_T_TMVTable);
    }
    return 0;
}

void compare_X_TEXT_trackside_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimX_TEXT_trackside_T_TMVTable != NULL
        && pSimX_TEXT_trackside_T_TMVTable->m_version >= Scv612
        && pSimX_TEXT_trackside_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimX_TEXT_trackside_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimX_TEXT_trackside_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimX_TEXT_trackside_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 255, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int X_TEXT_trackside_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimX_TEXT_trackside_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimX_TEXT_trackside_T_TMVTable, nRetValue);
    }
    return 0;
}

int X_TEXT_trackside_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimX_TEXT_trackside_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimX_TEXT_trackside_T_TMVTable, nRetValue);
    }
    return 0;
}

int get_X_TEXT_trackside_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 255; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_X_TEXT_trackside_T_TM_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 255; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_X_TEXT_trackside_T_TM_string(const char *str, char **endptr)
{
    static X_TEXT_trackside_T_TM rTemp;
    return string_to_X_TEXT_trackside_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_X_TEXT_trackside_T_TM_Utils = {
    X_TEXT_trackside_T_TM_to_string,
    check_X_TEXT_trackside_T_TM_string,
    string_to_X_TEXT_trackside_T_TM,
    is_X_TEXT_trackside_T_TM_double_conversion_allowed,
    X_TEXT_trackside_T_TM_to_double,
    is_X_TEXT_trackside_T_TM_long_convertion_allowed,
    X_TEXT_trackside_T_TM_to_long,
    compare_X_TEXT_trackside_T_TM,
    get_X_TEXT_trackside_T_TM_signature,
    set_X_TEXT_trackside_T_TM_default_value,
    sizeof(X_TEXT_trackside_T_TM)
};

/****************************************************************
 ** P021_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_trackside_int_T_TMVTable;

static SimFieldUtils P021_trackside_int_T_TM_fields[] = {
    {"valid", offsetof(P021_trackside_int_T_TM,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(P021_trackside_int_T_TM,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(P021_trackside_int_T_TM,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(P021_trackside_int_T_TM,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(P021_trackside_int_T_TM,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_GRADIENT", offsetof(P021_trackside_int_T_TM,D_GRADIENT), &_Type_kcg_int_Utils},
    {"Q_GDIR", offsetof(P021_trackside_int_T_TM,Q_GDIR), &_Type_kcg_int_Utils},
    {"G_A", offsetof(P021_trackside_int_T_TM,G_A), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(P021_trackside_int_T_TM,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(P021_trackside_int_T_TM,SECTIONS), &_Type_P021_trackide_sectionlist_T_TM_Utils},
};

int P021_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_trackside_int_T_TMVTable != NULL
        && pSimP021_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, P021_trackside_int_T_TM_fields, 10, pfnStrAppend, pData);
}

int string_to_P021_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, P021_trackside_int_T_TM_fields, 10, endptr);
    }
    return nRet;
}

int is_P021_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_trackside_int_T_TMVTable);
    }
    return 0;
}

int is_P021_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_trackside_int_T_TMVTable);
    }
    return 0;
}

void compare_P021_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_trackside_int_T_TMVTable != NULL
        && pSimP021_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP021_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, P021_trackside_int_T_TM_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_trackside_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int P021_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_trackside_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int get_P021_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(P021_trackside_int_T_TM_fields, 10, pfnStrAppend, pData);
}

int set_P021_trackside_int_T_TM_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((P021_trackside_int_T_TM*)pValue)->valid));
    set_kcg_int_default_value(&(((P021_trackside_int_T_TM*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((P021_trackside_int_T_TM*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((P021_trackside_int_T_TM*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((P021_trackside_int_T_TM*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((P021_trackside_int_T_TM*)pValue)->D_GRADIENT));
    set_kcg_int_default_value(&(((P021_trackside_int_T_TM*)pValue)->Q_GDIR));
    set_kcg_int_default_value(&(((P021_trackside_int_T_TM*)pValue)->G_A));
    set_kcg_int_default_value(&(((P021_trackside_int_T_TM*)pValue)->N_ITER));
    set_P021_trackide_sectionlist_T_TM_default_value(&(((P021_trackside_int_T_TM*)pValue)->SECTIONS));
    return 1;
}

int check_P021_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P021_trackside_int_T_TM rTemp;
    return string_to_P021_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_trackside_int_T_TM_Utils = {
    P021_trackside_int_T_TM_to_string,
    check_P021_trackside_int_T_TM_string,
    string_to_P021_trackside_int_T_TM,
    is_P021_trackside_int_T_TM_double_conversion_allowed,
    P021_trackside_int_T_TM_to_double,
    is_P021_trackside_int_T_TM_long_convertion_allowed,
    P021_trackside_int_T_TM_to_long,
    compare_P021_trackside_int_T_TM,
    get_P021_trackside_int_T_TM_signature,
    set_P021_trackside_int_T_TM_default_value,
    sizeof(P021_trackside_int_T_TM)
};

/****************************************************************
 ** P021_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_trackide_sectionlist_T_TMVTable;

int P021_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL
        && pSimP021_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, P021_section_int_T_TM_to_string, 32, sizeof(P021_section_int_T_TM), pfnStrAppend, pData);
}

int string_to_P021_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_P021_section_int_T_TM_Utils, 32, sizeof(P021_section_int_T_TM), endptr);
    }
    return nRet;
}

int is_P021_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_trackide_sectionlist_T_TMVTable);
    }
    return 0;
}

int is_P021_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_trackide_sectionlist_T_TMVTable);
    }
    return 0;
}

void compare_P021_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL
        && pSimP021_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimP021_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_P021_section_int_T_TM, 32, sizeof(P021_section_int_T_TM), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return 0;
}

int P021_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return 0;
}

int get_P021_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_P021_section_int_T_TM_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_P021_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_P021_section_int_T_TM_default_value(&((P021_section_int_T_TM*)pValue)[i]);
    return 1;
}

int check_P021_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static P021_trackide_sectionlist_T_TM rTemp;
    return string_to_P021_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_trackide_sectionlist_T_TM_Utils = {
    P021_trackide_sectionlist_T_TM_to_string,
    check_P021_trackide_sectionlist_T_TM_string,
    string_to_P021_trackide_sectionlist_T_TM,
    is_P021_trackide_sectionlist_T_TM_double_conversion_allowed,
    P021_trackide_sectionlist_T_TM_to_double,
    is_P021_trackide_sectionlist_T_TM_long_convertion_allowed,
    P021_trackide_sectionlist_T_TM_to_long,
    compare_P021_trackide_sectionlist_T_TM,
    get_P021_trackide_sectionlist_T_TM_signature,
    set_P021_trackide_sectionlist_T_TM_default_value,
    sizeof(P021_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** P021_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_section_int_T_TMVTable;

static SimFieldUtils P021_section_int_T_TM_fields[] = {
    {"D_GRADIENT", offsetof(P021_section_int_T_TM,D_GRADIENT), &_Type_kcg_int_Utils},
    {"Q_GDIR", offsetof(P021_section_int_T_TM,Q_GDIR), &_Type_kcg_int_Utils},
    {"G_A", offsetof(P021_section_int_T_TM,G_A), &_Type_kcg_int_Utils},
};

int P021_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_section_int_T_TMVTable != NULL
        && pSimP021_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, P021_section_int_T_TM_fields, 3, pfnStrAppend, pData);
}

int string_to_P021_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, P021_section_int_T_TM_fields, 3, endptr);
    }
    return nRet;
}

int is_P021_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_section_int_T_TMVTable);
    }
    return 0;
}

int is_P021_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_section_int_T_TMVTable);
    }
    return 0;
}

void compare_P021_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_section_int_T_TMVTable != NULL
        && pSimP021_section_int_T_TMVTable->m_version >= Scv612
        && pSimP021_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_section_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, P021_section_int_T_TM_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_section_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int P021_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_section_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int get_P021_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(P021_section_int_T_TM_fields, 3, pfnStrAppend, pData);
}

int set_P021_section_int_T_TM_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((P021_section_int_T_TM*)pValue)->D_GRADIENT));
    set_kcg_int_default_value(&(((P021_section_int_T_TM*)pValue)->Q_GDIR));
    set_kcg_int_default_value(&(((P021_section_int_T_TM*)pValue)->G_A));
    return 1;
}

int check_P021_section_int_T_TM_string(const char *str, char **endptr)
{
    static P021_section_int_T_TM rTemp;
    return string_to_P021_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_section_int_T_TM_Utils = {
    P021_section_int_T_TM_to_string,
    check_P021_section_int_T_TM_string,
    string_to_P021_section_int_T_TM,
    is_P021_section_int_T_TM_double_conversion_allowed,
    P021_section_int_T_TM_to_double,
    is_P021_section_int_T_TM_long_convertion_allowed,
    P021_section_int_T_TM_to_long,
    compare_P021_section_int_T_TM,
    get_P021_section_int_T_TM_signature,
    set_P021_section_int_T_TM_default_value,
    sizeof(P021_section_int_T_TM)
};

/****************************************************************
 ** P021_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_OBU_sectionlist_int_T_TMVTable;

int P021_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP021_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, P021_section_int_T_TM_to_string, 33, sizeof(P021_section_int_T_TM), pfnStrAppend, pData);
}

int string_to_P021_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_P021_section_int_T_TM_Utils, 33, sizeof(P021_section_int_T_TM), endptr);
    }
    return nRet;
}

int is_P021_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_OBU_sectionlist_int_T_TMVTable);
    }
    return 0;
}

int is_P021_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_OBU_sectionlist_int_T_TMVTable);
    }
    return 0;
}

void compare_P021_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP021_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSimP021_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_P021_section_int_T_TM, 33, sizeof(P021_section_int_T_TM), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int P021_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int get_P021_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_P021_section_int_T_TM_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_P021_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_P021_section_int_T_TM_default_value(&((P021_section_int_T_TM*)pValue)[i]);
    return 1;
}

int check_P021_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static P021_OBU_sectionlist_int_T_TM rTemp;
    return string_to_P021_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_OBU_sectionlist_int_T_TM_Utils = {
    P021_OBU_sectionlist_int_T_TM_to_string,
    check_P021_OBU_sectionlist_int_T_TM_string,
    string_to_P021_OBU_sectionlist_int_T_TM,
    is_P021_OBU_sectionlist_int_T_TM_double_conversion_allowed,
    P021_OBU_sectionlist_int_T_TM_to_double,
    is_P021_OBU_sectionlist_int_T_TM_long_convertion_allowed,
    P021_OBU_sectionlist_int_T_TM_to_long,
    compare_P021_OBU_sectionlist_int_T_TM,
    get_P021_OBU_sectionlist_int_T_TM_signature,
    set_P021_OBU_sectionlist_int_T_TM_default_value,
    sizeof(P021_OBU_sectionlist_int_T_TM)
};

/****************************************************************
 ** P041_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_trackside_int_T_TMVTable;

static SimFieldUtils P041_trackside_int_T_TM_fields[] = {
    {"valid", offsetof(P041_trackside_int_T_TM,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(P041_trackside_int_T_TM,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(P041_trackside_int_T_TM,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(P041_trackside_int_T_TM,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(P041_trackside_int_T_TM,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_LEVELTR", offsetof(P041_trackside_int_T_TM,D_LEVELTR), &_Type_kcg_int_Utils},
    {"M_LEVELTR", offsetof(P041_trackside_int_T_TM,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(P041_trackside_int_T_TM,NID_NTC), &_Type_kcg_int_Utils},
    {"L_ACKLEVELTR", offsetof(P041_trackside_int_T_TM,L_ACKLEVELTR), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(P041_trackside_int_T_TM,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(P041_trackside_int_T_TM,SECTIONS), &_Type_P041_trackide_sectionlist_T_TM_Utils},
};

int P041_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_trackside_int_T_TMVTable != NULL
        && pSimP041_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, P041_trackside_int_T_TM_fields, 11, pfnStrAppend, pData);
}

int string_to_P041_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, P041_trackside_int_T_TM_fields, 11, endptr);
    }
    return nRet;
}

int is_P041_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_trackside_int_T_TMVTable);
    }
    return 0;
}

int is_P041_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_trackside_int_T_TMVTable);
    }
    return 0;
}

void compare_P041_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_trackside_int_T_TMVTable != NULL
        && pSimP041_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP041_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, P041_trackside_int_T_TM_fields, 11, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_trackside_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int P041_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_trackside_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int get_P041_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(P041_trackside_int_T_TM_fields, 11, pfnStrAppend, pData);
}

int set_P041_trackside_int_T_TM_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((P041_trackside_int_T_TM*)pValue)->valid));
    set_kcg_int_default_value(&(((P041_trackside_int_T_TM*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((P041_trackside_int_T_TM*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((P041_trackside_int_T_TM*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((P041_trackside_int_T_TM*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((P041_trackside_int_T_TM*)pValue)->D_LEVELTR));
    set_kcg_int_default_value(&(((P041_trackside_int_T_TM*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((P041_trackside_int_T_TM*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((P041_trackside_int_T_TM*)pValue)->L_ACKLEVELTR));
    set_kcg_int_default_value(&(((P041_trackside_int_T_TM*)pValue)->N_ITER));
    set_P041_trackide_sectionlist_T_TM_default_value(&(((P041_trackside_int_T_TM*)pValue)->SECTIONS));
    return 1;
}

int check_P041_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P041_trackside_int_T_TM rTemp;
    return string_to_P041_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_trackside_int_T_TM_Utils = {
    P041_trackside_int_T_TM_to_string,
    check_P041_trackside_int_T_TM_string,
    string_to_P041_trackside_int_T_TM,
    is_P041_trackside_int_T_TM_double_conversion_allowed,
    P041_trackside_int_T_TM_to_double,
    is_P041_trackside_int_T_TM_long_convertion_allowed,
    P041_trackside_int_T_TM_to_long,
    compare_P041_trackside_int_T_TM,
    get_P041_trackside_int_T_TM_signature,
    set_P041_trackside_int_T_TM_default_value,
    sizeof(P041_trackside_int_T_TM)
};

/****************************************************************
 ** P041_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_trackide_sectionlist_T_TMVTable;

int P041_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL
        && pSimP041_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, P041_section_int_T_TM_to_string, 32, sizeof(P041_section_int_T_TM), pfnStrAppend, pData);
}

int string_to_P041_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_P041_section_int_T_TM_Utils, 32, sizeof(P041_section_int_T_TM), endptr);
    }
    return nRet;
}

int is_P041_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_trackide_sectionlist_T_TMVTable);
    }
    return 0;
}

int is_P041_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_trackide_sectionlist_T_TMVTable);
    }
    return 0;
}

void compare_P041_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL
        && pSimP041_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimP041_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_P041_section_int_T_TM, 32, sizeof(P041_section_int_T_TM), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return 0;
}

int P041_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return 0;
}

int get_P041_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_P041_section_int_T_TM_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_P041_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_P041_section_int_T_TM_default_value(&((P041_section_int_T_TM*)pValue)[i]);
    return 1;
}

int check_P041_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static P041_trackide_sectionlist_T_TM rTemp;
    return string_to_P041_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_trackide_sectionlist_T_TM_Utils = {
    P041_trackide_sectionlist_T_TM_to_string,
    check_P041_trackide_sectionlist_T_TM_string,
    string_to_P041_trackide_sectionlist_T_TM,
    is_P041_trackide_sectionlist_T_TM_double_conversion_allowed,
    P041_trackide_sectionlist_T_TM_to_double,
    is_P041_trackide_sectionlist_T_TM_long_convertion_allowed,
    P041_trackide_sectionlist_T_TM_to_long,
    compare_P041_trackide_sectionlist_T_TM,
    get_P041_trackide_sectionlist_T_TM_signature,
    set_P041_trackide_sectionlist_T_TM_default_value,
    sizeof(P041_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** P041_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_section_int_T_TMVTable;

static SimFieldUtils P041_section_int_T_TM_fields[] = {
    {"M_LEVELTR", offsetof(P041_section_int_T_TM,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(P041_section_int_T_TM,NID_NTC), &_Type_kcg_int_Utils},
    {"L_ACKLEVELTR", offsetof(P041_section_int_T_TM,L_ACKLEVELTR), &_Type_kcg_int_Utils},
};

int P041_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_section_int_T_TMVTable != NULL
        && pSimP041_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, P041_section_int_T_TM_fields, 3, pfnStrAppend, pData);
}

int string_to_P041_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, P041_section_int_T_TM_fields, 3, endptr);
    }
    return nRet;
}

int is_P041_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_section_int_T_TMVTable);
    }
    return 0;
}

int is_P041_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_section_int_T_TMVTable);
    }
    return 0;
}

void compare_P041_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_section_int_T_TMVTable != NULL
        && pSimP041_section_int_T_TMVTable->m_version >= Scv612
        && pSimP041_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_section_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, P041_section_int_T_TM_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_section_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int P041_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_section_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int get_P041_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(P041_section_int_T_TM_fields, 3, pfnStrAppend, pData);
}

int set_P041_section_int_T_TM_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((P041_section_int_T_TM*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((P041_section_int_T_TM*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((P041_section_int_T_TM*)pValue)->L_ACKLEVELTR));
    return 1;
}

int check_P041_section_int_T_TM_string(const char *str, char **endptr)
{
    static P041_section_int_T_TM rTemp;
    return string_to_P041_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_section_int_T_TM_Utils = {
    P041_section_int_T_TM_to_string,
    check_P041_section_int_T_TM_string,
    string_to_P041_section_int_T_TM,
    is_P041_section_int_T_TM_double_conversion_allowed,
    P041_section_int_T_TM_to_double,
    is_P041_section_int_T_TM_long_convertion_allowed,
    P041_section_int_T_TM_to_long,
    compare_P041_section_int_T_TM,
    get_P041_section_int_T_TM_signature,
    set_P041_section_int_T_TM_default_value,
    sizeof(P041_section_int_T_TM)
};

/****************************************************************
 ** P041_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_OBU_sectionlist_int_T_TMVTable;

int P041_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP041_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, P041_section_int_T_TM_to_string, 33, sizeof(P041_section_int_T_TM), pfnStrAppend, pData);
}

int string_to_P041_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_P041_section_int_T_TM_Utils, 33, sizeof(P041_section_int_T_TM), endptr);
    }
    return nRet;
}

int is_P041_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_OBU_sectionlist_int_T_TMVTable);
    }
    return 0;
}

int is_P041_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_OBU_sectionlist_int_T_TMVTable);
    }
    return 0;
}

void compare_P041_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP041_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSimP041_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_P041_section_int_T_TM, 33, sizeof(P041_section_int_T_TM), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int P041_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return 0;
}

int get_P041_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_P041_section_int_T_TM_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_P041_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_P041_section_int_T_TM_default_value(&((P041_section_int_T_TM*)pValue)[i]);
    return 1;
}

int check_P041_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static P041_OBU_sectionlist_int_T_TM rTemp;
    return string_to_P041_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_OBU_sectionlist_int_T_TM_Utils = {
    P041_OBU_sectionlist_int_T_TM_to_string,
    check_P041_OBU_sectionlist_int_T_TM_string,
    string_to_P041_OBU_sectionlist_int_T_TM,
    is_P041_OBU_sectionlist_int_T_TM_double_conversion_allowed,
    P041_OBU_sectionlist_int_T_TM_to_double,
    is_P041_OBU_sectionlist_int_T_TM_long_convertion_allowed,
    P041_OBU_sectionlist_int_T_TM_to_long,
    compare_P041_OBU_sectionlist_int_T_TM,
    get_P041_OBU_sectionlist_int_T_TM_signature,
    set_P041_OBU_sectionlist_int_T_TM_default_value,
    sizeof(P041_OBU_sectionlist_int_T_TM)
};

/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedPackets_T_Common_Types_PkgVTable;

static SimFieldUtils CompressedPackets_T_Common_Types_Pkg_fields[] = {
    {"PacketHeaders", offsetof(CompressedPackets_T_Common_Types_Pkg,PacketHeaders), &_Type_Metadata_T_Common_Types_Pkg_Utils},
    {"PacketData", offsetof(CompressedPackets_T_Common_Types_Pkg,PacketData), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils},
};

int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, CompressedPackets_T_Common_Types_Pkg_fields, 2, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, CompressedPackets_T_Common_Types_Pkg_fields, 2, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return 0;
}

int is_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return 0;
}

void compare_CompressedPackets_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, CompressedPackets_T_Common_Types_Pkg_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(CompressedPackets_T_Common_Types_Pkg_fields, 2, pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    set_Metadata_T_Common_Types_Pkg_default_value(&(((CompressedPackets_T_Common_Types_Pkg*)pValue)->PacketHeaders));
    set_CompressedPacketData_T_Common_Types_Pkg_default_value(&(((CompressedPackets_T_Common_Types_Pkg*)pValue)->PacketData));
    return 1;
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
    is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed,
    CompressedPackets_T_Common_Types_Pkg_to_double,
    is_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed,
    CompressedPackets_T_Common_Types_Pkg_to_long,
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
    return pConverter->m_pfnArrayToString(pValue, MetadataElement_T_Common_Types_Pkg_to_string, 30, sizeof(MetadataElement_T_Common_Types_Pkg), pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, 30, sizeof(MetadataElement_T_Common_Types_Pkg), endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return 0;
}

int is_Metadata_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return 0;
}

void compare_Metadata_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL
        && pSimMetadata_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMetadata_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_MetadataElement_T_Common_Types_Pkg, 30, sizeof(MetadataElement_T_Common_Types_Pkg), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_MetadataElement_T_Common_Types_Pkg_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_MetadataElement_T_Common_Types_Pkg_default_value(&((MetadataElement_T_Common_Types_Pkg*)pValue)[i]);
    return 1;
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
    is_Metadata_T_Common_Types_Pkg_double_conversion_allowed,
    Metadata_T_Common_Types_Pkg_to_double,
    is_Metadata_T_Common_Types_Pkg_long_convertion_allowed,
    Metadata_T_Common_Types_Pkg_to_long,
    compare_Metadata_T_Common_Types_Pkg,
    get_Metadata_T_Common_Types_Pkg_signature,
    set_Metadata_T_Common_Types_Pkg_default_value,
    sizeof(Metadata_T_Common_Types_Pkg)
};

/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimMetadataElement_T_Common_Types_PkgVTable;

static SimFieldUtils MetadataElement_T_Common_Types_Pkg_fields[] = {
    {"nid_packet", offsetof(MetadataElement_T_Common_Types_Pkg,nid_packet), &_Type_NID_PACKET_Utils},
    {"q_dir", offsetof(MetadataElement_T_Common_Types_Pkg,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(MetadataElement_T_Common_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(MetadataElement_T_Common_Types_Pkg,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(MetadataElement_T_Common_Types_Pkg,endAddress), &_Type_kcg_int_Utils},
};

int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, MetadataElement_T_Common_Types_Pkg_fields, 5, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, MetadataElement_T_Common_Types_Pkg_fields, 5, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return 0;
}

int is_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return 0;
}

void compare_MetadataElement_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMetadataElement_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, MetadataElement_T_Common_Types_Pkg_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(MetadataElement_T_Common_Types_Pkg_fields, 5, pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    set_NID_PACKET_default_value(&(((MetadataElement_T_Common_Types_Pkg*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((MetadataElement_T_Common_Types_Pkg*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((MetadataElement_T_Common_Types_Pkg*)pValue)->valid));
    set_kcg_int_default_value(&(((MetadataElement_T_Common_Types_Pkg*)pValue)->startAddress));
    set_kcg_int_default_value(&(((MetadataElement_T_Common_Types_Pkg*)pValue)->endAddress));
    return 1;
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
    is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed,
    MetadataElement_T_Common_Types_Pkg_to_double,
    is_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed,
    MetadataElement_T_Common_Types_Pkg_to_long,
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
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 500, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPacketData_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 500, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_CompressedPacketData_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPacketData_T_Common_Types_PkgVTable);
    }
    return 0;
}

int is_CompressedPacketData_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedPacketData_T_Common_Types_PkgVTable);
    }
    return 0;
}

void compare_CompressedPacketData_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPacketData_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int CompressedPacketData_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPacketData_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_CompressedPacketData_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_CompressedPacketData_T_Common_Types_Pkg_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 500; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
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
    is_CompressedPacketData_T_Common_Types_Pkg_double_conversion_allowed,
    CompressedPacketData_T_Common_Types_Pkg_to_double,
    is_CompressedPacketData_T_Common_Types_Pkg_long_convertion_allowed,
    CompressedPacketData_T_Common_Types_Pkg_to_long,
    compare_CompressedPacketData_T_Common_Types_Pkg,
    get_CompressedPacketData_T_Common_Types_Pkg_signature,
    set_CompressedPacketData_T_Common_Types_Pkg_default_value,
    sizeof(CompressedPacketData_T_Common_Types_Pkg)
};

/****************************************************************
 ** RBC_Id_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRBC_Id_T_Common_Types_PkgVTable;

static SimFieldUtils RBC_Id_T_Common_Types_Pkg_fields[] = {
    {"valid", offsetof(RBC_Id_T_Common_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"nid_c", offsetof(RBC_Id_T_Common_Types_Pkg,nid_c), &_Type_NID_C_Utils},
    {"rbc_id", offsetof(RBC_Id_T_Common_Types_Pkg,rbc_id), &_Type_NID_RBC_Utils},
    {"device_id", offsetof(RBC_Id_T_Common_Types_Pkg,device_id), &_Type_kcg_int_Utils},
};

int RBC_Id_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL
        && pSimRBC_Id_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRBC_Id_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, RBC_Id_T_Common_Types_Pkg_fields, 4, pfnStrAppend, pData);
}

int string_to_RBC_Id_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRBC_Id_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, RBC_Id_T_Common_Types_Pkg_fields, 4, endptr);
    }
    return nRet;
}

int is_RBC_Id_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRBC_Id_T_Common_Types_PkgVTable);
    }
    return 0;
}

int is_RBC_Id_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimRBC_Id_T_Common_Types_PkgVTable);
    }
    return 0;
}

void compare_RBC_Id_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL
        && pSimRBC_Id_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimRBC_Id_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRBC_Id_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRBC_Id_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRBC_Id_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, RBC_Id_T_Common_Types_Pkg_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int RBC_Id_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRBC_Id_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int RBC_Id_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRBC_Id_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_RBC_Id_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(RBC_Id_T_Common_Types_Pkg_fields, 4, pfnStrAppend, pData);
}

int set_RBC_Id_T_Common_Types_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((RBC_Id_T_Common_Types_Pkg*)pValue)->valid));
    set_NID_C_default_value(&(((RBC_Id_T_Common_Types_Pkg*)pValue)->nid_c));
    set_NID_RBC_default_value(&(((RBC_Id_T_Common_Types_Pkg*)pValue)->rbc_id));
    set_kcg_int_default_value(&(((RBC_Id_T_Common_Types_Pkg*)pValue)->device_id));
    return 1;
}

int check_RBC_Id_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static RBC_Id_T_Common_Types_Pkg rTemp;
    return string_to_RBC_Id_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_RBC_Id_T_Common_Types_Pkg_Utils = {
    RBC_Id_T_Common_Types_Pkg_to_string,
    check_RBC_Id_T_Common_Types_Pkg_string,
    string_to_RBC_Id_T_Common_Types_Pkg,
    is_RBC_Id_T_Common_Types_Pkg_double_conversion_allowed,
    RBC_Id_T_Common_Types_Pkg_to_double,
    is_RBC_Id_T_Common_Types_Pkg_long_convertion_allowed,
    RBC_Id_T_Common_Types_Pkg_to_long,
    compare_RBC_Id_T_Common_Types_Pkg,
    get_RBC_Id_T_Common_Types_Pkg_signature,
    set_RBC_Id_T_Common_Types_Pkg_default_value,
    sizeof(RBC_Id_T_Common_Types_Pkg)
};

/****************************************************************
 ** RadioMetadata_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRadioMetadata_T_Common_Types_PkgVTable;

static SimFieldUtils RadioMetadata_T_Common_Types_Pkg_fields[] = {
    {"t_train_reference", offsetof(RadioMetadata_T_Common_Types_Pkg,t_train_reference), &_Type_kcg_bool_Utils},
    {"nid_em", offsetof(RadioMetadata_T_Common_Types_Pkg,nid_em), &_Type_kcg_bool_Utils},
    {"q_scale", offsetof(RadioMetadata_T_Common_Types_Pkg,q_scale), &_Type_kcg_bool_Utils},
    {"d_sr", offsetof(RadioMetadata_T_Common_Types_Pkg,d_sr), &_Type_kcg_bool_Utils},
    {"t_sh_rqst", offsetof(RadioMetadata_T_Common_Types_Pkg,t_sh_rqst), &_Type_kcg_bool_Utils},
    {"d_ref", offsetof(RadioMetadata_T_Common_Types_Pkg,d_ref), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(RadioMetadata_T_Common_Types_Pkg,q_dir), &_Type_kcg_bool_Utils},
    {"d_emergencystop", offsetof(RadioMetadata_T_Common_Types_Pkg,d_emergencystop), &_Type_kcg_bool_Utils},
    {"m_version", offsetof(RadioMetadata_T_Common_Types_Pkg,m_version), &_Type_kcg_bool_Utils},
};

int RadioMetadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL
        && pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, RadioMetadata_T_Common_Types_Pkg_fields, 9, pfnStrAppend, pData);
}

int string_to_RadioMetadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRadioMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, RadioMetadata_T_Common_Types_Pkg_fields, 9, endptr);
    }
    return nRet;
}

int is_RadioMetadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRadioMetadata_T_Common_Types_PkgVTable);
    }
    return 0;
}

int is_RadioMetadata_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimRadioMetadata_T_Common_Types_PkgVTable);
    }
    return 0;
}

void compare_RadioMetadata_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL
        && pSimRadioMetadata_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadioMetadata_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, RadioMetadata_T_Common_Types_Pkg_fields, 9, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int RadioMetadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadioMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int RadioMetadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRadioMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_RadioMetadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(RadioMetadata_T_Common_Types_Pkg_fields, 9, pfnStrAppend, pData);
}

int set_RadioMetadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->t_train_reference));
    set_kcg_bool_default_value(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->nid_em));
    set_kcg_bool_default_value(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->q_scale));
    set_kcg_bool_default_value(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->d_sr));
    set_kcg_bool_default_value(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->t_sh_rqst));
    set_kcg_bool_default_value(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->d_ref));
    set_kcg_bool_default_value(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->d_emergencystop));
    set_kcg_bool_default_value(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->m_version));
    return 1;
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
    is_RadioMetadata_T_Common_Types_Pkg_double_conversion_allowed,
    RadioMetadata_T_Common_Types_Pkg_to_double,
    is_RadioMetadata_T_Common_Types_Pkg_long_convertion_allowed,
    RadioMetadata_T_Common_Types_Pkg_to_long,
    compare_RadioMetadata_T_Common_Types_Pkg,
    get_RadioMetadata_T_Common_Types_Pkg_signature,
    set_RadioMetadata_T_Common_Types_Pkg_default_value,
    sizeof(RadioMetadata_T_Common_Types_Pkg)
};

/****************************************************************
 ** TrackSide_ForCheck_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimTrackSide_ForCheck_T_Common_Types_PkgVTable;

static SimFieldUtils TrackSide_ForCheck_T_Common_Types_Pkg_fields[] = {
    {"valid", offsetof(TrackSide_ForCheck_T_Common_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"systemTime", offsetof(TrackSide_ForCheck_T_Common_Types_Pkg,systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"msg_type", offsetof(TrackSide_ForCheck_T_Common_Types_Pkg,msg_type), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"telegramHeaders", offsetof(TrackSide_ForCheck_T_Common_Types_Pkg,telegramHeaders), &_Type_BG_Message_T_BG_Types_Pkg_Utils},
    {"radio_Msg", offsetof(TrackSide_ForCheck_T_Common_Types_Pkg,radio_Msg), &_Type_RadioMessage_T_Radio_Types_Pkg_Utils},
};

int TrackSide_ForCheck_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL
        && pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, TrackSide_ForCheck_T_Common_Types_Pkg_fields, 5, pfnStrAppend, pData);
}

int string_to_TrackSide_ForCheck_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTrackSide_ForCheck_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, TrackSide_ForCheck_T_Common_Types_Pkg_fields, 5, endptr);
    }
    return nRet;
}

int is_TrackSide_ForCheck_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimTrackSide_ForCheck_T_Common_Types_PkgVTable);
    }
    return 0;
}

int is_TrackSide_ForCheck_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimTrackSide_ForCheck_T_Common_Types_PkgVTable);
    }
    return 0;
}

void compare_TrackSide_ForCheck_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL
        && pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, TrackSide_ForCheck_T_Common_Types_Pkg_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TrackSide_ForCheck_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTrackSide_ForCheck_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int TrackSide_ForCheck_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimTrackSide_ForCheck_T_Common_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_TrackSide_ForCheck_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(TrackSide_ForCheck_T_Common_Types_Pkg_fields, 5, pfnStrAppend, pData);
}

int set_TrackSide_ForCheck_T_Common_Types_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((TrackSide_ForCheck_T_Common_Types_Pkg*)pValue)->valid));
    set_T_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((TrackSide_ForCheck_T_Common_Types_Pkg*)pValue)->systemTime));
    set_MsgSource_T_Common_Types_Pkg_default_value(&(((TrackSide_ForCheck_T_Common_Types_Pkg*)pValue)->msg_type));
    set_BG_Message_T_BG_Types_Pkg_default_value(&(((TrackSide_ForCheck_T_Common_Types_Pkg*)pValue)->telegramHeaders));
    set_RadioMessage_T_Radio_Types_Pkg_default_value(&(((TrackSide_ForCheck_T_Common_Types_Pkg*)pValue)->radio_Msg));
    return 1;
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
    is_TrackSide_ForCheck_T_Common_Types_Pkg_double_conversion_allowed,
    TrackSide_ForCheck_T_Common_Types_Pkg_to_double,
    is_TrackSide_ForCheck_T_Common_Types_Pkg_long_convertion_allowed,
    TrackSide_ForCheck_T_Common_Types_Pkg_to_long,
    compare_TrackSide_ForCheck_T_Common_Types_Pkg,
    get_TrackSide_ForCheck_T_Common_Types_Pkg_signature,
    set_TrackSide_ForCheck_T_Common_Types_Pkg_default_value,
    sizeof(TrackSide_ForCheck_T_Common_Types_Pkg)
};

/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimTelegramHeader_T_BG_Types_PkgVTable;

static SimFieldUtils TelegramHeader_T_BG_Types_Pkg_fields[] = {
    {"q_updown", offsetof(TelegramHeader_T_BG_Types_Pkg,q_updown), &_Type_Q_UPDOWN_Utils},
    {"m_version", offsetof(TelegramHeader_T_BG_Types_Pkg,m_version), &_Type_M_VERSION_Utils},
    {"q_media", offsetof(TelegramHeader_T_BG_Types_Pkg,q_media), &_Type_Q_MEDIA_Utils},
    {"n_pig", offsetof(TelegramHeader_T_BG_Types_Pkg,n_pig), &_Type_N_PIG_Utils},
    {"n_total", offsetof(TelegramHeader_T_BG_Types_Pkg,n_total), &_Type_N_TOTAL_Utils},
    {"m_dup", offsetof(TelegramHeader_T_BG_Types_Pkg,m_dup), &_Type_M_DUP_Utils},
    {"m_mcount", offsetof(TelegramHeader_T_BG_Types_Pkg,m_mcount), &_Type_M_MCOUNT_Utils},
    {"nid_c", offsetof(TelegramHeader_T_BG_Types_Pkg,nid_c), &_Type_NID_C_Utils},
    {"nid_bg", offsetof(TelegramHeader_T_BG_Types_Pkg,nid_bg), &_Type_NID_BG_Utils},
    {"q_link", offsetof(TelegramHeader_T_BG_Types_Pkg,q_link), &_Type_Q_LINK_Utils},
};

int TelegramHeader_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL
        && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, TelegramHeader_T_BG_Types_Pkg_fields, 10, pfnStrAppend, pData);
}

int string_to_TelegramHeader_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTelegramHeader_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, TelegramHeader_T_BG_Types_Pkg_fields, 10, endptr);
    }
    return nRet;
}

int is_TelegramHeader_T_BG_Types_Pkg_double_conversion_allowed()
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimTelegramHeader_T_BG_Types_PkgVTable);
    }
    return 0;
}

int is_TelegramHeader_T_BG_Types_Pkg_long_convertion_allowed()
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimTelegramHeader_T_BG_Types_PkgVTable);
    }
    return 0;
}

void compare_TelegramHeader_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL
        && pSimTelegramHeader_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimTelegramHeader_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, TelegramHeader_T_BG_Types_Pkg_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TelegramHeader_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTelegramHeader_T_BG_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int TelegramHeader_T_BG_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimTelegramHeader_T_BG_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_TelegramHeader_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(TelegramHeader_T_BG_Types_Pkg_fields, 10, pfnStrAppend, pData);
}

int set_TelegramHeader_T_BG_Types_Pkg_default_value(void *pValue)
{
    set_Q_UPDOWN_default_value(&(((TelegramHeader_T_BG_Types_Pkg*)pValue)->q_updown));
    set_M_VERSION_default_value(&(((TelegramHeader_T_BG_Types_Pkg*)pValue)->m_version));
    set_Q_MEDIA_default_value(&(((TelegramHeader_T_BG_Types_Pkg*)pValue)->q_media));
    set_N_PIG_default_value(&(((TelegramHeader_T_BG_Types_Pkg*)pValue)->n_pig));
    set_N_TOTAL_default_value(&(((TelegramHeader_T_BG_Types_Pkg*)pValue)->n_total));
    set_M_DUP_default_value(&(((TelegramHeader_T_BG_Types_Pkg*)pValue)->m_dup));
    set_M_MCOUNT_default_value(&(((TelegramHeader_T_BG_Types_Pkg*)pValue)->m_mcount));
    set_NID_C_default_value(&(((TelegramHeader_T_BG_Types_Pkg*)pValue)->nid_c));
    set_NID_BG_default_value(&(((TelegramHeader_T_BG_Types_Pkg*)pValue)->nid_bg));
    set_Q_LINK_default_value(&(((TelegramHeader_T_BG_Types_Pkg*)pValue)->q_link));
    return 1;
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
    is_TelegramHeader_T_BG_Types_Pkg_double_conversion_allowed,
    TelegramHeader_T_BG_Types_Pkg_to_double,
    is_TelegramHeader_T_BG_Types_Pkg_long_convertion_allowed,
    TelegramHeader_T_BG_Types_Pkg_to_long,
    compare_TelegramHeader_T_BG_Types_Pkg,
    get_TelegramHeader_T_BG_Types_Pkg_signature,
    set_TelegramHeader_T_BG_Types_Pkg_default_value,
    sizeof(TelegramHeader_T_BG_Types_Pkg)
};

/****************************************************************
 ** centerOfBalisePosition_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimcenterOfBalisePosition_T_BG_Types_PkgVTable;

static SimFieldUtils centerOfBalisePosition_T_BG_Types_Pkg_fields[] = {
    {"odometerOfBaliseDetection", offsetof(centerOfBalisePosition_T_BG_Types_Pkg,odometerOfBaliseDetection), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils},
    {"BG_centerDetectionInaccuraccuracies", offsetof(centerOfBalisePosition_T_BG_Types_Pkg,BG_centerDetectionInaccuraccuracies), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils},
};

int centerOfBalisePosition_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL
        && pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, centerOfBalisePosition_T_BG_Types_Pkg_fields, 2, pfnStrAppend, pData);
}

int string_to_centerOfBalisePosition_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimcenterOfBalisePosition_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, centerOfBalisePosition_T_BG_Types_Pkg_fields, 2, endptr);
    }
    return nRet;
}

int is_centerOfBalisePosition_T_BG_Types_Pkg_double_conversion_allowed()
{
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimcenterOfBalisePosition_T_BG_Types_PkgVTable);
    }
    return 0;
}

int is_centerOfBalisePosition_T_BG_Types_Pkg_long_convertion_allowed()
{
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimcenterOfBalisePosition_T_BG_Types_PkgVTable);
    }
    return 0;
}

void compare_centerOfBalisePosition_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL
        && pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, centerOfBalisePosition_T_BG_Types_Pkg_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int centerOfBalisePosition_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimcenterOfBalisePosition_T_BG_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int centerOfBalisePosition_T_BG_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimcenterOfBalisePosition_T_BG_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_centerOfBalisePosition_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(centerOfBalisePosition_T_BG_Types_Pkg_fields, 2, pfnStrAppend, pData);
}

int set_centerOfBalisePosition_T_BG_Types_Pkg_default_value(void *pValue)
{
    set_odometry_T_Obu_BasicTypes_Pkg_default_value(&(((centerOfBalisePosition_T_BG_Types_Pkg*)pValue)->odometerOfBaliseDetection));
    set_LocWithInAcc_T_Obu_BasicTypes_Pkg_default_value(&(((centerOfBalisePosition_T_BG_Types_Pkg*)pValue)->BG_centerDetectionInaccuraccuracies));
    return 1;
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
    is_centerOfBalisePosition_T_BG_Types_Pkg_double_conversion_allowed,
    centerOfBalisePosition_T_BG_Types_Pkg_to_double,
    is_centerOfBalisePosition_T_BG_Types_Pkg_long_convertion_allowed,
    centerOfBalisePosition_T_BG_Types_Pkg_to_long,
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
    return pConverter->m_pfnArrayToString(pValue, Telegram_T_BG_Types_Pkg_to_string, 8, sizeof(Telegram_T_BG_Types_Pkg), pfnStrAppend, pData);
}

int string_to_TelegramArray_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTelegramArray_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTelegramArray_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_Telegram_T_BG_Types_Pkg_Utils, 8, sizeof(Telegram_T_BG_Types_Pkg), endptr);
    }
    return nRet;
}

int is_TelegramArray_T_BG_Types_Pkg_double_conversion_allowed()
{
    if (pSimTelegramArray_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimTelegramArray_T_BG_Types_PkgVTable);
    }
    return 0;
}

int is_TelegramArray_T_BG_Types_Pkg_long_convertion_allowed()
{
    if (pSimTelegramArray_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimTelegramArray_T_BG_Types_PkgVTable);
    }
    return 0;
}

void compare_TelegramArray_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTelegramArray_T_BG_Types_PkgVTable != NULL
        && pSimTelegramArray_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimTelegramArray_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_Telegram_T_BG_Types_Pkg, 8, sizeof(Telegram_T_BG_Types_Pkg), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TelegramArray_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTelegramArray_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTelegramArray_T_BG_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int TelegramArray_T_BG_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimTelegramArray_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimTelegramArray_T_BG_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_TelegramArray_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 8; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_Telegram_T_BG_Types_Pkg_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_TelegramArray_T_BG_Types_Pkg_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_Telegram_T_BG_Types_Pkg_default_value(&((Telegram_T_BG_Types_Pkg*)pValue)[i]);
    return 1;
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
    is_TelegramArray_T_BG_Types_Pkg_double_conversion_allowed,
    TelegramArray_T_BG_Types_Pkg_to_double,
    is_TelegramArray_T_BG_Types_Pkg_long_convertion_allowed,
    TelegramArray_T_BG_Types_Pkg_to_long,
    compare_TelegramArray_T_BG_Types_Pkg,
    get_TelegramArray_T_BG_Types_Pkg_signature,
    set_TelegramArray_T_BG_Types_Pkg_default_value,
    sizeof(TelegramArray_T_BG_Types_Pkg)
};

/****************************************************************
 ** Telegram_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimTelegram_T_BG_Types_PkgVTable;

static SimFieldUtils Telegram_T_BG_Types_Pkg_fields[] = {
    {"valid", offsetof(Telegram_T_BG_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"checkResult", offsetof(Telegram_T_BG_Types_Pkg,checkResult), &_Type_kcg_bool_Utils},
    {"telegramheader", offsetof(Telegram_T_BG_Types_Pkg,telegramheader), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils},
    {"packets", offsetof(Telegram_T_BG_Types_Pkg,packets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils},
};

int Telegram_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL
        && pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTelegram_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, Telegram_T_BG_Types_Pkg_fields, 4, pfnStrAppend, pData);
}

int string_to_Telegram_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTelegram_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, Telegram_T_BG_Types_Pkg_fields, 4, endptr);
    }
    return nRet;
}

int is_Telegram_T_BG_Types_Pkg_double_conversion_allowed()
{
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimTelegram_T_BG_Types_PkgVTable);
    }
    return 0;
}

int is_Telegram_T_BG_Types_Pkg_long_convertion_allowed()
{
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimTelegram_T_BG_Types_PkgVTable);
    }
    return 0;
}

void compare_Telegram_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL
        && pSimTelegram_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimTelegram_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimTelegram_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTelegram_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTelegram_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Telegram_T_BG_Types_Pkg_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Telegram_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTelegram_T_BG_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int Telegram_T_BG_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimTelegram_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimTelegram_T_BG_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_Telegram_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(Telegram_T_BG_Types_Pkg_fields, 4, pfnStrAppend, pData);
}

int set_Telegram_T_BG_Types_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((Telegram_T_BG_Types_Pkg*)pValue)->valid));
    set_kcg_bool_default_value(&(((Telegram_T_BG_Types_Pkg*)pValue)->checkResult));
    set_TelegramHeader_T_BG_Types_Pkg_default_value(&(((Telegram_T_BG_Types_Pkg*)pValue)->telegramheader));
    set_CompressedPackets_T_Common_Types_Pkg_default_value(&(((Telegram_T_BG_Types_Pkg*)pValue)->packets));
    return 1;
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
    is_Telegram_T_BG_Types_Pkg_double_conversion_allowed,
    Telegram_T_BG_Types_Pkg_to_double,
    is_Telegram_T_BG_Types_Pkg_long_convertion_allowed,
    Telegram_T_BG_Types_Pkg_to_long,
    compare_Telegram_T_BG_Types_Pkg,
    get_Telegram_T_BG_Types_Pkg_signature,
    set_Telegram_T_BG_Types_Pkg_default_value,
    sizeof(Telegram_T_BG_Types_Pkg)
};

/****************************************************************
 ** BG_Message_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimBG_Message_T_BG_Types_PkgVTable;

static SimFieldUtils BG_Message_T_BG_Types_Pkg_fields[] = {
    {"present", offsetof(BG_Message_T_BG_Types_Pkg,present), &_Type_kcg_bool_Utils},
    {"Telegrams", offsetof(BG_Message_T_BG_Types_Pkg,Telegrams), &_Type_TelegramArray_T_BG_Types_Pkg_Utils},
    {"numberBalises", offsetof(BG_Message_T_BG_Types_Pkg,numberBalises), &_Type_kcg_int_Utils},
    {"centerOfBalisePosition", offsetof(BG_Message_T_BG_Types_Pkg,centerOfBalisePosition), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils},
};

int BG_Message_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL
        && pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBG_Message_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, BG_Message_T_BG_Types_Pkg_fields, 4, pfnStrAppend, pData);
}

int string_to_BG_Message_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimBG_Message_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, BG_Message_T_BG_Types_Pkg_fields, 4, endptr);
    }
    return nRet;
}

int is_BG_Message_T_BG_Types_Pkg_double_conversion_allowed()
{
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBG_Message_T_BG_Types_PkgVTable);
    }
    return 0;
}

int is_BG_Message_T_BG_Types_Pkg_long_convertion_allowed()
{
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimBG_Message_T_BG_Types_PkgVTable);
    }
    return 0;
}

void compare_BG_Message_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL
        && pSimBG_Message_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimBG_Message_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimBG_Message_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBG_Message_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBG_Message_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, BG_Message_T_BG_Types_Pkg_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BG_Message_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimBG_Message_T_BG_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int BG_Message_T_BG_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimBG_Message_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimBG_Message_T_BG_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_BG_Message_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(BG_Message_T_BG_Types_Pkg_fields, 4, pfnStrAppend, pData);
}

int set_BG_Message_T_BG_Types_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((BG_Message_T_BG_Types_Pkg*)pValue)->present));
    set_TelegramArray_T_BG_Types_Pkg_default_value(&(((BG_Message_T_BG_Types_Pkg*)pValue)->Telegrams));
    set_kcg_int_default_value(&(((BG_Message_T_BG_Types_Pkg*)pValue)->numberBalises));
    set_centerOfBalisePosition_T_BG_Types_Pkg_default_value(&(((BG_Message_T_BG_Types_Pkg*)pValue)->centerOfBalisePosition));
    return 1;
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
    is_BG_Message_T_BG_Types_Pkg_double_conversion_allowed,
    BG_Message_T_BG_Types_Pkg_to_double,
    is_BG_Message_T_BG_Types_Pkg_long_convertion_allowed,
    BG_Message_T_BG_Types_Pkg_to_long,
    compare_BG_Message_T_BG_Types_Pkg,
    get_BG_Message_T_BG_Types_Pkg_signature,
    set_BG_Message_T_BG_Types_Pkg_default_value,
    sizeof(BG_Message_T_BG_Types_Pkg)
};

/****************************************************************
 ** parameter_StoryTest_T_UNISIG_Validation_Scenarios 
 ****************************************************************/

struct SimTypeVTable *pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable;

static SimFieldUtils parameter_StoryTest_T_UNISIG_Validation_Scenarios_fields[] = {
    {"BeginOfTrack", offsetof(parameter_StoryTest_T_UNISIG_Validation_Scenarios,BeginOfTrack), &_Type_kcg_real_Utils},
    {"EndOfTrack", offsetof(parameter_StoryTest_T_UNISIG_Validation_Scenarios,EndOfTrack), &_Type_kcg_real_Utils},
    {"NumberOfBGs", offsetof(parameter_StoryTest_T_UNISIG_Validation_Scenarios,NumberOfBGs), &_Type_kcg_int_Utils},
};

int parameter_StoryTest_T_UNISIG_Validation_Scenarios_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable != NULL
        && pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, parameter_StoryTest_T_UNISIG_Validation_Scenarios_fields, 3, pfnStrAppend, pData);
}

int string_to_parameter_StoryTest_T_UNISIG_Validation_Scenarios(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable != NULL) {
        nRet=string_to_VTable(str, pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, parameter_StoryTest_T_UNISIG_Validation_Scenarios_fields, 3, endptr);
    }
    return nRet;
}

int is_parameter_StoryTest_T_UNISIG_Validation_Scenarios_double_conversion_allowed()
{
    if (pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable);
    }
    return 0;
}

int is_parameter_StoryTest_T_UNISIG_Validation_Scenarios_long_convertion_allowed()
{
    if (pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable);
    }
    return 0;
}

void compare_parameter_StoryTest_T_UNISIG_Validation_Scenarios(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable != NULL
        && pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable->m_version >= Scv612
        && pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable->m_pfnCompare != NULL) {
        if (pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, parameter_StoryTest_T_UNISIG_Validation_Scenarios_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int parameter_StoryTest_T_UNISIG_Validation_Scenarios_to_double(const void *pValue, double *nRetValue)
{
    if (pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable != NULL) {
        return VTable_to_double(pValue, pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable, nRetValue);
    }
    return 0;
}

int parameter_StoryTest_T_UNISIG_Validation_Scenarios_to_long(const void *pValue, long *nRetValue)
{
    if (pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable != NULL) {
        return VTable_to_long(pValue, pSimparameter_StoryTest_T_UNISIG_Validation_ScenariosVTable, nRetValue);
    }
    return 0;
}

int get_parameter_StoryTest_T_UNISIG_Validation_Scenarios_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(parameter_StoryTest_T_UNISIG_Validation_Scenarios_fields, 3, pfnStrAppend, pData);
}

int set_parameter_StoryTest_T_UNISIG_Validation_Scenarios_default_value(void *pValue)
{
    set_kcg_real_default_value(&(((parameter_StoryTest_T_UNISIG_Validation_Scenarios*)pValue)->BeginOfTrack));
    set_kcg_real_default_value(&(((parameter_StoryTest_T_UNISIG_Validation_Scenarios*)pValue)->EndOfTrack));
    set_kcg_int_default_value(&(((parameter_StoryTest_T_UNISIG_Validation_Scenarios*)pValue)->NumberOfBGs));
    return 1;
}

int check_parameter_StoryTest_T_UNISIG_Validation_Scenarios_string(const char *str, char **endptr)
{
    static parameter_StoryTest_T_UNISIG_Validation_Scenarios rTemp;
    return string_to_parameter_StoryTest_T_UNISIG_Validation_Scenarios(str, &rTemp, endptr);
}

SimTypeUtils _Type_parameter_StoryTest_T_UNISIG_Validation_Scenarios_Utils = {
    parameter_StoryTest_T_UNISIG_Validation_Scenarios_to_string,
    check_parameter_StoryTest_T_UNISIG_Validation_Scenarios_string,
    string_to_parameter_StoryTest_T_UNISIG_Validation_Scenarios,
    is_parameter_StoryTest_T_UNISIG_Validation_Scenarios_double_conversion_allowed,
    parameter_StoryTest_T_UNISIG_Validation_Scenarios_to_double,
    is_parameter_StoryTest_T_UNISIG_Validation_Scenarios_long_convertion_allowed,
    parameter_StoryTest_T_UNISIG_Validation_Scenarios_to_long,
    compare_parameter_StoryTest_T_UNISIG_Validation_Scenarios,
    get_parameter_StoryTest_T_UNISIG_Validation_Scenarios_signature,
    set_parameter_StoryTest_T_UNISIG_Validation_Scenarios_default_value,
    sizeof(parameter_StoryTest_T_UNISIG_Validation_Scenarios)
};

/****************************************************************
 ** B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt 
 ****************************************************************/

struct SimTypeVTable *pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable;

static SimFieldUtils B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_fields[] = {
    {"header", offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt,header), &_Type_BaliseTelegramHeader_int_T_TM_Utils},
    {"packets", offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt,packets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils},
    {"engineering_BG_location", offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt,engineering_BG_location), &_Type_kcg_int_Utils},
    {"TrainPos", offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt,TrainPos), &_Type_kcg_real_Utils},
    {"pig_nom_0", offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt,pig_nom_0), &_Type_kcg_int_Utils},
    {"balise_passed", offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt,balise_passed), &_Type_kcg_bool_Utils},
};

int B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable != NULL
        && pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_fields, 6, pfnStrAppend, pData);
}

int string_to_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable != NULL) {
        nRet=string_to_VTable(str, pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_fields, 6, endptr);
    }
    return nRet;
}

int is_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_double_conversion_allowed()
{
    if (pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable);
    }
    return 0;
}

int is_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_long_convertion_allowed()
{
    if (pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable);
    }
    return 0;
}

void compare_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable != NULL
        && pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable->m_version >= Scv612
        && pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable->m_pfnCompare != NULL) {
        if (pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_to_double(const void *pValue, double *nRetValue)
{
    if (pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable != NULL) {
        return VTable_to_double(pValue, pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable, nRetValue);
    }
    return 0;
}

int B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_to_long(const void *pValue, long *nRetValue)
{
    if (pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable != NULL) {
        return VTable_to_long(pValue, pSimB_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibIntVTable, nRetValue);
    }
    return 0;
}

int get_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_fields, 6, pfnStrAppend, pData);
}

int set_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_default_value(void *pValue)
{
    set_BaliseTelegramHeader_int_T_TM_default_value(&(((B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt*)pValue)->header));
    set_CompressedPackets_T_Common_Types_Pkg_default_value(&(((B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt*)pValue)->packets));
    set_kcg_int_default_value(&(((B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt*)pValue)->engineering_BG_location));
    set_kcg_real_default_value(&(((B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt*)pValue)->TrainPos));
    set_kcg_int_default_value(&(((B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt*)pValue)->pig_nom_0));
    set_kcg_bool_default_value(&(((B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt*)pValue)->balise_passed));
    return 1;
}

int check_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_string(const char *str, char **endptr)
{
    static B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt rTemp;
    return string_to_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(str, &rTemp, endptr);
}

SimTypeUtils _Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils = {
    B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_to_string,
    check_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_string,
    string_to_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt,
    is_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_double_conversion_allowed,
    B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_to_double,
    is_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_long_convertion_allowed,
    B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_to_long,
    compare_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt,
    get_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_signature,
    set_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_default_value,
    sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt)
};

/****************************************************************
 ** P027V1_trackside_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_trackside_int_T_TM_baseline2VTable;

static SimFieldUtils P027V1_trackside_int_T_TM_baseline2_fields[] = {
    {"valid", offsetof(P027V1_trackside_int_T_TM_baseline2,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(P027V1_trackside_int_T_TM_baseline2,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(P027V1_trackside_int_T_TM_baseline2,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(P027V1_trackside_int_T_TM_baseline2,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(P027V1_trackside_int_T_TM_baseline2,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_STATIC", offsetof(P027V1_trackside_int_T_TM_baseline2,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(P027V1_trackside_int_T_TM_baseline2,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(P027V1_trackside_int_T_TM_baseline2,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER_n", offsetof(P027V1_trackside_int_T_TM_baseline2,N_ITER_n), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(P027V1_trackside_int_T_TM_baseline2,SECTIONS_q_diff), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils},
    {"N_ITER_k", offsetof(P027V1_trackside_int_T_TM_baseline2,N_ITER_k), &_Type_kcg_int_Utils},
    {"SECTIONS_SSP", offsetof(P027V1_trackside_int_T_TM_baseline2,SECTIONS_SSP), &_Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils},
};

int P027V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, P027V1_trackside_int_T_TM_baseline2_fields, 12, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, P027V1_trackside_int_T_TM_baseline2_fields, 12, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_int_T_TM_baseline2VTable);
    }
    return 0;
}

int is_P027V1_trackside_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_int_T_TM_baseline2VTable);
    }
    return 0;
}

void compare_P027V1_trackside_int_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_int_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_trackside_int_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, P027V1_trackside_int_T_TM_baseline2_fields, 12, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int P027V1_trackside_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int get_P027V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(P027V1_trackside_int_T_TM_baseline2_fields, 12, pfnStrAppend, pData);
}

int set_P027V1_trackside_int_T_TM_baseline2_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->valid));
    set_kcg_int_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->N_ITER_n));
    set_P027V1_trackside_qdifflist_T_TM_baseline2_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->SECTIONS_q_diff));
    set_kcg_int_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->N_ITER_k));
    set_P027V1_trackside_sectionlist_T_TM_baseline2_default_value(&(((P027V1_trackside_int_T_TM_baseline2*)pValue)->SECTIONS_SSP));
    return 1;
}

int check_P027V1_trackside_int_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_trackside_int_T_TM_baseline2 rTemp;
    return string_to_P027V1_trackside_int_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_trackside_int_T_TM_baseline2_Utils = {
    P027V1_trackside_int_T_TM_baseline2_to_string,
    check_P027V1_trackside_int_T_TM_baseline2_string,
    string_to_P027V1_trackside_int_T_TM_baseline2,
    is_P027V1_trackside_int_T_TM_baseline2_double_conversion_allowed,
    P027V1_trackside_int_T_TM_baseline2_to_double,
    is_P027V1_trackside_int_T_TM_baseline2_long_convertion_allowed,
    P027V1_trackside_int_T_TM_baseline2_to_long,
    compare_P027V1_trackside_int_T_TM_baseline2,
    get_P027V1_trackside_int_T_TM_baseline2_signature,
    set_P027V1_trackside_int_T_TM_baseline2_default_value,
    sizeof(P027V1_trackside_int_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_section_int_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_section_int_qdiff_T_TM_baseline2VTable;

static SimFieldUtils P027V1_section_int_qdiff_T_TM_baseline2_fields[] = {
    {"NC_DIFF", offsetof(P027V1_section_int_qdiff_T_TM_baseline2,NC_DIFF), &_Type_kcg_int_Utils},
    {"V_DIFF", offsetof(P027V1_section_int_qdiff_T_TM_baseline2,V_DIFF), &_Type_kcg_int_Utils},
};

int P027V1_section_int_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, P027V1_section_int_qdiff_T_TM_baseline2_fields, 2, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, P027V1_section_int_qdiff_T_TM_baseline2_fields, 2, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_int_qdiff_T_TM_baseline2VTable);
    }
    return 0;
}

int is_P027V1_section_int_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_int_qdiff_T_TM_baseline2VTable);
    }
    return 0;
}

void compare_P027V1_section_int_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, P027V1_section_int_qdiff_T_TM_baseline2_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int P027V1_section_int_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int get_P027V1_section_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(P027V1_section_int_qdiff_T_TM_baseline2_fields, 2, pfnStrAppend, pData);
}

int set_P027V1_section_int_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((P027V1_section_int_qdiff_T_TM_baseline2*)pValue)->NC_DIFF));
    set_kcg_int_default_value(&(((P027V1_section_int_qdiff_T_TM_baseline2*)pValue)->V_DIFF));
    return 1;
}

int check_P027V1_section_int_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_section_int_qdiff_T_TM_baseline2 rTemp;
    return string_to_P027V1_section_int_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_section_int_qdiff_T_TM_baseline2_Utils = {
    P027V1_section_int_qdiff_T_TM_baseline2_to_string,
    check_P027V1_section_int_qdiff_T_TM_baseline2_string,
    string_to_P027V1_section_int_qdiff_T_TM_baseline2,
    is_P027V1_section_int_qdiff_T_TM_baseline2_double_conversion_allowed,
    P027V1_section_int_qdiff_T_TM_baseline2_to_double,
    is_P027V1_section_int_qdiff_T_TM_baseline2_long_convertion_allowed,
    P027V1_section_int_qdiff_T_TM_baseline2_to_long,
    compare_P027V1_section_int_qdiff_T_TM_baseline2,
    get_P027V1_section_int_qdiff_T_TM_baseline2_signature,
    set_P027V1_section_int_qdiff_T_TM_baseline2_default_value,
    sizeof(P027V1_section_int_qdiff_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_trackside_sectionlist_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable;

int P027V1_trackside_sectionlist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, P027V1_section_int_T_TM_baseline2_to_string, 32, sizeof(P027V1_section_int_T_TM_baseline2), pfnStrAppend, pData);
}

int string_to_P027V1_trackside_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_P027V1_section_int_T_TM_baseline2_Utils, 32, sizeof(P027V1_section_int_T_TM_baseline2), endptr);
    }
    return nRet;
}

int is_P027V1_trackside_sectionlist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable);
    }
    return 0;
}

int is_P027V1_trackside_sectionlist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable);
    }
    return 0;
}

void compare_P027V1_trackside_sectionlist_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_P027V1_section_int_T_TM_baseline2, 32, sizeof(P027V1_section_int_T_TM_baseline2), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int P027V1_trackside_sectionlist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int get_P027V1_trackside_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_P027V1_section_int_T_TM_baseline2_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_P027V1_trackside_sectionlist_T_TM_baseline2_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_P027V1_section_int_T_TM_baseline2_default_value(&((P027V1_section_int_T_TM_baseline2*)pValue)[i]);
    return 1;
}

int check_P027V1_trackside_sectionlist_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_trackside_sectionlist_T_TM_baseline2 rTemp;
    return string_to_P027V1_trackside_sectionlist_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils = {
    P027V1_trackside_sectionlist_T_TM_baseline2_to_string,
    check_P027V1_trackside_sectionlist_T_TM_baseline2_string,
    string_to_P027V1_trackside_sectionlist_T_TM_baseline2,
    is_P027V1_trackside_sectionlist_T_TM_baseline2_double_conversion_allowed,
    P027V1_trackside_sectionlist_T_TM_baseline2_to_double,
    is_P027V1_trackside_sectionlist_T_TM_baseline2_long_convertion_allowed,
    P027V1_trackside_sectionlist_T_TM_baseline2_to_long,
    compare_P027V1_trackside_sectionlist_T_TM_baseline2,
    get_P027V1_trackside_sectionlist_T_TM_baseline2_signature,
    set_P027V1_trackside_sectionlist_T_TM_baseline2_default_value,
    sizeof(P027V1_trackside_sectionlist_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_section_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_section_int_T_TM_baseline2VTable;

static SimFieldUtils P027V1_section_int_T_TM_baseline2_fields[] = {
    {"D_STATIC", offsetof(P027V1_section_int_T_TM_baseline2,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(P027V1_section_int_T_TM_baseline2,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(P027V1_section_int_T_TM_baseline2,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(P027V1_section_int_T_TM_baseline2,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(P027V1_section_int_T_TM_baseline2,SECTIONS_q_diff), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils},
};

int P027V1_section_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_section_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, P027V1_section_int_T_TM_baseline2_fields, 5, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, P027V1_section_int_T_TM_baseline2_fields, 5, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_int_T_TM_baseline2VTable);
    }
    return 0;
}

int is_P027V1_section_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_int_T_TM_baseline2VTable);
    }
    return 0;
}

void compare_P027V1_section_int_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_int_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_section_int_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_section_int_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_section_int_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_section_int_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, P027V1_section_int_T_TM_baseline2_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int P027V1_section_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_int_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int get_P027V1_section_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(P027V1_section_int_T_TM_baseline2_fields, 5, pfnStrAppend, pData);
}

int set_P027V1_section_int_T_TM_baseline2_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((P027V1_section_int_T_TM_baseline2*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((P027V1_section_int_T_TM_baseline2*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((P027V1_section_int_T_TM_baseline2*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((P027V1_section_int_T_TM_baseline2*)pValue)->N_ITER));
    set_P027V1_trackside_qdifflist_T_TM_baseline2_default_value(&(((P027V1_section_int_T_TM_baseline2*)pValue)->SECTIONS_q_diff));
    return 1;
}

int check_P027V1_section_int_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_section_int_T_TM_baseline2 rTemp;
    return string_to_P027V1_section_int_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_section_int_T_TM_baseline2_Utils = {
    P027V1_section_int_T_TM_baseline2_to_string,
    check_P027V1_section_int_T_TM_baseline2_string,
    string_to_P027V1_section_int_T_TM_baseline2,
    is_P027V1_section_int_T_TM_baseline2_double_conversion_allowed,
    P027V1_section_int_T_TM_baseline2_to_double,
    is_P027V1_section_int_T_TM_baseline2_long_convertion_allowed,
    P027V1_section_int_T_TM_baseline2_to_long,
    compare_P027V1_section_int_T_TM_baseline2,
    get_P027V1_section_int_T_TM_baseline2_signature,
    set_P027V1_section_int_T_TM_baseline2_default_value,
    sizeof(P027V1_section_int_T_TM_baseline2)
};

/****************************************************************
 ** _2_P027V1_OBU_sectionlist_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable;

int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL
        && pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, P027V1_section_int_T_TM_baseline2_to_string, 33, sizeof(P027V1_section_int_T_TM_baseline2), pfnStrAppend, pData);
}

int string_to__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_P027V1_section_int_T_TM_baseline2_Utils, 33, sizeof(P027V1_section_int_T_TM_baseline2), endptr);
    }
    return nRet;
}

int is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return 0;
}

int is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return 0;
}

void compare__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL
        && pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_version >= Scv612
        && pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_P027V1_section_int_T_TM_baseline2, 33, sizeof(P027V1_section_int_T_TM_baseline2), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int get__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_P027V1_section_int_T_TM_baseline2_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_P027V1_section_int_T_TM_baseline2_default_value(&((P027V1_section_int_T_TM_baseline2*)pValue)[i]);
    return 1;
}

int check__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_string(const char *str, char **endptr)
{
    static _2_P027V1_OBU_sectionlist_int_T_TM_baseline2 rTemp;
    return string_to__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils = {
    _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_string,
    check__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_string,
    string_to__2_P027V1_OBU_sectionlist_int_T_TM_baseline2,
    is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_double_conversion_allowed,
    _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_double,
    is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_long_convertion_allowed,
    _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_long,
    compare__2_P027V1_OBU_sectionlist_int_T_TM_baseline2,
    get__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_signature,
    set__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_default_value,
    sizeof(_2_P027V1_OBU_sectionlist_int_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_sections_array_flat_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable;

int P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 64, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_P027V1_sections_array_flat_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 64, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_P027V1_sections_array_flat_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable);
    }
    return 0;
}

int is_P027V1_sections_array_flat_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable);
    }
    return 0;
}

void compare_P027V1_sections_array_flat_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 64, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int get_P027V1_sections_array_flat_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 64; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_P027V1_sections_array_flat_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 64; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_P027V1_sections_array_flat_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_sections_array_flat_qdiff_T_TM_baseline2 rTemp;
    return string_to_P027V1_sections_array_flat_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils = {
    P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_string,
    check_P027V1_sections_array_flat_qdiff_T_TM_baseline2_string,
    string_to_P027V1_sections_array_flat_qdiff_T_TM_baseline2,
    is_P027V1_sections_array_flat_qdiff_T_TM_baseline2_double_conversion_allowed,
    P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_double,
    is_P027V1_sections_array_flat_qdiff_T_TM_baseline2_long_convertion_allowed,
    P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_long,
    compare_P027V1_sections_array_flat_qdiff_T_TM_baseline2,
    get_P027V1_sections_array_flat_qdiff_T_TM_baseline2_signature,
    set_P027V1_sections_array_flat_qdiff_T_TM_baseline2_default_value,
    sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2)
};

/****************************************************************
 ** _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable;

int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL
        && pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, P027V1_section_array_qdiff_T_TM_baseline2_to_string, 32, sizeof(P027V1_section_array_qdiff_T_TM_baseline2), pfnStrAppend, pData);
}

int string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils, 32, sizeof(P027V1_section_array_qdiff_T_TM_baseline2), endptr);
    }
    return nRet;
}

int is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable);
    }
    return 0;
}

int is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable);
    }
    return 0;
}

void compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL
        && pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_P027V1_section_array_qdiff_T_TM_baseline2, 32, sizeof(P027V1_section_array_qdiff_T_TM_baseline2), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_P027V1_section_array_qdiff_T_TM_baseline2_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_P027V1_section_array_qdiff_T_TM_baseline2_default_value(&((P027V1_section_array_qdiff_T_TM_baseline2*)pValue)[i]);
    return 1;
}

int check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 rTemp;
    return string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils = {
    _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_string,
    check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_string,
    string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2,
    is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_double_conversion_allowed,
    _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_double,
    is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_long_convertion_allowed,
    _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_long,
    compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2,
    get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_signature,
    set__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_default_value,
    sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_section_array_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_section_array_qdiff_T_TM_baseline2VTable;

int P027V1_section_array_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 2, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_P027V1_section_array_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_array_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 2, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_P027V1_section_array_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_array_qdiff_T_TM_baseline2VTable);
    }
    return 0;
}

int is_P027V1_section_array_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_array_qdiff_T_TM_baseline2VTable);
    }
    return 0;
}

void compare_P027V1_section_array_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 2, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_array_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_array_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int P027V1_section_array_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_array_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return 0;
}

int get_P027V1_section_array_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 2; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_P027V1_section_array_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_P027V1_section_array_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_section_array_qdiff_T_TM_baseline2 rTemp;
    return string_to_P027V1_section_array_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils = {
    P027V1_section_array_qdiff_T_TM_baseline2_to_string,
    check_P027V1_section_array_qdiff_T_TM_baseline2_string,
    string_to_P027V1_section_array_qdiff_T_TM_baseline2,
    is_P027V1_section_array_qdiff_T_TM_baseline2_double_conversion_allowed,
    P027V1_section_array_qdiff_T_TM_baseline2_to_double,
    is_P027V1_section_array_qdiff_T_TM_baseline2_long_convertion_allowed,
    P027V1_section_array_qdiff_T_TM_baseline2_to_long,
    compare_P027V1_section_array_qdiff_T_TM_baseline2,
    get_P027V1_section_array_qdiff_T_TM_baseline2_signature,
    set_P027V1_section_array_qdiff_T_TM_baseline2_default_value,
    sizeof(P027V1_section_array_qdiff_T_TM_baseline2)
};

/****************************************************************
 ** API_TrackSideInput_T_API_Msg_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimAPI_TrackSideInput_T_API_Msg_PkgVTable;

static SimFieldUtils API_TrackSideInput_T_API_Msg_Pkg_fields[] = {
    {"valid", offsetof(API_TrackSideInput_T_API_Msg_Pkg,valid), &_Type_kcg_bool_Utils},
    {"systemTimeMsgReceived", offsetof(API_TrackSideInput_T_API_Msg_Pkg,systemTimeMsgReceived), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"msg_type", offsetof(API_TrackSideInput_T_API_Msg_Pkg,msg_type), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"btm_msg", offsetof(API_TrackSideInput_T_API_Msg_Pkg,btm_msg), &_Type_API_TelegramHeader_T_API_Msg_Pkg_Utils},
    {"rtm_msg", offsetof(API_TrackSideInput_T_API_Msg_Pkg,rtm_msg), &_Type_API_RadioMsgHeader_T_API_Msg_Pkg_Utils},
    {"packets", offsetof(API_TrackSideInput_T_API_Msg_Pkg,packets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils},
};

int API_TrackSideInput_T_API_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL
        && pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, API_TrackSideInput_T_API_Msg_Pkg_fields, 6, pfnStrAppend, pData);
}

int string_to_API_TrackSideInput_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimAPI_TrackSideInput_T_API_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, API_TrackSideInput_T_API_Msg_Pkg_fields, 6, endptr);
    }
    return nRet;
}

int is_API_TrackSideInput_T_API_Msg_Pkg_double_conversion_allowed()
{
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimAPI_TrackSideInput_T_API_Msg_PkgVTable);
    }
    return 0;
}

int is_API_TrackSideInput_T_API_Msg_Pkg_long_convertion_allowed()
{
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimAPI_TrackSideInput_T_API_Msg_PkgVTable);
    }
    return 0;
}

void compare_API_TrackSideInput_T_API_Msg_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL
        && pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_version >= Scv612
        && pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnCompare != NULL) {
        if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, API_TrackSideInput_T_API_Msg_Pkg_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int API_TrackSideInput_T_API_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimAPI_TrackSideInput_T_API_Msg_PkgVTable, nRetValue);
    }
    return 0;
}

int API_TrackSideInput_T_API_Msg_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimAPI_TrackSideInput_T_API_Msg_PkgVTable, nRetValue);
    }
    return 0;
}

int get_API_TrackSideInput_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(API_TrackSideInput_T_API_Msg_Pkg_fields, 6, pfnStrAppend, pData);
}

int set_API_TrackSideInput_T_API_Msg_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((API_TrackSideInput_T_API_Msg_Pkg*)pValue)->valid));
    set_T_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((API_TrackSideInput_T_API_Msg_Pkg*)pValue)->systemTimeMsgReceived));
    set_MsgSource_T_Common_Types_Pkg_default_value(&(((API_TrackSideInput_T_API_Msg_Pkg*)pValue)->msg_type));
    set_API_TelegramHeader_T_API_Msg_Pkg_default_value(&(((API_TrackSideInput_T_API_Msg_Pkg*)pValue)->btm_msg));
    set_API_RadioMsgHeader_T_API_Msg_Pkg_default_value(&(((API_TrackSideInput_T_API_Msg_Pkg*)pValue)->rtm_msg));
    set_CompressedPackets_T_Common_Types_Pkg_default_value(&(((API_TrackSideInput_T_API_Msg_Pkg*)pValue)->packets));
    return 1;
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
    is_API_TrackSideInput_T_API_Msg_Pkg_double_conversion_allowed,
    API_TrackSideInput_T_API_Msg_Pkg_to_double,
    is_API_TrackSideInput_T_API_Msg_Pkg_long_convertion_allowed,
    API_TrackSideInput_T_API_Msg_Pkg_to_long,
    compare_API_TrackSideInput_T_API_Msg_Pkg,
    get_API_TrackSideInput_T_API_Msg_Pkg_signature,
    set_API_TrackSideInput_T_API_Msg_Pkg_default_value,
    sizeof(API_TrackSideInput_T_API_Msg_Pkg)
};

/****************************************************************
 ** API_TelegramHeader_T_API_Msg_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimAPI_TelegramHeader_T_API_Msg_PkgVTable;

static SimFieldUtils API_TelegramHeader_T_API_Msg_Pkg_fields[] = {
    {"present", offsetof(API_TelegramHeader_T_API_Msg_Pkg,present), &_Type_kcg_bool_Utils},
    {"checkResult", offsetof(API_TelegramHeader_T_API_Msg_Pkg,checkResult), &_Type_kcg_bool_Utils},
    {"api_bad_balise_received", offsetof(API_TelegramHeader_T_API_Msg_Pkg,api_bad_balise_received), &_Type_kcg_bool_Utils},
    {"api_header", offsetof(API_TelegramHeader_T_API_Msg_Pkg,api_header), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils},
    {"centerOfBalisePosition", offsetof(API_TelegramHeader_T_API_Msg_Pkg,centerOfBalisePosition), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils},
    {"sendingRBC_Id", offsetof(API_TelegramHeader_T_API_Msg_Pkg,sendingRBC_Id), &_Type_RBC_Id_T_Common_Types_Pkg_Utils},
};

int API_TelegramHeader_T_API_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL
        && pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, API_TelegramHeader_T_API_Msg_Pkg_fields, 6, pfnStrAppend, pData);
}

int string_to_API_TelegramHeader_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimAPI_TelegramHeader_T_API_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, API_TelegramHeader_T_API_Msg_Pkg_fields, 6, endptr);
    }
    return nRet;
}

int is_API_TelegramHeader_T_API_Msg_Pkg_double_conversion_allowed()
{
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimAPI_TelegramHeader_T_API_Msg_PkgVTable);
    }
    return 0;
}

int is_API_TelegramHeader_T_API_Msg_Pkg_long_convertion_allowed()
{
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimAPI_TelegramHeader_T_API_Msg_PkgVTable);
    }
    return 0;
}

void compare_API_TelegramHeader_T_API_Msg_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL
        && pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_version >= Scv612
        && pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnCompare != NULL) {
        if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, API_TelegramHeader_T_API_Msg_Pkg_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int API_TelegramHeader_T_API_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimAPI_TelegramHeader_T_API_Msg_PkgVTable, nRetValue);
    }
    return 0;
}

int API_TelegramHeader_T_API_Msg_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimAPI_TelegramHeader_T_API_Msg_PkgVTable, nRetValue);
    }
    return 0;
}

int get_API_TelegramHeader_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(API_TelegramHeader_T_API_Msg_Pkg_fields, 6, pfnStrAppend, pData);
}

int set_API_TelegramHeader_T_API_Msg_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((API_TelegramHeader_T_API_Msg_Pkg*)pValue)->present));
    set_kcg_bool_default_value(&(((API_TelegramHeader_T_API_Msg_Pkg*)pValue)->checkResult));
    set_kcg_bool_default_value(&(((API_TelegramHeader_T_API_Msg_Pkg*)pValue)->api_bad_balise_received));
    set_TelegramHeader_T_BG_Types_Pkg_default_value(&(((API_TelegramHeader_T_API_Msg_Pkg*)pValue)->api_header));
    set_centerOfBalisePosition_T_BG_Types_Pkg_default_value(&(((API_TelegramHeader_T_API_Msg_Pkg*)pValue)->centerOfBalisePosition));
    set_RBC_Id_T_Common_Types_Pkg_default_value(&(((API_TelegramHeader_T_API_Msg_Pkg*)pValue)->sendingRBC_Id));
    return 1;
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
    is_API_TelegramHeader_T_API_Msg_Pkg_double_conversion_allowed,
    API_TelegramHeader_T_API_Msg_Pkg_to_double,
    is_API_TelegramHeader_T_API_Msg_Pkg_long_convertion_allowed,
    API_TelegramHeader_T_API_Msg_Pkg_to_long,
    compare_API_TelegramHeader_T_API_Msg_Pkg,
    get_API_TelegramHeader_T_API_Msg_Pkg_signature,
    set_API_TelegramHeader_T_API_Msg_Pkg_default_value,
    sizeof(API_TelegramHeader_T_API_Msg_Pkg)
};

/****************************************************************
 ** API_RadioMsgHeader_T_API_Msg_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable;

static SimFieldUtils API_RadioMsgHeader_T_API_Msg_Pkg_fields[] = {
    {"present", offsetof(API_RadioMsgHeader_T_API_Msg_Pkg,present), &_Type_kcg_bool_Utils},
    {"apiConsistencyError", offsetof(API_RadioMsgHeader_T_API_Msg_Pkg,apiConsistencyError), &_Type_kcg_bool_Utils},
    {"Radio_Common_Header", offsetof(API_RadioMsgHeader_T_API_Msg_Pkg,Radio_Common_Header), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils},
    {"Radio_MetaData", offsetof(API_RadioMsgHeader_T_API_Msg_Pkg,Radio_MetaData), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils},
    {"sendingRBC_Id", offsetof(API_RadioMsgHeader_T_API_Msg_Pkg,sendingRBC_Id), &_Type_RBC_Id_T_Common_Types_Pkg_Utils},
};

int API_RadioMsgHeader_T_API_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL
        && pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, API_RadioMsgHeader_T_API_Msg_Pkg_fields, 5, pfnStrAppend, pData);
}

int string_to_API_RadioMsgHeader_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, API_RadioMsgHeader_T_API_Msg_Pkg_fields, 5, endptr);
    }
    return nRet;
}

int is_API_RadioMsgHeader_T_API_Msg_Pkg_double_conversion_allowed()
{
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable);
    }
    return 0;
}

int is_API_RadioMsgHeader_T_API_Msg_Pkg_long_convertion_allowed()
{
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable);
    }
    return 0;
}

void compare_API_RadioMsgHeader_T_API_Msg_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL
        && pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_version >= Scv612
        && pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnCompare != NULL) {
        if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, API_RadioMsgHeader_T_API_Msg_Pkg_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int API_RadioMsgHeader_T_API_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable, nRetValue);
    }
    return 0;
}

int API_RadioMsgHeader_T_API_Msg_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable, nRetValue);
    }
    return 0;
}

int get_API_RadioMsgHeader_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(API_RadioMsgHeader_T_API_Msg_Pkg_fields, 5, pfnStrAppend, pData);
}

int set_API_RadioMsgHeader_T_API_Msg_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((API_RadioMsgHeader_T_API_Msg_Pkg*)pValue)->present));
    set_kcg_bool_default_value(&(((API_RadioMsgHeader_T_API_Msg_Pkg*)pValue)->apiConsistencyError));
    set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value(&(((API_RadioMsgHeader_T_API_Msg_Pkg*)pValue)->Radio_Common_Header));
    set_RadioMetadata_T_Common_Types_Pkg_default_value(&(((API_RadioMsgHeader_T_API_Msg_Pkg*)pValue)->Radio_MetaData));
    set_RBC_Id_T_Common_Types_Pkg_default_value(&(((API_RadioMsgHeader_T_API_Msg_Pkg*)pValue)->sendingRBC_Id));
    return 1;
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
    is_API_RadioMsgHeader_T_API_Msg_Pkg_double_conversion_allowed,
    API_RadioMsgHeader_T_API_Msg_Pkg_to_double,
    is_API_RadioMsgHeader_T_API_Msg_Pkg_long_convertion_allowed,
    API_RadioMsgHeader_T_API_Msg_Pkg_to_long,
    compare_API_RadioMsgHeader_T_API_Msg_Pkg,
    get_API_RadioMsgHeader_T_API_Msg_Pkg_signature,
    set_API_RadioMsgHeader_T_API_Msg_Pkg_default_value,
    sizeof(API_RadioMsgHeader_T_API_Msg_Pkg)
};

/****************************************************************
 ** Radio_TrackTrain_Header_T_Radio_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable;

static SimFieldUtils Radio_TrackTrain_Header_T_Radio_Types_Pkg_fields[] = {
    {"radioDevice", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,radioDevice), &_Type_kcg_int_Utils},
    {"receivedSystemTime", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,receivedSystemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"nid_message", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,nid_message), &_Type_NID_MESSAGE_Utils},
    {"t_train", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,t_train), &_Type_T_TRAIN_Utils},
    {"m_ack", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,m_ack), &_Type_M_ACK_Utils},
    {"nid_lrbg", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,nid_lrbg), &_Type_NID_LRBG_Utils},
    {"t_train_reference", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,t_train_reference), &_Type_T_TRAIN_Utils},
    {"nid_em", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,nid_em), &_Type_NID_EM_Utils},
    {"q_scale", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,q_scale), &_Type_Q_SCALE_Utils},
    {"d_sr", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,d_sr), &_Type_D_SR_Utils},
    {"t_sh_rqst", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,t_sh_rqst), &_Type_T_TRAIN_Utils},
    {"d_ref", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,d_ref), &_Type_D_REF_Utils},
    {"q_dir", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,q_dir), &_Type_Q_DIR_Utils},
    {"d_emergencystop", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,d_emergencystop), &_Type_D_EMERGENCYSTOP_Utils},
    {"m_version", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,m_version), &_Type_M_VERSION_Utils},
};

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, Radio_TrackTrain_Header_T_Radio_Types_Pkg_fields, 15, pfnStrAppend, pData);
}

int string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, Radio_TrackTrain_Header_T_Radio_Types_Pkg_fields, 15, endptr);
    }
    return nRet;
}

int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_double_conversion_allowed()
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable);
    }
    return 0;
}

int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_long_convertion_allowed()
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable);
    }
    return 0;
}

void compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_version >= Scv612
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Radio_TrackTrain_Header_T_Radio_Types_Pkg_fields, 15, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(Radio_TrackTrain_Header_T_Radio_Types_Pkg_fields, 15, pfnStrAppend, pData);
}

int set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->radioDevice));
    set_T_internal_Type_Obu_BasicTypes_Pkg_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->receivedSystemTime));
    set_NID_MESSAGE_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->nid_message));
    set_T_TRAIN_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->t_train));
    set_M_ACK_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->m_ack));
    set_NID_LRBG_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->nid_lrbg));
    set_T_TRAIN_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->t_train_reference));
    set_NID_EM_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->nid_em));
    set_Q_SCALE_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->q_scale));
    set_D_SR_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->d_sr));
    set_T_TRAIN_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->t_sh_rqst));
    set_D_REF_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->d_ref));
    set_Q_DIR_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->q_dir));
    set_D_EMERGENCYSTOP_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->d_emergencystop));
    set_M_VERSION_default_value(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->m_version));
    return 1;
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
    is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_double_conversion_allowed,
    Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double,
    is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_long_convertion_allowed,
    Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_long,
    compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg,
    get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature,
    set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value,
    sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg)
};

/****************************************************************
 ** RadioMessage_T_Radio_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRadioMessage_T_Radio_Types_PkgVTable;

static SimFieldUtils RadioMessage_T_Radio_Types_Pkg_fields[] = {
    {"present", offsetof(RadioMessage_T_Radio_Types_Pkg,present), &_Type_kcg_bool_Utils},
    {"consistencyError", offsetof(RadioMessage_T_Radio_Types_Pkg,consistencyError), &_Type_kcg_bool_Utils},
    {"header", offsetof(RadioMessage_T_Radio_Types_Pkg,header), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils},
    {"radioMetadata", offsetof(RadioMessage_T_Radio_Types_Pkg,radioMetadata), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils},
    {"packets", offsetof(RadioMessage_T_Radio_Types_Pkg,packets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils},
    {"sendingRBC", offsetof(RadioMessage_T_Radio_Types_Pkg,sendingRBC), &_Type_RBC_Id_T_Common_Types_Pkg_Utils},
};

int RadioMessage_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL
        && pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, RadioMessage_T_Radio_Types_Pkg_fields, 6, pfnStrAppend, pData);
}

int string_to_RadioMessage_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRadioMessage_T_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, RadioMessage_T_Radio_Types_Pkg_fields, 6, endptr);
    }
    return nRet;
}

int is_RadioMessage_T_Radio_Types_Pkg_double_conversion_allowed()
{
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRadioMessage_T_Radio_Types_PkgVTable);
    }
    return 0;
}

int is_RadioMessage_T_Radio_Types_Pkg_long_convertion_allowed()
{
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimRadioMessage_T_Radio_Types_PkgVTable);
    }
    return 0;
}

void compare_RadioMessage_T_Radio_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL
        && pSimRadioMessage_T_Radio_Types_PkgVTable->m_version >= Scv612
        && pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadioMessage_T_Radio_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, RadioMessage_T_Radio_Types_Pkg_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int RadioMessage_T_Radio_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadioMessage_T_Radio_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int RadioMessage_T_Radio_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimRadioMessage_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRadioMessage_T_Radio_Types_PkgVTable, nRetValue);
    }
    return 0;
}

int get_RadioMessage_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(RadioMessage_T_Radio_Types_Pkg_fields, 6, pfnStrAppend, pData);
}

int set_RadioMessage_T_Radio_Types_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((RadioMessage_T_Radio_Types_Pkg*)pValue)->present));
    set_kcg_bool_default_value(&(((RadioMessage_T_Radio_Types_Pkg*)pValue)->consistencyError));
    set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value(&(((RadioMessage_T_Radio_Types_Pkg*)pValue)->header));
    set_RadioMetadata_T_Common_Types_Pkg_default_value(&(((RadioMessage_T_Radio_Types_Pkg*)pValue)->radioMetadata));
    set_CompressedPackets_T_Common_Types_Pkg_default_value(&(((RadioMessage_T_Radio_Types_Pkg*)pValue)->packets));
    set_RBC_Id_T_Common_Types_Pkg_default_value(&(((RadioMessage_T_Radio_Types_Pkg*)pValue)->sendingRBC));
    return 1;
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
    is_RadioMessage_T_Radio_Types_Pkg_double_conversion_allowed,
    RadioMessage_T_Radio_Types_Pkg_to_double,
    is_RadioMessage_T_Radio_Types_Pkg_long_convertion_allowed,
    RadioMessage_T_Radio_Types_Pkg_to_long,
    compare_RadioMessage_T_Radio_Types_Pkg,
    get_RadioMessage_T_Radio_Types_Pkg_signature,
    set_RadioMessage_T_Radio_Types_Pkg_default_value,
    sizeof(RadioMessage_T_Radio_Types_Pkg)
};

/****************************************************************
 ** BGCollector_T_Receive_TrackSide_Msg_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable;

static SimFieldUtils BGCollector_T_Receive_TrackSide_Msg_Pkg_fields[] = {
    {"badBaliseFlag", offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg,badBaliseFlag), &_Type_kcg_bool_Utils},
    {"BGMessageSent", offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg,BGMessageSent), &_Type_kcg_bool_Utils},
    {"C_ID", offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg,C_ID), &_Type_NID_C_Utils},
    {"BG_ID", offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg,BG_ID), &_Type_NID_BG_Utils},
    {"balisePosition", offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg,balisePosition), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils},
    {"positionFirstContact", offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg,positionFirstContact), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils},
    {"collectedTelegrams", offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg,collectedTelegrams), &_Type_kcg_int_Utils},
    {"totalTelegrams", offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg,totalTelegrams), &_Type_kcg_int_Utils},
};

int BGCollector_T_Receive_TrackSide_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL
        && pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, BGCollector_T_Receive_TrackSide_Msg_Pkg_fields, 8, pfnStrAppend, pData);
}

int string_to_BGCollector_T_Receive_TrackSide_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, BGCollector_T_Receive_TrackSide_Msg_Pkg_fields, 8, endptr);
    }
    return nRet;
}

int is_BGCollector_T_Receive_TrackSide_Msg_Pkg_double_conversion_allowed()
{
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable);
    }
    return 0;
}

int is_BGCollector_T_Receive_TrackSide_Msg_Pkg_long_convertion_allowed()
{
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable);
    }
    return 0;
}

void compare_BGCollector_T_Receive_TrackSide_Msg_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL
        && pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_version >= Scv612
        && pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare != NULL) {
        if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, BGCollector_T_Receive_TrackSide_Msg_Pkg_fields, 8, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BGCollector_T_Receive_TrackSide_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable, nRetValue);
    }
    return 0;
}

int BGCollector_T_Receive_TrackSide_Msg_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable, nRetValue);
    }
    return 0;
}

int get_BGCollector_T_Receive_TrackSide_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(BGCollector_T_Receive_TrackSide_Msg_Pkg_fields, 8, pfnStrAppend, pData);
}

int set_BGCollector_T_Receive_TrackSide_Msg_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((BGCollector_T_Receive_TrackSide_Msg_Pkg*)pValue)->badBaliseFlag));
    set_kcg_bool_default_value(&(((BGCollector_T_Receive_TrackSide_Msg_Pkg*)pValue)->BGMessageSent));
    set_NID_C_default_value(&(((BGCollector_T_Receive_TrackSide_Msg_Pkg*)pValue)->C_ID));
    set_NID_BG_default_value(&(((BGCollector_T_Receive_TrackSide_Msg_Pkg*)pValue)->BG_ID));
    set_centerOfBalisePosition_T_BG_Types_Pkg_default_value(&(((BGCollector_T_Receive_TrackSide_Msg_Pkg*)pValue)->balisePosition));
    set_centerOfBalisePosition_T_BG_Types_Pkg_default_value(&(((BGCollector_T_Receive_TrackSide_Msg_Pkg*)pValue)->positionFirstContact));
    set_kcg_int_default_value(&(((BGCollector_T_Receive_TrackSide_Msg_Pkg*)pValue)->collectedTelegrams));
    set_kcg_int_default_value(&(((BGCollector_T_Receive_TrackSide_Msg_Pkg*)pValue)->totalTelegrams));
    return 1;
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
    is_BGCollector_T_Receive_TrackSide_Msg_Pkg_double_conversion_allowed,
    BGCollector_T_Receive_TrackSide_Msg_Pkg_to_double,
    is_BGCollector_T_Receive_TrackSide_Msg_Pkg_long_convertion_allowed,
    BGCollector_T_Receive_TrackSide_Msg_Pkg_to_long,
    compare_BGCollector_T_Receive_TrackSide_Msg_Pkg,
    get_BGCollector_T_Receive_TrackSide_Msg_Pkg_signature,
    set_BGCollector_T_Receive_TrackSide_Msg_Pkg_default_value,
    sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg)
};

/****************************************************************
 ** TelegramStore_T_Receive_TrackSide_Msg_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable;

static SimFieldUtils TelegramStore_T_Receive_TrackSide_Msg_Pkg_fields[] = {
    {"valid", offsetof(TelegramStore_T_Receive_TrackSide_Msg_Pkg,valid), &_Type_kcg_bool_Utils},
    {"telegram", offsetof(TelegramStore_T_Receive_TrackSide_Msg_Pkg,telegram), &_Type_Telegram_T_BG_Types_Pkg_Utils},
    {"position", offsetof(TelegramStore_T_Receive_TrackSide_Msg_Pkg,position), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils},
};

int TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL
        && pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, TelegramStore_T_Receive_TrackSide_Msg_Pkg_fields, 3, pfnStrAppend, pData);
}

int string_to_TelegramStore_T_Receive_TrackSide_Msg_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, TelegramStore_T_Receive_TrackSide_Msg_Pkg_fields, 3, endptr);
    }
    return nRet;
}

int is_TelegramStore_T_Receive_TrackSide_Msg_Pkg_double_conversion_allowed()
{
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable);
    }
    return 0;
}

int is_TelegramStore_T_Receive_TrackSide_Msg_Pkg_long_convertion_allowed()
{
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable);
    }
    return 0;
}

void compare_TelegramStore_T_Receive_TrackSide_Msg_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL
        && pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_version >= Scv612
        && pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare != NULL) {
        if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, TelegramStore_T_Receive_TrackSide_Msg_Pkg_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable, nRetValue);
    }
    return 0;
}

int TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable, nRetValue);
    }
    return 0;
}

int get_TelegramStore_T_Receive_TrackSide_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(TelegramStore_T_Receive_TrackSide_Msg_Pkg_fields, 3, pfnStrAppend, pData);
}

int set_TelegramStore_T_Receive_TrackSide_Msg_Pkg_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((TelegramStore_T_Receive_TrackSide_Msg_Pkg*)pValue)->valid));
    set_Telegram_T_BG_Types_Pkg_default_value(&(((TelegramStore_T_Receive_TrackSide_Msg_Pkg*)pValue)->telegram));
    set_centerOfBalisePosition_T_BG_Types_Pkg_default_value(&(((TelegramStore_T_Receive_TrackSide_Msg_Pkg*)pValue)->position));
    return 1;
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
    is_TelegramStore_T_Receive_TrackSide_Msg_Pkg_double_conversion_allowed,
    TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_double,
    is_TelegramStore_T_Receive_TrackSide_Msg_Pkg_long_convertion_allowed,
    TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_long,
    compare_TelegramStore_T_Receive_TrackSide_Msg_Pkg,
    get_TelegramStore_T_Receive_TrackSide_Msg_Pkg_signature,
    set_TelegramStore_T_Receive_TrackSide_Msg_Pkg_default_value,
    sizeof(TelegramStore_T_Receive_TrackSide_Msg_Pkg)
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
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimDoubleVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
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
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimDoubleVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
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

int is_kcg_real_double_conversion_allowed()
{
    if (pSimDoubleVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimDoubleVTable);
    }
    return 1;
}

int is_kcg_real_long_convertion_allowed()
{
    if (pSimDoubleVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimDoubleVTable);
    }
    return 1;
}

void compare_kcg_real(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    if (pSimDoubleVTable != NULL && pData!=NULL
        && pSimDoubleVTable->m_version >= Scv65
        && pSimDoubleVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimDoubleVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pData);
    } else if (pSimDoubleVTable != NULL && pData==NULL
               && pSimDoubleVTable->m_version >= Scv612
               && pSimDoubleVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimDoubleVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimDoubleVTable->m_pfnCompare(pResult, pValue1, pValue2);
         } else {
             /* Before R15: VTable function returns a standard C typed *variable: */
             double value1 = (double)(*(const kcg_real*)pValue1);
             double value2 = (double)(*(const kcg_real*)pValue2);
             pSimDoubleVTable->m_pfnCompare(&unitResult, &value1, &value2);
             updateCompareResult(unitResult, pResult);
         }
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_real(pResult, *((kcg_real*)pValue1), *((kcg_real*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int kcg_real_to_double(const void *pValue, double *nRetValue)
{
    if (pSimDoubleVTable != NULL) {
        if (pSimDoubleVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimDoubleVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            double value = (double)(*(const kcg_real*)pValue);
            return VTable_to_double(&value, pSimDoubleVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_real*)pValue);
    return 1;
}

int kcg_real_to_long(const void *pValue, long *nRetValue)
{
    if (pSimDoubleVTable != NULL) {
        if (pSimDoubleVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimDoubleVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            double value = (double)(*(const kcg_real*)pValue);
            return VTable_to_long(&value, pSimDoubleVTable, nRetValue);
        }
    }
    *nRetValue = (long)*((kcg_real*)pValue);
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
    is_kcg_real_double_conversion_allowed,
    kcg_real_to_double,
    is_kcg_real_long_convertion_allowed,
    kcg_real_to_long,
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
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
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
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
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

int is_kcg_bool_double_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int is_kcg_bool_long_convertion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimBoolVTable);
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
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
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
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimBoolVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nRetValue);
        }
    }
    *nRetValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int kcg_bool_to_long(const void *pValue, long *nRetValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimBoolVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_long(&value, pSimBoolVTable, nRetValue);
        }
    }
    *nRetValue = *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
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
    is_kcg_bool_double_conversion_allowed,
    kcg_bool_to_double,
    is_kcg_bool_long_convertion_allowed,
    kcg_bool_to_long,
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
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
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
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
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

int is_kcg_char_double_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int is_kcg_char_long_convertion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCharVTable);
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
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
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
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimCharVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_char*)pValue);
    return 1;
}

int kcg_char_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimCharVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_long(&value, pSimCharVTable, nRetValue);
        }
    }
    *nRetValue = (long)*((kcg_char*)pValue);
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
    is_kcg_char_double_conversion_allowed,
    kcg_char_to_double,
    is_kcg_char_long_convertion_allowed,
    kcg_char_to_long,
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
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimLongVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
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
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimLongVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
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

int is_kcg_int_double_conversion_allowed()
{
    if (pSimLongVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimLongVTable);
    }
    return 1;
}

int is_kcg_int_long_convertion_allowed()
{
    if (pSimLongVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimLongVTable);
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
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimLongVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
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
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimLongVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            long value = (long)(*(const kcg_int*)pValue);
            return VTable_to_double(&value, pSimLongVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_int*)pValue);
    return 1;
}

int kcg_int_to_long(const void *pValue, long *nRetValue)
{
    if (pSimLongVTable != NULL) {
        if (pSimLongVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimLongVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            long value = (long)(*(const kcg_int*)pValue);
            return VTable_to_long(&value, pSimLongVTable, nRetValue);
        }
    }
    *nRetValue = (long)*((kcg_int*)pValue);
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
    is_kcg_int_double_conversion_allowed,
    kcg_int_to_double,
    is_kcg_int_long_convertion_allowed,
    kcg_int_to_long,
    compare_kcg_int,
    get_kcg_int_signature,
    set_kcg_int_default_value,
    sizeof(kcg_int)
};

/****************************************************************
 ** array_int_105 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_105VTable;

int array_int_105_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_105VTable != NULL
        && pSimarray_int_105VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_105VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 105, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_105(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_105VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_105VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 105, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_105_double_conversion_allowed()
{
    if (pSimarray_int_105VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_105VTable);
    }
    return 0;
}

int is_array_int_105_long_convertion_allowed()
{
    if (pSimarray_int_105VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_105VTable);
    }
    return 0;
}

void compare_array_int_105(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_105VTable != NULL
        && pSimarray_int_105VTable->m_version >= Scv612
        && pSimarray_int_105VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_105VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_105VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_105VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 105, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_105_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_105VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_105VTable, nRetValue);
    }
    return 0;
}

int array_int_105_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_105VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_105VTable, nRetValue);
    }
    return 0;
}

int get_array_int_105_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 105; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_105_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 105; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_105_string(const char *str, char **endptr)
{
    static array_int_105 rTemp;
    return string_to_array_int_105(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_105_Utils = {
    array_int_105_to_string,
    check_array_int_105_string,
    string_to_array_int_105,
    is_array_int_105_double_conversion_allowed,
    array_int_105_to_double,
    is_array_int_105_long_convertion_allowed,
    array_int_105_to_long,
    compare_array_int_105,
    get_array_int_105_signature,
    set_array_int_105_default_value,
    sizeof(array_int_105)
};

/****************************************************************
 ** struct_10249 
 ****************************************************************/

struct SimTypeVTable *pSimstruct_10249VTable;

static SimFieldUtils struct_10249_fields[] = {
    {"valid", offsetof(struct_10249,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct_10249,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct_10249,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct_10249,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct_10249,Q_SCALE), &_Type_kcg_int_Utils},
    {"Q_TEXTCLASS", offsetof(struct_10249,Q_TEXTCLASS), &_Type_kcg_int_Utils},
    {"Q_TEXTDISPLAY", offsetof(struct_10249,Q_TEXTDISPLAY), &_Type_kcg_int_Utils},
    {"D_TEXTDISPLAY_start", offsetof(struct_10249,D_TEXTDISPLAY_start), &_Type_kcg_int_Utils},
    {"M_MODETEXTDISPLAY_start", offsetof(struct_10249,M_MODETEXTDISPLAY_start), &_Type_kcg_int_Utils},
    {"M_LEVELTEXTDISPLAY_start", offsetof(struct_10249,M_LEVELTEXTDISPLAY_start), &_Type_kcg_int_Utils},
    {"NID_NTC_start", offsetof(struct_10249,NID_NTC_start), &_Type_kcg_int_Utils},
    {"L_TEXTDISPLAY_end", offsetof(struct_10249,L_TEXTDISPLAY_end), &_Type_kcg_int_Utils},
    {"T_TEXTDISPLAY_end", offsetof(struct_10249,T_TEXTDISPLAY_end), &_Type_kcg_int_Utils},
    {"M_MODETEXTDISPLAY_end", offsetof(struct_10249,M_MODETEXTDISPLAY_end), &_Type_kcg_int_Utils},
    {"M_LEVELTEXTDISPLAY_end", offsetof(struct_10249,M_LEVELTEXTDISPLAY_end), &_Type_kcg_int_Utils},
    {"NID_NTC_end", offsetof(struct_10249,NID_NTC_end), &_Type_kcg_int_Utils},
    {"Q_TEXTCONFIRM", offsetof(struct_10249,Q_TEXTCONFIRM), &_Type_kcg_int_Utils},
    {"L_TEXT", offsetof(struct_10249,L_TEXT), &_Type_kcg_int_Utils},
    {"X_TEXT", offsetof(struct_10249,X_TEXT), &_Type_X_TEXT_trackside_T_TM_Utils},
};

int struct_10249_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct_10249VTable != NULL
        && pSimstruct_10249VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct_10249VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct_10249_fields, 19, pfnStrAppend, pData);
}

int string_to_struct_10249(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct_10249VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct_10249VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct_10249_fields, 19, endptr);
    }
    return nRet;
}

int is_struct_10249_double_conversion_allowed()
{
    if (pSimstruct_10249VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct_10249VTable);
    }
    return 0;
}

int is_struct_10249_long_convertion_allowed()
{
    if (pSimstruct_10249VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct_10249VTable);
    }
    return 0;
}

void compare_struct_10249(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct_10249VTable != NULL
        && pSimstruct_10249VTable->m_version >= Scv612
        && pSimstruct_10249VTable->m_pfnCompare != NULL) {
        if (pSimstruct_10249VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct_10249VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct_10249VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct_10249_fields, 19, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct_10249_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct_10249VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct_10249VTable, nRetValue);
    }
    return 0;
}

int struct_10249_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct_10249VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct_10249VTable, nRetValue);
    }
    return 0;
}

int get_struct_10249_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct_10249_fields, 19, pfnStrAppend, pData);
}

int set_struct_10249_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct_10249*)pValue)->valid));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->Q_TEXTCLASS));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->Q_TEXTDISPLAY));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->D_TEXTDISPLAY_start));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->M_MODETEXTDISPLAY_start));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->M_LEVELTEXTDISPLAY_start));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->NID_NTC_start));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->L_TEXTDISPLAY_end));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->T_TEXTDISPLAY_end));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->M_MODETEXTDISPLAY_end));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->M_LEVELTEXTDISPLAY_end));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->NID_NTC_end));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->Q_TEXTCONFIRM));
    set_kcg_int_default_value(&(((struct_10249*)pValue)->L_TEXT));
    set_X_TEXT_trackside_T_TM_default_value(&(((struct_10249*)pValue)->X_TEXT));
    return 1;
}

int check_struct_10249_string(const char *str, char **endptr)
{
    static struct_10249 rTemp;
    return string_to_struct_10249(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct_10249_Utils = {
    struct_10249_to_string,
    check_struct_10249_string,
    string_to_struct_10249,
    is_struct_10249_double_conversion_allowed,
    struct_10249_to_double,
    is_struct_10249_long_convertion_allowed,
    struct_10249_to_long,
    compare_struct_10249,
    get_struct_10249_signature,
    set_struct_10249_default_value,
    sizeof(struct_10249)
};

/****************************************************************
 ** array_int_6 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_6VTable;

int array_int_6_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_6VTable != NULL
        && pSimarray_int_6VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_6VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 6, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_6(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_6VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_6VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 6, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_6_double_conversion_allowed()
{
    if (pSimarray_int_6VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_6VTable);
    }
    return 0;
}

int is_array_int_6_long_convertion_allowed()
{
    if (pSimarray_int_6VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_6VTable);
    }
    return 0;
}

void compare_array_int_6(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_6VTable != NULL
        && pSimarray_int_6VTable->m_version >= Scv612
        && pSimarray_int_6VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_6VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_6VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_6VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 6, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_6_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_6VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_6VTable, nRetValue);
    }
    return 0;
}

int array_int_6_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_6VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_6VTable, nRetValue);
    }
    return 0;
}

int get_array_int_6_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 6; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_6_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 6; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_6_string(const char *str, char **endptr)
{
    static array_int_6 rTemp;
    return string_to_array_int_6(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_6_Utils = {
    array_int_6_to_string,
    check_array_int_6_string,
    string_to_array_int_6,
    is_array_int_6_double_conversion_allowed,
    array_int_6_to_double,
    is_array_int_6_long_convertion_allowed,
    array_int_6_to_long,
    compare_array_int_6,
    get_array_int_6_signature,
    set_array_int_6_default_value,
    sizeof(array_int_6)
};

/****************************************************************
 ** array_10404 
 ****************************************************************/

struct SimTypeVTable *pSimarray_10404VTable;

int array_10404_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_10404VTable != NULL
        && pSimarray_10404VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_10404VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, P041_section_int_T_TM_to_string, 1, sizeof(P041_section_int_T_TM), pfnStrAppend, pData);
}

int string_to_array_10404(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_10404VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_10404VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_P041_section_int_T_TM_Utils, 1, sizeof(P041_section_int_T_TM), endptr);
    }
    return nRet;
}

int is_array_10404_double_conversion_allowed()
{
    if (pSimarray_10404VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_10404VTable);
    }
    return 0;
}

int is_array_10404_long_convertion_allowed()
{
    if (pSimarray_10404VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_10404VTable);
    }
    return 0;
}

void compare_array_10404(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_10404VTable != NULL
        && pSimarray_10404VTable->m_version >= Scv612
        && pSimarray_10404VTable->m_pfnCompare != NULL) {
        if (pSimarray_10404VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_10404VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_10404VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_P041_section_int_T_TM, 1, sizeof(P041_section_int_T_TM), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_10404_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_10404VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_10404VTable, nRetValue);
    }
    return 0;
}

int array_10404_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_10404VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_10404VTable, nRetValue);
    }
    return 0;
}

int get_array_10404_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_P041_section_int_T_TM_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_10404_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_P041_section_int_T_TM_default_value(&((P041_section_int_T_TM*)pValue)[i]);
    return 1;
}

int check_array_10404_string(const char *str, char **endptr)
{
    static array_10404 rTemp;
    return string_to_array_10404(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_10404_Utils = {
    array_10404_to_string,
    check_array_10404_string,
    string_to_array_10404,
    is_array_10404_double_conversion_allowed,
    array_10404_to_double,
    is_array_10404_long_convertion_allowed,
    array_10404_to_long,
    compare_array_10404,
    get_array_10404_signature,
    set_array_10404_default_value,
    sizeof(array_10404)
};

/****************************************************************
 ** array_int_104 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_104VTable;

int array_int_104_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_104VTable != NULL
        && pSimarray_int_104VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_104VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 104, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_104(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_104VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_104VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 104, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_104_double_conversion_allowed()
{
    if (pSimarray_int_104VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_104VTable);
    }
    return 0;
}

int is_array_int_104_long_convertion_allowed()
{
    if (pSimarray_int_104VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_104VTable);
    }
    return 0;
}

void compare_array_int_104(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_104VTable != NULL
        && pSimarray_int_104VTable->m_version >= Scv612
        && pSimarray_int_104VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_104VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_104VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_104VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 104, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_104_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_104VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_104VTable, nRetValue);
    }
    return 0;
}

int array_int_104_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_104VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_104VTable, nRetValue);
    }
    return 0;
}

int get_array_int_104_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 104; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_104_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 104; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_104_string(const char *str, char **endptr)
{
    static array_int_104 rTemp;
    return string_to_array_int_104(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_104_Utils = {
    array_int_104_to_string,
    check_array_int_104_string,
    string_to_array_int_104,
    is_array_int_104_double_conversion_allowed,
    array_int_104_to_double,
    is_array_int_104_long_convertion_allowed,
    array_int_104_to_long,
    compare_array_int_104,
    get_array_int_104_signature,
    set_array_int_104_default_value,
    sizeof(array_int_104)
};

/****************************************************************
 ** array_10421 
 ****************************************************************/

struct SimTypeVTable *pSimarray_10421VTable;

int array_10421_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_10421VTable != NULL
        && pSimarray_10421VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_10421VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, P027V1_section_int_T_TM_baseline2_to_string, 1, sizeof(P027V1_section_int_T_TM_baseline2), pfnStrAppend, pData);
}

int string_to_array_10421(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_10421VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_10421VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_P027V1_section_int_T_TM_baseline2_Utils, 1, sizeof(P027V1_section_int_T_TM_baseline2), endptr);
    }
    return nRet;
}

int is_array_10421_double_conversion_allowed()
{
    if (pSimarray_10421VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_10421VTable);
    }
    return 0;
}

int is_array_10421_long_convertion_allowed()
{
    if (pSimarray_10421VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_10421VTable);
    }
    return 0;
}

void compare_array_10421(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_10421VTable != NULL
        && pSimarray_10421VTable->m_version >= Scv612
        && pSimarray_10421VTable->m_pfnCompare != NULL) {
        if (pSimarray_10421VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_10421VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_10421VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_P027V1_section_int_T_TM_baseline2, 1, sizeof(P027V1_section_int_T_TM_baseline2), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_10421_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_10421VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_10421VTable, nRetValue);
    }
    return 0;
}

int array_10421_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_10421VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_10421VTable, nRetValue);
    }
    return 0;
}

int get_array_10421_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_P027V1_section_int_T_TM_baseline2_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_10421_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_P027V1_section_int_T_TM_baseline2_default_value(&((P027V1_section_int_T_TM_baseline2*)pValue)[i]);
    return 1;
}

int check_array_10421_string(const char *str, char **endptr)
{
    static array_10421 rTemp;
    return string_to_array_10421(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_10421_Utils = {
    array_10421_to_string,
    check_array_10421_string,
    string_to_array_10421,
    is_array_10421_double_conversion_allowed,
    array_10421_to_double,
    is_array_10421_long_convertion_allowed,
    array_10421_to_long,
    compare_array_10421,
    get_array_10421_signature,
    set_array_10421_default_value,
    sizeof(array_10421)
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

int is_array_int_5_double_conversion_allowed()
{
    if (pSimarray_int_5VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_5VTable);
    }
    return 0;
}

int is_array_int_5_long_convertion_allowed()
{
    if (pSimarray_int_5VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_5VTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_5VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int array_int_5_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_5VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_5VTable, nRetValue);
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
    is_array_int_5_double_conversion_allowed,
    array_int_5_to_double,
    is_array_int_5_long_convertion_allowed,
    array_int_5_to_long,
    compare_array_int_5,
    get_array_int_5_signature,
    set_array_int_5_default_value,
    sizeof(array_int_5)
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

int is_array_int_4_double_conversion_allowed()
{
    if (pSimarray_int_4VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_4VTable);
    }
    return 0;
}

int is_array_int_4_long_convertion_allowed()
{
    if (pSimarray_int_4VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_4VTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_4VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int array_int_4_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_4VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_4VTable, nRetValue);
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
    is_array_int_4_double_conversion_allowed,
    array_int_4_to_double,
    is_array_int_4_long_convertion_allowed,
    array_int_4_to_long,
    compare_array_int_4,
    get_array_int_4_signature,
    set_array_int_4_default_value,
    sizeof(array_int_4)
};

/****************************************************************
 ** array_10460 
 ****************************************************************/

struct SimTypeVTable *pSimarray_10460VTable;

int array_10460_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_10460VTable != NULL
        && pSimarray_10460VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_10460VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, P027V1_section_int_qdiff_T_TM_baseline2_to_string, 32, sizeof(P027V1_section_int_qdiff_T_TM_baseline2), pfnStrAppend, pData);
}

int string_to_array_10460(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_10460VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_10460VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_P027V1_section_int_qdiff_T_TM_baseline2_Utils, 32, sizeof(P027V1_section_int_qdiff_T_TM_baseline2), endptr);
    }
    return nRet;
}

int is_array_10460_double_conversion_allowed()
{
    if (pSimarray_10460VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_10460VTable);
    }
    return 0;
}

int is_array_10460_long_convertion_allowed()
{
    if (pSimarray_10460VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_10460VTable);
    }
    return 0;
}

void compare_array_10460(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_10460VTable != NULL
        && pSimarray_10460VTable->m_version >= Scv612
        && pSimarray_10460VTable->m_pfnCompare != NULL) {
        if (pSimarray_10460VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_10460VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_10460VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_P027V1_section_int_qdiff_T_TM_baseline2, 32, sizeof(P027V1_section_int_qdiff_T_TM_baseline2), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_10460_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_10460VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_10460VTable, nRetValue);
    }
    return 0;
}

int array_10460_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_10460VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_10460VTable, nRetValue);
    }
    return 0;
}

int get_array_10460_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_P027V1_section_int_qdiff_T_TM_baseline2_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_10460_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_P027V1_section_int_qdiff_T_TM_baseline2_default_value(&((P027V1_section_int_qdiff_T_TM_baseline2*)pValue)[i]);
    return 1;
}

int check_array_10460_string(const char *str, char **endptr)
{
    static array_10460 rTemp;
    return string_to_array_10460(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_10460_Utils = {
    array_10460_to_string,
    check_array_10460_string,
    string_to_array_10460,
    is_array_10460_double_conversion_allowed,
    array_10460_to_double,
    is_array_10460_long_convertion_allowed,
    array_10460_to_long,
    compare_array_10460,
    get_array_10460_signature,
    set_array_10460_default_value,
    sizeof(array_10460)
};

/****************************************************************
 ** array_int_3_33 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_3_33VTable;

int array_int_3_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_3_33VTable != NULL
        && pSimarray_int_3_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_3_33VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_3_to_string, 33, sizeof(array_int_3), pfnStrAppend, pData);
}

int string_to_array_int_3_33(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_3_33VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_3_33VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_3_Utils, 33, sizeof(array_int_3), endptr);
    }
    return nRet;
}

int is_array_int_3_33_double_conversion_allowed()
{
    if (pSimarray_int_3_33VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_3_33VTable);
    }
    return 0;
}

int is_array_int_3_33_long_convertion_allowed()
{
    if (pSimarray_int_3_33VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_3_33VTable);
    }
    return 0;
}

void compare_array_int_3_33(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_3_33VTable != NULL
        && pSimarray_int_3_33VTable->m_version >= Scv612
        && pSimarray_int_3_33VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_3_33VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_3_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_3_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_3, 33, sizeof(array_int_3), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_3_33_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_3_33VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_3_33VTable, nRetValue);
    }
    return 0;
}

int array_int_3_33_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_3_33VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_3_33VTable, nRetValue);
    }
    return 0;
}

int get_array_int_3_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_3_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_3_33_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_array_int_3_default_value(&((array_int_3*)pValue)[i]);
    return 1;
}

int check_array_int_3_33_string(const char *str, char **endptr)
{
    static array_int_3_33 rTemp;
    return string_to_array_int_3_33(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_3_33_Utils = {
    array_int_3_33_to_string,
    check_array_int_3_33_string,
    string_to_array_int_3_33,
    is_array_int_3_33_double_conversion_allowed,
    array_int_3_33_to_double,
    is_array_int_3_33_long_convertion_allowed,
    array_int_3_33_to_long,
    compare_array_int_3_33,
    get_array_int_3_33_signature,
    set_array_int_3_33_default_value,
    sizeof(array_int_3_33)
};

/****************************************************************
 ** array_int_3 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_3VTable;

int array_int_3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_3VTable != NULL
        && pSimarray_int_3VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_3VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 3, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_3(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_3VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_3VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 3, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_3_double_conversion_allowed()
{
    if (pSimarray_int_3VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_3VTable);
    }
    return 0;
}

int is_array_int_3_long_convertion_allowed()
{
    if (pSimarray_int_3VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_3VTable);
    }
    return 0;
}

void compare_array_int_3(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_3VTable != NULL
        && pSimarray_int_3VTable->m_version >= Scv612
        && pSimarray_int_3VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_3VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_3VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_3VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 3, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_3_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_3VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_3VTable, nRetValue);
    }
    return 0;
}

int array_int_3_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_3VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_3VTable, nRetValue);
    }
    return 0;
}

int get_array_int_3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 3; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_3_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 3; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_3_string(const char *str, char **endptr)
{
    static array_int_3 rTemp;
    return string_to_array_int_3(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_3_Utils = {
    array_int_3_to_string,
    check_array_int_3_string,
    string_to_array_int_3,
    is_array_int_3_double_conversion_allowed,
    array_int_3_to_double,
    is_array_int_3_long_convertion_allowed,
    array_int_3_to_long,
    compare_array_int_3,
    get_array_int_3_signature,
    set_array_int_3_default_value,
    sizeof(array_int_3)
};

/****************************************************************
 ** array_int_33 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_33VTable;

int array_int_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_33VTable != NULL
        && pSimarray_int_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_33VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 33, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_33(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_33VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_33VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 33, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_33_double_conversion_allowed()
{
    if (pSimarray_int_33VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_33VTable);
    }
    return 0;
}

int is_array_int_33_long_convertion_allowed()
{
    if (pSimarray_int_33VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_33VTable);
    }
    return 0;
}

void compare_array_int_33(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_33VTable != NULL
        && pSimarray_int_33VTable->m_version >= Scv612
        && pSimarray_int_33VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_33VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 33, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_33_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_33VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_33VTable, nRetValue);
    }
    return 0;
}

int array_int_33_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_33VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_33VTable, nRetValue);
    }
    return 0;
}

int get_array_int_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_33_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_33_string(const char *str, char **endptr)
{
    static array_int_33 rTemp;
    return string_to_array_int_33(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_33_Utils = {
    array_int_33_to_string,
    check_array_int_33_string,
    string_to_array_int_33,
    is_array_int_33_double_conversion_allowed,
    array_int_33_to_double,
    is_array_int_33_long_convertion_allowed,
    array_int_33_to_long,
    compare_array_int_33,
    get_array_int_33_signature,
    set_array_int_33_default_value,
    sizeof(array_int_33)
};

/****************************************************************
 ** array_int_3_33_99 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_3_33_99VTable;

int array_int_3_33_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_3_33_99VTable != NULL
        && pSimarray_int_3_33_99VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_3_33_99VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_3_33_to_string, 99, sizeof(array_int_3_33), pfnStrAppend, pData);
}

int string_to_array_int_3_33_99(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_3_33_99VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_3_33_99VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_3_33_Utils, 99, sizeof(array_int_3_33), endptr);
    }
    return nRet;
}

int is_array_int_3_33_99_double_conversion_allowed()
{
    if (pSimarray_int_3_33_99VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_3_33_99VTable);
    }
    return 0;
}

int is_array_int_3_33_99_long_convertion_allowed()
{
    if (pSimarray_int_3_33_99VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_3_33_99VTable);
    }
    return 0;
}

void compare_array_int_3_33_99(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_3_33_99VTable != NULL
        && pSimarray_int_3_33_99VTable->m_version >= Scv612
        && pSimarray_int_3_33_99VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_3_33_99VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_3_33_99VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_3_33_99VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_3_33, 99, sizeof(array_int_3_33), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_3_33_99_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_3_33_99VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_3_33_99VTable, nRetValue);
    }
    return 0;
}

int array_int_3_33_99_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_3_33_99VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_3_33_99VTable, nRetValue);
    }
    return 0;
}

int get_array_int_3_33_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 99; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_3_33_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_3_33_99_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 99; i++)
        set_array_int_3_33_default_value(&((array_int_3_33*)pValue)[i]);
    return 1;
}

int check_array_int_3_33_99_string(const char *str, char **endptr)
{
    static array_int_3_33_99 rTemp;
    return string_to_array_int_3_33_99(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_3_33_99_Utils = {
    array_int_3_33_99_to_string,
    check_array_int_3_33_99_string,
    string_to_array_int_3_33_99,
    is_array_int_3_33_99_double_conversion_allowed,
    array_int_3_33_99_to_double,
    is_array_int_3_33_99_long_convertion_allowed,
    array_int_3_33_99_to_long,
    compare_array_int_3_33_99,
    get_array_int_3_33_99_signature,
    set_array_int_3_33_99_default_value,
    sizeof(array_int_3_33_99)
};

/****************************************************************
 ** array_10558 
 ****************************************************************/

struct SimTypeVTable *pSimarray_10558VTable;

int array_10558_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_10558VTable != NULL
        && pSimarray_10558VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_10558VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, N_PIG_to_string, 8, sizeof(N_PIG), pfnStrAppend, pData);
}

int string_to_array_10558(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_10558VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_10558VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_N_PIG_Utils, 8, sizeof(N_PIG), endptr);
    }
    return nRet;
}

int is_array_10558_double_conversion_allowed()
{
    if (pSimarray_10558VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_10558VTable);
    }
    return 0;
}

int is_array_10558_long_convertion_allowed()
{
    if (pSimarray_10558VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_10558VTable);
    }
    return 0;
}

void compare_array_10558(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_10558VTable != NULL
        && pSimarray_10558VTable->m_version >= Scv612
        && pSimarray_10558VTable->m_pfnCompare != NULL) {
        if (pSimarray_10558VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_10558VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_10558VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int array_10558_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_10558VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_10558VTable, nRetValue);
    }
    return 0;
}

int array_10558_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_10558VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_10558VTable, nRetValue);
    }
    return 0;
}

int get_array_10558_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_array_10558_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_N_PIG_default_value(&((N_PIG*)pValue)[i]);
    return 1;
}

int check_array_10558_string(const char *str, char **endptr)
{
    static array_10558 rTemp;
    return string_to_array_10558(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_10558_Utils = {
    array_10558_to_string,
    check_array_10558_string,
    string_to_array_10558,
    is_array_10558_double_conversion_allowed,
    array_10558_to_double,
    is_array_10558_long_convertion_allowed,
    array_10558_to_long,
    compare_array_10558,
    get_array_10558_signature,
    set_array_10558_default_value,
    sizeof(array_10558)
};

/****************************************************************
 ** array_10565 
 ****************************************************************/

struct SimTypeVTable *pSimarray_10565VTable;

int array_10565_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_10565VTable != NULL
        && pSimarray_10565VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_10565VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, P021_section_int_T_TM_to_string, 1, sizeof(P021_section_int_T_TM), pfnStrAppend, pData);
}

int string_to_array_10565(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_10565VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_10565VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_P021_section_int_T_TM_Utils, 1, sizeof(P021_section_int_T_TM), endptr);
    }
    return nRet;
}

int is_array_10565_double_conversion_allowed()
{
    if (pSimarray_10565VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_10565VTable);
    }
    return 0;
}

int is_array_10565_long_convertion_allowed()
{
    if (pSimarray_10565VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_10565VTable);
    }
    return 0;
}

void compare_array_10565(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_10565VTable != NULL
        && pSimarray_10565VTable->m_version >= Scv612
        && pSimarray_10565VTable->m_pfnCompare != NULL) {
        if (pSimarray_10565VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_10565VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_10565VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_P021_section_int_T_TM, 1, sizeof(P021_section_int_T_TM), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_10565_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_10565VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_10565VTable, nRetValue);
    }
    return 0;
}

int array_10565_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_10565VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_10565VTable, nRetValue);
    }
    return 0;
}

int get_array_10565_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_P021_section_int_T_TM_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_10565_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_P021_section_int_T_TM_default_value(&((P021_section_int_T_TM*)pValue)[i]);
    return 1;
}

int check_array_10565_string(const char *str, char **endptr)
{
    static array_10565 rTemp;
    return string_to_array_10565(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_10565_Utils = {
    array_10565_to_string,
    check_array_10565_string,
    string_to_array_10565,
    is_array_10565_double_conversion_allowed,
    array_10565_to_double,
    is_array_10565_long_convertion_allowed,
    array_10565_to_long,
    compare_array_10565,
    get_array_10565_signature,
    set_array_10565_default_value,
    sizeof(array_10565)
};

/****************************************************************
 ** array_int_17 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_17VTable;

int array_int_17_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_17VTable != NULL
        && pSimarray_int_17VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_17VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 17, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_17(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_17VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_17VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 17, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_17_double_conversion_allowed()
{
    if (pSimarray_int_17VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_17VTable);
    }
    return 0;
}

int is_array_int_17_long_convertion_allowed()
{
    if (pSimarray_int_17VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_17VTable);
    }
    return 0;
}

void compare_array_int_17(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_17VTable != NULL
        && pSimarray_int_17VTable->m_version >= Scv612
        && pSimarray_int_17VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_17VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_17VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_17VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 17, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_17_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_17VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_17VTable, nRetValue);
    }
    return 0;
}

int array_int_17_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_17VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_17VTable, nRetValue);
    }
    return 0;
}

int get_array_int_17_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 17; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_17_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 17; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_17_string(const char *str, char **endptr)
{
    static array_int_17 rTemp;
    return string_to_array_int_17(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_17_Utils = {
    array_int_17_to_string,
    check_array_int_17_string,
    string_to_array_int_17,
    is_array_int_17_double_conversion_allowed,
    array_int_17_to_double,
    is_array_int_17_long_convertion_allowed,
    array_int_17_to_long,
    compare_array_int_17,
    get_array_int_17_signature,
    set_array_int_17_default_value,
    sizeof(array_int_17)
};

/****************************************************************
 ** array_int_396 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_396VTable;

int array_int_396_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_396VTable != NULL
        && pSimarray_int_396VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_396VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 396, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_396(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_396VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_396VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 396, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_396_double_conversion_allowed()
{
    if (pSimarray_int_396VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_396VTable);
    }
    return 0;
}

int is_array_int_396_long_convertion_allowed()
{
    if (pSimarray_int_396VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_396VTable);
    }
    return 0;
}

void compare_array_int_396(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_396VTable != NULL
        && pSimarray_int_396VTable->m_version >= Scv612
        && pSimarray_int_396VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_396VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_396VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_396VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 396, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_396_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_396VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_396VTable, nRetValue);
    }
    return 0;
}

int array_int_396_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_396VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_396VTable, nRetValue);
    }
    return 0;
}

int get_array_int_396_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 396; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_396_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 396; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_396_string(const char *str, char **endptr)
{
    static array_int_396 rTemp;
    return string_to_array_int_396(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_396_Utils = {
    array_int_396_to_string,
    check_array_int_396_string,
    string_to_array_int_396,
    is_array_int_396_double_conversion_allowed,
    array_int_396_to_double,
    is_array_int_396_long_convertion_allowed,
    array_int_396_to_long,
    compare_array_int_396,
    get_array_int_396_signature,
    set_array_int_396_default_value,
    sizeof(array_int_396)
};

/****************************************************************
 ** array_int_2_32_32 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_2_32_32VTable;

int array_int_2_32_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_2_32_32VTable != NULL
        && pSimarray_int_2_32_32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_2_32_32VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_string, 32, sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2), pfnStrAppend, pData);
}

int string_to_array_int_2_32_32(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_2_32_32VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_2_32_32VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils, 32, sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2), endptr);
    }
    return nRet;
}

int is_array_int_2_32_32_double_conversion_allowed()
{
    if (pSimarray_int_2_32_32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_2_32_32VTable);
    }
    return 0;
}

int is_array_int_2_32_32_long_convertion_allowed()
{
    if (pSimarray_int_2_32_32VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_2_32_32VTable);
    }
    return 0;
}

void compare_array_int_2_32_32(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_2_32_32VTable != NULL
        && pSimarray_int_2_32_32VTable->m_version >= Scv612
        && pSimarray_int_2_32_32VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_2_32_32VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_2_32_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_2_32_32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2, 32, sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_2_32_32_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_2_32_32VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_2_32_32VTable, nRetValue);
    }
    return 0;
}

int array_int_2_32_32_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_2_32_32VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_2_32_32VTable, nRetValue);
    }
    return 0;
}

int get_array_int_2_32_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_2_32_32_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_default_value(&((_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2*)pValue)[i]);
    return 1;
}

int check_array_int_2_32_32_string(const char *str, char **endptr)
{
    static array_int_2_32_32 rTemp;
    return string_to_array_int_2_32_32(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_2_32_32_Utils = {
    array_int_2_32_32_to_string,
    check_array_int_2_32_32_string,
    string_to_array_int_2_32_32,
    is_array_int_2_32_32_double_conversion_allowed,
    array_int_2_32_32_to_double,
    is_array_int_2_32_32_long_convertion_allowed,
    array_int_2_32_32_to_long,
    compare_array_int_2_32_32,
    get_array_int_2_32_32_signature,
    set_array_int_2_32_32_default_value,
    sizeof(array_int_2_32_32)
};

/****************************************************************
 ** array_int_494 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_494VTable;

int array_int_494_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_494VTable != NULL
        && pSimarray_int_494VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_494VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 494, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_494(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_494VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_494VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 494, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_494_double_conversion_allowed()
{
    if (pSimarray_int_494VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_494VTable);
    }
    return 0;
}

int is_array_int_494_long_convertion_allowed()
{
    if (pSimarray_int_494VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_494VTable);
    }
    return 0;
}

void compare_array_int_494(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_494VTable != NULL
        && pSimarray_int_494VTable->m_version >= Scv612
        && pSimarray_int_494VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_494VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_494VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_494VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 494, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_494_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_494VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_494VTable, nRetValue);
    }
    return 0;
}

int array_int_494_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_494VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_494VTable, nRetValue);
    }
    return 0;
}

int get_array_int_494_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 494; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_494_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 494; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_494_string(const char *str, char **endptr)
{
    static array_int_494 rTemp;
    return string_to_array_int_494(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_494_Utils = {
    array_int_494_to_string,
    check_array_int_494_string,
    string_to_array_int_494,
    is_array_int_494_double_conversion_allowed,
    array_int_494_to_double,
    is_array_int_494_long_convertion_allowed,
    array_int_494_to_long,
    compare_array_int_494,
    get_array_int_494_signature,
    set_array_int_494_default_value,
    sizeof(array_int_494)
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

int is_array_int_1_double_conversion_allowed()
{
    if (pSimarray_int_1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_1VTable);
    }
    return 0;
}

int is_array_int_1_long_convertion_allowed()
{
    if (pSimarray_int_1VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_1VTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int array_int_1_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_1VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_1VTable, nRetValue);
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
    is_array_int_1_double_conversion_allowed,
    array_int_1_to_double,
    is_array_int_1_long_convertion_allowed,
    array_int_1_to_long,
    compare_array_int_1,
    get_array_int_1_signature,
    set_array_int_1_default_value,
    sizeof(array_int_1)
};

/****************************************************************
 ** struct_10608 
 ****************************************************************/

struct SimTypeVTable *pSimstruct_10608VTable;

static SimFieldUtils struct_10608_fields[] = {
    {"NID_C", offsetof(struct_10608,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct_10608,NID_BG), &_Type_kcg_int_Utils},
    {"Pos", offsetof(struct_10608,Pos), &_Type_kcg_int_Utils},
    {"Or_BG", offsetof(struct_10608,Or_BG), &_Type_OrBG_TM_Utils},
    {"Or_Line", offsetof(struct_10608,Or_Line), &_Type_OrLine_TM_Utils},
};

int struct_10608_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct_10608VTable != NULL
        && pSimstruct_10608VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct_10608VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct_10608_fields, 5, pfnStrAppend, pData);
}

int string_to_struct_10608(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct_10608VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct_10608VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct_10608_fields, 5, endptr);
    }
    return nRet;
}

int is_struct_10608_double_conversion_allowed()
{
    if (pSimstruct_10608VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct_10608VTable);
    }
    return 0;
}

int is_struct_10608_long_convertion_allowed()
{
    if (pSimstruct_10608VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct_10608VTable);
    }
    return 0;
}

void compare_struct_10608(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct_10608VTable != NULL
        && pSimstruct_10608VTable->m_version >= Scv612
        && pSimstruct_10608VTable->m_pfnCompare != NULL) {
        if (pSimstruct_10608VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct_10608VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct_10608VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct_10608_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct_10608_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct_10608VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct_10608VTable, nRetValue);
    }
    return 0;
}

int struct_10608_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct_10608VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct_10608VTable, nRetValue);
    }
    return 0;
}

int get_struct_10608_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct_10608_fields, 5, pfnStrAppend, pData);
}

int set_struct_10608_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct_10608*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct_10608*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct_10608*)pValue)->Pos));
    set_OrBG_TM_default_value(&(((struct_10608*)pValue)->Or_BG));
    set_OrLine_TM_default_value(&(((struct_10608*)pValue)->Or_Line));
    return 1;
}

int check_struct_10608_string(const char *str, char **endptr)
{
    static struct_10608 rTemp;
    return string_to_struct_10608(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct_10608_Utils = {
    struct_10608_to_string,
    check_struct_10608_string,
    string_to_struct_10608,
    is_struct_10608_double_conversion_allowed,
    struct_10608_to_double,
    is_struct_10608_long_convertion_allowed,
    struct_10608_to_long,
    compare_struct_10608,
    get_struct_10608_signature,
    set_struct_10608_default_value,
    sizeof(struct_10608)
};

/****************************************************************
 ** array_int_395 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_395VTable;

int array_int_395_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_395VTable != NULL
        && pSimarray_int_395VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_395VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 395, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_395(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_395VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_395VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 395, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_395_double_conversion_allowed()
{
    if (pSimarray_int_395VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_395VTable);
    }
    return 0;
}

int is_array_int_395_long_convertion_allowed()
{
    if (pSimarray_int_395VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_395VTable);
    }
    return 0;
}

void compare_array_int_395(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_395VTable != NULL
        && pSimarray_int_395VTable->m_version >= Scv612
        && pSimarray_int_395VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_395VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_395VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_395VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 395, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_395_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_395VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_395VTable, nRetValue);
    }
    return 0;
}

int array_int_395_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_395VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_395VTable, nRetValue);
    }
    return 0;
}

int get_array_int_395_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 395; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_395_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 395; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_395_string(const char *str, char **endptr)
{
    static array_int_395 rTemp;
    return string_to_array_int_395(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_395_Utils = {
    array_int_395_to_string,
    check_array_int_395_string,
    string_to_array_int_395,
    is_array_int_395_double_conversion_allowed,
    array_int_395_to_double,
    is_array_int_395_long_convertion_allowed,
    array_int_395_to_long,
    compare_array_int_395,
    get_array_int_395_signature,
    set_array_int_395_default_value,
    sizeof(array_int_395)
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

int is_array_bool_8_double_conversion_allowed()
{
    if (pSimarray_bool_8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_bool_8VTable);
    }
    return 0;
}

int is_array_bool_8_long_convertion_allowed()
{
    if (pSimarray_bool_8VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_bool_8VTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_bool_8VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int array_bool_8_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_bool_8VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_bool_8VTable, nRetValue);
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
    is_array_bool_8_double_conversion_allowed,
    array_bool_8_to_double,
    is_array_bool_8_long_convertion_allowed,
    array_bool_8_to_long,
    compare_array_bool_8,
    get_array_bool_8_signature,
    set_array_bool_8_default_value,
    sizeof(array_bool_8)
};

/****************************************************************
 ** array_int_228 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_228VTable;

int array_int_228_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_228VTable != NULL
        && pSimarray_int_228VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_228VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 228, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_228(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_228VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_228VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 228, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_228_double_conversion_allowed()
{
    if (pSimarray_int_228VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_228VTable);
    }
    return 0;
}

int is_array_int_228_long_convertion_allowed()
{
    if (pSimarray_int_228VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_228VTable);
    }
    return 0;
}

void compare_array_int_228(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_228VTable != NULL
        && pSimarray_int_228VTable->m_version >= Scv612
        && pSimarray_int_228VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_228VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_228VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_228VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 228, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_228_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_228VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_228VTable, nRetValue);
    }
    return 0;
}

int array_int_228_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_228VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_228VTable, nRetValue);
    }
    return 0;
}

int get_array_int_228_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 228; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_228_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 228; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_228_string(const char *str, char **endptr)
{
    static array_int_228 rTemp;
    return string_to_array_int_228(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_228_Utils = {
    array_int_228_to_string,
    check_array_int_228_string,
    string_to_array_int_228,
    is_array_int_228_double_conversion_allowed,
    array_int_228_to_double,
    is_array_int_228_long_convertion_allowed,
    array_int_228_to_long,
    compare_array_int_228,
    get_array_int_228_signature,
    set_array_int_228_default_value,
    sizeof(array_int_228)
};

/****************************************************************
 ** array_int_99 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_99VTable;

int array_int_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_99VTable != NULL
        && pSimarray_int_99VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_99VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 99, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_99(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_99VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_99VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 99, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_99_double_conversion_allowed()
{
    if (pSimarray_int_99VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_99VTable);
    }
    return 0;
}

int is_array_int_99_long_convertion_allowed()
{
    if (pSimarray_int_99VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_99VTable);
    }
    return 0;
}

void compare_array_int_99(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_99VTable != NULL
        && pSimarray_int_99VTable->m_version >= Scv612
        && pSimarray_int_99VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_99VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_99VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_99VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 99, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_99_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_99VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_99VTable, nRetValue);
    }
    return 0;
}

int array_int_99_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_99VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_99VTable, nRetValue);
    }
    return 0;
}

int get_array_int_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 99; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_99_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 99; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_99_string(const char *str, char **endptr)
{
    static array_int_99 rTemp;
    return string_to_array_int_99(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_99_Utils = {
    array_int_99_to_string,
    check_array_int_99_string,
    string_to_array_int_99,
    is_array_int_99_double_conversion_allowed,
    array_int_99_to_double,
    is_array_int_99_long_convertion_allowed,
    array_int_99_to_long,
    compare_array_int_99,
    get_array_int_99_signature,
    set_array_int_99_default_value,
    sizeof(array_int_99)
};

/****************************************************************
 ** array_int_3_33_231 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_3_33_231VTable;

int array_int_3_33_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_3_33_231VTable != NULL
        && pSimarray_int_3_33_231VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_3_33_231VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_3_33_to_string, 231, sizeof(array_int_3_33), pfnStrAppend, pData);
}

int string_to_array_int_3_33_231(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_3_33_231VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_3_33_231VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_3_33_Utils, 231, sizeof(array_int_3_33), endptr);
    }
    return nRet;
}

int is_array_int_3_33_231_double_conversion_allowed()
{
    if (pSimarray_int_3_33_231VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_3_33_231VTable);
    }
    return 0;
}

int is_array_int_3_33_231_long_convertion_allowed()
{
    if (pSimarray_int_3_33_231VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_3_33_231VTable);
    }
    return 0;
}

void compare_array_int_3_33_231(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_3_33_231VTable != NULL
        && pSimarray_int_3_33_231VTable->m_version >= Scv612
        && pSimarray_int_3_33_231VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_3_33_231VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_3_33_231VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_3_33_231VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_3_33, 231, sizeof(array_int_3_33), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_3_33_231_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_3_33_231VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_3_33_231VTable, nRetValue);
    }
    return 0;
}

int array_int_3_33_231_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_3_33_231VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_3_33_231VTable, nRetValue);
    }
    return 0;
}

int get_array_int_3_33_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 231; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_3_33_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_3_33_231_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 231; i++)
        set_array_int_3_33_default_value(&((array_int_3_33*)pValue)[i]);
    return 1;
}

int check_array_int_3_33_231_string(const char *str, char **endptr)
{
    static array_int_3_33_231 rTemp;
    return string_to_array_int_3_33_231(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_3_33_231_Utils = {
    array_int_3_33_231_to_string,
    check_array_int_3_33_231_string,
    string_to_array_int_3_33_231,
    is_array_int_3_33_231_double_conversion_allowed,
    array_int_3_33_231_to_double,
    is_array_int_3_33_231_long_convertion_allowed,
    array_int_3_33_231_to_long,
    compare_array_int_3_33_231,
    get_array_int_3_33_231_signature,
    set_array_int_3_33_231_default_value,
    sizeof(array_int_3_33_231)
};

/****************************************************************
 ** array_int_432 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_432VTable;

int array_int_432_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_432VTable != NULL
        && pSimarray_int_432VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_432VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 432, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_432(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_432VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_432VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 432, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_432_double_conversion_allowed()
{
    if (pSimarray_int_432VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_432VTable);
    }
    return 0;
}

int is_array_int_432_long_convertion_allowed()
{
    if (pSimarray_int_432VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_432VTable);
    }
    return 0;
}

void compare_array_int_432(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_432VTable != NULL
        && pSimarray_int_432VTable->m_version >= Scv612
        && pSimarray_int_432VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_432VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_432VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_432VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 432, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_432_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_432VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_432VTable, nRetValue);
    }
    return 0;
}

int array_int_432_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_432VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_432VTable, nRetValue);
    }
    return 0;
}

int get_array_int_432_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 432; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_432_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 432; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_432_string(const char *str, char **endptr)
{
    static array_int_432 rTemp;
    return string_to_array_int_432(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_432_Utils = {
    array_int_432_to_string,
    check_array_int_432_string,
    string_to_array_int_432,
    is_array_int_432_double_conversion_allowed,
    array_int_432_to_double,
    is_array_int_432_long_convertion_allowed,
    array_int_432_to_long,
    compare_array_int_432,
    get_array_int_432_signature,
    set_array_int_432_default_value,
    sizeof(array_int_432)
};

/****************************************************************
 ** array_int_68 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_68VTable;

int array_int_68_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_68VTable != NULL
        && pSimarray_int_68VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_68VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 68, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_68(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_68VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_68VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 68, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_68_double_conversion_allowed()
{
    if (pSimarray_int_68VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_68VTable);
    }
    return 0;
}

int is_array_int_68_long_convertion_allowed()
{
    if (pSimarray_int_68VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_68VTable);
    }
    return 0;
}

void compare_array_int_68(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_68VTable != NULL
        && pSimarray_int_68VTable->m_version >= Scv612
        && pSimarray_int_68VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_68VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_68VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_68VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 68, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_68_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_68VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_68VTable, nRetValue);
    }
    return 0;
}

int array_int_68_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_68VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_68VTable, nRetValue);
    }
    return 0;
}

int get_array_int_68_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 68; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_68_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 68; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_68_string(const char *str, char **endptr)
{
    static array_int_68 rTemp;
    return string_to_array_int_68(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_68_Utils = {
    array_int_68_to_string,
    check_array_int_68_string,
    string_to_array_int_68,
    is_array_int_68_double_conversion_allowed,
    array_int_68_to_double,
    is_array_int_68_long_convertion_allowed,
    array_int_68_to_long,
    compare_array_int_68,
    get_array_int_68_signature,
    set_array_int_68_default_value,
    sizeof(array_int_68)
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
    return pConverter->m_pfnArrayToString(pValue, CompressedPacketData_T_Common_Types_Pkg_to_string, 500, sizeof(CompressedPacketData_T_Common_Types_Pkg), pfnStrAppend, pData);
}

int string_to_array_int_500_500(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_500_500VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_500_500VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, 500, sizeof(CompressedPacketData_T_Common_Types_Pkg), endptr);
    }
    return nRet;
}

int is_array_int_500_500_double_conversion_allowed()
{
    if (pSimarray_int_500_500VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_500_500VTable);
    }
    return 0;
}

int is_array_int_500_500_long_convertion_allowed()
{
    if (pSimarray_int_500_500VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_500_500VTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_500_500VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_500_500VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_CompressedPacketData_T_Common_Types_Pkg, 500, sizeof(CompressedPacketData_T_Common_Types_Pkg), pData, pszPath, pfnStrListAppend, pListErrPaths);
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

int array_int_500_500_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_500_500VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_500_500VTable, nRetValue);
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
        get_CompressedPacketData_T_Common_Types_Pkg_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_500_500_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 500; i++)
        set_CompressedPacketData_T_Common_Types_Pkg_default_value(&((CompressedPacketData_T_Common_Types_Pkg*)pValue)[i]);
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
    is_array_int_500_500_double_conversion_allowed,
    array_int_500_500_to_double,
    is_array_int_500_500_long_convertion_allowed,
    array_int_500_500_to_long,
    compare_array_int_500_500,
    get_array_int_500_500_signature,
    set_array_int_500_500_default_value,
    sizeof(array_int_500_500)
};

/****************************************************************
 ** array_int_272 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_272VTable;

int array_int_272_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_272VTable != NULL
        && pSimarray_int_272VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_272VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 272, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_272(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_272VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_272VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 272, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_272_double_conversion_allowed()
{
    if (pSimarray_int_272VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_272VTable);
    }
    return 0;
}

int is_array_int_272_long_convertion_allowed()
{
    if (pSimarray_int_272VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_272VTable);
    }
    return 0;
}

void compare_array_int_272(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_272VTable != NULL
        && pSimarray_int_272VTable->m_version >= Scv612
        && pSimarray_int_272VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_272VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_272VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_272VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 272, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_272_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_272VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_272VTable, nRetValue);
    }
    return 0;
}

int array_int_272_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_272VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_272VTable, nRetValue);
    }
    return 0;
}

int get_array_int_272_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 272; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_272_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 272; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_272_string(const char *str, char **endptr)
{
    static array_int_272 rTemp;
    return string_to_array_int_272(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_272_Utils = {
    array_int_272_to_string,
    check_array_int_272_string,
    string_to_array_int_272,
    is_array_int_272_double_conversion_allowed,
    array_int_272_to_double,
    is_array_int_272_long_convertion_allowed,
    array_int_272_to_long,
    compare_array_int_272,
    get_array_int_272_signature,
    set_array_int_272_default_value,
    sizeof(array_int_272)
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

int is_NID_PACKET_double_conversion_allowed()
{
    if (pSimNID_PACKETVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_PACKETVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_PACKET_long_convertion_allowed()
{
    if (pSimNID_PACKETVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_PACKETVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_PACKET(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_PACKETVTable != NULL
        && pSimNID_PACKETVTable->m_version >= Scv612
        && pSimNID_PACKETVTable->m_pfnCompare != NULL) {
        if (pSimNID_PACKETVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_PACKETVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int NID_PACKET_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_PACKETVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_PACKETVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_NID_PACKET_double_conversion_allowed,
    NID_PACKET_to_double,
    is_NID_PACKET_long_convertion_allowed,
    NID_PACKET_to_long,
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
const int Q_DIR_nb_values = 6;

int Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DIRVTable != NULL
        && pSimQ_DIRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIR*)pValue, Q_DIR_values, Q_DIR_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIR_values, Q_DIR_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIR*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DIR_double_conversion_allowed()
{
    if (pSimQ_DIRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_DIRVTable);
    }
    return 1;
}

int is_Q_DIR_long_convertion_allowed()
{
    if (pSimQ_DIRVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_DIRVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DIRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int Q_DIR_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_DIRVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_DIRVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_DIR*)pValue);
    return 1;
}

int get_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DIR_values, Q_DIR_nb_values, pfnStrAppend, pData);
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
    is_Q_DIR_double_conversion_allowed,
    Q_DIR_to_double,
    is_Q_DIR_long_convertion_allowed,
    Q_DIR_to_long,
    compare_Q_DIR,
    get_Q_DIR_signature,
    set_Q_DIR_default_value,
    sizeof(Q_DIR)
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
const int Q_UPDOWN_nb_values = 4;

int Q_UPDOWN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_UPDOWNVTable != NULL
        && pSimQ_UPDOWNVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_UPDOWNVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_UPDOWN*)pValue, Q_UPDOWN_values, Q_UPDOWN_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_UPDOWN_values, Q_UPDOWN_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_UPDOWN*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_UPDOWN_double_conversion_allowed()
{
    if (pSimQ_UPDOWNVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_UPDOWNVTable);
    }
    return 1;
}

int is_Q_UPDOWN_long_convertion_allowed()
{
    if (pSimQ_UPDOWNVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_UPDOWNVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_UPDOWNVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int Q_UPDOWN_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_UPDOWNVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_UPDOWNVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_UPDOWN*)pValue);
    return 1;
}

int get_Q_UPDOWN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_UPDOWN_values, Q_UPDOWN_nb_values, pfnStrAppend, pData);
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
    is_Q_UPDOWN_double_conversion_allowed,
    Q_UPDOWN_to_double,
    is_Q_UPDOWN_long_convertion_allowed,
    Q_UPDOWN_to_long,
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
const int M_VERSION_nb_values = 8;

int M_VERSION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_VERSIONVTable != NULL
        && pSimM_VERSIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_VERSIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_VERSION*)pValue, M_VERSION_values, M_VERSION_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_VERSION_values, M_VERSION_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_VERSION*)pValue = nTemp;
    }
    return nRet;
}

int is_M_VERSION_double_conversion_allowed()
{
    if (pSimM_VERSIONVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_VERSIONVTable);
    }
    return 1;
}

int is_M_VERSION_long_convertion_allowed()
{
    if (pSimM_VERSIONVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_VERSIONVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_VERSIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int M_VERSION_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_VERSIONVTable != NULL) {
        return VTable_to_long(pValue, pSimM_VERSIONVTable, nRetValue);
    }
    *nRetValue = (long)*((M_VERSION*)pValue);
    return 1;
}

int get_M_VERSION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_VERSION_values, M_VERSION_nb_values, pfnStrAppend, pData);
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
    is_M_VERSION_double_conversion_allowed,
    M_VERSION_to_double,
    is_M_VERSION_long_convertion_allowed,
    M_VERSION_to_long,
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
const int Q_MEDIA_nb_values = 4;

int Q_MEDIA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_MEDIAVTable != NULL
        && pSimQ_MEDIAVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_MEDIAVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_MEDIA*)pValue, Q_MEDIA_values, Q_MEDIA_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_MEDIA_values, Q_MEDIA_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_MEDIA*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_MEDIA_double_conversion_allowed()
{
    if (pSimQ_MEDIAVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_MEDIAVTable);
    }
    return 1;
}

int is_Q_MEDIA_long_convertion_allowed()
{
    if (pSimQ_MEDIAVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_MEDIAVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_MEDIAVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int Q_MEDIA_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_MEDIAVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_MEDIAVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_MEDIA*)pValue);
    return 1;
}

int get_Q_MEDIA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_MEDIA_values, Q_MEDIA_nb_values, pfnStrAppend, pData);
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
    is_Q_MEDIA_double_conversion_allowed,
    Q_MEDIA_to_double,
    is_Q_MEDIA_long_convertion_allowed,
    Q_MEDIA_to_long,
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
const int N_PIG_nb_values = 16;

int N_PIG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimN_PIGVTable != NULL
        && pSimN_PIGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_PIGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(N_PIG*)pValue, N_PIG_values, N_PIG_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, N_PIG_values, N_PIG_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(N_PIG*)pValue = nTemp;
    }
    return nRet;
}

int is_N_PIG_double_conversion_allowed()
{
    if (pSimN_PIGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimN_PIGVTable);
    }
    return 1;
}

int is_N_PIG_long_convertion_allowed()
{
    if (pSimN_PIGVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimN_PIGVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimN_PIGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int N_PIG_to_long(const void *pValue, long *nRetValue)
{
    if (pSimN_PIGVTable != NULL) {
        return VTable_to_long(pValue, pSimN_PIGVTable, nRetValue);
    }
    *nRetValue = (long)*((N_PIG*)pValue);
    return 1;
}

int get_N_PIG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(N_PIG_values, N_PIG_nb_values, pfnStrAppend, pData);
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
    is_N_PIG_double_conversion_allowed,
    N_PIG_to_double,
    is_N_PIG_long_convertion_allowed,
    N_PIG_to_long,
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
const int N_TOTAL_nb_values = 16;

int N_TOTAL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimN_TOTALVTable != NULL
        && pSimN_TOTALVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_TOTALVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(N_TOTAL*)pValue, N_TOTAL_values, N_TOTAL_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, N_TOTAL_values, N_TOTAL_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(N_TOTAL*)pValue = nTemp;
    }
    return nRet;
}

int is_N_TOTAL_double_conversion_allowed()
{
    if (pSimN_TOTALVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimN_TOTALVTable);
    }
    return 1;
}

int is_N_TOTAL_long_convertion_allowed()
{
    if (pSimN_TOTALVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimN_TOTALVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimN_TOTALVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int N_TOTAL_to_long(const void *pValue, long *nRetValue)
{
    if (pSimN_TOTALVTable != NULL) {
        return VTable_to_long(pValue, pSimN_TOTALVTable, nRetValue);
    }
    *nRetValue = (long)*((N_TOTAL*)pValue);
    return 1;
}

int get_N_TOTAL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(N_TOTAL_values, N_TOTAL_nb_values, pfnStrAppend, pData);
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
    is_N_TOTAL_double_conversion_allowed,
    N_TOTAL_to_double,
    is_N_TOTAL_long_convertion_allowed,
    N_TOTAL_to_long,
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
    { "M_DUP_This_balise_is_a_duplicate_of_the_next_balise", _4_M_DUP_This_balise_is_a_duplicate_of_the_next_balise},
    { "M_DUP_This_balise_is_a_duplicate_of_the_next_balise", _4_M_DUP_This_balise_is_a_duplicate_of_the_next_balise},
    { "M_DUP_This_balise_is_a_duplicate_of_the_previous_balise", M_DUP_This_balise_is_a_duplicate_of_the_previous_balise},
    { "M_DUP_This_balise_is_a_duplicate_of_the_previous_balise", M_DUP_This_balise_is_a_duplicate_of_the_previous_balise},
};
const int M_DUP_nb_values = 6;

int M_DUP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_DUPVTable != NULL
        && pSimM_DUPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_DUPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_DUP*)pValue, M_DUP_values, M_DUP_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_DUP_values, M_DUP_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_DUP*)pValue = nTemp;
    }
    return nRet;
}

int is_M_DUP_double_conversion_allowed()
{
    if (pSimM_DUPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_DUPVTable);
    }
    return 1;
}

int is_M_DUP_long_convertion_allowed()
{
    if (pSimM_DUPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_DUPVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_DUPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int M_DUP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_DUPVTable != NULL) {
        return VTable_to_long(pValue, pSimM_DUPVTable, nRetValue);
    }
    *nRetValue = (long)*((M_DUP*)pValue);
    return 1;
}

int get_M_DUP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_DUP_values, M_DUP_nb_values, pfnStrAppend, pData);
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
    is_M_DUP_double_conversion_allowed,
    M_DUP_to_double,
    is_M_DUP_long_convertion_allowed,
    M_DUP_to_long,
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

int is_M_MCOUNT_double_conversion_allowed()
{
    if (pSimM_MCOUNTVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_MCOUNTVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_M_MCOUNT_long_convertion_allowed()
{
    if (pSimM_MCOUNTVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_MCOUNTVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_M_MCOUNT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_MCOUNTVTable != NULL
        && pSimM_MCOUNTVTable->m_version >= Scv612
        && pSimM_MCOUNTVTable->m_pfnCompare != NULL) {
        if (pSimM_MCOUNTVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_MCOUNTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int M_MCOUNT_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_MCOUNTVTable != NULL) {
        return VTable_to_long(pValue, pSimM_MCOUNTVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_M_MCOUNT_double_conversion_allowed,
    M_MCOUNT_to_double,
    is_M_MCOUNT_long_convertion_allowed,
    M_MCOUNT_to_long,
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

int is_NID_C_double_conversion_allowed()
{
    if (pSimNID_CVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_CVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_C_long_convertion_allowed()
{
    if (pSimNID_CVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_CVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_C(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_CVTable != NULL
        && pSimNID_CVTable->m_version >= Scv612
        && pSimNID_CVTable->m_pfnCompare != NULL) {
        if (pSimNID_CVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_CVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int NID_C_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_CVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_CVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_NID_C_double_conversion_allowed,
    NID_C_to_double,
    is_NID_C_long_convertion_allowed,
    NID_C_to_long,
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

int is_NID_BG_double_conversion_allowed()
{
    if (pSimNID_BGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_BGVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_BG_long_convertion_allowed()
{
    if (pSimNID_BGVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_BGVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_BG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_BGVTable != NULL
        && pSimNID_BGVTable->m_version >= Scv612
        && pSimNID_BGVTable->m_pfnCompare != NULL) {
        if (pSimNID_BGVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_BGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int NID_BG_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_BGVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_BGVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_NID_BG_double_conversion_allowed,
    NID_BG_to_double,
    is_NID_BG_long_convertion_allowed,
    NID_BG_to_long,
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
const int Q_LINK_nb_values = 4;

int Q_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LINKVTable != NULL
        && pSimQ_LINKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LINKVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_LINK*)pValue, Q_LINK_values, Q_LINK_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LINK_values, Q_LINK_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LINK*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_LINK_double_conversion_allowed()
{
    if (pSimQ_LINKVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_LINKVTable);
    }
    return 1;
}

int is_Q_LINK_long_convertion_allowed()
{
    if (pSimQ_LINKVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_LINKVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LINKVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int Q_LINK_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_LINKVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_LINKVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_LINK*)pValue);
    return 1;
}

int get_Q_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_LINK_values, Q_LINK_nb_values, pfnStrAppend, pData);
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
    is_Q_LINK_double_conversion_allowed,
    Q_LINK_to_double,
    is_Q_LINK_long_convertion_allowed,
    Q_LINK_to_long,
    compare_Q_LINK,
    get_Q_LINK_signature,
    set_Q_LINK_default_value,
    sizeof(Q_LINK)
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

int is_NID_RBC_double_conversion_allowed()
{
    if (pSimNID_RBCVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_RBCVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_RBC_long_convertion_allowed()
{
    if (pSimNID_RBCVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_RBCVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_RBC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_RBCVTable != NULL
        && pSimNID_RBCVTable->m_version >= Scv612
        && pSimNID_RBCVTable->m_pfnCompare != NULL) {
        if (pSimNID_RBCVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_RBCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int NID_RBC_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_RBCVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_RBCVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_NID_RBC_double_conversion_allowed,
    NID_RBC_to_double,
    is_NID_RBC_long_convertion_allowed,
    NID_RBC_to_long,
    compare_NID_RBC,
    get_NID_RBC_signature,
    set_NID_RBC_default_value,
    sizeof(NID_RBC)
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

int is_NID_MESSAGE_double_conversion_allowed()
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_MESSAGEVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_MESSAGE_long_convertion_allowed()
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_MESSAGEVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_MESSAGE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_MESSAGEVTable != NULL
        && pSimNID_MESSAGEVTable->m_version >= Scv612
        && pSimNID_MESSAGEVTable->m_pfnCompare != NULL) {
        if (pSimNID_MESSAGEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_MESSAGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int NID_MESSAGE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_MESSAGEVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_NID_MESSAGE_double_conversion_allowed,
    NID_MESSAGE_to_double,
    is_NID_MESSAGE_long_convertion_allowed,
    NID_MESSAGE_to_long,
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

int is_T_TRAIN_double_conversion_allowed()
{
    if (pSimT_TRAINVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_TRAINVTable);
    }
    return is_kcg_real_double_conversion_allowed();
}

int is_T_TRAIN_long_convertion_allowed()
{
    if (pSimT_TRAINVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimT_TRAINVTable);
    }
    return is_kcg_real_long_convertion_allowed();
}

void compare_T_TRAIN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimT_TRAINVTable != NULL
        && pSimT_TRAINVTable->m_version >= Scv612
        && pSimT_TRAINVTable->m_pfnCompare != NULL) {
        if (pSimT_TRAINVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimT_TRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int T_TRAIN_to_long(const void *pValue, long *nRetValue)
{
    if (pSimT_TRAINVTable != NULL) {
        return VTable_to_long(pValue, pSimT_TRAINVTable, nRetValue);
    }
    return kcg_real_to_long(pValue, nRetValue);
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
    is_T_TRAIN_double_conversion_allowed,
    T_TRAIN_to_double,
    is_T_TRAIN_long_convertion_allowed,
    T_TRAIN_to_long,
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
const int M_ACK_nb_values = 4;

int M_ACK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_ACKVTable != NULL
        && pSimM_ACKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_ACKVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_ACK*)pValue, M_ACK_values, M_ACK_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_ACK_values, M_ACK_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_ACK*)pValue = nTemp;
    }
    return nRet;
}

int is_M_ACK_double_conversion_allowed()
{
    if (pSimM_ACKVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_ACKVTable);
    }
    return 1;
}

int is_M_ACK_long_convertion_allowed()
{
    if (pSimM_ACKVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_ACKVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_ACKVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int M_ACK_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_ACKVTable != NULL) {
        return VTable_to_long(pValue, pSimM_ACKVTable, nRetValue);
    }
    *nRetValue = (long)*((M_ACK*)pValue);
    return 1;
}

int get_M_ACK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_ACK_values, M_ACK_nb_values, pfnStrAppend, pData);
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
    is_M_ACK_double_conversion_allowed,
    M_ACK_to_double,
    is_M_ACK_long_convertion_allowed,
    M_ACK_to_long,
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

int is_NID_LRBG_double_conversion_allowed()
{
    if (pSimNID_LRBGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_LRBGVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_LRBG_long_convertion_allowed()
{
    if (pSimNID_LRBGVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_LRBGVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_LRBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_LRBGVTable != NULL
        && pSimNID_LRBGVTable->m_version >= Scv612
        && pSimNID_LRBGVTable->m_pfnCompare != NULL) {
        if (pSimNID_LRBGVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_LRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int NID_LRBG_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_LRBGVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_LRBGVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_NID_LRBG_double_conversion_allowed,
    NID_LRBG_to_double,
    is_NID_LRBG_long_convertion_allowed,
    NID_LRBG_to_long,
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

int is_NID_EM_double_conversion_allowed()
{
    if (pSimNID_EMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_EMVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_EM_long_convertion_allowed()
{
    if (pSimNID_EMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_EMVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_EM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_EMVTable != NULL
        && pSimNID_EMVTable->m_version >= Scv612
        && pSimNID_EMVTable->m_pfnCompare != NULL) {
        if (pSimNID_EMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_EMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int NID_EM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_EMVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_EMVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_NID_EM_double_conversion_allowed,
    NID_EM_to_double,
    is_NID_EM_long_convertion_allowed,
    NID_EM_to_long,
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
const int Q_SCALE_nb_values = 6;

int Q_SCALE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_SCALEVTable != NULL
        && pSimQ_SCALEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_SCALEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_SCALE*)pValue, Q_SCALE_values, Q_SCALE_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_SCALE_values, Q_SCALE_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_SCALE*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_SCALE_double_conversion_allowed()
{
    if (pSimQ_SCALEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_SCALEVTable);
    }
    return 1;
}

int is_Q_SCALE_long_convertion_allowed()
{
    if (pSimQ_SCALEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_SCALEVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_SCALEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int Q_SCALE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_SCALEVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_SCALEVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_SCALE*)pValue);
    return 1;
}

int get_Q_SCALE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_SCALE_values, Q_SCALE_nb_values, pfnStrAppend, pData);
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
    is_Q_SCALE_double_conversion_allowed,
    Q_SCALE_to_double,
    is_Q_SCALE_long_convertion_allowed,
    Q_SCALE_to_long,
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

int is_D_SR_double_conversion_allowed()
{
    if (pSimD_SRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_SRVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_SR_long_convertion_allowed()
{
    if (pSimD_SRVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_SRVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_SR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_SRVTable != NULL
        && pSimD_SRVTable->m_version >= Scv612
        && pSimD_SRVTable->m_pfnCompare != NULL) {
        if (pSimD_SRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_SRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int D_SR_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_SRVTable != NULL) {
        return VTable_to_long(pValue, pSimD_SRVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_D_SR_double_conversion_allowed,
    D_SR_to_double,
    is_D_SR_long_convertion_allowed,
    D_SR_to_long,
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

int is_D_REF_double_conversion_allowed()
{
    if (pSimD_REFVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_REFVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_REF_long_convertion_allowed()
{
    if (pSimD_REFVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_REFVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_REF(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_REFVTable != NULL
        && pSimD_REFVTable->m_version >= Scv612
        && pSimD_REFVTable->m_pfnCompare != NULL) {
        if (pSimD_REFVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_REFVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int D_REF_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_REFVTable != NULL) {
        return VTable_to_long(pValue, pSimD_REFVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_D_REF_double_conversion_allowed,
    D_REF_to_double,
    is_D_REF_long_convertion_allowed,
    D_REF_to_long,
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

int is_D_EMERGENCYSTOP_double_conversion_allowed()
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_EMERGENCYSTOPVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_EMERGENCYSTOP_long_convertion_allowed()
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_EMERGENCYSTOPVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_EMERGENCYSTOP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_EMERGENCYSTOPVTable != NULL
        && pSimD_EMERGENCYSTOPVTable->m_version >= Scv612
        && pSimD_EMERGENCYSTOPVTable->m_pfnCompare != NULL) {
        if (pSimD_EMERGENCYSTOPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_EMERGENCYSTOPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int D_EMERGENCYSTOP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return VTable_to_long(pValue, pSimD_EMERGENCYSTOPVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_D_EMERGENCYSTOP_double_conversion_allowed,
    D_EMERGENCYSTOP_to_double,
    is_D_EMERGENCYSTOP_long_convertion_allowed,
    D_EMERGENCYSTOP_to_long,
    compare_D_EMERGENCYSTOP,
    get_D_EMERGENCYSTOP_signature,
    set_D_EMERGENCYSTOP_default_value,
    sizeof(D_EMERGENCYSTOP)
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

int is_T_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_T_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimT_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_T_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int T_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimT_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_T_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    T_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_T_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed,
    T_internal_Type_Obu_BasicTypes_Pkg_to_long,
    compare_T_internal_Type_Obu_BasicTypes_Pkg,
    get_T_internal_Type_Obu_BasicTypes_Pkg_signature,
    set_T_internal_Type_Obu_BasicTypes_Pkg_default_value,
    sizeof(T_internal_Type_Obu_BasicTypes_Pkg)
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

int is_L_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimL_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_L_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimL_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_L_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int L_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimL_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_L_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    L_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_L_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed,
    L_internal_Type_Obu_BasicTypes_Pkg_to_long,
    compare_L_internal_Type_Obu_BasicTypes_Pkg,
    get_L_internal_Type_Obu_BasicTypes_Pkg_signature,
    set_L_internal_Type_Obu_BasicTypes_Pkg_default_value,
    sizeof(L_internal_Type_Obu_BasicTypes_Pkg)
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

int is_V_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int V_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimV_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_V_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    V_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_V_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed,
    V_internal_Type_Obu_BasicTypes_Pkg_to_long,
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

int is_A_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimA_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_A_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimA_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_A_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int A_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimA_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
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
    is_A_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    A_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_A_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed,
    A_internal_Type_Obu_BasicTypes_Pkg_to_long,
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
const int odoMotionState_T_Obu_BasicTypes_Pkg_nb_values = 4;

int odoMotionState_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue, odoMotionState_T_Obu_BasicTypes_Pkg_values, odoMotionState_T_Obu_BasicTypes_Pkg_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, odoMotionState_T_Obu_BasicTypes_Pkg_values, odoMotionState_T_Obu_BasicTypes_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue = nTemp;
    }
    return nRet;
}

int is_odoMotionState_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimodoMotionState_T_Obu_BasicTypes_PkgVTable);
    }
    return 1;
}

int is_odoMotionState_T_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimodoMotionState_T_Obu_BasicTypes_PkgVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int odoMotionState_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimodoMotionState_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    *nRetValue = (long)*((odoMotionState_T_Obu_BasicTypes_Pkg*)pValue);
    return 1;
}

int get_odoMotionState_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(odoMotionState_T_Obu_BasicTypes_Pkg_values, odoMotionState_T_Obu_BasicTypes_Pkg_nb_values, pfnStrAppend, pData);
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
    is_odoMotionState_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    odoMotionState_T_Obu_BasicTypes_Pkg_to_double,
    is_odoMotionState_T_Obu_BasicTypes_Pkg_long_convertion_allowed,
    odoMotionState_T_Obu_BasicTypes_Pkg_to_long,
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
const int odoMotionDirection_T_Obu_BasicTypes_Pkg_nb_values = 6;

int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue, odoMotionDirection_T_Obu_BasicTypes_Pkg_values, odoMotionDirection_T_Obu_BasicTypes_Pkg_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, odoMotionDirection_T_Obu_BasicTypes_Pkg_values, odoMotionDirection_T_Obu_BasicTypes_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue = nTemp;
    }
    return nRet;
}

int is_odoMotionDirection_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable);
    }
    return 1;
}

int is_odoMotionDirection_T_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    *nRetValue = (long)*((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue);
    return 1;
}

int get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(odoMotionDirection_T_Obu_BasicTypes_Pkg_values, odoMotionDirection_T_Obu_BasicTypes_Pkg_nb_values, pfnStrAppend, pData);
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
    is_odoMotionDirection_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    odoMotionDirection_T_Obu_BasicTypes_Pkg_to_double,
    is_odoMotionDirection_T_Obu_BasicTypes_Pkg_long_convertion_allowed,
    odoMotionDirection_T_Obu_BasicTypes_Pkg_to_long,
    compare_odoMotionDirection_T_Obu_BasicTypes_Pkg,
    get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature,
    set_odoMotionDirection_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg)
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
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Speed_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimSpeed_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_Speed_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSpeed_T_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_Speed_T_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimSpeed_T_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_Speed_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Speed_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimSpeed_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int Speed_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimSpeed_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_Speed_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_Speed_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
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
    is_Speed_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    Speed_T_Obu_BasicTypes_Pkg_to_double,
    is_Speed_T_Obu_BasicTypes_Pkg_long_convertion_allowed,
    Speed_T_Obu_BasicTypes_Pkg_to_long,
    compare_Speed_T_Obu_BasicTypes_Pkg,
    get_Speed_T_Obu_BasicTypes_Pkg_signature,
    set_Speed_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(Speed_T_Obu_BasicTypes_Pkg)
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
const int OrBG_TM_nb_values = 4;

int OrBG_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrBG_TMVTable != NULL
        && pSimOrBG_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrBG_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(OrBG_TM*)pValue, OrBG_TM_values, OrBG_TM_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, OrBG_TM_values, OrBG_TM_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(OrBG_TM*)pValue = nTemp;
    }
    return nRet;
}

int is_OrBG_TM_double_conversion_allowed()
{
    if (pSimOrBG_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimOrBG_TMVTable);
    }
    return 1;
}

int is_OrBG_TM_long_convertion_allowed()
{
    if (pSimOrBG_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimOrBG_TMVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrBG_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int OrBG_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimOrBG_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimOrBG_TMVTable, nRetValue);
    }
    *nRetValue = (long)*((OrBG_TM*)pValue);
    return 1;
}

int get_OrBG_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(OrBG_TM_values, OrBG_TM_nb_values, pfnStrAppend, pData);
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
    is_OrBG_TM_double_conversion_allowed,
    OrBG_TM_to_double,
    is_OrBG_TM_long_convertion_allowed,
    OrBG_TM_to_long,
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
const int OrLine_TM_nb_values = 4;

int OrLine_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrLine_TMVTable != NULL
        && pSimOrLine_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrLine_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(OrLine_TM*)pValue, OrLine_TM_values, OrLine_TM_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, OrLine_TM_values, OrLine_TM_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(OrLine_TM*)pValue = nTemp;
    }
    return nRet;
}

int is_OrLine_TM_double_conversion_allowed()
{
    if (pSimOrLine_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimOrLine_TMVTable);
    }
    return 1;
}

int is_OrLine_TM_long_convertion_allowed()
{
    if (pSimOrLine_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimOrLine_TMVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrLine_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int OrLine_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimOrLine_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimOrLine_TMVTable, nRetValue);
    }
    *nRetValue = (long)*((OrLine_TM*)pValue);
    return 1;
}

int get_OrLine_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(OrLine_TM_values, OrLine_TM_nb_values, pfnStrAppend, pData);
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
    is_OrLine_TM_double_conversion_allowed,
    OrLine_TM_to_double,
    is_OrLine_TM_long_convertion_allowed,
    OrLine_TM_to_long,
    compare_OrLine_TM,
    get_OrLine_TM_signature,
    set_OrLine_TM_default_value,
    sizeof(OrLine_TM)
};

/****************************************************************
 ** _3_P072V1_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSim_3_P072V1_trackside_int_T_TMVTable;

int _3_P072V1_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_3_P072V1_trackside_int_T_TMVTable != NULL
        && pSim_3_P072V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_3_P072V1_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct_10249_to_string(pValue, pfnStrAppend, pData);
}

int string_to__3_P072V1_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_3_P072V1_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSim_3_P072V1_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct_10249(str, pValue, endptr);
    }
    return nRet;
}

int is__3_P072V1_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSim_3_P072V1_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_3_P072V1_trackside_int_T_TMVTable);
    }
    return is_struct_10249_double_conversion_allowed();
}

int is__3_P072V1_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSim_3_P072V1_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSim_3_P072V1_trackside_int_T_TMVTable);
    }
    return is_struct_10249_long_convertion_allowed();
}

void compare__3_P072V1_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_3_P072V1_trackside_int_T_TMVTable != NULL
        && pSim_3_P072V1_trackside_int_T_TMVTable->m_version >= Scv612
        && pSim_3_P072V1_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSim_3_P072V1_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_3_P072V1_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_3_P072V1_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct_10249(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _3_P072V1_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_3_P072V1_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSim_3_P072V1_trackside_int_T_TMVTable, nRetValue);
    }
    return struct_10249_to_double(pValue, nRetValue);
}

int _3_P072V1_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSim_3_P072V1_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSim_3_P072V1_trackside_int_T_TMVTable, nRetValue);
    }
    return struct_10249_to_long(pValue, nRetValue);
}

int get__3_P072V1_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct_10249_signature(pfnStrAppend, pData);
}

int set__3_P072V1_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct_10249_default_value(pValue);
}

int check__3_P072V1_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static _3_P072V1_trackside_int_T_TM rTemp;
    return string_to__3_P072V1_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type__3_P072V1_trackside_int_T_TM_Utils = {
    _3_P072V1_trackside_int_T_TM_to_string,
    check__3_P072V1_trackside_int_T_TM_string,
    string_to__3_P072V1_trackside_int_T_TM,
    is__3_P072V1_trackside_int_T_TM_double_conversion_allowed,
    _3_P072V1_trackside_int_T_TM_to_double,
    is__3_P072V1_trackside_int_T_TM_long_convertion_allowed,
    _3_P072V1_trackside_int_T_TM_to_long,
    compare__3_P072V1_trackside_int_T_TM,
    get__3_P072V1_trackside_int_T_TM_signature,
    set__3_P072V1_trackside_int_T_TM_default_value,
    sizeof(_3_P072V1_trackside_int_T_TM)
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
    return struct_10608_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseGroupData_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseGroupData_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseGroupData_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct_10608(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseGroupData_TM_double_conversion_allowed()
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBaliseGroupData_TMVTable);
    }
    return is_struct_10608_double_conversion_allowed();
}

int is_BaliseGroupData_TM_long_convertion_allowed()
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimBaliseGroupData_TMVTable);
    }
    return is_struct_10608_long_convertion_allowed();
}

void compare_BaliseGroupData_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseGroupData_TMVTable != NULL
        && pSimBaliseGroupData_TMVTable->m_version >= Scv612
        && pSimBaliseGroupData_TMVTable->m_pfnCompare != NULL) {
        if (pSimBaliseGroupData_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseGroupData_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseGroupData_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct_10608(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseGroupData_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseGroupData_TMVTable, nRetValue);
    }
    return struct_10608_to_double(pValue, nRetValue);
}

int BaliseGroupData_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimBaliseGroupData_TMVTable, nRetValue);
    }
    return struct_10608_to_long(pValue, nRetValue);
}

int get_BaliseGroupData_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct_10608_signature(pfnStrAppend, pData);
}

int set_BaliseGroupData_TM_default_value(void *pValue)
{
    return set_struct_10608_default_value(pValue);
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
    is_BaliseGroupData_TM_double_conversion_allowed,
    BaliseGroupData_TM_to_double,
    is_BaliseGroupData_TM_long_convertion_allowed,
    BaliseGroupData_TM_to_long,
    compare_BaliseGroupData_TM,
    get_BaliseGroupData_TM_signature,
    set_BaliseGroupData_TM_default_value,
    sizeof(BaliseGroupData_TM)
};

/****************************************************************
 ** P021_sections_array_flat_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_sections_array_flat_T_TMVTable;

int P021_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_sections_array_flat_T_TMVTable != NULL
        && pSimP021_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_99_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_sections_array_flat_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_sections_array_flat_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_99(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_sections_array_flat_T_TM_double_conversion_allowed()
{
    if (pSimP021_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_sections_array_flat_T_TMVTable);
    }
    return is_array_int_99_double_conversion_allowed();
}

int is_P021_sections_array_flat_T_TM_long_convertion_allowed()
{
    if (pSimP021_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_sections_array_flat_T_TMVTable);
    }
    return is_array_int_99_long_convertion_allowed();
}

void compare_P021_sections_array_flat_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_sections_array_flat_T_TMVTable != NULL
        && pSimP021_sections_array_flat_T_TMVTable->m_version >= Scv612
        && pSimP021_sections_array_flat_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_sections_array_flat_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_sections_array_flat_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_sections_array_flat_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_99(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_sections_array_flat_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_99_to_double(pValue, nRetValue);
}

int P021_sections_array_flat_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_99_to_long(pValue, nRetValue);
}

int get_P021_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_99_signature(pfnStrAppend, pData);
}

int set_P021_sections_array_flat_T_TM_default_value(void *pValue)
{
    return set_array_int_99_default_value(pValue);
}

int check_P021_sections_array_flat_T_TM_string(const char *str, char **endptr)
{
    static P021_sections_array_flat_T_TM rTemp;
    return string_to_P021_sections_array_flat_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_sections_array_flat_T_TM_Utils = {
    P021_sections_array_flat_T_TM_to_string,
    check_P021_sections_array_flat_T_TM_string,
    string_to_P021_sections_array_flat_T_TM,
    is_P021_sections_array_flat_T_TM_double_conversion_allowed,
    P021_sections_array_flat_T_TM_to_double,
    is_P021_sections_array_flat_T_TM_long_convertion_allowed,
    P021_sections_array_flat_T_TM_to_long,
    compare_P021_sections_array_flat_T_TM,
    get_P021_sections_array_flat_T_TM_signature,
    set_P021_sections_array_flat_T_TM_default_value,
    sizeof(P021_sections_array_flat_T_TM)
};

/****************************************************************
 ** P021_OBU_sectionlist_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_OBU_sectionlist_array_T_TMVTable;

int P021_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP021_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_3_33_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_OBU_sectionlist_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_3_33(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_OBU_sectionlist_array_T_TM_double_conversion_allowed()
{
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_3_33_double_conversion_allowed();
}

int is_P021_OBU_sectionlist_array_T_TM_long_convertion_allowed()
{
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_3_33_long_convertion_allowed();
}

void compare_P021_OBU_sectionlist_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP021_OBU_sectionlist_array_T_TMVTable->m_version >= Scv612
        && pSimP021_OBU_sectionlist_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_OBU_sectionlist_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_3_33(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_3_33_to_double(pValue, nRetValue);
}

int P021_OBU_sectionlist_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_3_33_to_long(pValue, nRetValue);
}

int get_P021_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_3_33_signature(pfnStrAppend, pData);
}

int set_P021_OBU_sectionlist_array_T_TM_default_value(void *pValue)
{
    return set_array_int_3_33_default_value(pValue);
}

int check_P021_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr)
{
    static P021_OBU_sectionlist_array_T_TM rTemp;
    return string_to_P021_OBU_sectionlist_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_OBU_sectionlist_array_T_TM_Utils = {
    P021_OBU_sectionlist_array_T_TM_to_string,
    check_P021_OBU_sectionlist_array_T_TM_string,
    string_to_P021_OBU_sectionlist_array_T_TM,
    is_P021_OBU_sectionlist_array_T_TM_double_conversion_allowed,
    P021_OBU_sectionlist_array_T_TM_to_double,
    is_P021_OBU_sectionlist_array_T_TM_long_convertion_allowed,
    P021_OBU_sectionlist_array_T_TM_to_long,
    compare_P021_OBU_sectionlist_array_T_TM,
    get_P021_OBU_sectionlist_array_T_TM_signature,
    set_P021_OBU_sectionlist_array_T_TM_default_value,
    sizeof(P021_OBU_sectionlist_array_T_TM)
};

/****************************************************************
 ** P021_section_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_section_array_T_TMVTable;

int P021_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_section_array_T_TMVTable != NULL
        && pSimP021_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_section_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_3_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_section_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_section_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_section_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_3(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_section_array_T_TM_double_conversion_allowed()
{
    if (pSimP021_section_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_section_array_T_TMVTable);
    }
    return is_array_int_3_double_conversion_allowed();
}

int is_P021_section_array_T_TM_long_convertion_allowed()
{
    if (pSimP021_section_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_section_array_T_TMVTable);
    }
    return is_array_int_3_long_convertion_allowed();
}

void compare_P021_section_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_section_array_T_TMVTable != NULL
        && pSimP021_section_array_T_TMVTable->m_version >= Scv612
        && pSimP021_section_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_section_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_section_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_section_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_3(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_section_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_section_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_section_array_T_TMVTable, nRetValue);
    }
    return array_int_3_to_double(pValue, nRetValue);
}

int P021_section_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_section_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_section_array_T_TMVTable, nRetValue);
    }
    return array_int_3_to_long(pValue, nRetValue);
}

int get_P021_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_3_signature(pfnStrAppend, pData);
}

int set_P021_section_array_T_TM_default_value(void *pValue)
{
    return set_array_int_3_default_value(pValue);
}

int check_P021_section_array_T_TM_string(const char *str, char **endptr)
{
    static P021_section_array_T_TM rTemp;
    return string_to_P021_section_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_section_array_T_TM_Utils = {
    P021_section_array_T_TM_to_string,
    check_P021_section_array_T_TM_string,
    string_to_P021_section_array_T_TM,
    is_P021_section_array_T_TM_double_conversion_allowed,
    P021_section_array_T_TM_to_double,
    is_P021_section_array_T_TM_long_convertion_allowed,
    P021_section_array_T_TM_to_long,
    compare_P021_section_array_T_TM,
    get_P021_section_array_T_TM_signature,
    set_P021_section_array_T_TM_default_value,
    sizeof(P021_section_array_T_TM)
};

/****************************************************************
 ** nid_packet_meta_TM 
 ****************************************************************/

struct SimTypeVTable *pSimnid_packet_meta_TMVTable;

int nid_packet_meta_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimnid_packet_meta_TMVTable != NULL
        && pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimnid_packet_meta_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_nid_packet_meta_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimnid_packet_meta_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimnid_packet_meta_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_nid_packet_meta_TM_double_conversion_allowed()
{
    if (pSimnid_packet_meta_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimnid_packet_meta_TMVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_nid_packet_meta_TM_long_convertion_allowed()
{
    if (pSimnid_packet_meta_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimnid_packet_meta_TMVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_nid_packet_meta_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimnid_packet_meta_TMVTable != NULL
        && pSimnid_packet_meta_TMVTable->m_version >= Scv612
        && pSimnid_packet_meta_TMVTable->m_pfnCompare != NULL) {
        if (pSimnid_packet_meta_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimnid_packet_meta_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimnid_packet_meta_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int nid_packet_meta_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimnid_packet_meta_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimnid_packet_meta_TMVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int nid_packet_meta_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimnid_packet_meta_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimnid_packet_meta_TMVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_nid_packet_meta_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_nid_packet_meta_TM_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_nid_packet_meta_TM_string(const char *str, char **endptr)
{
    static nid_packet_meta_TM rTemp;
    return string_to_nid_packet_meta_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_nid_packet_meta_TM_Utils = {
    nid_packet_meta_TM_to_string,
    check_nid_packet_meta_TM_string,
    string_to_nid_packet_meta_TM,
    is_nid_packet_meta_TM_double_conversion_allowed,
    nid_packet_meta_TM_to_double,
    is_nid_packet_meta_TM_long_convertion_allowed,
    nid_packet_meta_TM_to_long,
    compare_nid_packet_meta_TM,
    get_nid_packet_meta_TM_signature,
    set_nid_packet_meta_TM_default_value,
    sizeof(nid_packet_meta_TM)
};

/****************************************************************
 ** P041_sections_array_flat_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_sections_array_flat_T_TMVTable;

int P041_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_sections_array_flat_T_TMVTable != NULL
        && pSimP041_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_99_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_sections_array_flat_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_sections_array_flat_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_99(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_sections_array_flat_T_TM_double_conversion_allowed()
{
    if (pSimP041_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_sections_array_flat_T_TMVTable);
    }
    return is_array_int_99_double_conversion_allowed();
}

int is_P041_sections_array_flat_T_TM_long_convertion_allowed()
{
    if (pSimP041_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_sections_array_flat_T_TMVTable);
    }
    return is_array_int_99_long_convertion_allowed();
}

void compare_P041_sections_array_flat_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_sections_array_flat_T_TMVTable != NULL
        && pSimP041_sections_array_flat_T_TMVTable->m_version >= Scv612
        && pSimP041_sections_array_flat_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_sections_array_flat_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_sections_array_flat_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_sections_array_flat_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_99(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_sections_array_flat_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_99_to_double(pValue, nRetValue);
}

int P041_sections_array_flat_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_99_to_long(pValue, nRetValue);
}

int get_P041_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_99_signature(pfnStrAppend, pData);
}

int set_P041_sections_array_flat_T_TM_default_value(void *pValue)
{
    return set_array_int_99_default_value(pValue);
}

int check_P041_sections_array_flat_T_TM_string(const char *str, char **endptr)
{
    static P041_sections_array_flat_T_TM rTemp;
    return string_to_P041_sections_array_flat_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_sections_array_flat_T_TM_Utils = {
    P041_sections_array_flat_T_TM_to_string,
    check_P041_sections_array_flat_T_TM_string,
    string_to_P041_sections_array_flat_T_TM,
    is_P041_sections_array_flat_T_TM_double_conversion_allowed,
    P041_sections_array_flat_T_TM_to_double,
    is_P041_sections_array_flat_T_TM_long_convertion_allowed,
    P041_sections_array_flat_T_TM_to_long,
    compare_P041_sections_array_flat_T_TM,
    get_P041_sections_array_flat_T_TM_signature,
    set_P041_sections_array_flat_T_TM_default_value,
    sizeof(P041_sections_array_flat_T_TM)
};

/****************************************************************
 ** P041_OBU_sectionlist_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_OBU_sectionlist_array_T_TMVTable;

int P041_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP041_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_3_33_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_OBU_sectionlist_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_3_33(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_OBU_sectionlist_array_T_TM_double_conversion_allowed()
{
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_3_33_double_conversion_allowed();
}

int is_P041_OBU_sectionlist_array_T_TM_long_convertion_allowed()
{
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_3_33_long_convertion_allowed();
}

void compare_P041_OBU_sectionlist_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP041_OBU_sectionlist_array_T_TMVTable->m_version >= Scv612
        && pSimP041_OBU_sectionlist_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_OBU_sectionlist_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_3_33(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_3_33_to_double(pValue, nRetValue);
}

int P041_OBU_sectionlist_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_3_33_to_long(pValue, nRetValue);
}

int get_P041_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_3_33_signature(pfnStrAppend, pData);
}

int set_P041_OBU_sectionlist_array_T_TM_default_value(void *pValue)
{
    return set_array_int_3_33_default_value(pValue);
}

int check_P041_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr)
{
    static P041_OBU_sectionlist_array_T_TM rTemp;
    return string_to_P041_OBU_sectionlist_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_OBU_sectionlist_array_T_TM_Utils = {
    P041_OBU_sectionlist_array_T_TM_to_string,
    check_P041_OBU_sectionlist_array_T_TM_string,
    string_to_P041_OBU_sectionlist_array_T_TM,
    is_P041_OBU_sectionlist_array_T_TM_double_conversion_allowed,
    P041_OBU_sectionlist_array_T_TM_to_double,
    is_P041_OBU_sectionlist_array_T_TM_long_convertion_allowed,
    P041_OBU_sectionlist_array_T_TM_to_long,
    compare_P041_OBU_sectionlist_array_T_TM,
    get_P041_OBU_sectionlist_array_T_TM_signature,
    set_P041_OBU_sectionlist_array_T_TM_default_value,
    sizeof(P041_OBU_sectionlist_array_T_TM)
};

/****************************************************************
 ** P041_section_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_section_array_T_TMVTable;

int P041_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_section_array_T_TMVTable != NULL
        && pSimP041_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_section_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_3_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_section_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_section_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_section_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_3(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_section_array_T_TM_double_conversion_allowed()
{
    if (pSimP041_section_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_section_array_T_TMVTable);
    }
    return is_array_int_3_double_conversion_allowed();
}

int is_P041_section_array_T_TM_long_convertion_allowed()
{
    if (pSimP041_section_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_section_array_T_TMVTable);
    }
    return is_array_int_3_long_convertion_allowed();
}

void compare_P041_section_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_section_array_T_TMVTable != NULL
        && pSimP041_section_array_T_TMVTable->m_version >= Scv612
        && pSimP041_section_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_section_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_section_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_section_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_3(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_section_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_section_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_section_array_T_TMVTable, nRetValue);
    }
    return array_int_3_to_double(pValue, nRetValue);
}

int P041_section_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_section_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_section_array_T_TMVTable, nRetValue);
    }
    return array_int_3_to_long(pValue, nRetValue);
}

int get_P041_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_3_signature(pfnStrAppend, pData);
}

int set_P041_section_array_T_TM_default_value(void *pValue)
{
    return set_array_int_3_default_value(pValue);
}

int check_P041_section_array_T_TM_string(const char *str, char **endptr)
{
    static P041_section_array_T_TM rTemp;
    return string_to_P041_section_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_section_array_T_TM_Utils = {
    P041_section_array_T_TM_to_string,
    check_P041_section_array_T_TM_string,
    string_to_P041_section_array_T_TM,
    is_P041_section_array_T_TM_double_conversion_allowed,
    P041_section_array_T_TM_to_double,
    is_P041_section_array_T_TM_long_convertion_allowed,
    P041_section_array_T_TM_to_long,
    compare_P041_section_array_T_TM,
    get_P041_section_array_T_TM_signature,
    set_P041_section_array_T_TM_default_value,
    sizeof(P041_section_array_T_TM)
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
const int MsgSource_T_Common_Types_Pkg_nb_values = 10;

int MsgSource_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL
        && pSimMsgSource_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMsgSource_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(MsgSource_T_Common_Types_Pkg*)pValue, MsgSource_T_Common_Types_Pkg_values, MsgSource_T_Common_Types_Pkg_nb_values, pfnStrAppend, pData); 
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, MsgSource_T_Common_Types_Pkg_values, MsgSource_T_Common_Types_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(MsgSource_T_Common_Types_Pkg*)pValue = nTemp;
    }
    return nRet;
}

int is_MsgSource_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMsgSource_T_Common_Types_PkgVTable);
    }
    return 1;
}

int is_MsgSource_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMsgSource_T_Common_Types_PkgVTable);
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
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMsgSource_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int MsgSource_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMsgSource_T_Common_Types_PkgVTable, nRetValue);
    }
    *nRetValue = (long)*((MsgSource_T_Common_Types_Pkg*)pValue);
    return 1;
}

int get_MsgSource_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(MsgSource_T_Common_Types_Pkg_values, MsgSource_T_Common_Types_Pkg_nb_values, pfnStrAppend, pData);
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
    is_MsgSource_T_Common_Types_Pkg_double_conversion_allowed,
    MsgSource_T_Common_Types_Pkg_to_double,
    is_MsgSource_T_Common_Types_Pkg_long_convertion_allowed,
    MsgSource_T_Common_Types_Pkg_to_long,
    compare_MsgSource_T_Common_Types_Pkg,
    get_MsgSource_T_Common_Types_Pkg_signature,
    set_MsgSource_T_Common_Types_Pkg_default_value,
    sizeof(MsgSource_T_Common_Types_Pkg)
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
    return struct_10608_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseGroupData_BasicsVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct_10608(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseGroupData_Basics_double_conversion_allowed()
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBaliseGroupData_BasicsVTable);
    }
    return is_struct_10608_double_conversion_allowed();
}

int is_BaliseGroupData_Basics_long_convertion_allowed()
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimBaliseGroupData_BasicsVTable);
    }
    return is_struct_10608_long_convertion_allowed();
}

void compare_BaliseGroupData_Basics(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseGroupData_BasicsVTable != NULL
        && pSimBaliseGroupData_BasicsVTable->m_version >= Scv612
        && pSimBaliseGroupData_BasicsVTable->m_pfnCompare != NULL) {
        if (pSimBaliseGroupData_BasicsVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseGroupData_BasicsVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseGroupData_BasicsVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct_10608(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseGroupData_Basics_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseGroupData_BasicsVTable, nRetValue);
    }
    return struct_10608_to_double(pValue, nRetValue);
}

int BaliseGroupData_Basics_to_long(const void *pValue, long *nRetValue)
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return VTable_to_long(pValue, pSimBaliseGroupData_BasicsVTable, nRetValue);
    }
    return struct_10608_to_long(pValue, nRetValue);
}

int get_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct_10608_signature(pfnStrAppend, pData);
}

int set_BaliseGroupData_Basics_default_value(void *pValue)
{
    return set_struct_10608_default_value(pValue);
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
    is_BaliseGroupData_Basics_double_conversion_allowed,
    BaliseGroupData_Basics_to_double,
    is_BaliseGroupData_Basics_long_convertion_allowed,
    BaliseGroupData_Basics_to_long,
    compare_BaliseGroupData_Basics,
    get_BaliseGroupData_Basics_signature,
    set_BaliseGroupData_Basics_default_value,
    sizeof(BaliseGroupData_Basics)
};

/****************************************************************
 ** P072V1_trackside_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP072V1_trackside_int_T_TM_baseline2VTable;

int P072V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP072V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimP072V1_trackside_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP072V1_trackside_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct_10249_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P072V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP072V1_trackside_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP072V1_trackside_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct_10249(str, pValue, endptr);
    }
    return nRet;
}

int is_P072V1_trackside_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP072V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP072V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct_10249_double_conversion_allowed();
}

int is_P072V1_trackside_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP072V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP072V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct_10249_long_convertion_allowed();
}

void compare_P072V1_trackside_int_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP072V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimP072V1_trackside_int_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP072V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP072V1_trackside_int_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP072V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP072V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct_10249(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P072V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP072V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP072V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct_10249_to_double(pValue, nRetValue);
}

int P072V1_trackside_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP072V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP072V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct_10249_to_long(pValue, nRetValue);
}

int get_P072V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct_10249_signature(pfnStrAppend, pData);
}

int set_P072V1_trackside_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct_10249_default_value(pValue);
}

int check_P072V1_trackside_int_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P072V1_trackside_int_T_TM_baseline2 rTemp;
    return string_to_P072V1_trackside_int_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P072V1_trackside_int_T_TM_baseline2_Utils = {
    P072V1_trackside_int_T_TM_baseline2_to_string,
    check_P072V1_trackside_int_T_TM_baseline2_string,
    string_to_P072V1_trackside_int_T_TM_baseline2,
    is_P072V1_trackside_int_T_TM_baseline2_double_conversion_allowed,
    P072V1_trackside_int_T_TM_baseline2_to_double,
    is_P072V1_trackside_int_T_TM_baseline2_long_convertion_allowed,
    P072V1_trackside_int_T_TM_baseline2_to_long,
    compare_P072V1_trackside_int_T_TM_baseline2,
    get_P072V1_trackside_int_T_TM_baseline2_signature,
    set_P072V1_trackside_int_T_TM_baseline2_default_value,
    sizeof(P072V1_trackside_int_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_trackside_qdifflist_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable;

int P027V1_trackside_qdifflist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_10460_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_qdifflist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_10460(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_qdifflist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable);
    }
    return is_array_10460_double_conversion_allowed();
}

int is_P027V1_trackside_qdifflist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable);
    }
    return is_array_10460_long_convertion_allowed();
}

void compare_P027V1_trackside_qdifflist_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_10460(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_qdifflist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, nRetValue);
    }
    return array_10460_to_double(pValue, nRetValue);
}

int P027V1_trackside_qdifflist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, nRetValue);
    }
    return array_10460_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_qdifflist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_10460_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_qdifflist_T_TM_baseline2_default_value(void *pValue)
{
    return set_array_10460_default_value(pValue);
}

int check_P027V1_trackside_qdifflist_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_trackside_qdifflist_T_TM_baseline2 rTemp;
    return string_to_P027V1_trackside_qdifflist_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils = {
    P027V1_trackside_qdifflist_T_TM_baseline2_to_string,
    check_P027V1_trackside_qdifflist_T_TM_baseline2_string,
    string_to_P027V1_trackside_qdifflist_T_TM_baseline2,
    is_P027V1_trackside_qdifflist_T_TM_baseline2_double_conversion_allowed,
    P027V1_trackside_qdifflist_T_TM_baseline2_to_double,
    is_P027V1_trackside_qdifflist_T_TM_baseline2_long_convertion_allowed,
    P027V1_trackside_qdifflist_T_TM_baseline2_to_long,
    compare_P027V1_trackside_qdifflist_T_TM_baseline2,
    get_P027V1_trackside_qdifflist_T_TM_baseline2_signature,
    set_P027V1_trackside_qdifflist_T_TM_baseline2_default_value,
    sizeof(P027V1_trackside_qdifflist_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable;

int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_10460_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_10460(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable);
    }
    return is_array_10460_double_conversion_allowed();
}

int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable);
    }
    return is_array_10460_long_convertion_allowed();
}

void compare_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_10460(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array_10460_to_double(pValue, nRetValue);
}

int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array_10460_to_long(pValue, nRetValue);
}

int get_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_10460_signature(pfnStrAppend, pData);
}

int set_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_array_10460_default_value(pValue);
}

int check_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 rTemp;
    return string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_Utils = {
    P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_string,
    check_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_string,
    string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2,
    is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_double_conversion_allowed,
    P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_double,
    is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_long_convertion_allowed,
    P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_long,
    compare_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2,
    get_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_signature,
    set_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_default_value,
    sizeof(P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2)
};

#include "C:/Program Files (x86)/Esterel Technologies/SCADE R16.1/SCADE/lib/kcg_conv.c"
