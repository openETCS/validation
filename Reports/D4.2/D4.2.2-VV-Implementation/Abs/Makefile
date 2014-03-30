
clean::
	@$(RM) test_abs

include Makefile.template

SRC := $(wildcard *.c)
OBJ := $(SRC:.cpp=*.o)


test_abs: test_abs.o abs.o
	$(CC) -o $@ $+
	./test_abs

