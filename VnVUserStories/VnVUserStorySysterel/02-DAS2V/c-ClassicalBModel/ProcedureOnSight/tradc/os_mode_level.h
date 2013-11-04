#ifndef _os_mode_level_h
#define _os_mode_level_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "elop_bs.h"
#include "os_typ.h"
#include "os_cte_conf_bs.h"
#include "os_in.h"
#include "os_consist.h"
#include "os_train_info.h"

/* Clause IMPORTS */
#include "os_mode_level_1.h"
#define os_mode_level__read_etcs_level os_mode_level_1__read_etcs_level
#define os_mode_level__read_mamode_prec os_mode_level_1__read_mamode_prec
#define os_mode_level__read_mode os_mode_level_1__read_mode
#define os_mode_level__read_waiting_for_ack os_mode_level_1__read_waiting_for_ack
#define os_mode_level__read_waiting_for_ack_prec os_mode_level_1__read_waiting_for_ack_prec
#define os_mode_level__read_tempo os_mode_level_1__read_tempo
#define os_mode_level__read_service_brake_command os_mode_level_1__read_service_brake_command
#define os_mode_level__read_ack_request_os_mode os_mode_level_1__read_ack_request_os_mode
#define os_mode_level__read_os_mode_in_progress os_mode_level_1__read_os_mode_in_progress
#define os_mode_level__write_etcs_level os_mode_level_1__write_etcs_level
#define os_mode_level__write_mamode_prec os_mode_level_1__write_mamode_prec
#define os_mode_level__write_mode os_mode_level_1__write_mode
#define os_mode_level__write_waiting_for_ack os_mode_level_1__write_waiting_for_ack
#define os_mode_level__write_waiting_for_ack_prec os_mode_level_1__write_waiting_for_ack_prec
#define os_mode_level__write_tempo os_mode_level_1__write_tempo
#define os_mode_level__write_service_brake_command os_mode_level_1__write_service_brake_command
#define os_mode_level__write_ack_request_os_mode os_mode_level_1__write_ack_request_os_mode
#define os_mode_level__write_os_mode_in_progress os_mode_level_1__write_os_mode_in_progress

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_mode_level__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_mode_level__elaborate_level(void);
extern void os_mode_level__elaborate_os_mode_in_progress(void);
extern void os_mode_level__elaborate_mode(void);
extern void os_mode_level__manage_delay(void);
extern void os_mode_level__send_ack_request_driver(void);
extern void os_mode_level__copy_mode_level_prec(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_mode_level_h */
