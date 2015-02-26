SHELL = /bin/bash

export SCRIPT_DIR = .

CPPFLAGS = -I. -I../GeneratedC/

CFLAGS = -Wall -pedantic
CXXFLAGS = -Wall -pedantic -std=c++11


ifndef WP_TIMEOUT
WP_TIMEOUT=10
endif


WP_FLAGS = -cpp-command 'gcc -C -E -I.' -pp-annot -no-unicode\
           -wp -wp-rte #\
	   -wp-model Typed+ref\
          -wp-timeout $(WP_TIMEOUT)

#WP_FLAGS += -wp-proof why3:alt-ergo
#WP_FLAGS += -wp-proof why3:cvc3
#WPFLAGS +=-wp-proof coq -wp-script 'wp0.script' 


export WP_GUI=frama-c-gui.byte $(WP_FLAGS)
export WP=frama-c.byte $(WP_FLAGS)

#report-wp:
#	(. ${SCRIPT_DIR}/script_functions.sh; reportWp Bitwalker;);
report-raw:
	(. ${SCRIPT_DIR}/script_functions.sh; extract_raw_data_Wp Bitwalker;);


#main : main.o BitWalker.o

peek:
	@($(WP_GUI) -wp-proof alt-ergo -wp-fct Bitwalker_Peek Bitwalker.c)

poke:
	@($(WP_GUI) -wp-proof alt-ergo -wp-fct Bitwalker_Poke Bitwalker.c)

%.wp:%.c FORCE
	@($(WP_GUI) -wp-out $(patsubst %.c,%.wp, $<) -wp-proof alt-ergo $< &)


format:
	@astyle -A1 -f -p -Y -z2 -c --indent=spaces -s4 *.h *.c

clean:
	@$(RM) *.o
	@$(RM) *.orig
	@$(RM) *.ml
	@$(RM) -rf *.wp
	@$(RM) test_bitwalker
	
FORCE:

