

export ASPELL=aspell check --lang=en --encoding=utf-8


all: FORCE
	latexmk -pdf ValidationDescriptionOfWork


FORCE:


clean:
	$(RM) *.aux
	$(RM) *.bak
	$(RM) *.lof
	$(RM) *.fdb_latexmk
	$(RM) *.log
	$(RM) *.fls
	$(RM) *.lot
	$(RM) *.toc


%.spell: %.tex
	$(ASPELL) $<

