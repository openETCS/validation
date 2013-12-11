#ifndef _os_in_h
#define _os_in_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "os_typ.h"

/* Clause IMPORTS */
#include "os_in_bs.h"
#define os_in__read_distance_odo os_in_bs__read_distance_odo
#define os_in__read_radio_train_position os_in_bs__read_radio_train_position
#define os_in__read_radio_start_os_area os_in_bs__read_radio_start_os_area
#define os_in__read_radio_mamode os_in_bs__read_radio_mamode
#define os_in__read_radio_os_area_speed os_in_bs__read_radio_os_area_speed
#define os_in__read_radio_dist_ack_os_area os_in_bs__read_radio_dist_ack_os_area
#define os_in__read_btm_train_position os_in_bs__read_btm_train_position
#define os_in__read_btm_start_os_area os_in_bs__read_btm_start_os_area
#define os_in__read_btm_mamode os_in_bs__read_btm_mamode
#define os_in__read_btm_os_area_speed os_in_bs__read_btm_os_area_speed
#define os_in__read_btm_dist_ack_os_area os_in_bs__read_btm_dist_ack_os_area
#define os_in__read_driver_ack_os_mode os_in_bs__read_driver_ack_os_mode
#define os_in__read_dist_antenna_max_safe_front os_in_bs__read_dist_antenna_max_safe_front
#define os_in__read_dist_antenna_min_safe_front os_in_bs__read_dist_antenna_min_safe_front

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_in__INITIALISATION(void);

/* Clause OPERATIONS */


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_in_h */
