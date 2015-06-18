

include ../Makefile.template

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=*.o)

obj : $(OBJ)

Peek.report: Peek.c
	@(. ${SCRIPT_DIR}/script_functions.sh; reportWp Peek;);

Poke.report: Poke.c
	@(. ${SCRIPT_DIR}/script_functions.sh; reportWp Poke;);

Init.report: Init.c
	@(. ${SCRIPT_DIR}/script_functions.sh; reportWp Init;);

PeekFinish.report: PeekFinish.c
	@(. ${SCRIPT_DIR}/script_functions.sh; reportWp PeekFinish;);

PokeFinish.report: PokeFinish.c
	@(. ${SCRIPT_DIR}/script_functions.sh; reportWp PokeFinish;);

PeekNext.report: PeekNext.c
	@(. ${SCRIPT_DIR}/script_functions.sh; reportWp PeekNext;);

PokeNext.report: PokeNext.c
	@(. ${SCRIPT_DIR}/script_functions.sh; reportWp PokeNext;);

report: Peek.report Poke.report Init.report PeekFinish.report PokeFinish.report\
	PeekNext.report PokeNext.report

