

include ../Makefile.template

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=*.o)

obj : $(OBJ)

Bitwalker_Peek.report: Bitwalker_Peek.c
	@(. ${SCRIPT_DIR}/script_functions.sh; reportWp Bitwalker_Peek;);
	@ $(RM) fillFull.debug


