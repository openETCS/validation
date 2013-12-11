/************************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Types and scalar constants

************************************************/

MACHINE
	os_typ

SETS

	t_mamode = {
		c_profile_OS
	} ;

	t_level = {
		c_level_0   ,
		c_level_1   ,
		c_level_2   ,
		c_level_3   ,
		c_level_ntc
	} ;

	t_mode = {
		c_mode_NP ,
		c_mode_SB ,
		c_mode_PS ,
		c_mode_SH ,
		c_mode_FS ,
		c_mode_LS ,
		c_mode_SR ,
		c_mode_OS ,
		c_mode_SL ,
		c_mode_NL ,
		c_mode_UN ,
		c_mode_TR ,
		c_mode_PT ,
		c_mode_SF ,
		c_mode_IS ,
		c_mode_SN ,
		c_mode_RV
	}
	
ABSTRACT_CONSTANTS
	t_abs   ,
	t_dist  ,
	t_speed

CONCRETE_CONSTANTS
	t_abs_i   ,
	t_dist_i  ,
	t_speed_i ,

	c_abs_indet   ,
	c_dist_indet  ,
	c_speed_indet

PROPERTIES

	/* type t_abs */
	t_abs        = NAT     &
	t_abs_i      = INT     &
	c_abs_indet  : t_abs_i &
	c_abs_indet /: t_abs   &

	/* type t_dist */
	t_dist        = NAT      &
	t_dist_i      = INT      &
	c_dist_indet  : t_dist_i &
	c_dist_indet /: t_dist   &

	/* type t_speed */
	t_speed        = NAT       &
	t_speed_i      = INT       &
	c_speed_indet  : t_speed_i &
	c_speed_indet /: t_speed

OPERATIONS

	p_res <-- read_t_abs(p_abs) =
	PRE
		p_abs : t_abs_i
	THEN
		p_res := bool(p_abs : t_abs)
	END
	;

	p_res <-- read_t_dist(p_dist) =
	PRE
		p_dist : t_dist_i
	THEN
		p_res := bool(p_dist : t_dist)
	END
	;

	p_res <-- read_t_speed(p_speed) =
	PRE
		p_speed : t_speed_i
	THEN
		p_res := bool(p_speed : t_speed)
	END

END

