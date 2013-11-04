
#include "os_consist_1.h"

/* Clause SEES */
#include "os_typ.h"
#include "os_cte_conf_bs.h"

/* Clause IMPORTS */
#include "os_consist_2.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void os_consist_1__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void os_consist_1__read_level_etcs_prec(os_typ__t_level *p_res)
{
    (*p_res) = os_consist_2__level_etcs_prec_i;
}

void os_consist_1__read_train_position(int32_t *p_res)
{
    (*p_res) = os_consist_2__train_position_i;
}

void os_consist_1__read_train_position_prev(int32_t *p_res)
{
    (*p_res) = os_consist_2__train_position_prev_i;
}

void os_consist_1__read_start_os_area(int32_t *p_res)
{
    (*p_res) = os_consist_2__start_os_area_i;
}

void os_consist_1__read_mamode(os_typ__t_mamode *p_res)
{
    (*p_res) = os_consist_2__mamode_i;
}

void os_consist_1__read_os_area_speed(int32_t *p_res)
{
    (*p_res) = os_consist_2__os_area_speed_i;
}

void os_consist_1__read_dist_ack_os_area(int32_t *p_res)
{
    (*p_res) = os_consist_2__dist_ack_os_area_i;
}

