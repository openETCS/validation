MACHINE
	os_consist_2

SEES
	os_typ

CONCRETE_VARIABLES
	level_etcs_prec_i,
	train_position_i,
	start_os_area_i,
	mamode_i,
	os_area_speed_i,
	dist_ack_os_area_i

INVARIANT
	level_etcs_prec_i : t_level &
	train_position_i : NAT &
	start_os_area_i : NAT &
	mamode_i : t_mamode &
	os_area_speed_i : NAT &
	dist_ack_os_area_i : NAT

INITIALISATION
	level_etcs_prec_i := c_level_0 ||
	train_position_i := 0 ||
	start_os_area_i := 0 ||
	mamode_i := c_profile_OS ||
	os_area_speed_i := 0 ||
	dist_ack_os_area_i := 0

OPERATIONS

	/* write operations */

	write_level_etcs_prec(p_level) =
	PRE
		p_level : t_level
	THEN
		level_etcs_prec_i := p_level
	END
	;

	write_train_position(p_dist) =
	PRE
		p_dist : NAT
	THEN
		train_position_i := p_dist
	END
	;

	write_start_os_area(p_dist) =
	PRE
		p_dist : NAT
	THEN
		start_os_area_i := p_dist
	END
	;

	write_mamode(p_mamode) =
	PRE
		p_mamode : t_mamode
	THEN
		mamode_i := p_mamode
	END
	;

	write_os_area_speed(p_vit) =
	PRE
		p_vit : NAT
	THEN
		os_area_speed_i := p_vit
	END
	;

	write_dist_ack_os_area(p_dist) =
	PRE
		p_dist : NAT
	THEN
		dist_ack_os_area_i := p_dist
	END

END
