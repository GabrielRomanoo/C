project5: main.o circulo.o ponto.o
	gcc -o project5 main.o circulo.o ponto.o -lm

main.o: main.c circulo.h ponto.h
	gcc -o main.c

circulo.o: circulo.c circulo.h ponto.h
	gcc -o circulo.c

ponto.o: ponto.c ponto.h
	gcc -o ponto.c