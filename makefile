
all: Galat.pdf

clean:
	rm -rf Galat.toc Galat.log Galat.aux Galat.out

Clean:
	rm -rf Galat.pdf Galat.toc Galat.log Galat.aux Galat.out
Galat.pdf: Galat.tex mechmath.sty hse.sty img/final/galat
	/usr/local/texlive/2013/bin/x86_64-linux/pdflatex Galat.tex
