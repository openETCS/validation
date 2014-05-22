
clean::
	@$(RM) test_abs

include Makefile.template

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=*.o)

obj : $(OBJ)


test_abs: test_abs.o abs.o
	$(CC) -o $@ $+
	./test_abs

generated_code.c: abs1.c
	frama-c -e-acsl abs1.c -then-on e-acsl -print -ocode generated_code.c

eacsl_test: test_abs.c generated_code.c
	$(CC) -o $@ /usr/local/share/frama-c/e-acsl/e_acsl.c generated_code.c test_abs.c -lgmp

