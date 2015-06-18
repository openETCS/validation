
#include "os_consist_2.h"

/* Clause SEES */
#include "os_typ.h"
#include "os_cte_conf_bs.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

os_typ__t_level os_consist_2__level_etcs_prec_i;
int32_t os_consist_2__train_position_i;
int32_t os_consist_2__train_position_prev_i;
int32_t os_consist_2__start_os_area_i;
os_typ__t_mamode os_consist_2__mamode_i;
int32_t os_consist_2__os_area_speed_i;
int32_t os_consist_2__dist_ack_os_area_i;
/* Clause INITIALISATION */
void os_consist_2__INITIALISATION(void)
{
    
    os_consist_2__level_etcs_prec_i = os_typ__c_level_0;
    os_consist_2__train_position_i = 0;
    os_consist_2__train_position_prev_i = os_cte_conf_bs__k_train_position_def;
    os_consist_2__start_os_area_i = 0;
    os_consist_2__mamode_i = os_typ__c_profile_OS;
    os_consist_2__os_area_speed_i = 0;
    os_consist_2__dist_ack_os_area_i = 0;
}

/* Clause OPERATIONS */

void os_consist_2__write_level_etcs_prec(os_typ__t_level p_level)
{
    os_consist_2__level_etcs_prec_i = p_level;
}

void os_consist_2__write_train_position(int32_t p_abs)
{
    os_consist_2__train_position_i = p_abs;
}

void os_consist_2__write_train_position_prev(int32_t p_abs)
{
    os_consist_2__train_position_prev_i = p_abs;
}

void os_consist_2__write_start_os_area(int32_t p_abs)
{
    os_consist_2__start_os_area_i = p_abs;
}

void os_consist_2__write_mamode(os_typ__t_mamode p_mamode)
{
    os_consist_2__mamode_i = p_mamode;
}

void os_consist_2__write_os_area_speed(int32_t p_speed)
{
    os_consist_2__os_area_speed_i = p_speed;
}

void os_consist_2__write_dist_ack_os_area(int32_t p_dist)
{
    os_consist_2__dist_ack_os_area_i = p_dist;
}

