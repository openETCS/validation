

export ASPELL=aspell check --lang=en --encoding=utf-8


all: FORCE
	pdflatex D4.3.2
	bibtex D4.3.2
	pdflatex D4.3.2
	pdflatex D4.3.2


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

