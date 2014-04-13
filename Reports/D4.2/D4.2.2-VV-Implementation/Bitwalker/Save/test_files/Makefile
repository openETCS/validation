# if STD_BITWALKER != 0 the C++ version will be tested otherwise the C version.
STD_BITWALKER = 0

ifneq ($(STD_BITWALKER),0)
DIR=../stdBitwalker
FILETYPE= cpp
else
DIR=../Bitwalker
FILETYPE= c
endif

CPPFLAGS += -I. -I$(DIR)
CXXFLAGS = -Wall -pedantic -std=c++11
CFLAGS = -Wall -pedantic -std=c11

vpath %.$(FILETYPE)  $(DIR)

all: test_bitwalker FORCE
	./test_bitwalker

test_bitwalker:    test_bitwalker.o Bitwalker.o
	$(CXX) -o $@ $+


compare:    compare.o Bitwalker.o
	$(CC) -o $@ $+

format:
	@astyle -A1 -f -p -Y -z2 -c --indent=spaces -s4  *.cpp

clean:
	@$(RM) *.o
	@$(RM) *.orig
	@$(RM) $(FILE)
	@$(RM) compare

FORCE:

