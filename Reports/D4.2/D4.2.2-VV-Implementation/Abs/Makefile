
clean::
	@$(RM) *.i
	@$(RM) *.eacsl.c
	@$(RM) test_abs
	@$(RM) eacsl_test1
	@$(RM) eacsl_test1a
	@$(RM) eacsl_test2

include Makefile.template

CFLAGS += -Wno-attributes

%.i:%.c
	frama-c -cpp-command 'gcc -C -E -nostdinc $(INCLUDES)'\
		-pp-annot -no-unicode -e-acsl $< \
		-then-on e-acsl -print -ocode $@	

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

eacsl_test1a: test_abs.c abs1a.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ /usr/local/share/frama-c/e-acsl/e_acsl.c $+ -lgmp

eacsl_test2: test_abs.c abs3a2.i
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ /usr/local/share/frama-c/e-acsl/e_acsl.c $+ -lgmp

eacsl_test3: test_abs3a2.i
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ /usr/local/share/frama-c/e-acsl/e_acsl.c $+ -lgmp

