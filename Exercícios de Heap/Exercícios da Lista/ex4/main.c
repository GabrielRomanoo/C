/*
4. Escreva uma fun��o de prot�tipo bool is_heap_min(int v[], int n); que verifica
se o vetor v de tamanho n � um heap m�nimo.
*/
#include <stdio.h>
#include <stdlib.h>
#include "heap_min.h"

int main()
{
    int h[] = {1, 2, 10, 3, 5, 7, 6}, n = 7;

    make_heap_min(h, n);

    if (is_heap_min(h,n)) {
        printf("E um heap minimo");
    }
    else {
         printf("N�O � um heap minimo");
    }

    return 0;
}
