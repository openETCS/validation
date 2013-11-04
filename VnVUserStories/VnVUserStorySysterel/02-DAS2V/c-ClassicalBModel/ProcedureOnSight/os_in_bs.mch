/************************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Input data interface (basic machine)

************************************************/

MACHINE
	os_in_bs

SEES
	os_typ

DEFINITIONS
	d_variables ==
	distance_odo_i                ,
	radio_train_position_i        ,
	radio_start_os_area_i         ,
	radio_mamode_i                ,
	radio_os_area_speed_i         ,
	radio_dist_ack_os_area_i      ,
	btm_train_position_i          ,
	btm_start_os_area_i           ,
	btm_mamode_i                  ,
	btm_os_area_speed_i           ,
	btm_dist_ack_os_area_i        ,
	driver_ack_os_mode_i          ,
	dist_antenna_max_safe_front_i ,
	dist_antenna_min_safe_front_i
	;

	d_invariant ==
	distance_odo_i                : t_dist_i  &
	radio_train_position_i        : t_abs_i   &
	radio_start_os_area_i         : t_abs_i   &
	radio_mamode_i                : t_mamode  &
	radio_os_area_speed_i         : t_speed_i &
	radio_dist_ack_os_area_i      : t_dist_i  &
	btm_train_position_i          : t_abs_i   &
	btm_start_os_area_i           : t_abs_i   &
	btm_mamode_i                  : t_mamode  &
	btm_os_area_speed_i           : t_speed_i &
	btm_dist_ack_os_area_i        : t_dist_i  &
	driver_ack_os_mode_i          : BOOL      &
	dist_antenna_max_safe_front_i : t_dist_i  &
	dist_antenna_min_safe_front_i : t_dist_i
	
ABSTRACT_VARIABLES
	d_variables

INVARIANT
	d_invariant

INITIALISATION
	distance_odo_i                := 0            ||
	radio_train_position_i        := 0            ||
	radio_start_os_area_i         := 0            ||
	radio_mamode_i                := c_profile_OS ||
	radio_os_area_speed_i         := 0            ||
	radio_dist_ack_os_area_i      := 0            ||
	btm_train_position_i          := 0            ||
	btm_start_os_area_i           := 0            ||
	btm_mamode_i                  := c_profile_OS ||
	btm_os_area_speed_i           := 0            ||
	btm_dist_ack_os_area_i        := 0            ||
	driver_ack_os_mode_i          := FALSE        ||
	dist_antenna_max_safe_front_i := 0            ||
	dist_antenna_min_safe_front_i := 0
	
	

OPERATIONS

	/* read operations */

	p_res <-- read_distance_odo =
	BEGIN
		p_res := distance_odo_i
	END
	;

	p_res <-- read_radio_train_position =
	BEGIN
		p_res := radio_train_position_i
	END
	;

	p_res <-- read_radio_start_os_area =
	BEGIN
		p_res := radio_start_os_area_i
	END
	;

	p_res <-- read_radio_mamode =
	BEGIN
		p_res := radio_mamode_i
	END
	;

	p_res <-- read_radio_os_area_speed =
	BEGIN
		p_res := radio_os_area_speed_i
	END
	;

	p_res <-- read_radio_dist_ack_os_area =
	BEGIN
		p_res := radio_dist_ack_os_area_i
	END
	;

	p_res <-- read_btm_train_position =
	BEGIN
		p_res := btm_train_position_i
	END
	;

	p_res <-- read_btm_start_os_area =
	BEGIN
		p_res := btm_start_os_area_i
	END
	;

	p_res <-- read_btm_mamode =
	BEGIN
		p_res := btm_mamode_i
	END
	;
	
	p_res <-- read_btm_os_area_speed =
	BEGIN
		p_res := btm_os_area_speed_i
	END
	;

	p_res <-- read_btm_dist_ack_os_area =
	BEGIN
		p_res := btm_dist_ack_os_area_i
	END
	;

	p_res <-- read_driver_ack_os_mode =
	BEGIN
		p_res := driver_ack_os_mode_i
	END
	;

	p_res <-- read_dist_antenna_max_safe_front =
	BEGIN
		p_res := dist_antenna_max_safe_front_i
	END
	;

	p_res <-- read_dist_antenna_min_safe_front =
	BEGIN
		p_res := dist_antenna_min_safe_front_i
	END

END

