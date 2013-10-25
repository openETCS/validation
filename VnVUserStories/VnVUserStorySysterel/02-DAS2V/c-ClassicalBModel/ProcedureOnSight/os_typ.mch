/*?**********************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Types and scalar constants

**********************************************?*/

MACHINE
	os_typ

SETS

	t_mamode = {
		c_profile_OS
	} ;

	t_level = {
		c_level_0     ,
		c_level_1     ,
		c_level_2     ,
		c_level_3     ,
		c_level_ntc
	} ;

	t_mode = {
		c_mode_NP ,
		c_mode_SB ,
		c_mode_PS ,
		c_mode_SH ,
		c_mode_FS ,
		c_mode_LS ,
		c_mode_SR ,
		c_mode_OS ,
		c_mode_SL ,
		c_mode_NL ,
		c_mode_UN ,
		c_mode_TR ,
		c_mode_PT ,
		c_mode_SF ,
		c_mode_IS ,
		c_mode_SN ,
		c_mode_RV
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

