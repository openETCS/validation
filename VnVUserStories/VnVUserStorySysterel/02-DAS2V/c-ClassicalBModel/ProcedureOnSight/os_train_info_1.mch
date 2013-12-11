/************************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Train information : location and speed
Data refinement

**********************************************?*/

MACHINE
	os_train_info_1

SEES
	os_typ         ,
	os_cte_conf_bs

DEFINITIONS
	d_variables ==
	posoff_max_safe_front ,
	posoff_min_safe_front ,
	train_speed
	;

	d_invariant ==
	posoff_max_safe_front : t_abs   &
	posoff_min_safe_front : t_abs   &
	train_speed           : t_speed

ABSTRACT_VARIABLES
	d_variables

INVARIANT
	d_invariant

INITIALISATION
	posoff_max_safe_front := k_posoff_max_safe_front_def ||
	posoff_min_safe_front := k_posoff_min_safe_front_def ||
	train_speed           := 0

OPERATIONS

	/* read operations */

	p_res <-- read_posoff_max_safe_front =
	BEGIN
		p_res :(
			p_res : t_abs_i &
			p_res = posoff_max_safe_front)
	END
	;

	p_res <-- read_posoff_min_safe_front =
	BEGIN
		p_res :(
			p_res : t_abs_i &
			p_res = posoff_min_safe_front)
	END
	;

	p_res <-- read_train_speed =
	BEGIN
		p_res :(
			p_res : t_speed_i &
			p_res = train_speed)
	END
	;

	/* write operations */

	write_posoff_max_safe_front(p_abs) =
	PRE
		p_abs : t_abs_i &
		p_abs : t_abs
	THEN
		posoff_max_safe_front := p_abs
	END
	;

	write_posoff_min_safe_front(p_abs) =
	PRE
		p_abs : t_abs_i &
		p_abs : t_abs
	THEN
		posoff_min_safe_front := p_abs
	END
	;

	write_train_speed(p_speed) =
	PRE
		p_speed : t_speed_i &
		p_speed : t_speed
	THEN
		train_speed := p_speed
	END
	
END

