MACHINE
	os_train_info_1

SEES
	os_typ

DEFINITIONS
	d_variables ==
	train_position_prev,
	posoff_max_safe_front,
	posoff_max_safe_front_prev,
	posoff_min_safe_front,
	posoff_min_safe_front_prev,
	train_speed
	;

	d_invariant ==
	train_position_prev : NAT &
	posoff_max_safe_front : NAT &
	posoff_max_safe_front_prev : NAT &
	posoff_min_safe_front : NAT &
	posoff_min_safe_front_prev : NAT &
	train_speed : NAT

ABSTRACT_VARIABLES
	d_variables

INVARIANT
	d_invariant

INITIALISATION
	train_position_prev := k_train_position_def ||
	posoff_max_safe_front := 0 ||
	posoff_max_safe_front_prev := k_posoff_max_safe_front_def ||
	posoff_min_safe_front := 0 ||
	posoff_min_safe_front_prev := k_posoff_min_safe_front_def ||
	train_speed := 0

OPERATIONS

	/* read operations */

	p_res <-- read_train_position_prev =
	BEGIN
		p_res := train_position_prev
	END
	;

	p_res <-- read_posoff_max_safe_front =
	BEGIN
		p_res := posoff_max_safe_front
	END
	;

	p_res <-- read_posoff_max_safe_front_prev =
	BEGIN
		p_res := posoff_max_safe_front_prev
	END
	;
	
	p_res <-- read_posoff_min_safe_front =
	BEGIN
		p_res := posoff_min_safe_front
	END
	;

	p_res <-- read_posoff_min_safe_front_prev =
	BEGIN
		p_res := posoff_min_safe_front_prev
	END
	;

	p_res <-- read_train_speed =
	BEGIN
		p_res := train_speed
	END
	;

	/* write operations */

	write_train_position_prev(p_dist) =
	PRE
		p_dist : NAT
	THEN
		train_position_prev := p_dist
	END
	;

	write_posoff_max_safe_front(p_dist) =
	PRE
		p_dist : NAT
	THEN
		posoff_max_safe_front := p_dist
	END
	;

	write_posoff_max_safe_front_prev(p_dist) =
	PRE
		p_dist : NAT
	THEN
		posoff_max_safe_front_prev := p_dist
	END
	;

	write_posoff_min_safe_front(p_dist) =
	PRE
		p_dist : NAT
	THEN
		posoff_min_safe_front := p_dist
	END
	;

	write_posoff_min_safe_front_prev(p_dist) =
	PRE
		p_dist : NAT
	THEN
		posoff_min_safe_front_prev := p_dist
	END
	;

	write_train_speed(p_speed) =
	PRE
		p_speed : NAT
	THEN
		train_speed := p_speed
	END
	
END
