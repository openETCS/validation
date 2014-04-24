
all: d

d: dynamic_bitset
	./dynamic_bitset

include ../Makefile.template

b: bits bits_nested
	./bits 5 13
	./bits_nested 5 13

clean::
	$(RM) bits
	$(RM) dynamic_bitset

