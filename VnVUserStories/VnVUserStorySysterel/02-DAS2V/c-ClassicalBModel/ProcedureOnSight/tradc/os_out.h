#ifndef _os_out_h
#define _os_out_h

#include <stdint.h>
#include <stdbool.h>
/*? **********************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Output data processing

**********************************************?*/

/* Clause SEES */
#include "os_typ.h"
#include "os_in.h"
#include "os_consist.h"
#include "os_train_info.h"
#include "os_mode_level.h"

/* Clause IMPORTS */
#include "os_out_bs.h"
#define os_out__write_ack_request_os_mode_out os_out_bs__write_ack_request_os_mode_out
#define os_out__write_service_brake_command_out os_out_bs__write_service_brake_command_out

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_out__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_out__build_output(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_out_h */
