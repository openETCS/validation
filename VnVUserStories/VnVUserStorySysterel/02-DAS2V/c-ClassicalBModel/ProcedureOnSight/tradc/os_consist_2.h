#ifndef _os_consist_2_h
#define _os_consist_2_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "os_typ.h"
#include "os_cte_conf_bs.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */

extern os_typ__t_level os_consist_2__level_etcs_prec_i;
extern int32_t os_consist_2__train_position_i;
extern int32_t os_consist_2__train_position_prev_i;
extern int32_t os_consist_2__start_os_area_i;
extern os_typ__t_mamode os_consist_2__mamode_i;
extern int32_t os_consist_2__os_area_speed_i;
extern int32_t os_consist_2__dist_ack_os_area_i;

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_consist_2__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_consist_2__write_level_etcs_prec(os_typ__t_level p_level);
extern void os_consist_2__write_train_position(int32_t p_abs);
extern void os_consist_2__write_train_position_prev(int32_t p_abs);
extern void os_consist_2__write_start_os_area(int32_t p_abs);
extern void os_consist_2__write_mamode(os_typ__t_mamode p_mamode);
extern void os_consist_2__write_os_area_speed(int32_t p_speed);
extern void os_consist_2__write_dist_ack_os_area(int32_t p_dist);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_consist_2_h */
