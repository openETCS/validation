
#include "os_mode_level_1.h"

/* Clause SEES */
#include "os_typ.h"

/* Clause IMPORTS */
#include "os_mode_level_2.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void os_mode_level_1__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void os_mode_level_1__read_etcs_level(os_typ__t_level *p_res)
{
    (*p_res) = os_mode_level_2__etcs_level_i;
}

void os_mode_level_1__read_mamode_prec(os_typ__t_mamode *p_res)
{
    (*p_res) = os_mode_level_2__mamode_prec_i;
}

void os_mode_level_1__read_mode(os_typ__t_mode *p_res)
{
    (*p_res) = os_mode_level_2__mode_i;
}

void os_mode_level_1__read_waiting_for_ack(bool *p_res)
{
    (*p_res) = os_mode_level_2__waiting_for_ack_i;
}

void os_mode_level_1__read_waiting_for_ack_prec(bool *p_res)
{
    (*p_res) = os_mode_level_2__waiting_for_ack_prec_i;
}

void os_mode_level_1__read_tempo(int32_t *p_res)
{
    (*p_res) = os_mode_level_2__tempo_i;
}

void os_mode_level_1__read_service_brake_command(bool *p_res)
{
    (*p_res) = os_mode_level_2__service_brake_command_i;
}

void os_mode_level_1__read_ack_request_os_mode(bool *p_res)
{
    (*p_res) = os_mode_level_2__ack_request_os_mode_i;
}

void os_mode_level_1__read_os_mode_in_progress(bool *p_res)
{
    (*p_res) = os_mode_level_2__os_mode_in_progress_i;
}

