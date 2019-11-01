/*
3. Escreva uma função de protótipo bool is_heap_max(int v[], int n); que verifica
se o vetor v de tamanho n é um heap máximo.
*/
#include <stdio.h>
#include <stdlib.h>
#include "heap_max.h"

int main()
{

    int h[] = {1, 2, 10, 3, 5, 7, 6}, n = 7;

    make_heap_max(h, n);

    if(is_heap_max(h,n)) {
         printf("E um heap maximo");
    }
    else {
        printf("NÃO e um heap maximo");

    }
    return 0;
}
