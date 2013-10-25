/*?**********************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Scalar configuration data interface

**********************************************?*/

MACHINE
	os_cte_conf_bs

SEES
	os_cte_intern

SETS
	t_mamode = {
		c_profile_OS
	}

CONCRETE_CONSTANTS
	k_train_position_def   ,
	k_posoff_max_safe_front_def,
	k_posoff_min_safe_front_def,
	k_start_os_area_def    ,
	k_mamode_def           ,
	k_os_area_speed_def    ,
	k_dist_ack_os_area_def ,

	k_s_to_ms          ,
	k_period_appli     ,
	k_delay_driver_ack

PROPERTIES
	k_train_position_def   : NAT &
	k_posoff_max_safe_front_def : NAT &
	k_posoff_min_safe_front_def : NAT &
	k_start_os_area_def    : NAT &
	k_mamode_def           : t_mamode &
	k_os_area_speed_def    : NAT &
	k_dist_ack_os_area_def : NAT &

	k_s_to_ms          : NAT &
	k_period_appli     : NAT1 &
	k_delay_driver_ack : NAT

END
	
