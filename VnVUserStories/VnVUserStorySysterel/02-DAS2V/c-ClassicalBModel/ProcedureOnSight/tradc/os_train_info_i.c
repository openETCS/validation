
#include "os_train_info.h"

/* Clause SEES */
#include "elop_bs.h"
#include "os_typ.h"
#include "os_cte_conf_bs.h"
#include "os_in.h"
#include "os_consist.h"

/* Clause IMPORTS */
#include "os_train_info_1.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void os_train_info__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void os_train_info__elaborate_train_location(void)
{
    int32_t l_distance_odo;
    int32_t l_train_position;
    int32_t l_train_position_prev;
    int32_t l_dist_antenna_max_safe_front;
    int32_t l_dist_antenna_min_safe_front;
    int32_t l_posoff_max_safe_front;
    int32_t l_posoff_min_safe_front;
    int32_t l_position_max_maj;
    int32_t l_position_min_maj;
    
    os_in__read_distance_odo(&l_distance_odo);
    os_consist__read_train_position(&l_train_position);
    os_consist__read_train_position_prev(&l_train_position_prev);
    os_in__read_dist_antenna_max_safe_front(&l_dist_antenna_max_safe_front);
    os_in__read_dist_antenna_min_safe_front(&l_dist_antenna_min_safe_front);
    os_train_info_1__read_posoff_max_safe_front(&l_posoff_max_safe_front);
    os_train_info_1__read_posoff_min_safe_front(&l_posoff_min_safe_front);
    elop_bs__add_int_int(l_distance_odo, l_posoff_max_safe_front, &l_position_max_maj);
    elop_bs__add_int_int(l_distance_odo, l_posoff_min_safe_front, &l_position_min_maj);
    if((l_train_position) != (l_train_position_prev))
    {
        os_train_info_1__write_posoff_max_safe_front(l_dist_antenna_max_safe_front);
        os_train_info_1__write_posoff_min_safe_front(l_dist_antenna_min_safe_front);
    }
    else
    {
        os_train_info_1__write_posoff_max_safe_front(l_position_max_maj);
        os_train_info_1__write_posoff_min_safe_front(l_position_min_maj);
    }
}

void os_train_info__elaborate_train_speed(void)
{
    int32_t l_distance_odo;
    int32_t l_dist_ms;
    int32_t l_train_speed;
    
    os_in__read_distance_odo(&l_distance_odo);
    elop_bs__mul_int_int(l_distance_odo, os_cte_conf_bs__k_s_to_ms, &l_dist_ms);
    l_train_speed = l_dist_ms / os_cte_conf_bs__k_period_appli;
    os_train_info_1__write_train_speed(l_train_speed);
}

