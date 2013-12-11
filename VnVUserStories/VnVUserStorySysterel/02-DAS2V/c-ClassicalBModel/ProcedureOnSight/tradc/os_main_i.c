
#include "os_main.h"

/* Clause IMPORTS */
#include "elop_bs.h"
#include "os_cte_conf_bs.h"
#include "os_typ.h"
#include "os_main_1.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void os_main__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void os_main__run_cycle(void)
{
    os_main_1__process_input();
    os_main_1__check_data_consistency();
    os_main_1__define_train_speed_and_position();
    os_main_1__elaborate_mode_level();
    os_main_1__process_output();
    os_main_1__copy_prec();
}

