#include "heap_min.h"
#include <stdio.h>

int main()
{
	int n = 10, h[] = { 4, 10, 2, 1, 8, 7, 12, 5, 6, 9 };
	make_heap_min(h, n);
	while (n > 0) {
		printf("%d\n", rem_heap_min(h, &n)); 
	}
	printf("\n-------------------------\n\n");
	ins_heap_min(h, &n, 20); 
	ins_heap_min(h, &n, 5);
	ins_heap_min(h, &n, -1);
	ins_heap_min(h, &n, 3);
	while (n > 0) {
		printf("%d\n", rem_heap_min(h, &n)); 
	}
	return 0;
}
