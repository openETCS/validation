
#include "os_mode_level.h"

/* Clause SEES */
#include "elop_bs.h"
#include "os_typ.h"
#include "os_cte_conf_bs.h"
#include "os_in.h"
#include "os_consist.h"
#include "os_train_info.h"

/* Clause IMPORTS */
#include "os_mode_level_1.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void os_mode_level__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void os_mode_level__elaborate_level(void)
{
    os_mode_level_1__write_etcs_level(os_typ__c_level_2);
}

void os_mode_level__elaborate_os_mode_in_progress(void)
{
    os_typ__t_mamode l_mamode;
    os_typ__t_mamode l_mamode_prec;
    
    os_consist__read_mamode(&l_mamode);
    os_mode_level_1__read_mamode_prec(&l_mamode_prec);
    if((l_mamode == os_typ__c_profile_OS) &&
    ((l_mamode) != (l_mamode_prec)))
    {
        os_mode_level_1__write_os_mode_in_progress(true);
    }
}

void os_mode_level__elaborate_mode(void)
{
    bool l_os_mode_in_progress;
    os_typ__t_mode l_mode;
    int32_t l_start_os_area;
    int32_t l_posoff_max_safe_front;
    bool l_waiting_for_ack;
    int32_t l_dist_ack_os_area;
    int32_t l_train_speed;
    int32_t l_os_area_speed;
    int32_t l_dist_ack_zone;
    
    os_mode_level_1__read_os_mode_in_progress(&l_os_mode_in_progress);
    os_mode_level_1__read_mode(&l_mode);
    os_consist__read_start_os_area(&l_start_os_area);
    os_train_info__read_posoff_max_safe_front(&l_posoff_max_safe_front);
    os_mode_level_1__read_waiting_for_ack(&l_waiting_for_ack);
    os_consist__read_dist_ack_os_area(&l_dist_ack_os_area);
    os_train_info__read_train_speed(&l_train_speed);
    os_consist__read_os_area_speed(&l_os_area_speed);
    l_dist_ack_zone = l_start_os_area-l_dist_ack_os_area;
    if((l_os_mode_in_progress == true) &&
    (((((((((l_mode == os_typ__c_mode_FS) ||
                                    (l_mode == os_typ__c_mode_LS)) ||
                                (l_mode == os_typ__c_mode_SB)) ||
                            (l_mode == os_typ__c_mode_PT)) ||
                        (l_mode == os_typ__c_mode_SR)) ||
                    (l_mode == os_typ__c_mode_UN)) ||
                (l_mode == os_typ__c_mode_SN)) ||
            (l_mode == os_typ__c_mode_OS))))
    {
        if((l_start_os_area) <= (l_posoff_max_safe_front))
        {
            if((((l_mode) != (os_typ__c_mode_SB)) &&
                ((l_mode) != (os_typ__c_mode_PT))) &&
            ((l_mode) != (os_typ__c_mode_OS)))
            {
                os_mode_level_1__write_mode(os_typ__c_mode_OS);
            }
            if((l_waiting_for_ack == false) &&
            ((l_mode) != (os_typ__c_mode_OS)))
            {
                os_mode_level_1__write_waiting_for_ack(true);
                os_mode_level_1__write_tempo(os_cte_conf_bs__k_delay_driver_ack);
            }
        }
        else if((((l_dist_ack_zone) <= (l_posoff_max_safe_front)) &&
            ((l_train_speed) < (l_os_area_speed))) &&
        (l_waiting_for_ack == false))
        {
            os_mode_level_1__write_waiting_for_ack(true);
            os_mode_level_1__write_tempo(os_cte_conf_bs__k_delay_driver_ack);
        }
    }
}

void os_mode_level__manage_delay(void)
{
    bool l_waiting_for_ack;
    bool l_driver_ack_os_mode;
    int32_t l_tempo;
    
    os_mode_level_1__read_waiting_for_ack(&l_waiting_for_ack);
    os_in__read_driver_ack_os_mode(&l_driver_ack_os_mode);
    os_mode_level_1__read_tempo(&l_tempo);
    if(l_waiting_for_ack == true)
    {
        if(l_driver_ack_os_mode == true)
        {
            os_mode_level_1__write_waiting_for_ack(false);
            os_mode_level_1__write_mode(os_typ__c_mode_OS);
            os_mode_level_1__write_service_brake_command(false);
            os_mode_level_1__write_os_mode_in_progress(false);
        }
        else
        {
            if(l_tempo == 0)
            {
                os_mode_level_1__write_service_brake_command(true);
            }
            else
            {
                os_mode_level_1__write_tempo(l_tempo-1);
            }
        }
    }
}

void os_mode_level__send_ack_request_driver(void)
{
    bool l_waiting_for_ack;
    bool l_waiting_for_ack_prec;
    
    os_mode_level_1__read_waiting_for_ack(&l_waiting_for_ack);
    os_mode_level_1__read_waiting_for_ack_prec(&l_waiting_for_ack_prec);
    if((l_waiting_for_ack == true) &&
    (l_waiting_for_ack_prec == false))
    {
        os_mode_level_1__write_ack_request_os_mode(true);
    }
    else
    {
        os_mode_level_1__write_ack_request_os_mode(false);
    }
}

void os_mode_level__copy_mode_level_prec(void)
{
    os_typ__t_mamode l_mamode;
    bool l_waiting_for_ack;
    
    os_consist__read_mamode(&l_mamode);
    os_mode_level_1__read_waiting_for_ack(&l_waiting_for_ack);
    os_mode_level_1__write_mamode_prec(l_mamode);
    os_mode_level_1__write_waiting_for_ack_prec(l_waiting_for_ack);
}

