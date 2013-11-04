#ifndef _os_cte_conf_bs_h
#define _os_cte_conf_bs_h


#include <stdint.h>
#include <stdbool.h>

/*--------------
   SEES Clause
  --------------*/
#include "os_typ.h"

/*------------------------------------------------
   CONCRETE_CONSTANTS Clause: scalars and arrays
  ------------------------------------------------*/
#define os_cte_conf_bs__k_delay_driver_ack 0
#define os_cte_conf_bs__k_dist_ack_os_area_def 0
#define os_cte_conf_bs__k_mamode_def os_typ__c_profile_OS
#define os_cte_conf_bs__k_os_area_speed_def 0
#define os_cte_conf_bs__k_period_appli 1
#define os_cte_conf_bs__k_posoff_max_safe_front_def 0
#define os_cte_conf_bs__k_posoff_min_safe_front_def 0
#define os_cte_conf_bs__k_s_to_ms 0
#define os_cte_conf_bs__k_start_os_area_def 0
#define os_cte_conf_bs__k_train_position_def 0

/*------------------------
   INITIALISATION Clause
  ------------------------*/
extern void os_cte_conf_bs__INITIALISATION(void);

#endif
