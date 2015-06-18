#ifndef _os_mode_level_2_h
#define _os_mode_level_2_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "os_typ.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */

extern os_typ__t_level os_mode_level_2__etcs_level_i;
extern os_typ__t_mamode os_mode_level_2__mamode_prec_i;
extern os_typ__t_mode os_mode_level_2__mode_i;
extern bool os_mode_level_2__waiting_for_ack_i;
extern bool os_mode_level_2__waiting_for_ack_prec_i;
extern int32_t os_mode_level_2__tempo_i;
extern bool os_mode_level_2__service_brake_command_i;
extern bool os_mode_level_2__ack_request_os_mode_i;
extern bool os_mode_level_2__os_mode_in_progress_i;

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_mode_level_2__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_mode_level_2__write_etcs_level(os_typ__t_level p_level);
extern void os_mode_level_2__write_mamode_prec(os_typ__t_mamode p_mamode);
extern void os_mode_level_2__write_mode(os_typ__t_mode p_mode);
extern void os_mode_level_2__write_waiting_for_ack(bool p_bool);
extern void os_mode_level_2__write_waiting_for_ack_prec(bool p_bool);
extern void os_mode_level_2__write_tempo(int32_t p_ind);
extern void os_mode_level_2__write_service_brake_command(bool p_bool);
extern void os_mode_level_2__write_ack_request_os_mode(bool p_bool);
extern void os_mode_level_2__write_os_mode_in_progress(bool p_bool);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_mode_level_2_h */
