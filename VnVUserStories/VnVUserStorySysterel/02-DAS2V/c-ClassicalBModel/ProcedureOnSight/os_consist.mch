/***********************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Checking data consistency
Data adaptation to current ETCS level

************************************************/

MACHINE
	os_consist

SEES
	os_typ         ,
	os_cte_conf_bs ,
	os_in

DEFINITIONS
	d_variables ==
	level_etcs_prec     ,
	train_position      ,
	train_position_prev ,
	start_os_area       ,
	mamode              ,
	os_area_speed       ,
	dist_ack_os_area
	;

	d_invariant ==
	level_etcs_prec     : t_level  &
	train_position      : t_abs    &
	train_position_prev : t_abs    &
	start_os_area       : t_abs    &
	mamode              : t_mamode &
	os_area_speed       : t_speed  &
	dist_ack_os_area    : t_dist

ABSTRACT_VARIABLES
	d_variables

INVARIANT
	d_invariant

INITIALISATION
	d_variables :( d_invariant )

OPERATIONS
		
	elaborate_area_and_geopos =
	BEGIN
		train_position   ,
		start_os_area    ,
		mamode           ,
		os_area_speed    ,
		dist_ack_os_area :(
			train_position   : t_abs    &
			start_os_area    : t_abs    &
			mamode           : t_mamode &
			os_area_speed    : t_speed  &
			dist_ack_os_area : t_dist)
	END
	;

	copy_consist_prec =
	BEGIN
		train_position_prev :(
			train_position_prev : t_abs)
	END
	;

	/* read operations */

	p_res <-- read_level_etcs_prec =
	BEGIN
		p_res := level_etcs_prec
	END
	;

	p_res <-- read_train_position =
	BEGIN
		p_res :(
			p_res : t_abs_i &
			p_res = train_position)
	END
	;

	p_res <-- read_train_position_prev =
	BEGIN
		p_res :(
			p_res : t_abs_i &
			p_res = train_position_prev)
	END
	;

	p_res <-- read_start_os_area =
	BEGIN
		p_res :(
			p_res : t_abs_i &
			p_res = start_os_area)
	END
	;

	p_res <-- read_mamode =
	BEGIN
		p_res := mamode
	END
	;

	p_res <-- read_os_area_speed =
	BEGIN
		p_res :(
			p_res : t_speed_i &
			p_res = os_area_speed)
	END
	;

	p_res <-- read_dist_ack_os_area =
	BEGIN
		p_res :(
			p_res : t_dist_i &
			p_res = dist_ack_os_area)
	END
	;

	/* write operations */

	write_level_etcs_prec(p_level) =
	PRE
		p_level : t_level
	THEN
		level_etcs_prec := p_level
	END
	;

	write_train_position(p_abs) =
	PRE
		p_abs : t_abs_i &
		p_abs : t_abs
	THEN
		train_position := p_abs
	END
	;

	write_train_position_prev(p_abs) =
	PRE
		p_abs : t_abs_i &
		p_abs : t_abs
	THEN
		train_position_prev := p_abs
	END
	;

	write_start_os_area(p_abs) =
	PRE
		p_abs : t_abs_i &
		p_abs : t_abs
	THEN
		start_os_area := p_abs
	END
	;

	write_mamode(p_mamode) =
	PRE
		p_mamode : t_mamode
	THEN
		mamode := p_mamode
	END
	;

	write_os_area_speed(p_speed) =
	PRE
		p_speed : t_speed_i &
		p_speed : t_speed
	THEN
		os_area_speed := p_speed
	END
	;

	write_dist_ack_os_area(p_dist) =
	PRE
		p_dist : t_dist_i &
		p_dist : t_dist
	THEN
		dist_ack_os_area := p_dist
	END

END

