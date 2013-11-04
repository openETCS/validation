#ifndef _os_in_bs_h
#define _os_in_bs_h

#include <stdint.h>
#include <stdbool.h>

/*--------------
   SEES Clause
  --------------*/
#include "os_typ.h"

/*------------------------
   INITIALISATION Clause
  ------------------------*/
extern void os_in_bs__INITIALISATION(void);

/*--------------------
   OPERATIONS Clause
  --------------------*/
extern void os_in_bs__read_btm_dist_ack_os_area(
   int32_t * const os_in_bs__p_res);
extern void os_in_bs__read_btm_mamode(
   os_typ__t_mamode * const os_in_bs__p_res);
extern void os_in_bs__read_btm_os_area_speed(
   int32_t * const os_in_bs__p_res);
extern void os_in_bs__read_btm_start_os_area(
   int32_t * const os_in_bs__p_res);
extern void os_in_bs__read_btm_train_position(
   int32_t * const os_in_bs__p_res);
extern void os_in_bs__read_dist_antenna_max_safe_front(
   int32_t * const os_in_bs__p_res);
extern void os_in_bs__read_dist_antenna_min_safe_front(
   int32_t * const os_in_bs__p_res);
extern void os_in_bs__read_distance_odo(
   int32_t * const os_in_bs__p_res);
extern void os_in_bs__read_driver_ack_os_mode(
   bool * const os_in_bs__p_res);
extern void os_in_bs__read_radio_dist_ack_os_area(
   int32_t * const os_in_bs__p_res);
extern void os_in_bs__read_radio_mamode(
   os_typ__t_mamode * const os_in_bs__p_res);
extern void os_in_bs__read_radio_os_area_speed(
   int32_t * const os_in_bs__p_res);
extern void os_in_bs__read_radio_start_os_area(
   int32_t * const os_in_bs__p_res);
extern void os_in_bs__read_radio_train_position(
   int32_t * const os_in_bs__p_res);

#endif
