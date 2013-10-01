
CPPFLAGS = -I. -I../GeneratedC/

CFLAGS = -Wall -pedantic


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

Bitwalker.o: Bitwalker.h Bitwalker.c

main : main.o BitWalker.o

format:
	@astyle -A1 -f -p -Y -z2 -c --indent=spaces -s4 *.h *.c

FORCE:

%.wp:%.c FORCE
	@($(WP_GUI) -wp-out $(patsubst %.c,%.wp, $<) -wp-proof alt-ergo $< &)


clean:
	@$(RM) *.o
	@$(RM) *.orig
	@$(RM) *.ml
	@$(RM) -rf *.wp
	
