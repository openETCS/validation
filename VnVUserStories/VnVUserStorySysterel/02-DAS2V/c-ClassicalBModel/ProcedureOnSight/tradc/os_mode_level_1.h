#ifndef _os_mode_level_1_h
#define _os_mode_level_1_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "os_typ.h"

/* Clause IMPORTS */
#include "os_mode_level_2.h"
#define os_mode_level_1__write_etcs_level os_mode_level_2__write_etcs_level
#define os_mode_level_1__write_mamode_prec os_mode_level_2__write_mamode_prec
#define os_mode_level_1__write_mode os_mode_level_2__write_mode
#define os_mode_level_1__write_waiting_for_ack os_mode_level_2__write_waiting_for_ack
#define os_mode_level_1__write_waiting_for_ack_prec os_mode_level_2__write_waiting_for_ack_prec
#define os_mode_level_1__write_tempo os_mode_level_2__write_tempo
#define os_mode_level_1__write_service_brake_command os_mode_level_2__write_service_brake_command
#define os_mode_level_1__write_ack_request_os_mode os_mode_level_2__write_ack_request_os_mode
#define os_mode_level_1__write_os_mode_in_progress os_mode_level_2__write_os_mode_in_progress

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_mode_level_1__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_mode_level_1__read_etcs_level(os_typ__t_level *p_res);
extern void os_mode_level_1__read_mamode_prec(os_typ__t_mamode *p_res);
extern void os_mode_level_1__read_mode(os_typ__t_mode *p_res);
extern void os_mode_level_1__read_waiting_for_ack(bool *p_res);
extern void os_mode_level_1__read_waiting_for_ack_prec(bool *p_res);
extern void os_mode_level_1__read_tempo(int32_t *p_res);
extern void os_mode_level_1__read_service_brake_command(bool *p_res);
extern void os_mode_level_1__read_ack_request_os_mode(bool *p_res);
extern void os_mode_level_1__read_os_mode_in_progress(bool *p_res);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_mode_level_1_h */
