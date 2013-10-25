MACHINE
	os_mode_level_1

SEES
	os_typ


DEFINITIONS
	d_variables ==
	etcs_level,
	mamode_prec,
	mode,
	waiting_for_ack,
	tempo,
	service_brake_command
	;

	d_invariant ==
	etcs_level : t_level &
	mamode_prec : t_mamode &
	mode : t_mode &
	waiting_for_ack : BOOL &
	tempo : NAT &
	service_brake_command : BOOL

ABSTRACT_VARIABLES
	d_variables

INVARIANT
	d_invariant

INITIALISATION
	etcs_level := c_level_0 ||
	mamode_prec := c_profile_OS ||
	mode := c_mode_NP ||
	waiting_for_ack := FALSE ||
	tempo := 0 ||
	service_brake_command := FALSE

OPERATIONS

	/* read operations */

	p_res <-- read_etcs_level =
	BEGIN
		p_res := etcs_level
	END
	;

	p_res <-- read_mamode_prec =
	BEGIN
		p_res := mamode_prec
	END
	;

	p_res <-- read_mode =
	BEGIN
		p_res := mode
	END
	;

	p_res <-- read_waiting_for_ack =
	BEGIN
		p_res := waiting_for_ack
	END
	;

	p_res <-- read_tempo =
	BEGIN
		p_res := tempo
	END
	;

	p_res <-- read_service_brake_command =
	BEGIN
		p_res := service_brake_command
	END
	;

	/* write operations */

	write_etcs_level(p_level) =
	PRE
		p_level : t_level
	THEN
		etcs_level := p_level
	END
	;

	write_mamode_prec(p_mamode) =
	PRE
		p_mamode : t_mamode
	THEN
		mamode_prec := p_mamode
	END
	;

	write_mode(p_mode) =
	PRE
		p_mode : t_mode
	THEN
		mode := p_mode
	END
	;

	write_waiting_for_ack(p_bool) =
	PRE
		p_bool : BOOL
	THEN
		waiting_for_ack := p_bool
	END
	;

	write_tempo(p_ind) =
	PRE
		p_ind : NAT
	THEN
		tempo := p_ind
	END
	;

	write_service_brake_command(p_bool) =
	PRE
		p_bool : BOOL
	THEN
		service_brake_command := p_bool
	END

END
