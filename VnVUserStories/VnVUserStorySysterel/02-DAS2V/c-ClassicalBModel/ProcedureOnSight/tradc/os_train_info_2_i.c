
#include "os_train_info_2.h"

/* Clause SEES */
#include "os_typ.h"
#include "os_cte_conf_bs.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t os_train_info_2__posoff_max_safe_front_i;
int32_t os_train_info_2__posoff_min_safe_front_i;
int32_t os_train_info_2__train_speed_i;
/* Clause INITIALISATION */
void os_train_info_2__INITIALISATION(void)
{
    
    os_train_info_2__posoff_max_safe_front_i = os_cte_conf_bs__k_posoff_max_safe_front_def;
    os_train_info_2__posoff_min_safe_front_i = os_cte_conf_bs__k_posoff_min_safe_front_def;
    os_train_info_2__train_speed_i = 0;
}

/* Clause OPERATIONS */

void os_train_info_2__write_posoff_max_safe_front(int32_t p_abs)
{
    os_train_info_2__posoff_max_safe_front_i = p_abs;
}

void os_train_info_2__write_posoff_min_safe_front(int32_t p_abs)
{
    os_train_info_2__posoff_min_safe_front_i = p_abs;
}

void os_train_info_2__write_train_speed(int32_t p_speed)
{
    os_train_info_2__train_speed_i = p_speed;
}

