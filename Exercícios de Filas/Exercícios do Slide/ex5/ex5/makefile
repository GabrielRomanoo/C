main: main.o fpa.o
	gcc -o main main.o fpa.o
	
main.o: main.c fpa.h
	gcc -c main.c

fpa.o: fpa.c fpa.h
	gcc -c fpa.c	
