/************************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Train information : location and speed
Data refinement

************************************************/

MACHINE
	os_train_info_2

SEES
	os_typ         ,
	os_cte_conf_bs

CONCRETE_VARIABLES
	posoff_max_safe_front_i ,
	posoff_min_safe_front_i ,
	train_speed_i

INVARIANT
	posoff_max_safe_front_i : t_abs_i   &
	posoff_min_safe_front_i : t_abs_i   &
	train_speed_i           : t_speed_i

INITIALISATION
	posoff_max_safe_front_i := k_posoff_max_safe_front_def ||
	posoff_min_safe_front_i := k_posoff_min_safe_front_def ||
	train_speed_i           := 0

OPERATIONS

	/* write operations */

	write_posoff_max_safe_front(p_abs) =
	PRE
		p_abs : t_abs_i &
		p_abs : t_abs
	THEN
		posoff_max_safe_front_i := p_abs
	END
	;

	write_posoff_min_safe_front(p_abs) =
	PRE
		p_abs : t_abs_i &
		p_abs : t_abs
	THEN
		posoff_min_safe_front_i := p_abs
	END
	;

	write_train_speed(p_speed) =
	PRE
		p_speed : t_speed_i &
		p_speed : t_speed
	THEN
		train_speed_i := p_speed
	END
	
END

