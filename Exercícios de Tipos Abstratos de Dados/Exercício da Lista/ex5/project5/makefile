project5: main.o ponto.o retangulo.o
	gcc -o project5 main.o ponto.o retangulo.o -lm

main.o: main.c ponto.h retangulo.h
	gcc -c main.c

ponto.o: ponto.c ponto.h
	gcc -c ponto.c

retangulo.o: retangulo.c retangulo.h ponto.h
	gcc -c retangulo.c
