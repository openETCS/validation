MACHINE
	os_out

SEES
	os_typ,
	os_in,
	os_consist,
	os_train_info,
	os_mode_level

DEFINITIONS
	d_variables ==
	ack_request_os_mode_out ,
	service_brake_command_out
	;

	d_invariant ==
	ack_request_os_mode_out : BOOL &
	service_brake_command_out : BOOL

ABSTRACT_VARIABLES
	d_variables

INVARIANT
	d_invariant

INITIALISATION
	d_variables :( d_invariant )

OPERATIONS
	
	/* write operations */

	write_ack_request_os_mode_out(p_bool) =
	PRE
		p_bool : BOOL
	THEN
		ack_request_os_mode_out := p_bool
	END
	;
	
	write_service_brake_command_out(p_bool) =
	PRE
		p_bool : BOOL
	THEN
		service_brake_command_out := p_bool
	END


END

