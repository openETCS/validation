MACHINE
	os_consist_1

SEES
	os_typ

DEFINITIONS
	d_variables ==
	level_etcs_prec,
	train_position,
	start_os_area,
	mamode,
	os_area_speed,
	dist_ack_os_area
	;

	d_invariant ==
	level_etcs_prec : t_level &
	train_position : NAT &
	start_os_area : NAT &
	mamode : t_mamode &
	os_area_speed : NAT &
	dist_ack_os_area : NAT

ABSTRACT_VARIABLES
	d_variables

INVARIANT
	d_invariant

INITIALISATION
	level_etcs_prec  := c_level_0 ||
	train_position   := 0 ||
	start_os_area    := 0 ||
	mamode           := c_profile_OS ||
	os_area_speed    := 0 ||
	dist_ack_os_area := 0

OPERATIONS

	/* read operations */

	p_res <-- read_level_etcs_prec =
	BEGIN
		p_res := level_etcs_prec
	END
	;

	p_res <-- read_train_position =
	BEGIN
		p_res := train_position
	END
	;

	p_res <-- read_start_os_area =
	BEGIN
		p_res := start_os_area
	END
	;

	p_res <-- read_mamode =
	BEGIN
		p_res := mamode
	END
	;

	p_res <-- read_os_area_speed =
	BEGIN
		p_res := os_area_speed
	END
	;

	p_res <-- read_dist_ack_os_area =
	BEGIN
		p_res := dist_ack_os_area
	END
	;

	/* write operations  */

	write_level_etcs_prec(p_level) =
	PRE
		p_level : t_level
	THEN
		level_etcs_prec := p_level
	END
	;

	write_train_position(p_dist) =
	PRE
		p_dist : NAT
	THEN
		train_position := p_dist
	END
	;

	write_start_os_area(p_dist) =
	PRE
		p_dist : NAT
	THEN
		start_os_area := p_dist
	END
	;

	write_mamode(p_mamode) =
	PRE
		p_mamode : t_mamode
	THEN
		mamode := p_mamode
	END
	;

	write_os_area_speed(p_vit) =
	PRE
		p_vit : NAT
	THEN
		os_area_speed := p_vit
	END
	;

	write_dist_ack_os_area(p_dist) =
	PRE
		p_dist : NAT
	THEN
		dist_ack_os_area := p_dist
	END 

END
