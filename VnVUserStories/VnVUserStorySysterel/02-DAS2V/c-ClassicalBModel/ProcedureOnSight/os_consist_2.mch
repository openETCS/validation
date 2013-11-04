/************************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Checking data consistency
Data refinement

************************************************/

MACHINE
	os_consist_2

SEES
	os_typ         ,
	os_cte_conf_bs

CONCRETE_VARIABLES
	level_etcs_prec_i     ,
	train_position_i      ,
	train_position_prev_i ,
	start_os_area_i       ,
	mamode_i              ,
	os_area_speed_i       ,
	dist_ack_os_area_i

INVARIANT
	level_etcs_prec_i     : t_level   &
	train_position_i      : t_abs_i   &
	train_position_prev_i : t_abs_i   &
	start_os_area_i       : t_abs_i   &
	mamode_i              : t_mamode  &
	os_area_speed_i       : t_speed_i &
	dist_ack_os_area_i    : t_dist_i

INITIALISATION
	level_etcs_prec_i     := c_level_0            ||
	train_position_i      := 0                    ||
	train_position_prev_i := k_train_position_def ||
	start_os_area_i       := 0                    ||
	mamode_i              := c_profile_OS         ||
	os_area_speed_i       := 0                    ||
	dist_ack_os_area_i    := 0

OPERATIONS

	/* write operations */

	write_level_etcs_prec(p_level) =
	PRE
		p_level : t_level
	THEN
		level_etcs_prec_i := p_level
	END
	;

	write_train_position(p_abs) =
	PRE
		p_abs : t_abs_i &
		p_abs : t_abs
	THEN
		train_position_i := p_abs
	END
	;

	write_train_position_prev(p_abs) =
	PRE
		p_abs : t_abs_i &
		p_abs : t_abs
	THEN
		train_position_prev_i := p_abs
	END
	;

	write_start_os_area(p_abs) =
	PRE
		p_abs : t_abs_i &
		p_abs : t_abs
	THEN
		start_os_area_i := p_abs
	END
	;

	write_mamode(p_mamode) =
	PRE
		p_mamode : t_mamode
	THEN
		mamode_i := p_mamode
	END
	;

	write_os_area_speed(p_speed) =
	PRE
		p_speed : t_speed_i &
		p_speed : t_speed
	THEN
		os_area_speed_i := p_speed
	END
	;

	write_dist_ack_os_area(p_dist) =
	PRE
		p_dist : t_dist_i &
		p_dist : t_dist
	THEN
		dist_ack_os_area_i := p_dist
	END

END

