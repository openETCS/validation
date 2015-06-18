# usage:
# make TINA=<string> OPSYS=<string> // makes tpn.tts, generate tpn.ktz, check LTL and clear up 

TINA=.
OPSYS=.
GCC=gcc -O2 -s
TARGET=self
AVL=../lib/avl

# setting target dependant flags
ifeq ($(OPSYS),linux)
# intel linux 
EXT=.so
SHFLG=-shared -fPIC -fpic
KTZCMD=$(TINA)/sift -W -TTS
SELTCMD=$(TINA)/selt
else
ifeq ($(OPSYS),mac)
# macos 
EXT=.dylib
SHFLG=-m32 -dynamiclib -fPIC 
KTZCMD=$(TINA)/sift -W -TTS
SELTCMD=$(TINA)/selt
else
# assuming intel mingw
EXT=.dll
SHFLG=-shared
KTZCMD=$(TINA)\sift -W -TTS
SELTCMD=$(TINA)\selt
endif
endif


all: 
	@if test $(TINA) = .; then echo "usage: make TINA=<string> path of TINA bin"; fi 
	@if test $(OPSYS) = .; then echo "usage: make OPSYS=<string> win/mac/linux"; else $(MAKE) static TINA=$(TINA) OPSYS=$(OPSYS); fi

static:
	mkdir -p tpn.tts
	cp tpn.net tpn.tts
	$(GCC) -o tpn$(EXT) $(SHFLG) -I$(AVL) tpn.net.c $(AVL)/avl.c
	cp tpn$(EXT) tpn.net.c tpn.tts
	echo "make static tpn.tts"
	$(KTZCMD) -W -TTS tpn.tts tpn.ktz
	$(SELTCMD) tpn.ktz -prelude req.ltl
clean:
	rm -rf tpn.tts

