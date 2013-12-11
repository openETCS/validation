/************************************************

Procedure On-Sight : classical B example

Author : Benoît Lucet (benoit.lucet@systerel.fr)

*************************************************

Elaborating ETCS level and mode
Data refinement

************************************************/

MACHINE
	os_mode_level_2

SEES
	os_typ

CONCRETE_VARIABLES
	etcs_level_i            ,
	mamode_prec_i           ,
	mode_i                  ,
	waiting_for_ack_i       ,
	waiting_for_ack_prec_i  ,
	tempo_i                 ,
	service_brake_command_i ,
	ack_request_os_mode_i   ,
	os_mode_in_progress_i

INVARIANT
	etcs_level_i            : t_level &
	mamode_prec_i           : t_mamode &
	mode_i                  : t_mode &
	waiting_for_ack_i       : BOOL &
	waiting_for_ack_prec_i  : BOOL &
	tempo_i                 : NAT &
	service_brake_command_i : BOOL &
	ack_request_os_mode_i   : BOOL &
	os_mode_in_progress_i   : BOOL

INITIALISATION
	etcs_level_i            := c_level_0    ||
	mamode_prec_i           := c_profile_OS ||
	mode_i                  := c_mode_NP    ||
	waiting_for_ack_i       := FALSE        ||
	waiting_for_ack_prec_i  := FALSE        ||
	tempo_i                 := 0            ||
	service_brake_command_i := FALSE        ||
	ack_request_os_mode_i   := FALSE        ||
	os_mode_in_progress_i   := FALSE

OPERATIONS
	
	/* write operations */

	write_etcs_level(p_level) =
	PRE
		p_level : t_level
	THEN
		etcs_level_i := p_level
	END
	;

	write_mamode_prec(p_mamode) =
	PRE
		p_mamode : t_mamode
	THEN
		mamode_prec_i := p_mamode
	END
	;

	write_mode(p_mode) =
	PRE
		p_mode : t_mode
	THEN
		mode_i := p_mode
	END
	;

	write_waiting_for_ack(p_bool) =
	PRE
		p_bool : BOOL
	THEN
		waiting_for_ack_i := p_bool
	END
	;

	write_waiting_for_ack_prec(p_bool) =
	PRE
		p_bool : BOOL
	THEN
		waiting_for_ack_prec_i := p_bool
	END
	;

	write_tempo(p_ind) =
	PRE
		p_ind : NAT
	THEN
		tempo_i := p_ind
	END
	;

	write_service_brake_command(p_bool) =
	PRE
		p_bool : BOOL
	THEN
		service_brake_command_i := p_bool
	END
	;

	write_ack_request_os_mode(p_bool) =
	PRE
		p_bool : BOOL
	THEN
		ack_request_os_mode_i := p_bool
	END
	;

	write_os_mode_in_progress(p_bool) =
	PRE
		p_bool : BOOL
	THEN
		os_mode_in_progress_i := p_bool
	END

END

