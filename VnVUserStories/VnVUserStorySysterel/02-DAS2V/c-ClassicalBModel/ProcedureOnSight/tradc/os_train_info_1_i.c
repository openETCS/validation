
#include "os_train_info_1.h"

/* Clause SEES */
#include "os_typ.h"
#include "os_cte_conf_bs.h"

/* Clause IMPORTS */
#include "os_train_info_2.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void os_train_info_1__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void os_train_info_1__read_posoff_max_safe_front(int32_t *p_res)
{
    (*p_res) = os_train_info_2__posoff_max_safe_front_i;
}

void os_train_info_1__read_posoff_min_safe_front(int32_t *p_res)
{
    (*p_res) = os_train_info_2__posoff_min_safe_front_i;
}

void os_train_info_1__read_train_speed(int32_t *p_res)
{
    (*p_res) = os_train_info_2__train_speed_i;
}

