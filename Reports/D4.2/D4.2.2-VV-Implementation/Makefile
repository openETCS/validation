

export ASPELL=aspell check --lang=en --encoding=utf-8


all: FORCE
	latexmk -pdf D4.2.2.tex


clean:
	$(RM) *.aux
	$(RM) *.bak
	$(RM) *.bbl
	$(RM) *.blg
	$(RM) *.fdb_latexmk
	$(RM) *.fls
	$(RM) *.lof
	$(RM) *.log
	$(RM) *.lop1
	$(RM) *.lot
	$(RM) *.lox
	$(RM) *.out
	$(RM) *.toc


%.spell: %.tex
	$(ASPELL) $<

FORCE:

