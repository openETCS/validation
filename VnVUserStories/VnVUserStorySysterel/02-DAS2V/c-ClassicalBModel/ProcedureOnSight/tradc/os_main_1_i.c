
#include "os_main_1.h"

/* Clause SEES */
#include "os_typ.h"

/* Clause IMPORTS */
#include "os_in.h"
#include "os_consist.h"
#include "os_train_info.h"
#include "os_mode_level.h"
#include "os_out.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause LOCAL_OPERATIONS */

static void os_main_1__copy_level_etcs_prec(void);
/* Clause INITIALISATION */
void os_main_1__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void os_main_1__copy_level_etcs_prec(void)
{
    os_typ__t_level l_etcs_level;
    
    os_mode_level__read_etcs_level(&l_etcs_level);
    os_consist__write_level_etcs_prec(l_etcs_level);
}

void os_main_1__process_input(void)
{
    ;
}

void os_main_1__check_data_consistency(void)
{
    os_consist__elaborate_area_and_geopos();
}

void os_main_1__define_train_speed_and_position(void)
{
    os_train_info__elaborate_train_location();
    os_train_info__elaborate_train_speed();
}

void os_main_1__elaborate_mode_level(void)
{
    os_mode_level__elaborate_level();
    os_mode_level__elaborate_os_mode_in_progress();
    os_mode_level__elaborate_mode();
    os_mode_level__manage_delay();
    os_mode_level__send_ack_request_driver();
}

void os_main_1__process_output(void)
{
    os_out__build_output();
}

void os_main_1__copy_prec(void)
{
    os_main_1__copy_level_etcs_prec();
    os_consist__copy_consist_prec();
    os_mode_level__copy_mode_level_prec();
}

