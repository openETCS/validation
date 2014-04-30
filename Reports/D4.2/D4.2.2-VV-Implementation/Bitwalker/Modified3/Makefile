

include ../Makefile.template

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=*.o)

obj : $(OBJ)

Peek.report: Peek.c
	@(. ${SCRIPT_DIR}/script_functions.sh; reportWp Peek;);

Poke.report: Poke.c
	@(. ${SCRIPT_DIR}/script_functions.sh; reportWp Poke;);


