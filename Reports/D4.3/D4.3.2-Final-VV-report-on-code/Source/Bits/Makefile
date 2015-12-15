
#.SECONDARY:

MAKEFLAGS += --no-print-directory --silent

TOPDIR=../..

include $(TOPDIR)/Makefile.template

#WP_FLAGS += -wp-prop=rte
#WP_FLAGS += -wp-prop=-@lemma
#WP_FLAGS += -wp-prop=reset
#WP_FLAGS += -wp-prop=equal_result
#WP_FLAGS += -wp-prop=equal_value
#WP_FLAGS += -wp-prop=aux
#WP_FLAGS += -wp-prop=left

SRC :=  Bitwalker.c Bitstream.c Bitstream_Inverse.c

OBJ := $(SRC:.c=.o)
REPORT := $(SRC:.c=.report)
CHECK :=  $(SRC:.c=.check)

it : $(OBJ)

check: $(CHECK)

clean::
	@$(RM) $(OBJ)
	@$(RM) libbits.a
	

format: FORCE
	@$(ASTYLE) *.c *.h

lib: libbits.a

libbits.a : $(OBJ)
	ar cru	$@ $^
	ranlib	$@


par:
	@time $(MAKE) -j 3 -O $(REPORT)

log: FORCE
	@(time $(MAKE) report > results.txt)
	

report: $(REPORT)

