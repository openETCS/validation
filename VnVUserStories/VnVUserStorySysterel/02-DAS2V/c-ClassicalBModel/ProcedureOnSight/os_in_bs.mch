/*?**********************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Input data interface (base machine)

**********************************************?*/

MACHINE
	os_in_bs

SEES
	os_typ

DEFINITIONS
	d_variables ==
	distance_odo_i                    ,
	radio_train_position_i            ,
	radio_start_os_area_i             ,
	radio_mamode_i                    ,
	radio_os_area_speed_i             ,
	radio_dist_ack_os_area_i          ,
	btm_train_position_i              ,
	btm_start_os_area_i               ,
	btm_mamode_i                      ,
	btm_os_area_speed_i               ,
	btm_dist_ack_os_area_i            ,
	lrbg_btm_i                        ,
	driver_ack_os_mode_i              ,
	dist_antenna_max_safe_front_i ,
	dist_antenna_min_safe_front_i
	;

	d_invariant ==
	distance_odo_i                    : NAT &
	radio_train_position_i            : NAT &
	radio_start_os_area_i             : NAT &
	radio_mamode_i                    : t_mamode &
	radio_os_area_speed_i             : NAT &
	radio_dist_ack_os_area_i          : NAT &
	btm_train_position_i              : NAT &
	btm_start_os_area_i               : NAT &
	btm_mamode_i                      : t_mamode &
	btm_os_area_speed_i               : NAT &
	btm_dist_ack_os_area_i            : NAT &
	lrbg_btm_i                        : INT &
	driver_ack_os_mode_i              : BOOL &
	dist_antenna_max_safe_front_i : NAT &
	dist_antenna_min_safe_front_i : NAT
	
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

	p_res <-- read_lrbg_btm =
	BEGIN
		p_res := lrbg_btm_i
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
