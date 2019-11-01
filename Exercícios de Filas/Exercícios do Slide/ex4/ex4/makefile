main: main.o deque.o
	gcc -o main main.o deque.o
	
main.o: main.c deque.h
	gcc -c main.c
	
deque.o: deque.c deque.h
	gcc -c deque.c
