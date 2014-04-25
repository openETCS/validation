
#DIR=../Original
#DIR=../Modified
#DIR=../Modified2
DIR=../Modified3
#DIR=../Modified4
#DIR=../Sources
FILETYPE= c
DIRS = \
		Original\
		Modified\
		Modified2\
		Modified3\
		Modified4

# make sure that the BOOST libraries (in particular dynamic_bitset) is in the include path
CPPFLAGS += -I. -I$(DIR)
CXXFLAGS = -Wall -pedantic -std=c++11
CFLAGS = -Wall -pedantic -std=c11

vpath %.$(FILETYPE)  $(DIR)

all: clean test_bitwalker FORCE
	./test_bitwalker

test_bitwalker:    test_bitwalker.o test_peek.o test_poke.o test_peek_normal_case.o test_poke_normal_case.o Bitwalker.o
	$(CXX) -o $@ $+

format:
	@astyle -A1 -f -p -Y -z2 -c --indent=spaces -s4  *.cpp *.h

clean:
	@for i in $(DIRS);\
	do\
		($(MAKE) clean  -sC ../$$i;);\
	done

	@$(RM) test_bitwalker
	@$(RM) *.o
FORCE:

