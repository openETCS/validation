
export ASPELL=aspell check -p ./.dict --lang=en --encoding=utf-8
FILE = informal_specification
all: silent

clean:
	$(RM) *.aux
	$(RM) $(FILE).lof
	$(RM) $(FILE).lot
	$(RM) $(FILE).bbl
	$(RM) $(FILE).blg
	$(RM) $(FILE).fls
	$(RM) $(FILE).fdb_latexmk
	$(RM) $(FILE).lop2
	$(RM) $(FILE).log
	$(RM) $(FILE).out
	$(RM) $(FILE).toc

silent: *.tex
	latexmk -f -silent -pdf $(FILE)	

verbose: *.tex
	latexmk -f -pdf $(FILE)

%.spell: %.tex
	$(ASPELL) $<


#far from optimal, depends on Tex directories in VPATH
spell:
