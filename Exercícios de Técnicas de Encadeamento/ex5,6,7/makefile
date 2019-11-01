test_dlst: main.o dlst.o
	gcc -o test_dlst main.o dlst.o
	
main.o: main.c dlst.h
	gcc -c main.c

dlst.o: dlst.c dlst.h
	gcc -c dlst.c
