/************************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Scalar configuration data interface

************************************************/

MACHINE
	os_cte_conf_bs

SEES
	os_typ

CONCRETE_CONSTANTS
	k_train_position_def        ,
	k_posoff_max_safe_front_def ,
	k_posoff_min_safe_front_def ,
	k_start_os_area_def         ,
	k_mamode_def                ,
	k_os_area_speed_def         ,
	k_dist_ack_os_area_def      ,

	k_s_to_ms          ,
	k_period_appli     ,
	k_delay_driver_ack

PROPERTIES
	k_train_position_def        : t_abs_i   &
	k_train_position_def        : t_abs     &
	k_posoff_max_safe_front_def : t_abs_i   &
	k_posoff_max_safe_front_def : t_abs     &
	k_posoff_min_safe_front_def : t_abs_i   &
	k_posoff_min_safe_front_def : t_abs     &
	k_start_os_area_def         : t_abs_i   &
	k_start_os_area_def         : t_abs     &
	k_mamode_def                : t_mamode  &
	k_os_area_speed_def         : t_speed_i &
	k_os_area_speed_def         : t_speed   &
	k_dist_ack_os_area_def      : t_dist_i  &
	k_dist_ack_os_area_def      : t_dist    &

	k_s_to_ms          : NAT  &
	k_period_appli     : NAT1 &
	k_delay_driver_ack : NAT

END
	
