
#include "os_consist.h"

/* Clause SEES */
#include "os_typ.h"
#include "os_cte_conf_bs.h"
#include "os_in.h"

/* Clause IMPORTS */
#include "os_consist_1.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void os_consist__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void os_consist__elaborate_area_and_geopos(void)
{
    os_typ__t_level l_level_etcs_prec;
    int32_t l_btm_train_position;
    int32_t l_btm_start_os_area;
    os_typ__t_mamode l_btm_mamode;
    int32_t l_btm_os_area_speed;
    int32_t l_btm_dist_ack_os_area;
    int32_t l_radio_train_position;
    int32_t l_radio_start_os_area;
    os_typ__t_mamode l_radio_mamode;
    int32_t l_radio_os_area_speed;
    int32_t l_radio_dist_ack_os_area;
    
    os_consist_1__read_level_etcs_prec(&l_level_etcs_prec);
    os_in__read_btm_train_position(&l_btm_train_position);
    os_in__read_btm_start_os_area(&l_btm_start_os_area);
    os_in__read_btm_mamode(&l_btm_mamode);
    os_in__read_btm_os_area_speed(&l_btm_os_area_speed);
    os_in__read_btm_dist_ack_os_area(&l_btm_dist_ack_os_area);
    os_in__read_radio_train_position(&l_radio_train_position);
    os_in__read_radio_start_os_area(&l_radio_start_os_area);
    os_in__read_radio_mamode(&l_radio_mamode);
    os_in__read_radio_os_area_speed(&l_radio_os_area_speed);
    os_in__read_radio_dist_ack_os_area(&l_radio_dist_ack_os_area);
    switch(l_level_etcs_prec)
    {
        case os_typ__c_level_ntc : {
            
            os_consist_1__write_train_position(l_btm_train_position);
            os_consist_1__write_start_os_area(l_btm_start_os_area);
            os_consist_1__write_mamode(l_btm_mamode);
            os_consist_1__write_os_area_speed(l_btm_os_area_speed);
            os_consist_1__write_dist_ack_os_area(l_btm_dist_ack_os_area);
            break;
        }case os_typ__c_level_0 : {
            
            os_consist_1__write_train_position(l_btm_train_position);
            os_consist_1__write_start_os_area(l_btm_start_os_area);
            os_consist_1__write_mamode(l_btm_mamode);
            os_consist_1__write_os_area_speed(l_btm_os_area_speed);
            os_consist_1__write_dist_ack_os_area(l_btm_dist_ack_os_area);
            break;
        }case os_typ__c_level_1 : {
            
            os_consist_1__write_train_position(l_btm_train_position);
            os_consist_1__write_start_os_area(l_btm_start_os_area);
            os_consist_1__write_mamode(l_btm_mamode);
            os_consist_1__write_os_area_speed(l_btm_os_area_speed);
            os_consist_1__write_dist_ack_os_area(l_btm_dist_ack_os_area);
            break;
        }
        case os_typ__c_level_2 : {
            
            os_consist_1__write_train_position(l_radio_train_position);
            os_consist_1__write_start_os_area(l_radio_start_os_area);
            os_consist_1__write_mamode(l_radio_mamode);
            os_consist_1__write_os_area_speed(l_radio_os_area_speed);
            os_consist_1__write_dist_ack_os_area(l_radio_dist_ack_os_area);
            break;
        }case os_typ__c_level_3 : {
            
            os_consist_1__write_train_position(l_radio_train_position);
            os_consist_1__write_start_os_area(l_radio_start_os_area);
            os_consist_1__write_mamode(l_radio_mamode);
            os_consist_1__write_os_area_speed(l_radio_os_area_speed);
            os_consist_1__write_dist_ack_os_area(l_radio_dist_ack_os_area);
            break;
        }
        default : {
            
            os_consist_1__write_train_position(os_cte_conf_bs__k_train_position_def);
            os_consist_1__write_start_os_area(os_cte_conf_bs__k_start_os_area_def);
            os_consist_1__write_mamode(os_cte_conf_bs__k_mamode_def);
            os_consist_1__write_os_area_speed(os_cte_conf_bs__k_os_area_speed_def);
            os_consist_1__write_dist_ack_os_area(os_cte_conf_bs__k_dist_ack_os_area_def);
            break;
        }
    }
}

void os_consist__copy_consist_prec(void)
{
    int32_t l_train_position;
    
    os_consist_1__read_train_position(&l_train_position);
    os_consist_1__write_train_position_prev(l_train_position);
}

