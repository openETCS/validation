#ifndef _os_out_bs_h
#define _os_out_bs_h

#include <stdint.h>
#include <stdbool.h>

/*--------------
   SEES Clause
  --------------*/
#include "os_typ.h"

/*------------------------
   INITIALISATION Clause
  ------------------------*/
extern void os_out_bs__INITIALISATION(void);

/*--------------------
   OPERATIONS Clause
  --------------------*/
extern void os_out_bs__write_ack_request_os_mode_out(
   const bool os_out_bs__p_bool);
extern void os_out_bs__write_service_brake_command_out(
   const bool os_out_bs__p_bool);

#endif
