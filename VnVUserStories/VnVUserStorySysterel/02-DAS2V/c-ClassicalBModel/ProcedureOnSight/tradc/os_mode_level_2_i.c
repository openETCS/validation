
/*? **********************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Elaborating ETCS level and mode
Data refinement

**********************************************?*/

#include "os_mode_level_2.h"

/* Clause SEES */
#include "os_typ.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

os_typ__t_level os_mode_level_2__etcs_level_i;
os_typ__t_mamode os_mode_level_2__mamode_prec_i;
os_typ__t_mode os_mode_level_2__mode_i;
bool os_mode_level_2__waiting_for_ack_i;
bool os_mode_level_2__waiting_for_ack_prec_i;
int32_t os_mode_level_2__tempo_i;
bool os_mode_level_2__service_brake_command_i;
bool os_mode_level_2__ack_request_os_mode_i;
bool os_mode_level_2__os_mode_in_progress_i;
/* Clause INITIALISATION */
void os_mode_level_2__INITIALISATION(void)
{
    
    os_mode_level_2__etcs_level_i = os_typ__c_level_0;
    os_mode_level_2__mamode_prec_i = os_typ__c_profile_OS;
    os_mode_level_2__mode_i = os_typ__c_mode_NP;
    os_mode_level_2__waiting_for_ack_i = false;
    os_mode_level_2__waiting_for_ack_prec_i = false;
    os_mode_level_2__tempo_i = 0;
    os_mode_level_2__service_brake_command_i = false;
    os_mode_level_2__ack_request_os_mode_i = false;
    os_mode_level_2__os_mode_in_progress_i = false;
}

/* Clause OPERATIONS */

void os_mode_level_2__write_etcs_level(os_typ__t_level p_level)
{
    os_mode_level_2__etcs_level_i = p_level;
}

void os_mode_level_2__write_mamode_prec(os_typ__t_mamode p_mamode)
{
    os_mode_level_2__mamode_prec_i = p_mamode;
}

void os_mode_level_2__write_mode(os_typ__t_mode p_mode)
{
    os_mode_level_2__mode_i = p_mode;
}

void os_mode_level_2__write_waiting_for_ack(bool p_bool)
{
    os_mode_level_2__waiting_for_ack_i = p_bool;
}

void os_mode_level_2__write_waiting_for_ack_prec(bool p_bool)
{
    os_mode_level_2__waiting_for_ack_prec_i = p_bool;
}

void os_mode_level_2__write_tempo(int32_t p_ind)
{
    os_mode_level_2__tempo_i = p_ind;
}

void os_mode_level_2__write_service_brake_command(bool p_bool)
{
    os_mode_level_2__service_brake_command_i = p_bool;
}

void os_mode_level_2__write_ack_request_os_mode(bool p_bool)
{
    os_mode_level_2__ack_request_os_mode_i = p_bool;
}

void os_mode_level_2__write_os_mode_in_progress(bool p_bool)
{
    os_mode_level_2__os_mode_in_progress_i = p_bool;
}

