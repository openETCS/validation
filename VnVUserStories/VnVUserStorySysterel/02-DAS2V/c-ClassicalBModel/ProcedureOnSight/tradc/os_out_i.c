
/*? **********************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Output data processing

**********************************************?*/

#include "os_out.h"

/* Clause SEES */
#include "os_typ.h"
#include "os_in.h"
#include "os_consist.h"
#include "os_train_info.h"
#include "os_mode_level.h"

/* Clause IMPORTS */
#include "os_out_bs.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void os_out__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void os_out__build_output(void)
{
    bool l_ack_request_os_mode;
    bool l_service_brake_command;
    
    os_mode_level__read_ack_request_os_mode(&l_ack_request_os_mode);
    os_mode_level__read_service_brake_command(&l_service_brake_command);
    os_out_bs__write_ack_request_os_mode_out(l_ack_request_os_mode);
    os_out_bs__write_service_brake_command_out(l_service_brake_command);
}

