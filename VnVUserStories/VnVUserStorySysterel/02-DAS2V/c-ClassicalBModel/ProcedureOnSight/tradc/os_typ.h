#ifndef _os_typ_h
#define _os_typ_h

#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */
typedef enum
{
    os_typ__c_profile_OS
    
} os_typ__t_mamode;
typedef enum
{
    os_typ__c_level_0,
    os_typ__c_level_1,
    os_typ__c_level_2,
    os_typ__c_level_3,
    os_typ__c_level_ntc
    
} os_typ__t_level;
typedef enum
{
    os_typ__c_mode_NP,
    os_typ__c_mode_SB,
    os_typ__c_mode_PS,
    os_typ__c_mode_SH,
    os_typ__c_mode_FS,
    os_typ__c_mode_LS,
    os_typ__c_mode_SR,
    os_typ__c_mode_OS,
    os_typ__c_mode_SL,
    os_typ__c_mode_NL,
    os_typ__c_mode_UN,
    os_typ__c_mode_TR,
    os_typ__c_mode_PT,
    os_typ__c_mode_SF,
    os_typ__c_mode_IS,
    os_typ__c_mode_SN,
    os_typ__c_mode_RV
    
} os_typ__t_mode;

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
#define os_typ__t_abs_i 
#define os_typ__t_dist_i 
#define os_typ__t_speed_i 
#define os_typ__c_abs_indet -1
#define os_typ__c_dist_indet -1
#define os_typ__c_speed_indet -1
/* Array and record constants */






extern void os_typ__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_typ__read_t_abs(int32_t p_abs, bool *p_res);
extern void os_typ__read_t_dist(int32_t p_dist, bool *p_res);
extern void os_typ__read_t_speed(int32_t p_speed, bool *p_res);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_typ_h */
