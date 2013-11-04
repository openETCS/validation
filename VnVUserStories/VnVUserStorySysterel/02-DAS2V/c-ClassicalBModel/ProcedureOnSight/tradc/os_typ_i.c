
#include "os_typ.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

#define os_typ__t_abs_i 
#define os_typ__t_dist_i 
#define os_typ__t_speed_i 
#define os_typ__c_abs_indet -1
#define os_typ__c_dist_indet -1
#define os_typ__c_speed_indet -1
/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void os_typ__INITIALISATION(void)
{
    
    ;
}

/* Clause OPERATIONS */

void os_typ__read_t_abs(int32_t p_abs, bool *p_res)
{
    (*p_res) = (((0) <= (p_abs)) ? true : false);
}

void os_typ__read_t_dist(int32_t p_dist, bool *p_res)
{
    (*p_res) = (((0) <= (p_dist)) ? true : false);
}

void os_typ__read_t_speed(int32_t p_speed, bool *p_res)
{
    (*p_res) = (((0) <= (p_speed)) ? true : false);
}

