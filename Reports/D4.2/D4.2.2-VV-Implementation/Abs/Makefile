
clean::
	@$(RM) *.eacsl.c
	@$(RM) test_abs
	@$(RM) eacsl_test1

include Makefile.template

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=*.o)

obj : $(OBJ)


test_abs: test_abs.o abs.o
	$(CC) -o $@ $+
	./test_abs


abs1.eacsl.c: abs1.c
	frama-c -cpp-command 'gcc -C -E -nostdinc $(INCLUDES)' -e-acsl $< -then-on e-acsl -print -ocode $@

eacsl_test1: test_abs.c abs1.eacsl.c
	$(CC) -o $@ /usr/local/share/frama-c/e-acsl/e_acsl.c $+ -lgmp

abs1a.eacsl.c: abs1a.c
	frama-c -cpp-command 'gcc -C -E -nostdinc $(INCLUDES)' -e-acsl $< -then-on e-acsl -print -ocode $@

eacsl_test1a: test_abs.c abs1a.eacsl.c
	$(CC) $(CPPFLAGS) -o $@ /usr/local/share/frama-c/e-acsl/e_acsl.c $+ -lgmp

