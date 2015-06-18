#ifndef _os_consist_h
#define _os_consist_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "os_typ.h"
#include "os_cte_conf_bs.h"
#include "os_in.h"

/* Clause IMPORTS */
#include "os_consist_1.h"
#define os_consist__read_level_etcs_prec os_consist_1__read_level_etcs_prec
#define os_consist__read_train_position os_consist_1__read_train_position
#define os_consist__read_train_position_prev os_consist_1__read_train_position_prev
#define os_consist__read_start_os_area os_consist_1__read_start_os_area
#define os_consist__read_mamode os_consist_1__read_mamode
#define os_consist__read_os_area_speed os_consist_1__read_os_area_speed
#define os_consist__read_dist_ack_os_area os_consist_1__read_dist_ack_os_area
#define os_consist__write_level_etcs_prec os_consist_1__write_level_etcs_prec
#define os_consist__write_train_position os_consist_1__write_train_position
#define os_consist__write_train_position_prev os_consist_1__write_train_position_prev
#define os_consist__write_start_os_area os_consist_1__write_start_os_area
#define os_consist__write_mamode os_consist_1__write_mamode
#define os_consist__write_os_area_speed os_consist_1__write_os_area_speed
#define os_consist__write_dist_ack_os_area os_consist_1__write_dist_ack_os_area

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_consist__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_consist__elaborate_area_and_geopos(void);
extern void os_consist__copy_consist_prec(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_consist_h */
