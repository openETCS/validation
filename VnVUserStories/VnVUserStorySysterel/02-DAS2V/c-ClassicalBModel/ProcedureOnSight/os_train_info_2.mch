MACHINE
	os_train_info_2

SEES
	os_typ

CONCRETE_VARIABLES
	train_position_prev_i,
	posoff_max_safe_front_i,
	posoff_min_safe_front_i,
	posoff_max_safe_front_prev_i,
	posoff_min_safe_front_prev_i,
	train_speed_i

INVARIANT
	train_position_prev_i : NAT &
	posoff_max_safe_front_i : NAT &
	posoff_min_safe_front_i : NAT &
	posoff_max_safe_front_prev_i : NAT &
	posoff_min_safe_front_prev_i : NAT &
	train_speed_i : NAT

INITIALISATION
	train_position_prev_i := k_train_position_def ||
	posoff_max_safe_front_i := 0 ||
	posoff_min_safe_front_i := 0 ||
	posoff_max_safe_front_prev_i := k_posoff_max_safe_front_def ||
	posoff_min_safe_front_prev_i := k_posoff_min_safe_front_def ||
	train_speed_i := 0

OPERATIONS

	/* write operations */

	write_train_position_prev(p_dist) =
	PRE
		p_dist : NAT
	THEN
		train_position_prev_i := p_dist
	END
	;

	write_posoff_max_safe_front(p_dist) =
	PRE
		p_dist : NAT
	THEN
		posoff_max_safe_front_i := p_dist
	END
	;

	write_posoff_max_safe_front_prev(p_dist) =
	PRE
		p_dist : NAT
	THEN
		posoff_max_safe_front_prev_i := p_dist
	END
	;

	write_posoff_min_safe_front(p_dist) =
	PRE
		p_dist : NAT
	THEN
		posoff_min_safe_front_i := p_dist
	END
	;

	write_posoff_min_safe_front_prev(p_dist) =
	PRE
		p_dist : NAT
	THEN
		posoff_min_safe_front_prev_i := p_dist
	END
	;

	write_train_speed(p_speed) =
	PRE
		p_speed : NAT
	THEN
		train_speed_i := p_speed
	END
	
END
