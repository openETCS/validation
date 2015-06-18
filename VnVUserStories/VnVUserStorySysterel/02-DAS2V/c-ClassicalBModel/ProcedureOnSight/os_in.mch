/************************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Input data processing

************************************************/

MACHINE
	os_in

SEES
	os_typ

DEFINITIONS
	d_variables ==
	distance_odo                ,
	radio_train_position        ,
	radio_start_os_area         ,
	radio_mamode                ,
	radio_os_area_speed         ,
	radio_dist_ack_os_area      ,
	btm_train_position          ,
	btm_start_os_area           ,
	btm_mamode                  ,
	btm_os_area_speed           ,
	btm_dist_ack_os_area        ,
	driver_ack_os_mode          ,
	dist_antenna_max_safe_front ,
	dist_antenna_min_safe_front
	;

	d_invariant ==
	distance_odo                : t_dist &
	radio_train_position        : t_abs &
	radio_start_os_area         : t_abs &
	radio_mamode                : t_mamode &
	radio_os_area_speed         : t_speed &
	radio_dist_ack_os_area      : t_dist &
	btm_train_position          : t_abs &
	btm_start_os_area           : t_abs &
	btm_mamode                  : t_mamode &
	btm_os_area_speed           : t_speed &
	btm_dist_ack_os_area        : t_dist &
	driver_ack_os_mode          : BOOL &
	dist_antenna_max_safe_front : t_dist &
	dist_antenna_min_safe_front : t_dist
	
ABSTRACT_VARIABLES
	d_variables

INVARIANT
	d_invariant

INITIALISATION
	d_variables :( d_invariant )

OPERATIONS

	/* read operations */

	p_res <-- read_distance_odo =
	BEGIN
		p_res :(
			p_res : t_dist_i &
			p_res = distance_odo)
	END
	;

	p_res <-- read_radio_train_position =
	BEGIN
		p_res :(
			p_res : t_abs_i &
			p_res = radio_train_position)
	END
	;

	p_res <-- read_radio_start_os_area =
	BEGIN
		p_res :(
			p_res : t_abs_i &
			p_res = radio_start_os_area)
	END
	;

	p_res <-- read_radio_mamode =
	BEGIN
		p_res := radio_mamode
	END
	;

	p_res <-- read_radio_os_area_speed =
	BEGIN
		p_res :(
			p_res : t_speed_i &
			p_res = radio_os_area_speed)
	END
	;

	p_res <-- read_radio_dist_ack_os_area =
	BEGIN
		p_res :(
			p_res : t_dist_i &
			p_res = radio_dist_ack_os_area)
	END
	;

	p_res <-- read_btm_train_position =
	BEGIN
		p_res :(
			p_res : t_abs_i &
			p_res = btm_train_position)
	END
	;

	p_res <-- read_btm_start_os_area =
	BEGIN
		p_res :(
			p_res : t_abs_i &
			p_res = btm_start_os_area)
	END
	;

	p_res <-- read_btm_mamode =
	BEGIN
		p_res := btm_mamode
	END
	;
	
	p_res <-- read_btm_os_area_speed =
	BEGIN
		p_res :(
			p_res : t_speed_i &
			p_res = btm_os_area_speed)
	END
	;

	p_res <-- read_btm_dist_ack_os_area =
	BEGIN
		p_res :(
			p_res : t_dist_i &
			p_res = btm_dist_ack_os_area)
	END
	;

	p_res <-- read_driver_ack_os_mode =
	BEGIN
		p_res := driver_ack_os_mode
	END
	;

	p_res <-- read_dist_antenna_max_safe_front =
	BEGIN
		p_res :(
			p_res : t_dist_i &
			p_res = dist_antenna_max_safe_front)
	END
	;

	p_res <-- read_dist_antenna_min_safe_front =
	BEGIN
		p_res :(
			p_res : t_dist_i &
			p_res = dist_antenna_min_safe_front)
	END

END
