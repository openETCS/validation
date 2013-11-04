#ifndef _os_consist_1_h
#define _os_consist_1_h

#include <stdint.h>
#include <stdbool.h>
/*? **********************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Checking data consistency
Data refinement

**********************************************?*/

/* Clause SEES */
#include "os_typ.h"
#include "os_cte_conf_bs.h"

/* Clause IMPORTS */
#include "os_consist_2.h"
#define os_consist_1__write_level_etcs_prec os_consist_2__write_level_etcs_prec
#define os_consist_1__write_train_position os_consist_2__write_train_position
#define os_consist_1__write_train_position_prev os_consist_2__write_train_position_prev
#define os_consist_1__write_start_os_area os_consist_2__write_start_os_area
#define os_consist_1__write_mamode os_consist_2__write_mamode
#define os_consist_1__write_os_area_speed os_consist_2__write_os_area_speed
#define os_consist_1__write_dist_ack_os_area os_consist_2__write_dist_ack_os_area

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_consist_1__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_consist_1__read_level_etcs_prec(os_typ__t_level *p_res);
extern void os_consist_1__read_train_position(int32_t *p_res);
extern void os_consist_1__read_train_position_prev(int32_t *p_res);
extern void os_consist_1__read_start_os_area(int32_t *p_res);
extern void os_consist_1__read_mamode(os_typ__t_mamode *p_res);
extern void os_consist_1__read_os_area_speed(int32_t *p_res);
extern void os_consist_1__read_dist_ack_os_area(int32_t *p_res);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_consist_1_h */
