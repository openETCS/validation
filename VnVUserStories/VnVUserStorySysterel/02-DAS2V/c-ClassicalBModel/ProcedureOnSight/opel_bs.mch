MACHINE
	opel_bs

OPERATIONS

	fail =
	SELECT 0 = 1 THEN
		skip
	END
	;

	p_res <-- add_int_int(p_int_1, p_int_2) =
	PRE
		p_int_1 : INT &
		p_int_2 : INT
	THEN
		p_res :( p_res : INT & p_res = p_int_1 + p_int_2 )
	END
	;

	p_res <-- mul_int_int(p_int_1, p_int_2) =
	PRE
		p_int_1 : INT &
		p_int_2 : INT
	THEN
		p_res :( p_res : INT & p_res = p_int_1 * p_int_2)
	END

END
