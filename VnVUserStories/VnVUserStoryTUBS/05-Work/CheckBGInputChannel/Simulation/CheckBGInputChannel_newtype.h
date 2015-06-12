#ifndef CHECKBGINPUTCHANNEL_TYPES_CONVERTION
#define CHECKBGINPUTCHANNEL_TYPES_CONVERTION

#include "NewSmuTypes.h"

/****************************************************************
 ** _3_SSM_ST_SM1 
 ****************************************************************/
extern int _3_SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__3_SSM_ST_SM1_string(const char *str, char **endptr);
extern int string_to__3_SSM_ST_SM1(const char *str, void *pValue, char **endptr);
extern int is__3_SSM_ST_SM1_allow_double_convertion();
extern int _3_SSM_ST_SM1_to_double(const void *pValue, double *nValue);
extern int get__3_SSM_ST_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__3_SSM_ST_SM1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__3_SSM_ST_SM1_default_value(void *pValue);
extern SimTypeUtils _Type__3_SSM_ST_SM1_Utils;

/****************************************************************
 ** _5_SSM_TR_SM1 
 ****************************************************************/
extern int _5_SSM_TR_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__5_SSM_TR_SM1_string(const char *str, char **endptr);
extern int string_to__5_SSM_TR_SM1(const char *str, void *pValue, char **endptr);
extern int is__5_SSM_TR_SM1_allow_double_convertion();
extern int _5_SSM_TR_SM1_to_double(const void *pValue, double *nValue);
extern int get__5_SSM_TR_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__5_SSM_TR_SM1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__5_SSM_TR_SM1_default_value(void *pValue);
extern SimTypeUtils _Type__5_SSM_TR_SM1_Utils;

/****************************************************************
 ** SSM_ST_SM2_SM1_NominalDir 
 ****************************************************************/
extern int SSM_ST_SM2_SM1_NominalDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM2_SM1_NominalDir_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM2_SM1_NominalDir(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM2_SM1_NominalDir_allow_double_convertion();
extern int SSM_ST_SM2_SM1_NominalDir_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM2_SM1_NominalDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM2_SM1_NominalDir(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM2_SM1_NominalDir_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM2_SM1_NominalDir_Utils;

/****************************************************************
 ** SSM_TR_SM2_SM1_NominalDir 
 ****************************************************************/
extern int SSM_TR_SM2_SM1_NominalDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM2_SM1_NominalDir_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM2_SM1_NominalDir(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM2_SM1_NominalDir_allow_double_convertion();
extern int SSM_TR_SM2_SM1_NominalDir_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM2_SM1_NominalDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM2_SM1_NominalDir(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM2_SM1_NominalDir_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM2_SM1_NominalDir_Utils;

/****************************************************************
 ** SSM_ST_SM3_SM1_ReverseDir 
 ****************************************************************/
extern int SSM_ST_SM3_SM1_ReverseDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM3_SM1_ReverseDir_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM3_SM1_ReverseDir(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM3_SM1_ReverseDir_allow_double_convertion();
extern int SSM_ST_SM3_SM1_ReverseDir_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM3_SM1_ReverseDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM3_SM1_ReverseDir(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM3_SM1_ReverseDir_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM3_SM1_ReverseDir_Utils;

/****************************************************************
 ** SSM_TR_SM3_SM1_ReverseDir 
 ****************************************************************/
extern int SSM_TR_SM3_SM1_ReverseDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM3_SM1_ReverseDir_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM3_SM1_ReverseDir(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM3_SM1_ReverseDir_allow_double_convertion();
extern int SSM_TR_SM3_SM1_ReverseDir_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM3_SM1_ReverseDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM3_SM1_ReverseDir(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM3_SM1_ReverseDir_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM3_SM1_ReverseDir_Utils;

/****************************************************************
 ** SSM_ST_SM4_SM1_InconsistentDir 
 ****************************************************************/
extern int SSM_ST_SM4_SM1_InconsistentDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM4_SM1_InconsistentDir_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM4_SM1_InconsistentDir(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM4_SM1_InconsistentDir_allow_double_convertion();
extern int SSM_ST_SM4_SM1_InconsistentDir_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM4_SM1_InconsistentDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM4_SM1_InconsistentDir(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM4_SM1_InconsistentDir_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM4_SM1_InconsistentDir_Utils;

/****************************************************************
 ** SSM_TR_SM4_SM1_InconsistentDir 
 ****************************************************************/
extern int SSM_TR_SM4_SM1_InconsistentDir_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM4_SM1_InconsistentDir_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM4_SM1_InconsistentDir(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM4_SM1_InconsistentDir_allow_double_convertion();
extern int SSM_TR_SM4_SM1_InconsistentDir_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM4_SM1_InconsistentDir_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM4_SM1_InconsistentDir(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM4_SM1_InconsistentDir_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM4_SM1_InconsistentDir_Utils;

/****************************************************************
 ** SSM_ST_SM3 
 ****************************************************************/
extern int SSM_ST_SM3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM3_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM3(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM3_allow_double_convertion();
extern int SSM_ST_SM3_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM3(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM3_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM3_Utils;

/****************************************************************
 ** SSM_TR_SM3 
 ****************************************************************/
extern int SSM_TR_SM3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM3_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM3(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM3_allow_double_convertion();
extern int SSM_TR_SM3_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM3(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM3_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM3_Utils;

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/
extern int SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM1_allow_double_convertion();
extern int SSM_ST_SM1_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM1_Utils;

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/
extern int SSM_TR_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM1_allow_double_convertion();
extern int SSM_TR_SM1_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM1_Utils;

/****************************************************************
 ** kcg_real 
 ****************************************************************/
extern int kcg_real_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_real_string(const char *str, char **endptr);
extern int string_to_kcg_real(const char *str, void *pValue, char **endptr);
extern int is_kcg_real_allow_double_convertion();
extern int kcg_real_to_double(const void *pValue, double *nValue);
extern int get_kcg_real_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_real(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_real_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_real_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_bool_string(const char *str, char **endptr);
extern int string_to_kcg_bool(const char *str, void *pValue, char **endptr);
extern int is_kcg_bool_allow_double_convertion();
extern int kcg_bool_to_double(const void *pValue, double *nValue);
extern int get_kcg_bool_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_bool_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_char_string(const char *str, char **endptr);
extern int string_to_kcg_char(const char *str, void *pValue, char **endptr);
extern int is_kcg_char_allow_double_convertion();
extern int kcg_char_to_double(const void *pValue, double *nValue);
extern int get_kcg_char_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_char_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_int 
 ****************************************************************/
extern int kcg_int_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_int_string(const char *str, char **endptr);
extern int string_to_kcg_int(const char *str, void *pValue, char **endptr);
extern int is_kcg_int_allow_double_convertion();
extern int kcg_int_to_double(const void *pValue, double *nValue);
extern int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_int(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_int_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int_Utils;

/****************************************************************
 ** struct__17982 
 ****************************************************************/
extern int struct__17982_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__17982_string(const char *str, char **endptr);
extern int string_to_struct__17982(const char *str, void *pValue, char **endptr);
extern int is_struct__17982_allow_double_convertion();
extern int struct__17982_to_double(const void *pValue, double *nValue);
extern int get_struct__17982_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__17982(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__17982_default_value(void *pValue);
extern SimTypeUtils _Type_struct__17982_Utils;

/****************************************************************
 ** struct__17988 
 ****************************************************************/
extern int struct__17988_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__17988_string(const char *str, char **endptr);
extern int string_to_struct__17988(const char *str, void *pValue, char **endptr);
extern int is_struct__17988_allow_double_convertion();
extern int struct__17988_to_double(const void *pValue, double *nValue);
extern int get_struct__17988_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__17988(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__17988_default_value(void *pValue);
extern SimTypeUtils _Type_struct__17988_Utils;

/****************************************************************
 ** struct__17994 
 ****************************************************************/
extern int struct__17994_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__17994_string(const char *str, char **endptr);
extern int string_to_struct__17994(const char *str, void *pValue, char **endptr);
extern int is_struct__17994_allow_double_convertion();
extern int struct__17994_to_double(const void *pValue, double *nValue);
extern int get_struct__17994_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__17994(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__17994_default_value(void *pValue);
extern SimTypeUtils _Type_struct__17994_Utils;

/****************************************************************
 ** struct__18008 
 ****************************************************************/
extern int struct__18008_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18008_string(const char *str, char **endptr);
extern int string_to_struct__18008(const char *str, void *pValue, char **endptr);
extern int is_struct__18008_allow_double_convertion();
extern int struct__18008_to_double(const void *pValue, double *nValue);
extern int get_struct__18008_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18008(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18008_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18008_Utils;

/****************************************************************
 ** array__18017 
 ****************************************************************/
extern int array__18017_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18017_string(const char *str, char **endptr);
extern int string_to_array__18017(const char *str, void *pValue, char **endptr);
extern int is_array__18017_allow_double_convertion();
extern int array__18017_to_double(const void *pValue, double *nValue);
extern int get_array__18017_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18017(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18017_default_value(void *pValue);
extern SimTypeUtils _Type_array__18017_Utils;

/****************************************************************
 ** struct__18020 
 ****************************************************************/
extern int struct__18020_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18020_string(const char *str, char **endptr);
extern int string_to_struct__18020(const char *str, void *pValue, char **endptr);
extern int is_struct__18020_allow_double_convertion();
extern int struct__18020_to_double(const void *pValue, double *nValue);
extern int get_struct__18020_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18020(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18020_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18020_Utils;

/****************************************************************
 ** struct__18027 
 ****************************************************************/
extern int struct__18027_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18027_string(const char *str, char **endptr);
extern int string_to_struct__18027(const char *str, void *pValue, char **endptr);
extern int is_struct__18027_allow_double_convertion();
extern int struct__18027_to_double(const void *pValue, double *nValue);
extern int get_struct__18027_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18027(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18027_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18027_Utils;

/****************************************************************
 ** struct__18033 
 ****************************************************************/
extern int struct__18033_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18033_string(const char *str, char **endptr);
extern int string_to_struct__18033(const char *str, void *pValue, char **endptr);
extern int is_struct__18033_allow_double_convertion();
extern int struct__18033_to_double(const void *pValue, double *nValue);
extern int get_struct__18033_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18033(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18033_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18033_Utils;

/****************************************************************
 ** struct__18043 
 ****************************************************************/
extern int struct__18043_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18043_string(const char *str, char **endptr);
extern int string_to_struct__18043(const char *str, void *pValue, char **endptr);
extern int is_struct__18043_allow_double_convertion();
extern int struct__18043_to_double(const void *pValue, double *nValue);
extern int get_struct__18043_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18043(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18043_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18043_Utils;

/****************************************************************
 ** struct__18061 
 ****************************************************************/
extern int struct__18061_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18061_string(const char *str, char **endptr);
extern int string_to_struct__18061(const char *str, void *pValue, char **endptr);
extern int is_struct__18061_allow_double_convertion();
extern int struct__18061_to_double(const void *pValue, double *nValue);
extern int get_struct__18061_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18061(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18061_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18061_Utils;

/****************************************************************
 ** struct__18067 
 ****************************************************************/
extern int struct__18067_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18067_string(const char *str, char **endptr);
extern int string_to_struct__18067(const char *str, void *pValue, char **endptr);
extern int is_struct__18067_allow_double_convertion();
extern int struct__18067_to_double(const void *pValue, double *nValue);
extern int get_struct__18067_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18067(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18067_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18067_Utils;

/****************************************************************
 ** struct__18078 
 ****************************************************************/
extern int struct__18078_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18078_string(const char *str, char **endptr);
extern int string_to_struct__18078(const char *str, void *pValue, char **endptr);
extern int is_struct__18078_allow_double_convertion();
extern int struct__18078_to_double(const void *pValue, double *nValue);
extern int get_struct__18078_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18078(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18078_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18078_Utils;

/****************************************************************
 ** array__18095 
 ****************************************************************/
extern int array__18095_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18095_string(const char *str, char **endptr);
extern int string_to_array__18095(const char *str, void *pValue, char **endptr);
extern int is_array__18095_allow_double_convertion();
extern int array__18095_to_double(const void *pValue, double *nValue);
extern int get_array__18095_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18095(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18095_default_value(void *pValue);
extern SimTypeUtils _Type_array__18095_Utils;

/****************************************************************
 ** struct__18098 
 ****************************************************************/
extern int struct__18098_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18098_string(const char *str, char **endptr);
extern int string_to_struct__18098(const char *str, void *pValue, char **endptr);
extern int is_struct__18098_allow_double_convertion();
extern int struct__18098_to_double(const void *pValue, double *nValue);
extern int get_struct__18098_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18098(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18098_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18098_Utils;

/****************************************************************
 ** array_int_500 
 ****************************************************************/
extern int array_int_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_500_string(const char *str, char **endptr);
extern int string_to_array_int_500(const char *str, void *pValue, char **endptr);
extern int is_array_int_500_allow_double_convertion();
extern int array_int_500_to_double(const void *pValue, double *nValue);
extern int get_array_int_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_500_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_500_Utils;

/****************************************************************
 ** struct__18114 
 ****************************************************************/
extern int struct__18114_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18114_string(const char *str, char **endptr);
extern int string_to_struct__18114(const char *str, void *pValue, char **endptr);
extern int is_struct__18114_allow_double_convertion();
extern int struct__18114_to_double(const void *pValue, double *nValue);
extern int get_struct__18114_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18114(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18114_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18114_Utils;

/****************************************************************
 ** array__18122 
 ****************************************************************/
extern int array__18122_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18122_string(const char *str, char **endptr);
extern int string_to_array__18122(const char *str, void *pValue, char **endptr);
extern int is_array__18122_allow_double_convertion();
extern int array__18122_to_double(const void *pValue, double *nValue);
extern int get_array__18122_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18122(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18122_default_value(void *pValue);
extern SimTypeUtils _Type_array__18122_Utils;

/****************************************************************
 ** struct__18125 
 ****************************************************************/
extern int struct__18125_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18125_string(const char *str, char **endptr);
extern int string_to_struct__18125(const char *str, void *pValue, char **endptr);
extern int is_struct__18125_allow_double_convertion();
extern int struct__18125_to_double(const void *pValue, double *nValue);
extern int get_struct__18125_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18125(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18125_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18125_Utils;

/****************************************************************
 ** struct__18130 
 ****************************************************************/
extern int struct__18130_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18130_string(const char *str, char **endptr);
extern int string_to_struct__18130(const char *str, void *pValue, char **endptr);
extern int is_struct__18130_allow_double_convertion();
extern int struct__18130_to_double(const void *pValue, double *nValue);
extern int get_struct__18130_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18130(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18130_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18130_Utils;

/****************************************************************
 ** struct__18139 
 ****************************************************************/
extern int struct__18139_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18139_string(const char *str, char **endptr);
extern int string_to_struct__18139(const char *str, void *pValue, char **endptr);
extern int is_struct__18139_allow_double_convertion();
extern int struct__18139_to_double(const void *pValue, double *nValue);
extern int get_struct__18139_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18139(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18139_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18139_Utils;

/****************************************************************
 ** struct__18144 
 ****************************************************************/
extern int struct__18144_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18144_string(const char *str, char **endptr);
extern int string_to_struct__18144(const char *str, void *pValue, char **endptr);
extern int is_struct__18144_allow_double_convertion();
extern int struct__18144_to_double(const void *pValue, double *nValue);
extern int get_struct__18144_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18144(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18144_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18144_Utils;

/****************************************************************
 ** array_int_7 
 ****************************************************************/
extern int array_int_7_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_7_string(const char *str, char **endptr);
extern int string_to_array_int_7(const char *str, void *pValue, char **endptr);
extern int is_array_int_7_allow_double_convertion();
extern int array_int_7_to_double(const void *pValue, double *nValue);
extern int get_array_int_7_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_7(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_7_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_7_Utils;

/****************************************************************
 ** struct__18155 
 ****************************************************************/
extern int struct__18155_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18155_string(const char *str, char **endptr);
extern int string_to_struct__18155(const char *str, void *pValue, char **endptr);
extern int is_struct__18155_allow_double_convertion();
extern int struct__18155_to_double(const void *pValue, double *nValue);
extern int get_struct__18155_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18155(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18155_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18155_Utils;

/****************************************************************
 ** array_int_7_33 
 ****************************************************************/
extern int array_int_7_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_7_33_string(const char *str, char **endptr);
extern int string_to_array_int_7_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_7_33_allow_double_convertion();
extern int array_int_7_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_7_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_7_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_7_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_7_33_Utils;

/****************************************************************
 ** array_int_231 
 ****************************************************************/
extern int array_int_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_231_string(const char *str, char **endptr);
extern int string_to_array_int_231(const char *str, void *pValue, char **endptr);
extern int is_array_int_231_allow_double_convertion();
extern int array_int_231_to_double(const void *pValue, double *nValue);
extern int get_array_int_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_231(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_231_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_231_Utils;

/****************************************************************
 ** array__18171 
 ****************************************************************/
extern int array__18171_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18171_string(const char *str, char **endptr);
extern int string_to_array__18171(const char *str, void *pValue, char **endptr);
extern int is_array__18171_allow_double_convertion();
extern int array__18171_to_double(const void *pValue, double *nValue);
extern int get_array__18171_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18171(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18171_default_value(void *pValue);
extern SimTypeUtils _Type_array__18171_Utils;

/****************************************************************
 ** array__18174 
 ****************************************************************/
extern int array__18174_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18174_string(const char *str, char **endptr);
extern int string_to_array__18174(const char *str, void *pValue, char **endptr);
extern int is_array__18174_allow_double_convertion();
extern int array__18174_to_double(const void *pValue, double *nValue);
extern int get_array__18174_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18174(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18174_default_value(void *pValue);
extern SimTypeUtils _Type_array__18174_Utils;

/****************************************************************
 ** struct__18177 
 ****************************************************************/
extern int struct__18177_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18177_string(const char *str, char **endptr);
extern int string_to_struct__18177(const char *str, void *pValue, char **endptr);
extern int is_struct__18177_allow_double_convertion();
extern int struct__18177_to_double(const void *pValue, double *nValue);
extern int get_struct__18177_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18177(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18177_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18177_Utils;

/****************************************************************
 ** struct__18194 
 ****************************************************************/
extern int struct__18194_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18194_string(const char *str, char **endptr);
extern int string_to_struct__18194(const char *str, void *pValue, char **endptr);
extern int is_struct__18194_allow_double_convertion();
extern int struct__18194_to_double(const void *pValue, double *nValue);
extern int get_struct__18194_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18194(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18194_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18194_Utils;

/****************************************************************
 ** struct__18207 
 ****************************************************************/
extern int struct__18207_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18207_string(const char *str, char **endptr);
extern int string_to_struct__18207(const char *str, void *pValue, char **endptr);
extern int is_struct__18207_allow_double_convertion();
extern int struct__18207_to_double(const void *pValue, double *nValue);
extern int get_struct__18207_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18207(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18207_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18207_Utils;

/****************************************************************
 ** struct__18213 
 ****************************************************************/
extern int struct__18213_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18213_string(const char *str, char **endptr);
extern int string_to_struct__18213(const char *str, void *pValue, char **endptr);
extern int is_struct__18213_allow_double_convertion();
extern int struct__18213_to_double(const void *pValue, double *nValue);
extern int get_struct__18213_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18213(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18213_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18213_Utils;

/****************************************************************
 ** struct__18231 
 ****************************************************************/
extern int struct__18231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18231_string(const char *str, char **endptr);
extern int string_to_struct__18231(const char *str, void *pValue, char **endptr);
extern int is_struct__18231_allow_double_convertion();
extern int struct__18231_to_double(const void *pValue, double *nValue);
extern int get_struct__18231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18231(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18231_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18231_Utils;

/****************************************************************
 ** struct__18243 
 ****************************************************************/
extern int struct__18243_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18243_string(const char *str, char **endptr);
extern int string_to_struct__18243(const char *str, void *pValue, char **endptr);
extern int is_struct__18243_allow_double_convertion();
extern int struct__18243_to_double(const void *pValue, double *nValue);
extern int get_struct__18243_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18243(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18243_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18243_Utils;

/****************************************************************
 ** struct__18250 
 ****************************************************************/
extern int struct__18250_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18250_string(const char *str, char **endptr);
extern int string_to_struct__18250(const char *str, void *pValue, char **endptr);
extern int is_struct__18250_allow_double_convertion();
extern int struct__18250_to_double(const void *pValue, double *nValue);
extern int get_struct__18250_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18250(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18250_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18250_Utils;

/****************************************************************
 ** struct__18255 
 ****************************************************************/
extern int struct__18255_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18255_string(const char *str, char **endptr);
extern int string_to_struct__18255(const char *str, void *pValue, char **endptr);
extern int is_struct__18255_allow_double_convertion();
extern int struct__18255_to_double(const void *pValue, double *nValue);
extern int get_struct__18255_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18255(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18255_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18255_Utils;

/****************************************************************
 ** struct__18263 
 ****************************************************************/
extern int struct__18263_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18263_string(const char *str, char **endptr);
extern int string_to_struct__18263(const char *str, void *pValue, char **endptr);
extern int is_struct__18263_allow_double_convertion();
extern int struct__18263_to_double(const void *pValue, double *nValue);
extern int get_struct__18263_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18263(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18263_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18263_Utils;

/****************************************************************
 ** struct__18272 
 ****************************************************************/
extern int struct__18272_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18272_string(const char *str, char **endptr);
extern int string_to_struct__18272(const char *str, void *pValue, char **endptr);
extern int is_struct__18272_allow_double_convertion();
extern int struct__18272_to_double(const void *pValue, double *nValue);
extern int get_struct__18272_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18272(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18272_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18272_Utils;

/****************************************************************
 ** struct__18282 
 ****************************************************************/
extern int struct__18282_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18282_string(const char *str, char **endptr);
extern int string_to_struct__18282(const char *str, void *pValue, char **endptr);
extern int is_struct__18282_allow_double_convertion();
extern int struct__18282_to_double(const void *pValue, double *nValue);
extern int get_struct__18282_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18282(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18282_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18282_Utils;

/****************************************************************
 ** struct__18288 
 ****************************************************************/
extern int struct__18288_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18288_string(const char *str, char **endptr);
extern int string_to_struct__18288(const char *str, void *pValue, char **endptr);
extern int is_struct__18288_allow_double_convertion();
extern int struct__18288_to_double(const void *pValue, double *nValue);
extern int get_struct__18288_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18288(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18288_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18288_Utils;

/****************************************************************
 ** struct__18298 
 ****************************************************************/
extern int struct__18298_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18298_string(const char *str, char **endptr);
extern int string_to_struct__18298(const char *str, void *pValue, char **endptr);
extern int is_struct__18298_allow_double_convertion();
extern int struct__18298_to_double(const void *pValue, double *nValue);
extern int get_struct__18298_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18298(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18298_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18298_Utils;

/****************************************************************
 ** struct__18306 
 ****************************************************************/
extern int struct__18306_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18306_string(const char *str, char **endptr);
extern int string_to_struct__18306(const char *str, void *pValue, char **endptr);
extern int is_struct__18306_allow_double_convertion();
extern int struct__18306_to_double(const void *pValue, double *nValue);
extern int get_struct__18306_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18306(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18306_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18306_Utils;

/****************************************************************
 ** array__18311 
 ****************************************************************/
extern int array__18311_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18311_string(const char *str, char **endptr);
extern int string_to_array__18311(const char *str, void *pValue, char **endptr);
extern int is_array__18311_allow_double_convertion();
extern int array__18311_to_double(const void *pValue, double *nValue);
extern int get_array__18311_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18311(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18311_default_value(void *pValue);
extern SimTypeUtils _Type_array__18311_Utils;

/****************************************************************
 ** struct__18314 
 ****************************************************************/
extern int struct__18314_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18314_string(const char *str, char **endptr);
extern int string_to_struct__18314(const char *str, void *pValue, char **endptr);
extern int is_struct__18314_allow_double_convertion();
extern int struct__18314_to_double(const void *pValue, double *nValue);
extern int get_struct__18314_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18314(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18314_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18314_Utils;

/****************************************************************
 ** struct__18327 
 ****************************************************************/
extern int struct__18327_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18327_string(const char *str, char **endptr);
extern int string_to_struct__18327(const char *str, void *pValue, char **endptr);
extern int is_struct__18327_allow_double_convertion();
extern int struct__18327_to_double(const void *pValue, double *nValue);
extern int get_struct__18327_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18327(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18327_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18327_Utils;

/****************************************************************
 ** struct__18334 
 ****************************************************************/
extern int struct__18334_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18334_string(const char *str, char **endptr);
extern int string_to_struct__18334(const char *str, void *pValue, char **endptr);
extern int is_struct__18334_allow_double_convertion();
extern int struct__18334_to_double(const void *pValue, double *nValue);
extern int get_struct__18334_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18334(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18334_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18334_Utils;

/****************************************************************
 ** array__18343 
 ****************************************************************/
extern int array__18343_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18343_string(const char *str, char **endptr);
extern int string_to_array__18343(const char *str, void *pValue, char **endptr);
extern int is_array__18343_allow_double_convertion();
extern int array__18343_to_double(const void *pValue, double *nValue);
extern int get_array__18343_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18343(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18343_default_value(void *pValue);
extern SimTypeUtils _Type_array__18343_Utils;

/****************************************************************
 ** array__18346 
 ****************************************************************/
extern int array__18346_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18346_string(const char *str, char **endptr);
extern int string_to_array__18346(const char *str, void *pValue, char **endptr);
extern int is_array__18346_allow_double_convertion();
extern int array__18346_to_double(const void *pValue, double *nValue);
extern int get_array__18346_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18346(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18346_default_value(void *pValue);
extern SimTypeUtils _Type_array__18346_Utils;

/****************************************************************
 ** array__18349 
 ****************************************************************/
extern int array__18349_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18349_string(const char *str, char **endptr);
extern int string_to_array__18349(const char *str, void *pValue, char **endptr);
extern int is_array__18349_allow_double_convertion();
extern int array__18349_to_double(const void *pValue, double *nValue);
extern int get_array__18349_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18349(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18349_default_value(void *pValue);
extern SimTypeUtils _Type_array__18349_Utils;

/****************************************************************
 ** array__18352 
 ****************************************************************/
extern int array__18352_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18352_string(const char *str, char **endptr);
extern int string_to_array__18352(const char *str, void *pValue, char **endptr);
extern int is_array__18352_allow_double_convertion();
extern int array__18352_to_double(const void *pValue, double *nValue);
extern int get_array__18352_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18352(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18352_default_value(void *pValue);
extern SimTypeUtils _Type_array__18352_Utils;

/****************************************************************
 ** array__18355 
 ****************************************************************/
extern int array__18355_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18355_string(const char *str, char **endptr);
extern int string_to_array__18355(const char *str, void *pValue, char **endptr);
extern int is_array__18355_allow_double_convertion();
extern int array__18355_to_double(const void *pValue, double *nValue);
extern int get_array__18355_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18355(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18355_default_value(void *pValue);
extern SimTypeUtils _Type_array__18355_Utils;

/****************************************************************
 ** struct__18358 
 ****************************************************************/
extern int struct__18358_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18358_string(const char *str, char **endptr);
extern int string_to_struct__18358(const char *str, void *pValue, char **endptr);
extern int is_struct__18358_allow_double_convertion();
extern int struct__18358_to_double(const void *pValue, double *nValue);
extern int get_struct__18358_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18358(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18358_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18358_Utils;

/****************************************************************
 ** array__18365 
 ****************************************************************/
extern int array__18365_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18365_string(const char *str, char **endptr);
extern int string_to_array__18365(const char *str, void *pValue, char **endptr);
extern int is_array__18365_allow_double_convertion();
extern int array__18365_to_double(const void *pValue, double *nValue);
extern int get_array__18365_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18365(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18365_default_value(void *pValue);
extern SimTypeUtils _Type_array__18365_Utils;

/****************************************************************
 ** struct__18368 
 ****************************************************************/
extern int struct__18368_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18368_string(const char *str, char **endptr);
extern int string_to_struct__18368(const char *str, void *pValue, char **endptr);
extern int is_struct__18368_allow_double_convertion();
extern int struct__18368_to_double(const void *pValue, double *nValue);
extern int get_struct__18368_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18368(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18368_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18368_Utils;

/****************************************************************
 ** struct__18376 
 ****************************************************************/
extern int struct__18376_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18376_string(const char *str, char **endptr);
extern int string_to_struct__18376(const char *str, void *pValue, char **endptr);
extern int is_struct__18376_allow_double_convertion();
extern int struct__18376_to_double(const void *pValue, double *nValue);
extern int get_struct__18376_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18376(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18376_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18376_Utils;

/****************************************************************
 ** struct__18383 
 ****************************************************************/
extern int struct__18383_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18383_string(const char *str, char **endptr);
extern int string_to_struct__18383(const char *str, void *pValue, char **endptr);
extern int is_struct__18383_allow_double_convertion();
extern int struct__18383_to_double(const void *pValue, double *nValue);
extern int get_struct__18383_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18383(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18383_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18383_Utils;

/****************************************************************
 ** struct__18391 
 ****************************************************************/
extern int struct__18391_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18391_string(const char *str, char **endptr);
extern int string_to_struct__18391(const char *str, void *pValue, char **endptr);
extern int is_struct__18391_allow_double_convertion();
extern int struct__18391_to_double(const void *pValue, double *nValue);
extern int get_struct__18391_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18391(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18391_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18391_Utils;

/****************************************************************
 ** struct__18402 
 ****************************************************************/
extern int struct__18402_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18402_string(const char *str, char **endptr);
extern int string_to_struct__18402(const char *str, void *pValue, char **endptr);
extern int is_struct__18402_allow_double_convertion();
extern int struct__18402_to_double(const void *pValue, double *nValue);
extern int get_struct__18402_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18402(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18402_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18402_Utils;

/****************************************************************
 ** array_bool_256 
 ****************************************************************/
extern int array_bool_256_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_256_string(const char *str, char **endptr);
extern int string_to_array_bool_256(const char *str, void *pValue, char **endptr);
extern int is_array_bool_256_allow_double_convertion();
extern int array_bool_256_to_double(const void *pValue, double *nValue);
extern int get_array_bool_256_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_256(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_256_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_256_Utils;

/****************************************************************
 ** array_bool_256_46 
 ****************************************************************/
extern int array_bool_256_46_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_256_46_string(const char *str, char **endptr);
extern int string_to_array_bool_256_46(const char *str, void *pValue, char **endptr);
extern int is_array_bool_256_46_allow_double_convertion();
extern int array_bool_256_46_to_double(const void *pValue, double *nValue);
extern int get_array_bool_256_46_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_256_46(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_256_46_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_256_46_Utils;

/****************************************************************
 ** struct__18414 
 ****************************************************************/
extern int struct__18414_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18414_string(const char *str, char **endptr);
extern int string_to_struct__18414(const char *str, void *pValue, char **endptr);
extern int is_struct__18414_allow_double_convertion();
extern int struct__18414_to_double(const void *pValue, double *nValue);
extern int get_struct__18414_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18414(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18414_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18414_Utils;

/****************************************************************
 ** struct__18424 
 ****************************************************************/
extern int struct__18424_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18424_string(const char *str, char **endptr);
extern int string_to_struct__18424(const char *str, void *pValue, char **endptr);
extern int is_struct__18424_allow_double_convertion();
extern int struct__18424_to_double(const void *pValue, double *nValue);
extern int get_struct__18424_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18424(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18424_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18424_Utils;

/****************************************************************
 ** array__18432 
 ****************************************************************/
extern int array__18432_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18432_string(const char *str, char **endptr);
extern int string_to_array__18432(const char *str, void *pValue, char **endptr);
extern int is_array__18432_allow_double_convertion();
extern int array__18432_to_double(const void *pValue, double *nValue);
extern int get_array__18432_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18432(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18432_default_value(void *pValue);
extern SimTypeUtils _Type_array__18432_Utils;

/****************************************************************
 ** array__18435 
 ****************************************************************/
extern int array__18435_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18435_string(const char *str, char **endptr);
extern int string_to_array__18435(const char *str, void *pValue, char **endptr);
extern int is_array__18435_allow_double_convertion();
extern int array__18435_to_double(const void *pValue, double *nValue);
extern int get_array__18435_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18435(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18435_default_value(void *pValue);
extern SimTypeUtils _Type_array__18435_Utils;

/****************************************************************
 ** array__18438 
 ****************************************************************/
extern int array__18438_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18438_string(const char *str, char **endptr);
extern int string_to_array__18438(const char *str, void *pValue, char **endptr);
extern int is_array__18438_allow_double_convertion();
extern int array__18438_to_double(const void *pValue, double *nValue);
extern int get_array__18438_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18438(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18438_default_value(void *pValue);
extern SimTypeUtils _Type_array__18438_Utils;

/****************************************************************
 ** array_bool_8 
 ****************************************************************/
extern int array_bool_8_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_8_string(const char *str, char **endptr);
extern int string_to_array_bool_8(const char *str, void *pValue, char **endptr);
extern int is_array_bool_8_allow_double_convertion();
extern int array_bool_8_to_double(const void *pValue, double *nValue);
extern int get_array_bool_8_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_8(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_8_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_8_Utils;

/****************************************************************
 ** array__18444 
 ****************************************************************/
extern int array__18444_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18444_string(const char *str, char **endptr);
extern int string_to_array__18444(const char *str, void *pValue, char **endptr);
extern int is_array__18444_allow_double_convertion();
extern int array__18444_to_double(const void *pValue, double *nValue);
extern int get_array__18444_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18444(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18444_default_value(void *pValue);
extern SimTypeUtils _Type_array__18444_Utils;

/****************************************************************
 ** array__18447 
 ****************************************************************/
extern int array__18447_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18447_string(const char *str, char **endptr);
extern int string_to_array__18447(const char *str, void *pValue, char **endptr);
extern int is_array__18447_allow_double_convertion();
extern int array__18447_to_double(const void *pValue, double *nValue);
extern int get_array__18447_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18447(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18447_default_value(void *pValue);
extern SimTypeUtils _Type_array__18447_Utils;

/****************************************************************
 ** array_int_500_500 
 ****************************************************************/
extern int array_int_500_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_500_500_string(const char *str, char **endptr);
extern int string_to_array_int_500_500(const char *str, void *pValue, char **endptr);
extern int is_array_int_500_500_allow_double_convertion();
extern int array_int_500_500_to_double(const void *pValue, double *nValue);
extern int get_array_int_500_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_500_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_500_500_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_500_500_Utils;

/****************************************************************
 ** array__18453 
 ****************************************************************/
extern int array__18453_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18453_string(const char *str, char **endptr);
extern int string_to_array__18453(const char *str, void *pValue, char **endptr);
extern int is_array__18453_allow_double_convertion();
extern int array__18453_to_double(const void *pValue, double *nValue);
extern int get_array__18453_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18453(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18453_default_value(void *pValue);
extern SimTypeUtils _Type_array__18453_Utils;

/****************************************************************
 ** array__18456 
 ****************************************************************/
extern int array__18456_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18456_string(const char *str, char **endptr);
extern int string_to_array__18456(const char *str, void *pValue, char **endptr);
extern int is_array__18456_allow_double_convertion();
extern int array__18456_to_double(const void *pValue, double *nValue);
extern int get_array__18456_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18456(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18456_default_value(void *pValue);
extern SimTypeUtils _Type_array__18456_Utils;

/****************************************************************
 ** array__18459 
 ****************************************************************/
extern int array__18459_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18459_string(const char *str, char **endptr);
extern int string_to_array__18459(const char *str, void *pValue, char **endptr);
extern int is_array__18459_allow_double_convertion();
extern int array__18459_to_double(const void *pValue, double *nValue);
extern int get_array__18459_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18459(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18459_default_value(void *pValue);
extern SimTypeUtils _Type_array__18459_Utils;

/****************************************************************
 ** array_bool_30 
 ****************************************************************/
extern int array_bool_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_30_string(const char *str, char **endptr);
extern int string_to_array_bool_30(const char *str, void *pValue, char **endptr);
extern int is_array_bool_30_allow_double_convertion();
extern int array_bool_30_to_double(const void *pValue, double *nValue);
extern int get_array_bool_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_30(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_30_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_30_Utils;

/****************************************************************
 ** array_int_8 
 ****************************************************************/
extern int array_int_8_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_8_string(const char *str, char **endptr);
extern int string_to_array_int_8(const char *str, void *pValue, char **endptr);
extern int is_array_int_8_allow_double_convertion();
extern int array_int_8_to_double(const void *pValue, double *nValue);
extern int get_array_int_8_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_8(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_8_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_8_Utils;

/****************************************************************
 ** array_int_30 
 ****************************************************************/
extern int array_int_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_30_string(const char *str, char **endptr);
extern int string_to_array_int_30(const char *str, void *pValue, char **endptr);
extern int is_array_int_30_allow_double_convertion();
extern int array_int_30_to_double(const void *pValue, double *nValue);
extern int get_array_int_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_30(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_30_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_30_Utils;

/****************************************************************
 ** array_bool_256_46_30 
 ****************************************************************/
extern int array_bool_256_46_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_256_46_30_string(const char *str, char **endptr);
extern int string_to_array_bool_256_46_30(const char *str, void *pValue, char **endptr);
extern int is_array_bool_256_46_30_allow_double_convertion();
extern int array_bool_256_46_30_to_double(const void *pValue, double *nValue);
extern int get_array_bool_256_46_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_256_46_30(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_256_46_30_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_256_46_30_Utils;

/****************************************************************
 ** array__18474 
 ****************************************************************/
extern int array__18474_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18474_string(const char *str, char **endptr);
extern int string_to_array__18474(const char *str, void *pValue, char **endptr);
extern int is_array__18474_allow_double_convertion();
extern int array__18474_to_double(const void *pValue, double *nValue);
extern int get_array__18474_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18474(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18474_default_value(void *pValue);
extern SimTypeUtils _Type_array__18474_Utils;

/****************************************************************
 ** array__18477 
 ****************************************************************/
extern int array__18477_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18477_string(const char *str, char **endptr);
extern int string_to_array__18477(const char *str, void *pValue, char **endptr);
extern int is_array__18477_allow_double_convertion();
extern int array__18477_to_double(const void *pValue, double *nValue);
extern int get_array__18477_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18477(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18477_default_value(void *pValue);
extern SimTypeUtils _Type_array__18477_Utils;

/****************************************************************
 ** array__18480 
 ****************************************************************/
extern int array__18480_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18480_string(const char *str, char **endptr);
extern int string_to_array__18480(const char *str, void *pValue, char **endptr);
extern int is_array__18480_allow_double_convertion();
extern int array__18480_to_double(const void *pValue, double *nValue);
extern int get_array__18480_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18480(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18480_default_value(void *pValue);
extern SimTypeUtils _Type_array__18480_Utils;

/****************************************************************
 ** array_int_7_33_231 
 ****************************************************************/
extern int array_int_7_33_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_7_33_231_string(const char *str, char **endptr);
extern int string_to_array_int_7_33_231(const char *str, void *pValue, char **endptr);
extern int is_array_int_7_33_231_allow_double_convertion();
extern int array_int_7_33_231_to_double(const void *pValue, double *nValue);
extern int get_array_int_7_33_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_7_33_231(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_7_33_231_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_7_33_231_Utils;

/****************************************************************
 ** array_int_264 
 ****************************************************************/
extern int array_int_264_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_264_string(const char *str, char **endptr);
extern int string_to_array_int_264(const char *str, void *pValue, char **endptr);
extern int is_array_int_264_allow_double_convertion();
extern int array_int_264_to_double(const void *pValue, double *nValue);
extern int get_array_int_264_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_264(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_264_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_264_Utils;

/****************************************************************
 ** array_int_4 
 ****************************************************************/
extern int array_int_4_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_4_string(const char *str, char **endptr);
extern int string_to_array_int_4(const char *str, void *pValue, char **endptr);
extern int is_array_int_4_allow_double_convertion();
extern int array_int_4_to_double(const void *pValue, double *nValue);
extern int get_array_int_4_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_4(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_4_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_4_Utils;

/****************************************************************
 ** array_int_1 
 ****************************************************************/
extern int array_int_1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_1_string(const char *str, char **endptr);
extern int string_to_array_int_1(const char *str, void *pValue, char **endptr);
extern int is_array_int_1_allow_double_convertion();
extern int array_int_1_to_double(const void *pValue, double *nValue);
extern int get_array_int_1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_1_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_1_Utils;

/****************************************************************
 ** array_int_5 
 ****************************************************************/
extern int array_int_5_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_5_string(const char *str, char **endptr);
extern int string_to_array_int_5(const char *str, void *pValue, char **endptr);
extern int is_array_int_5_allow_double_convertion();
extern int array_int_5_to_double(const void *pValue, double *nValue);
extern int get_array_int_5_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_5(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_5_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_5_Utils;

/****************************************************************
 ** array_int_236 
 ****************************************************************/
extern int array_int_236_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_236_string(const char *str, char **endptr);
extern int string_to_array_int_236(const char *str, void *pValue, char **endptr);
extern int is_array_int_236_allow_double_convertion();
extern int array_int_236_to_double(const void *pValue, double *nValue);
extern int get_array_int_236_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_236(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_236_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_236_Utils;

/****************************************************************
 ** array__18501 
 ****************************************************************/
extern int array__18501_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18501_string(const char *str, char **endptr);
extern int string_to_array__18501(const char *str, void *pValue, char **endptr);
extern int is_array__18501_allow_double_convertion();
extern int array__18501_to_double(const void *pValue, double *nValue);
extern int get_array__18501_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18501(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18501_default_value(void *pValue);
extern SimTypeUtils _Type_array__18501_Utils;

/****************************************************************
 ** array_bool_10 
 ****************************************************************/
extern int array_bool_10_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_10_string(const char *str, char **endptr);
extern int string_to_array_bool_10(const char *str, void *pValue, char **endptr);
extern int is_array_bool_10_allow_double_convertion();
extern int array_bool_10_to_double(const void *pValue, double *nValue);
extern int get_array_bool_10_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_10(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_10_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_10_Utils;

/****************************************************************
 ** NID_C 
 ****************************************************************/
extern int NID_C_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_C_string(const char *str, char **endptr);
extern int string_to_NID_C(const char *str, void *pValue, char **endptr);
extern int is_NID_C_allow_double_convertion();
extern int NID_C_to_double(const void *pValue, double *nValue);
extern int get_NID_C_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_C(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_C_default_value(void *pValue);
extern SimTypeUtils _Type_NID_C_Utils;

/****************************************************************
 ** NID_BG 
 ****************************************************************/
extern int NID_BG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_BG_string(const char *str, char **endptr);
extern int string_to_NID_BG(const char *str, void *pValue, char **endptr);
extern int is_NID_BG_allow_double_convertion();
extern int NID_BG_to_double(const void *pValue, double *nValue);
extern int get_NID_BG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_BG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_BG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_BG_Utils;

/****************************************************************
 ** Q_UPDOWN 
 ****************************************************************/
extern int Q_UPDOWN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_UPDOWN_string(const char *str, char **endptr);
extern int string_to_Q_UPDOWN(const char *str, void *pValue, char **endptr);
extern int is_Q_UPDOWN_allow_double_convertion();
extern int Q_UPDOWN_to_double(const void *pValue, double *nValue);
extern int get_Q_UPDOWN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_UPDOWN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_UPDOWN_default_value(void *pValue);
extern SimTypeUtils _Type_Q_UPDOWN_Utils;

/****************************************************************
 ** M_VERSION 
 ****************************************************************/
extern int M_VERSION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_VERSION_string(const char *str, char **endptr);
extern int string_to_M_VERSION(const char *str, void *pValue, char **endptr);
extern int is_M_VERSION_allow_double_convertion();
extern int M_VERSION_to_double(const void *pValue, double *nValue);
extern int get_M_VERSION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_VERSION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_VERSION_default_value(void *pValue);
extern SimTypeUtils _Type_M_VERSION_Utils;

/****************************************************************
 ** Q_MEDIA 
 ****************************************************************/
extern int Q_MEDIA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_MEDIA_string(const char *str, char **endptr);
extern int string_to_Q_MEDIA(const char *str, void *pValue, char **endptr);
extern int is_Q_MEDIA_allow_double_convertion();
extern int Q_MEDIA_to_double(const void *pValue, double *nValue);
extern int get_Q_MEDIA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_MEDIA(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_MEDIA_default_value(void *pValue);
extern SimTypeUtils _Type_Q_MEDIA_Utils;

/****************************************************************
 ** N_PIG 
 ****************************************************************/
extern int N_PIG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_PIG_string(const char *str, char **endptr);
extern int string_to_N_PIG(const char *str, void *pValue, char **endptr);
extern int is_N_PIG_allow_double_convertion();
extern int N_PIG_to_double(const void *pValue, double *nValue);
extern int get_N_PIG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_PIG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_PIG_default_value(void *pValue);
extern SimTypeUtils _Type_N_PIG_Utils;

/****************************************************************
 ** N_TOTAL 
 ****************************************************************/
extern int N_TOTAL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_TOTAL_string(const char *str, char **endptr);
extern int string_to_N_TOTAL(const char *str, void *pValue, char **endptr);
extern int is_N_TOTAL_allow_double_convertion();
extern int N_TOTAL_to_double(const void *pValue, double *nValue);
extern int get_N_TOTAL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_TOTAL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_TOTAL_default_value(void *pValue);
extern SimTypeUtils _Type_N_TOTAL_Utils;

/****************************************************************
 ** M_DUP 
 ****************************************************************/
extern int M_DUP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_DUP_string(const char *str, char **endptr);
extern int string_to_M_DUP(const char *str, void *pValue, char **endptr);
extern int is_M_DUP_allow_double_convertion();
extern int M_DUP_to_double(const void *pValue, double *nValue);
extern int get_M_DUP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_DUP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_DUP_default_value(void *pValue);
extern SimTypeUtils _Type_M_DUP_Utils;

/****************************************************************
 ** M_MCOUNT 
 ****************************************************************/
extern int M_MCOUNT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MCOUNT_string(const char *str, char **endptr);
extern int string_to_M_MCOUNT(const char *str, void *pValue, char **endptr);
extern int is_M_MCOUNT_allow_double_convertion();
extern int M_MCOUNT_to_double(const void *pValue, double *nValue);
extern int get_M_MCOUNT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MCOUNT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MCOUNT_default_value(void *pValue);
extern SimTypeUtils _Type_M_MCOUNT_Utils;

/****************************************************************
 ** Q_LINK 
 ****************************************************************/
extern int Q_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINK_string(const char *str, char **endptr);
extern int string_to_Q_LINK(const char *str, void *pValue, char **endptr);
extern int is_Q_LINK_allow_double_convertion();
extern int Q_LINK_to_double(const void *pValue, double *nValue);
extern int get_Q_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINK_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINK_Utils;

/****************************************************************
 ** NID_PACKET 
 ****************************************************************/
extern int NID_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_PACKET_string(const char *str, char **endptr);
extern int string_to_NID_PACKET(const char *str, void *pValue, char **endptr);
extern int is_NID_PACKET_allow_double_convertion();
extern int NID_PACKET_to_double(const void *pValue, double *nValue);
extern int get_NID_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_PACKET(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_PACKET_default_value(void *pValue);
extern SimTypeUtils _Type_NID_PACKET_Utils;

/****************************************************************
 ** Q_DIR 
 ****************************************************************/
extern int Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIR_string(const char *str, char **endptr);
extern int string_to_Q_DIR(const char *str, void *pValue, char **endptr);
extern int is_Q_DIR_allow_double_convertion();
extern int Q_DIR_to_double(const void *pValue, double *nValue);
extern int get_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIR_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIR_Utils;

/****************************************************************
 ** NID_MESSAGE 
 ****************************************************************/
extern int NID_MESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_MESSAGE_string(const char *str, char **endptr);
extern int string_to_NID_MESSAGE(const char *str, void *pValue, char **endptr);
extern int is_NID_MESSAGE_allow_double_convertion();
extern int NID_MESSAGE_to_double(const void *pValue, double *nValue);
extern int get_NID_MESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_MESSAGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_MESSAGE_default_value(void *pValue);
extern SimTypeUtils _Type_NID_MESSAGE_Utils;

/****************************************************************
 ** T_TRAIN 
 ****************************************************************/
extern int T_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_TRAIN_string(const char *str, char **endptr);
extern int string_to_T_TRAIN(const char *str, void *pValue, char **endptr);
extern int is_T_TRAIN_allow_double_convertion();
extern int T_TRAIN_to_double(const void *pValue, double *nValue);
extern int get_T_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_TRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_TRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_T_TRAIN_Utils;

/****************************************************************
 ** M_ACK 
 ****************************************************************/
extern int M_ACK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_ACK_string(const char *str, char **endptr);
extern int string_to_M_ACK(const char *str, void *pValue, char **endptr);
extern int is_M_ACK_allow_double_convertion();
extern int M_ACK_to_double(const void *pValue, double *nValue);
extern int get_M_ACK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_ACK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_ACK_default_value(void *pValue);
extern SimTypeUtils _Type_M_ACK_Utils;

/****************************************************************
 ** NID_LRBG 
 ****************************************************************/
extern int NID_LRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_LRBG_string(const char *str, char **endptr);
extern int string_to_NID_LRBG(const char *str, void *pValue, char **endptr);
extern int is_NID_LRBG_allow_double_convertion();
extern int NID_LRBG_to_double(const void *pValue, double *nValue);
extern int get_NID_LRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_LRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_LRBG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_LRBG_Utils;

/****************************************************************
 ** NID_EM 
 ****************************************************************/
extern int NID_EM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_EM_string(const char *str, char **endptr);
extern int string_to_NID_EM(const char *str, void *pValue, char **endptr);
extern int is_NID_EM_allow_double_convertion();
extern int NID_EM_to_double(const void *pValue, double *nValue);
extern int get_NID_EM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_EM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_EM_default_value(void *pValue);
extern SimTypeUtils _Type_NID_EM_Utils;

/****************************************************************
 ** Q_SCALE 
 ****************************************************************/
extern int Q_SCALE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_SCALE_string(const char *str, char **endptr);
extern int string_to_Q_SCALE(const char *str, void *pValue, char **endptr);
extern int is_Q_SCALE_allow_double_convertion();
extern int Q_SCALE_to_double(const void *pValue, double *nValue);
extern int get_Q_SCALE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_SCALE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_SCALE_default_value(void *pValue);
extern SimTypeUtils _Type_Q_SCALE_Utils;

/****************************************************************
 ** D_SR 
 ****************************************************************/
extern int D_SR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_SR_string(const char *str, char **endptr);
extern int string_to_D_SR(const char *str, void *pValue, char **endptr);
extern int is_D_SR_allow_double_convertion();
extern int D_SR_to_double(const void *pValue, double *nValue);
extern int get_D_SR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_SR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_SR_default_value(void *pValue);
extern SimTypeUtils _Type_D_SR_Utils;

/****************************************************************
 ** D_REF 
 ****************************************************************/
extern int D_REF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_REF_string(const char *str, char **endptr);
extern int string_to_D_REF(const char *str, void *pValue, char **endptr);
extern int is_D_REF_allow_double_convertion();
extern int D_REF_to_double(const void *pValue, double *nValue);
extern int get_D_REF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_REF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_REF_default_value(void *pValue);
extern SimTypeUtils _Type_D_REF_Utils;

/****************************************************************
 ** D_EMERGENCYSTOP 
 ****************************************************************/
extern int D_EMERGENCYSTOP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_EMERGENCYSTOP_string(const char *str, char **endptr);
extern int string_to_D_EMERGENCYSTOP(const char *str, void *pValue, char **endptr);
extern int is_D_EMERGENCYSTOP_allow_double_convertion();
extern int D_EMERGENCYSTOP_to_double(const void *pValue, double *nValue);
extern int get_D_EMERGENCYSTOP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_EMERGENCYSTOP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_EMERGENCYSTOP_default_value(void *pValue);
extern SimTypeUtils _Type_D_EMERGENCYSTOP_Utils;

/****************************************************************
 ** M_MODE 
 ****************************************************************/
extern int M_MODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MODE_string(const char *str, char **endptr);
extern int string_to_M_MODE(const char *str, void *pValue, char **endptr);
extern int is_M_MODE_allow_double_convertion();
extern int M_MODE_to_double(const void *pValue, double *nValue);
extern int get_M_MODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MODE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MODE_default_value(void *pValue);
extern SimTypeUtils _Type_M_MODE_Utils;

/****************************************************************
 ** Q_NVLOCACC 
 ****************************************************************/
extern int Q_NVLOCACC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVLOCACC_string(const char *str, char **endptr);
extern int string_to_Q_NVLOCACC(const char *str, void *pValue, char **endptr);
extern int is_Q_NVLOCACC_allow_double_convertion();
extern int Q_NVLOCACC_to_double(const void *pValue, double *nValue);
extern int get_Q_NVLOCACC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVLOCACC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVLOCACC_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVLOCACC_Utils;

/****************************************************************
 ** Q_DIRLRBG 
 ****************************************************************/
extern int Q_DIRLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIRLRBG_string(const char *str, char **endptr);
extern int string_to_Q_DIRLRBG(const char *str, void *pValue, char **endptr);
extern int is_Q_DIRLRBG_allow_double_convertion();
extern int Q_DIRLRBG_to_double(const void *pValue, double *nValue);
extern int get_Q_DIRLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIRLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIRLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIRLRBG_Utils;

/****************************************************************
 ** Q_DIRTRAIN 
 ****************************************************************/
extern int Q_DIRTRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIRTRAIN_string(const char *str, char **endptr);
extern int string_to_Q_DIRTRAIN(const char *str, void *pValue, char **endptr);
extern int is_Q_DIRTRAIN_allow_double_convertion();
extern int Q_DIRTRAIN_to_double(const void *pValue, double *nValue);
extern int get_Q_DIRTRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIRTRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIRTRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIRTRAIN_Utils;

/****************************************************************
 ** Q_LINKORIENTATION 
 ****************************************************************/
extern int Q_LINKORIENTATION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINKORIENTATION_string(const char *str, char **endptr);
extern int string_to_Q_LINKORIENTATION(const char *str, void *pValue, char **endptr);
extern int is_Q_LINKORIENTATION_allow_double_convertion();
extern int Q_LINKORIENTATION_to_double(const void *pValue, double *nValue);
extern int get_Q_LINKORIENTATION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINKORIENTATION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINKORIENTATION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINKORIENTATION_Utils;

/****************************************************************
 ** D_LINK 
 ****************************************************************/
extern int D_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_LINK_string(const char *str, char **endptr);
extern int string_to_D_LINK(const char *str, void *pValue, char **endptr);
extern int is_D_LINK_allow_double_convertion();
extern int D_LINK_to_double(const void *pValue, double *nValue);
extern int get_D_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_LINK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_LINK_default_value(void *pValue);
extern SimTypeUtils _Type_D_LINK_Utils;

/****************************************************************
 ** Q_NEWCOUNTRY 
 ****************************************************************/
extern int Q_NEWCOUNTRY_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NEWCOUNTRY_string(const char *str, char **endptr);
extern int string_to_Q_NEWCOUNTRY(const char *str, void *pValue, char **endptr);
extern int is_Q_NEWCOUNTRY_allow_double_convertion();
extern int Q_NEWCOUNTRY_to_double(const void *pValue, double *nValue);
extern int get_Q_NEWCOUNTRY_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NEWCOUNTRY(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NEWCOUNTRY_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NEWCOUNTRY_Utils;

/****************************************************************
 ** Q_LINKREACTION 
 ****************************************************************/
extern int Q_LINKREACTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINKREACTION_string(const char *str, char **endptr);
extern int string_to_Q_LINKREACTION(const char *str, void *pValue, char **endptr);
extern int is_Q_LINKREACTION_allow_double_convertion();
extern int Q_LINKREACTION_to_double(const void *pValue, double *nValue);
extern int get_Q_LINKREACTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINKREACTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINKREACTION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINKREACTION_Utils;

/****************************************************************
 ** Q_LOCACC 
 ****************************************************************/
extern int Q_LOCACC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LOCACC_string(const char *str, char **endptr);
extern int string_to_Q_LOCACC(const char *str, void *pValue, char **endptr);
extern int is_Q_LOCACC_allow_double_convertion();
extern int Q_LOCACC_to_double(const void *pValue, double *nValue);
extern int get_Q_LOCACC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LOCACC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LOCACC_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LOCACC_Utils;

/****************************************************************
 ** Q_DLRBG 
 ****************************************************************/
extern int Q_DLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DLRBG_string(const char *str, char **endptr);
extern int string_to_Q_DLRBG(const char *str, void *pValue, char **endptr);
extern int is_Q_DLRBG_allow_double_convertion();
extern int Q_DLRBG_to_double(const void *pValue, double *nValue);
extern int get_Q_DLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DLRBG_Utils;

/****************************************************************
 ** MetadataTruthtable_T 
 ****************************************************************/
extern int MetadataTruthtable_T_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MetadataTruthtable_T_string(const char *str, char **endptr);
extern int string_to_MetadataTruthtable_T(const char *str, void *pValue, char **endptr);
extern int is_MetadataTruthtable_T_allow_double_convertion();
extern int MetadataTruthtable_T_to_double(const void *pValue, double *nValue);
extern int get_MetadataTruthtable_T_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MetadataTruthtable_T(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MetadataTruthtable_T_default_value(void *pValue);
extern SimTypeUtils _Type_MetadataTruthtable_T_Utils;

/****************************************************************
 ** L_PACKET 
 ****************************************************************/
extern int L_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_PACKET_string(const char *str, char **endptr);
extern int string_to_L_PACKET(const char *str, void *pValue, char **endptr);
extern int is_L_PACKET_allow_double_convertion();
extern int L_PACKET_to_double(const void *pValue, double *nValue);
extern int get_L_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_PACKET(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_PACKET_default_value(void *pValue);
extern SimTypeUtils _Type_L_PACKET_Utils;

/****************************************************************
 ** T_CYCLOC 
 ****************************************************************/
extern int T_CYCLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_CYCLOC_string(const char *str, char **endptr);
extern int string_to_T_CYCLOC(const char *str, void *pValue, char **endptr);
extern int is_T_CYCLOC_allow_double_convertion();
extern int T_CYCLOC_to_double(const void *pValue, double *nValue);
extern int get_T_CYCLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_CYCLOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_CYCLOC_default_value(void *pValue);
extern SimTypeUtils _Type_T_CYCLOC_Utils;

/****************************************************************
 ** D_CYCLOC 
 ****************************************************************/
extern int D_CYCLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_CYCLOC_string(const char *str, char **endptr);
extern int string_to_D_CYCLOC(const char *str, void *pValue, char **endptr);
extern int is_D_CYCLOC_allow_double_convertion();
extern int D_CYCLOC_to_double(const void *pValue, double *nValue);
extern int get_D_CYCLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_CYCLOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_CYCLOC_default_value(void *pValue);
extern SimTypeUtils _Type_D_CYCLOC_Utils;

/****************************************************************
 ** M_LOC 
 ****************************************************************/
extern int M_LOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LOC_string(const char *str, char **endptr);
extern int string_to_M_LOC(const char *str, void *pValue, char **endptr);
extern int is_M_LOC_allow_double_convertion();
extern int M_LOC_to_double(const void *pValue, double *nValue);
extern int get_M_LOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LOC_default_value(void *pValue);
extern SimTypeUtils _Type_M_LOC_Utils;

/****************************************************************
 ** N_ITER 
 ****************************************************************/
extern int N_ITER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_ITER_string(const char *str, char **endptr);
extern int string_to_N_ITER(const char *str, void *pValue, char **endptr);
extern int is_N_ITER_allow_double_convertion();
extern int N_ITER_to_double(const void *pValue, double *nValue);
extern int get_N_ITER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_ITER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_ITER_default_value(void *pValue);
extern SimTypeUtils _Type_N_ITER_Utils;

/****************************************************************
 ** D_LOC 
 ****************************************************************/
extern int D_LOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_LOC_string(const char *str, char **endptr);
extern int string_to_D_LOC(const char *str, void *pValue, char **endptr);
extern int is_D_LOC_allow_double_convertion();
extern int D_LOC_to_double(const void *pValue, double *nValue);
extern int get_D_LOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_LOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_LOC_default_value(void *pValue);
extern SimTypeUtils _Type_D_LOC_Utils;

/****************************************************************
 ** Q_LGTLOC 
 ****************************************************************/
extern int Q_LGTLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LGTLOC_string(const char *str, char **endptr);
extern int string_to_Q_LGTLOC(const char *str, void *pValue, char **endptr);
extern int is_Q_LGTLOC_allow_double_convertion();
extern int Q_LGTLOC_to_double(const void *pValue, double *nValue);
extern int get_Q_LGTLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LGTLOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LGTLOC_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LGTLOC_Utils;

/****************************************************************
 ** Q_RBC 
 ****************************************************************/
extern int Q_RBC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_RBC_string(const char *str, char **endptr);
extern int string_to_Q_RBC(const char *str, void *pValue, char **endptr);
extern int is_Q_RBC_allow_double_convertion();
extern int Q_RBC_to_double(const void *pValue, double *nValue);
extern int get_Q_RBC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_RBC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_RBC_default_value(void *pValue);
extern SimTypeUtils _Type_Q_RBC_Utils;

/****************************************************************
 ** NID_RBC 
 ****************************************************************/
extern int NID_RBC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_RBC_string(const char *str, char **endptr);
extern int string_to_NID_RBC(const char *str, void *pValue, char **endptr);
extern int is_NID_RBC_allow_double_convertion();
extern int NID_RBC_to_double(const void *pValue, double *nValue);
extern int get_NID_RBC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_RBC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_RBC_default_value(void *pValue);
extern SimTypeUtils _Type_NID_RBC_Utils;

/****************************************************************
 ** NID_RADIO 
 ****************************************************************/
extern int NID_RADIO_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_RADIO_string(const char *str, char **endptr);
extern int string_to_NID_RADIO(const char *str, void *pValue, char **endptr);
extern int is_NID_RADIO_allow_double_convertion();
extern int NID_RADIO_to_double(const void *pValue, double *nValue);
extern int get_NID_RADIO_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_RADIO(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_RADIO_default_value(void *pValue);
extern SimTypeUtils _Type_NID_RADIO_Utils;

/****************************************************************
 ** Q_SLEEPSESSION 
 ****************************************************************/
extern int Q_SLEEPSESSION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_SLEEPSESSION_string(const char *str, char **endptr);
extern int string_to_Q_SLEEPSESSION(const char *str, void *pValue, char **endptr);
extern int is_Q_SLEEPSESSION_allow_double_convertion();
extern int Q_SLEEPSESSION_to_double(const void *pValue, double *nValue);
extern int get_Q_SLEEPSESSION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_SLEEPSESSION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_SLEEPSESSION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_SLEEPSESSION_Utils;

/****************************************************************
 ** NID_MN 
 ****************************************************************/
extern int NID_MN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_MN_string(const char *str, char **endptr);
extern int string_to_NID_MN(const char *str, void *pValue, char **endptr);
extern int is_NID_MN_allow_double_convertion();
extern int NID_MN_to_double(const void *pValue, double *nValue);
extern int get_NID_MN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_MN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_MN_default_value(void *pValue);
extern SimTypeUtils _Type_NID_MN_Utils;

/****************************************************************
 ** M_LEVEL 
 ****************************************************************/
extern int M_LEVEL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LEVEL_string(const char *str, char **endptr);
extern int string_to_M_LEVEL(const char *str, void *pValue, char **endptr);
extern int is_M_LEVEL_allow_double_convertion();
extern int M_LEVEL_to_double(const void *pValue, double *nValue);
extern int get_M_LEVEL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LEVEL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LEVEL_default_value(void *pValue);
extern SimTypeUtils _Type_M_LEVEL_Utils;

/****************************************************************
 ** ReceivedBG_CheckBGInputChannel_Pkg 
 ****************************************************************/
extern int ReceivedBG_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ReceivedBG_CheckBGInputChannel_Pkg_string(const char *str, char **endptr);
extern int string_to_ReceivedBG_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr);
extern int is_ReceivedBG_CheckBGInputChannel_Pkg_allow_double_convertion();
extern int ReceivedBG_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nValue);
extern int get_ReceivedBG_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ReceivedBG_CheckBGInputChannel_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ReceivedBG_CheckBGInputChannel_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils;

/****************************************************************
 ** Completeness_CheckBGInputChannel_Pkg 
 ****************************************************************/
extern int Completeness_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Completeness_CheckBGInputChannel_Pkg_string(const char *str, char **endptr);
extern int string_to_Completeness_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Completeness_CheckBGInputChannel_Pkg_allow_double_convertion();
extern int Completeness_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Completeness_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Completeness_CheckBGInputChannel_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Completeness_CheckBGInputChannel_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Completeness_CheckBGInputChannel_Pkg_Utils;

/****************************************************************
 ** Consistency_CheckBGInputChannel_Pkg 
 ****************************************************************/
extern int Consistency_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Consistency_CheckBGInputChannel_Pkg_string(const char *str, char **endptr);
extern int string_to_Consistency_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Consistency_CheckBGInputChannel_Pkg_allow_double_convertion();
extern int Consistency_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Consistency_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Consistency_CheckBGInputChannel_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Consistency_CheckBGInputChannel_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Consistency_CheckBGInputChannel_Pkg_Utils;

/****************************************************************
 ** ReceivedBGs_CheckBGInputChannel_Pkg 
 ****************************************************************/
extern int ReceivedBGs_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ReceivedBGs_CheckBGInputChannel_Pkg_string(const char *str, char **endptr);
extern int string_to_ReceivedBGs_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr);
extern int is_ReceivedBGs_CheckBGInputChannel_Pkg_allow_double_convertion();
extern int ReceivedBGs_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nValue);
extern int get_ReceivedBGs_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ReceivedBGs_CheckBGInputChannel_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ReceivedBGs_CheckBGInputChannel_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_ReceivedBGs_CheckBGInputChannel_Pkg_Utils;

/****************************************************************
 ** checkedBG_CheckBGInputChannel_Pkg 
 ****************************************************************/
extern int checkedBG_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_checkedBG_CheckBGInputChannel_Pkg_string(const char *str, char **endptr);
extern int string_to_checkedBG_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr);
extern int is_checkedBG_CheckBGInputChannel_Pkg_allow_double_convertion();
extern int checkedBG_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nValue);
extern int get_checkedBG_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_checkedBG_CheckBGInputChannel_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_checkedBG_CheckBGInputChannel_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_checkedBG_CheckBGInputChannel_Pkg_Utils;

/****************************************************************
 ** delaytime_T_CheckBGInputChannel_Pkg 
 ****************************************************************/
extern int delaytime_T_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_delaytime_T_CheckBGInputChannel_Pkg_string(const char *str, char **endptr);
extern int string_to_delaytime_T_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr);
extern int is_delaytime_T_CheckBGInputChannel_Pkg_allow_double_convertion();
extern int delaytime_T_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nValue);
extern int get_delaytime_T_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_delaytime_T_CheckBGInputChannel_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_delaytime_T_CheckBGInputChannel_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_delaytime_T_CheckBGInputChannel_Pkg_Utils;

/****************************************************************
 ** outBGchecks_CheckBGInputChannel_Pkg 
 ****************************************************************/
extern int outBGchecks_CheckBGInputChannel_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_outBGchecks_CheckBGInputChannel_Pkg_string(const char *str, char **endptr);
extern int string_to_outBGchecks_CheckBGInputChannel_Pkg(const char *str, void *pValue, char **endptr);
extern int is_outBGchecks_CheckBGInputChannel_Pkg_allow_double_convertion();
extern int outBGchecks_CheckBGInputChannel_Pkg_to_double(const void *pValue, double *nValue);
extern int get_outBGchecks_CheckBGInputChannel_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_outBGchecks_CheckBGInputChannel_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_outBGchecks_CheckBGInputChannel_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_outBGchecks_CheckBGInputChannel_Pkg_Utils;

/****************************************************************
 ** BGCollector_T_Receive_TrackSide_Msg_Pkg 
 ****************************************************************/
extern int BGCollector_T_Receive_TrackSide_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BGCollector_T_Receive_TrackSide_Msg_Pkg_string(const char *str, char **endptr);
extern int string_to_BGCollector_T_Receive_TrackSide_Msg_Pkg(const char *str, void *pValue, char **endptr);
extern int is_BGCollector_T_Receive_TrackSide_Msg_Pkg_allow_double_convertion();
extern int BGCollector_T_Receive_TrackSide_Msg_Pkg_to_double(const void *pValue, double *nValue);
extern int get_BGCollector_T_Receive_TrackSide_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BGCollector_T_Receive_TrackSide_Msg_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BGCollector_T_Receive_TrackSide_Msg_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils;

/****************************************************************
 ** TelegramStore_T_Receive_TrackSide_Msg_Pkg 
 ****************************************************************/
extern int TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TelegramStore_T_Receive_TrackSide_Msg_Pkg_string(const char *str, char **endptr);
extern int string_to_TelegramStore_T_Receive_TrackSide_Msg_Pkg(const char *str, void *pValue, char **endptr);
extern int is_TelegramStore_T_Receive_TrackSide_Msg_Pkg_allow_double_convertion();
extern int TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_double(const void *pValue, double *nValue);
extern int get_TelegramStore_T_Receive_TrackSide_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TelegramStore_T_Receive_TrackSide_Msg_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TelegramStore_T_Receive_TrackSide_Msg_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_TelegramStore_T_Receive_TrackSide_Msg_Pkg_Utils;

/****************************************************************
 ** MsgSource_T_Common_Types_Pkg 
 ****************************************************************/
extern int MsgSource_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MsgSource_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_MsgSource_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_MsgSource_T_Common_Types_Pkg_allow_double_convertion();
extern int MsgSource_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_MsgSource_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MsgSource_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MsgSource_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_MsgSource_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/
extern int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedPackets_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedPackets_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** Metadata_T_Common_Types_Pkg 
 ****************************************************************/
extern int Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Metadata_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Metadata_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/
extern int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MetadataElement_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_MetadataElement_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/
extern int CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_CompressedPacketData_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedPacketData_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedPacketData_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedPacketData_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** TrackSide_ForCheck_T_Common_Types_Pkg 
 ****************************************************************/
extern int TrackSide_ForCheck_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TrackSide_ForCheck_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_TrackSide_ForCheck_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_TrackSide_ForCheck_T_Common_Types_Pkg_allow_double_convertion();
extern int TrackSide_ForCheck_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_TrackSide_ForCheck_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TrackSide_ForCheck_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TrackSide_ForCheck_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_TrackSide_ForCheck_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** RadioMetadata_T_Common_Types_Pkg 
 ****************************************************************/
extern int RadioMetadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_RadioMetadata_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_RadioMetadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_RadioMetadata_T_Common_Types_Pkg_allow_double_convertion();
extern int RadioMetadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_RadioMetadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_RadioMetadata_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_RadioMetadata_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_RadioMetadata_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** ReceivedMessage_T_Common_Types_Pkg 
 ****************************************************************/
extern int ReceivedMessage_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ReceivedMessage_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_ReceivedMessage_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_ReceivedMessage_T_Common_Types_Pkg_allow_double_convertion();
extern int ReceivedMessage_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_ReceivedMessage_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ReceivedMessage_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ReceivedMessage_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_ReceivedMessage_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** PositionReportParameter_T_Common_Types_Pkg 
 ****************************************************************/
extern int PositionReportParameter_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PositionReportParameter_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_PositionReportParameter_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PositionReportParameter_T_Common_Types_Pkg_allow_double_convertion();
extern int PositionReportParameter_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PositionReportParameter_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PositionReportParameter_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PositionReportParameter_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PositionReportParameter_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** radioManagementMessage_T_Common_Types_Pkg 
 ****************************************************************/
extern int radioManagementMessage_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_radioManagementMessage_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_radioManagementMessage_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_radioManagementMessage_T_Common_Types_Pkg_allow_double_convertion();
extern int radioManagementMessage_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_radioManagementMessage_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_radioManagementMessage_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_radioManagementMessage_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_radioManagementMessage_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** MSG_Errors_T_Common_Types_Pkg 
 ****************************************************************/
extern int MSG_Errors_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MSG_Errors_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_MSG_Errors_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_MSG_Errors_T_Common_Types_Pkg_allow_double_convertion();
extern int MSG_Errors_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_MSG_Errors_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MSG_Errors_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MSG_Errors_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_MSG_Errors_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** centerOfBalisePosition_T_BG_Types_Pkg 
 ****************************************************************/
extern int centerOfBalisePosition_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_centerOfBalisePosition_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_centerOfBalisePosition_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_centerOfBalisePosition_T_BG_Types_Pkg_allow_double_convertion();
extern int centerOfBalisePosition_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_centerOfBalisePosition_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_centerOfBalisePosition_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_centerOfBalisePosition_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** TelegramArray_T_BG_Types_Pkg 
 ****************************************************************/
extern int TelegramArray_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TelegramArray_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_TelegramArray_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_TelegramArray_T_BG_Types_Pkg_allow_double_convertion();
extern int TelegramArray_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_TelegramArray_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TelegramArray_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TelegramArray_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_TelegramArray_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** Telegram_T_BG_Types_Pkg 
 ****************************************************************/
extern int Telegram_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Telegram_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Telegram_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Telegram_T_BG_Types_Pkg_allow_double_convertion();
extern int Telegram_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Telegram_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Telegram_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Telegram_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Telegram_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg 
 ****************************************************************/
extern int TelegramHeader_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TelegramHeader_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_TelegramHeader_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_TelegramHeader_T_BG_Types_Pkg_allow_double_convertion();
extern int TelegramHeader_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_TelegramHeader_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TelegramHeader_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TelegramHeader_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_TelegramHeader_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** BG_Message_T_BG_Types_Pkg 
 ****************************************************************/
extern int BG_Message_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BG_Message_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_BG_Message_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_BG_Message_T_BG_Types_Pkg_allow_double_convertion();
extern int BG_Message_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_BG_Message_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BG_Message_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BG_Message_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_BG_Message_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** BG_Header_T_BG_Types_Pkg 
 ****************************************************************/
extern int BG_Header_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BG_Header_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_BG_Header_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_BG_Header_T_BG_Types_Pkg_allow_double_convertion();
extern int BG_Header_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_BG_Header_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BG_Header_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BG_Header_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_BG_Header_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** LinkedBG_T_BG_Types_Pkg 
 ****************************************************************/
extern int LinkedBG_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_LinkedBG_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_LinkedBG_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_LinkedBG_T_BG_Types_Pkg_allow_double_convertion();
extern int LinkedBG_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_LinkedBG_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_LinkedBG_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_LinkedBG_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_LinkedBG_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** passedBG_T_BG_Types_Pkg 
 ****************************************************************/
extern int passedBG_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_passedBG_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_passedBG_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_passedBG_T_BG_Types_Pkg_allow_double_convertion();
extern int passedBG_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_passedBG_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_passedBG_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_passedBG_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_passedBG_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** LinkedBGs_T_BG_Types_Pkg 
 ****************************************************************/
extern int LinkedBGs_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_LinkedBGs_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_LinkedBGs_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_LinkedBGs_T_BG_Types_Pkg_allow_double_convertion();
extern int LinkedBGs_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_LinkedBGs_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_LinkedBGs_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_LinkedBGs_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_LinkedBGs_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** odometry_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int odometry_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_odometry_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_odometry_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_odometry_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int odometry_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_odometry_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_odometry_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_odometry_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_odometry_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** T_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int T_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_T_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int T_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** OdometryLocations_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int OdometryLocations_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OdometryLocations_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_OdometryLocations_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int OdometryLocations_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OdometryLocations_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OdometryLocations_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** L_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int L_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_L_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_L_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int L_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_L_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** OdometrySpeeds_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OdometrySpeeds_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OdometrySpeeds_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OdometrySpeeds_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** V_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int V_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_V_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_V_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int V_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_V_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** A_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int A_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_A_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_A_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_A_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int A_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_A_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_A_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_A_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** odoMotionState_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int odoMotionState_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_odoMotionState_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_odoMotionState_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_odoMotionState_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int odoMotionState_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_odoMotionState_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_odoMotionState_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_odoMotionState_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** odoMotionDirection_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_odoMotionDirection_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_odoMotionDirection_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_odoMotionDirection_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_odoMotionDirection_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** LocWithInAcc_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_LocWithInAcc_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_LocWithInAcc_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** Location_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int Location_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Location_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_Location_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Location_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int Location_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Location_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Location_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Location_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Location_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** Speed_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int Speed_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Speed_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_Speed_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Speed_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int Speed_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Speed_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Speed_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Speed_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Speed_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** RadioMessage_T_Radio_Types_Pkg 
 ****************************************************************/
extern int RadioMessage_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_RadioMessage_T_Radio_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_RadioMessage_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_RadioMessage_T_Radio_Types_Pkg_allow_double_convertion();
extern int RadioMessage_T_Radio_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_RadioMessage_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_RadioMessage_T_Radio_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_RadioMessage_T_Radio_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_RadioMessage_T_Radio_Types_Pkg_Utils;

/****************************************************************
 ** Radio_TrackTrain_Header_T_Radio_Types_Pkg 
 ****************************************************************/
extern int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_allow_double_convertion();
extern int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils;

/****************************************************************
 ** sessionStatus_Type_Radio_Types_Pkg 
 ****************************************************************/
extern int sessionStatus_Type_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_sessionStatus_Type_Radio_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_sessionStatus_Type_Radio_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_sessionStatus_Type_Radio_Types_Pkg_allow_double_convertion();
extern int sessionStatus_Type_Radio_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_sessionStatus_Type_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_sessionStatus_Type_Radio_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_sessionStatus_Type_Radio_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_sessionStatus_Type_Radio_Types_Pkg_Utils;

/****************************************************************
 ** API_TrackSideInput_T_API_Msg_Pkg 
 ****************************************************************/
extern int API_TrackSideInput_T_API_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_API_TrackSideInput_T_API_Msg_Pkg_string(const char *str, char **endptr);
extern int string_to_API_TrackSideInput_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr);
extern int is_API_TrackSideInput_T_API_Msg_Pkg_allow_double_convertion();
extern int API_TrackSideInput_T_API_Msg_Pkg_to_double(const void *pValue, double *nValue);
extern int get_API_TrackSideInput_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_API_TrackSideInput_T_API_Msg_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_API_TrackSideInput_T_API_Msg_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_API_TrackSideInput_T_API_Msg_Pkg_Utils;

/****************************************************************
 ** API_TelegramHeader_T_API_Msg_Pkg 
 ****************************************************************/
extern int API_TelegramHeader_T_API_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_API_TelegramHeader_T_API_Msg_Pkg_string(const char *str, char **endptr);
extern int string_to_API_TelegramHeader_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr);
extern int is_API_TelegramHeader_T_API_Msg_Pkg_allow_double_convertion();
extern int API_TelegramHeader_T_API_Msg_Pkg_to_double(const void *pValue, double *nValue);
extern int get_API_TelegramHeader_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_API_TelegramHeader_T_API_Msg_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_API_TelegramHeader_T_API_Msg_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_API_TelegramHeader_T_API_Msg_Pkg_Utils;

/****************************************************************
 ** API_RadioMsgHeader_T_API_Msg_Pkg 
 ****************************************************************/
extern int API_RadioMsgHeader_T_API_Msg_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_API_RadioMsgHeader_T_API_Msg_Pkg_string(const char *str, char **endptr);
extern int string_to_API_RadioMsgHeader_T_API_Msg_Pkg(const char *str, void *pValue, char **endptr);
extern int is_API_RadioMsgHeader_T_API_Msg_Pkg_allow_double_convertion();
extern int API_RadioMsgHeader_T_API_Msg_Pkg_to_double(const void *pValue, double *nValue);
extern int get_API_RadioMsgHeader_T_API_Msg_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_API_RadioMsgHeader_T_API_Msg_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_API_RadioMsgHeader_T_API_Msg_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_API_RadioMsgHeader_T_API_Msg_Pkg_Utils;

/****************************************************************
 ** positionedBG_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int positionedBG_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_positionedBG_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_positionedBG_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_positionedBG_T_TrainPosition_Types_Pck_allow_double_convertion();
extern int positionedBG_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_positionedBG_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_positionedBG_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_positionedBG_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_positionedBG_T_TrainPosition_Types_Pck_Utils;

/****************************************************************
 ** infoFromLinking_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int infoFromLinking_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_infoFromLinking_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_infoFromLinking_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_infoFromLinking_T_TrainPosition_Types_Pck_allow_double_convertion();
extern int infoFromLinking_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_infoFromLinking_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_infoFromLinking_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_infoFromLinking_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_infoFromLinking_T_TrainPosition_Types_Pck_Utils;

/****************************************************************
 ** positionedBGs_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int positionedBGs_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_positionedBGs_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_positionedBGs_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_positionedBGs_T_TrainPosition_Types_Pck_allow_double_convertion();
extern int positionedBGs_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_positionedBGs_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_positionedBGs_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_positionedBGs_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_positionedBGs_T_TrainPosition_Types_Pck_Utils;

/****************************************************************
 ** trainPosition_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int trainPosition_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_trainPosition_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_trainPosition_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_trainPosition_T_TrainPosition_Types_Pck_allow_double_convertion();
extern int trainPosition_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_trainPosition_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_trainPosition_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_trainPosition_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_trainPosition_T_TrainPosition_Types_Pck_Utils;

/****************************************************************
 ** P58_PositionReportParameters_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P58_PositionReportParameters_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P58_PositionReportParameters_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P58_PositionReportParameters_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P58_PositionReportParameters_T_Packet_Types_Pkg_allow_double_convertion();
extern int P58_PositionReportParameters_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P58_PositionReportParameters_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P58_PositionReportParameters_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P58_PositionReportParameters_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P58_PositionReportParameters_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** IterPacket58List_T_Packet_Types_Pkg 
 ****************************************************************/
extern int IterPacket58List_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_IterPacket58List_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_IterPacket58List_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_IterPacket58List_T_Packet_Types_Pkg_allow_double_convertion();
extern int IterPacket58List_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_IterPacket58List_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_IterPacket58List_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_IterPacket58List_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_IterPacket58List_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** IterPacket58_T_Packet_Types_Pkg 
 ****************************************************************/
extern int IterPacket58_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_IterPacket58_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_IterPacket58_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_IterPacket58_T_Packet_Types_Pkg_allow_double_convertion();
extern int IterPacket58_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_IterPacket58_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_IterPacket58_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_IterPacket58_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_IterPacket58_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P42_SessionManagement_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P42_SessionManagement_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P42_SessionManagement_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P42_SessionManagement_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P42_SessionManagement_T_Packet_Types_Pkg_allow_double_convertion();
extern int P42_SessionManagement_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P42_SessionManagement_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P42_SessionManagement_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P42_SessionManagement_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P42_SessionManagement_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P45_RadioNetworkRegistration_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_allow_double_convertion();
extern int P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** CompressedBaliseMessage_TM 
 ****************************************************************/
extern int CompressedBaliseMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedBaliseMessage_TM_string(const char *str, char **endptr);
extern int string_to_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr);
extern int is_CompressedBaliseMessage_TM_allow_double_convertion();
extern int CompressedBaliseMessage_TM_to_double(const void *pValue, double *nValue);
extern int get_CompressedBaliseMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedBaliseMessage_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedBaliseMessage_TM_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedBaliseMessage_TM_Utils;

/****************************************************************
 ** BaliseTelegramHeader_int_T_TM 
 ****************************************************************/
extern int BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseTelegramHeader_int_T_TM_string(const char *str, char **endptr);
extern int string_to_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_BaliseTelegramHeader_int_T_TM_allow_double_convertion();
extern int BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_BaliseTelegramHeader_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseTelegramHeader_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseTelegramHeader_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseTelegramHeader_int_T_TM_Utils;

/****************************************************************
 ** OrBG_TM 
 ****************************************************************/
extern int OrBG_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OrBG_TM_string(const char *str, char **endptr);
extern int string_to_OrBG_TM(const char *str, void *pValue, char **endptr);
extern int is_OrBG_TM_allow_double_convertion();
extern int OrBG_TM_to_double(const void *pValue, double *nValue);
extern int get_OrBG_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OrBG_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OrBG_TM_default_value(void *pValue);
extern SimTypeUtils _Type_OrBG_TM_Utils;

/****************************************************************
 ** OrLine_TM 
 ****************************************************************/
extern int OrLine_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OrLine_TM_string(const char *str, char **endptr);
extern int string_to_OrLine_TM(const char *str, void *pValue, char **endptr);
extern int is_OrLine_TM_allow_double_convertion();
extern int OrLine_TM_to_double(const void *pValue, double *nValue);
extern int get_OrLine_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OrLine_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OrLine_TM_default_value(void *pValue);
extern SimTypeUtils _Type_OrLine_TM_Utils;

/****************************************************************
 ** P005_trackside_int_T_TM 
 ****************************************************************/
extern int P005_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_trackside_int_T_TM_allow_double_convertion();
extern int P005_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_trackside_int_T_TM_Utils;

/****************************************************************
 ** P005_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P005_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_trackide_sectionlist_T_TM_allow_double_convertion();
extern int P005_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P005_section_int_T_TM 
 ****************************************************************/
extern int P005_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_section_int_T_TM_allow_double_convertion();
extern int P005_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_section_int_T_TM_Utils;

/****************************************************************
 ** P005_sections_array_flat_T_TM 
 ****************************************************************/
extern int P005_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_sections_array_flat_T_TM_allow_double_convertion();
extern int P005_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P005_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P005_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_OBU_sectionlist_array_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P005_section_array_T_TM 
 ****************************************************************/
extern int P005_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_section_array_T_TM_allow_double_convertion();
extern int P005_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_section_array_T_TM_Utils;

/****************************************************************
 ** P005_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P005_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_OBU_sectionlist_int_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** BaliseGroupData_TM 
 ****************************************************************/
extern int BaliseGroupData_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseGroupData_TM_string(const char *str, char **endptr);
extern int string_to_BaliseGroupData_TM(const char *str, void *pValue, char **endptr);
extern int is_BaliseGroupData_TM_allow_double_convertion();
extern int BaliseGroupData_TM_to_double(const void *pValue, double *nValue);
extern int get_BaliseGroupData_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseGroupData_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseGroupData_TM_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseGroupData_TM_Utils;

/****************************************************************
 ** LevelDecisionTableActionKind_DataDictionary_Pkg 
 ****************************************************************/
extern int LevelDecisionTableActionKind_DataDictionary_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_LevelDecisionTableActionKind_DataDictionary_Pkg_string(const char *str, char **endptr);
extern int string_to_LevelDecisionTableActionKind_DataDictionary_Pkg(const char *str, void *pValue, char **endptr);
extern int is_LevelDecisionTableActionKind_DataDictionary_Pkg_allow_double_convertion();
extern int LevelDecisionTableActionKind_DataDictionary_Pkg_to_double(const void *pValue, double *nValue);
extern int get_LevelDecisionTableActionKind_DataDictionary_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_LevelDecisionTableActionKind_DataDictionary_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_LevelDecisionTableActionKind_DataDictionary_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_LevelDecisionTableActionKind_DataDictionary_Pkg_Utils;

/****************************************************************
 ** LevelDecisionTableType_DataDictionary_Pkg 
 ****************************************************************/
extern int LevelDecisionTableType_DataDictionary_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_LevelDecisionTableType_DataDictionary_Pkg_string(const char *str, char **endptr);
extern int string_to_LevelDecisionTableType_DataDictionary_Pkg(const char *str, void *pValue, char **endptr);
extern int is_LevelDecisionTableType_DataDictionary_Pkg_allow_double_convertion();
extern int LevelDecisionTableType_DataDictionary_Pkg_to_double(const void *pValue, double *nValue);
extern int get_LevelDecisionTableType_DataDictionary_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_LevelDecisionTableType_DataDictionary_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_LevelDecisionTableType_DataDictionary_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_LevelDecisionTableType_DataDictionary_Pkg_Utils;

/****************************************************************
 ** ModeDecisionTableType_DataDictionary_Pkg 
 ****************************************************************/
extern int ModeDecisionTableType_DataDictionary_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ModeDecisionTableType_DataDictionary_Pkg_string(const char *str, char **endptr);
extern int string_to_ModeDecisionTableType_DataDictionary_Pkg(const char *str, void *pValue, char **endptr);
extern int is_ModeDecisionTableType_DataDictionary_Pkg_allow_double_convertion();
extern int ModeDecisionTableType_DataDictionary_Pkg_to_double(const void *pValue, double *nValue);
extern int get_ModeDecisionTableType_DataDictionary_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ModeDecisionTableType_DataDictionary_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ModeDecisionTableType_DataDictionary_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_ModeDecisionTableType_DataDictionary_Pkg_Utils;

/****************************************************************
 ** ModeDecisionTableActionKind_DataDictionary_Pkg 
 ****************************************************************/
extern int ModeDecisionTableActionKind_DataDictionary_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ModeDecisionTableActionKind_DataDictionary_Pkg_string(const char *str, char **endptr);
extern int string_to_ModeDecisionTableActionKind_DataDictionary_Pkg(const char *str, void *pValue, char **endptr);
extern int is_ModeDecisionTableActionKind_DataDictionary_Pkg_allow_double_convertion();
extern int ModeDecisionTableActionKind_DataDictionary_Pkg_to_double(const void *pValue, double *nValue);
extern int get_ModeDecisionTableActionKind_DataDictionary_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ModeDecisionTableActionKind_DataDictionary_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ModeDecisionTableActionKind_DataDictionary_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_ModeDecisionTableActionKind_DataDictionary_Pkg_Utils;

/****************************************************************
 ** Buffer_DataDictionary_Pkg 
 ****************************************************************/
extern int Buffer_DataDictionary_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Buffer_DataDictionary_Pkg_string(const char *str, char **endptr);
extern int string_to_Buffer_DataDictionary_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Buffer_DataDictionary_Pkg_allow_double_convertion();
extern int Buffer_DataDictionary_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Buffer_DataDictionary_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Buffer_DataDictionary_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Buffer_DataDictionary_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Buffer_DataDictionary_Pkg_Utils;

/****************************************************************
 ** T_Mode_Level_Level_And_Mode_Types_Pkg 
 ****************************************************************/
extern int T_Mode_Level_Level_And_Mode_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_Mode_Level_Level_And_Mode_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_T_Mode_Level_Level_And_Mode_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_Mode_Level_Level_And_Mode_Types_Pkg_allow_double_convertion();
extern int T_Mode_Level_Level_And_Mode_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_Mode_Level_Level_And_Mode_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_Mode_Level_Level_And_Mode_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_Mode_Level_Level_And_Mode_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_Mode_Level_Level_And_Mode_Types_Pkg_Utils;

/****************************************************************
 ** odometryFactors_T_Toolbox 
 ****************************************************************/
extern int odometryFactors_T_Toolbox_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_odometryFactors_T_Toolbox_string(const char *str, char **endptr);
extern int string_to_odometryFactors_T_Toolbox(const char *str, void *pValue, char **endptr);
extern int is_odometryFactors_T_Toolbox_allow_double_convertion();
extern int odometryFactors_T_Toolbox_to_double(const void *pValue, double *nValue);
extern int get_odometryFactors_T_Toolbox_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_odometryFactors_T_Toolbox(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_odometryFactors_T_Toolbox_default_value(void *pValue);
extern SimTypeUtils _Type_odometryFactors_T_Toolbox_Utils;

/****************************************************************
 ** BaliseGroupData_Basics 
 ****************************************************************/
extern int BaliseGroupData_Basics_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseGroupData_Basics_string(const char *str, char **endptr);
extern int string_to_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr);
extern int is_BaliseGroupData_Basics_allow_double_convertion();
extern int BaliseGroupData_Basics_to_double(const void *pValue, double *nValue);
extern int get_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseGroupData_Basics(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseGroupData_Basics_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseGroupData_Basics_Utils;

/****************************************************************
 ** B_data_internal_T_InfraLib 
 ****************************************************************/
extern int B_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_B_data_internal_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_B_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_B_data_internal_T_InfraLib_allow_double_convertion();
extern int B_data_internal_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_B_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_B_data_internal_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_B_data_internal_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_B_data_internal_T_InfraLib_Utils;


#endif /*CHECKBGINPUTCHANNEL_TYPES_CONVERTION */
