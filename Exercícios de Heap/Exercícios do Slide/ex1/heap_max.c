#include "heap_max.h"

void make_heap_max(int a[], int n) {
    int e = n/2, i, j, x, d = n-1; // �ndice do �ltimo
    while(e > 0) {
       e--;
       i = e;
       j = 2 * e + 1; // �ndice do filho esquerdo
       x = a[e]; // novo elemento
       if (j < d && a[j + 1] > a[j]) j++;
       while (j <= d && a[j] > x) {
           a[i] = a[j];
           i = j;
           j = 2 * j + 1;
           if(j < d && a[j + 1] > a[j]) j++;
       }
       a[i] = x;
   }
}

int rem_heap_max(int a[], int * n) {
	if (*n == 1) {
		return a[--(*n)];
	}
    int i = 0, j = 1; // �ndices do heap
    int menor = a[0], x, d;
    a[0] = a[--(*n)]; // passa o �ltimo para a raiz
    x = a[0]; // novo elemento
    d = *n-1; // �ndice do �ltimo
    if(j < d && a[j+1] > a[j]) j++;
    while(j <= d && a[j] > x) {
        a[i] = a[j];
        i = j;
        j = 2 * j + 1;
        if(j < d && a[j+1] > a[j]) j++;
    }
    a[i] = x;
    return menor;
}

void ins_heap_max(int a[], int * n, int x) {
   int p, f;
   a[(*n)++] = x; // insere no final do heap
   p = *n-1; // �ndice do �ltimo
   f = (p - 1) / 2; // pai de p
   while (p > 0 && a[f] < x) {
      a[p] = a[f];
      p = f;
      f = (p - 1) / 2;
   }
   a[p] = x;
}
