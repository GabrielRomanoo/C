/*
3. Escreva uma fun��o de prot�tipo bool is_heap_max(int v[], int n); que verifica
se o vetor v de tamanho n � um heap m�ximo.
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
        printf("N�O e um heap maximo");

    }
    return 0;
}
