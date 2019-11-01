//06. Desenvolva um programa em C que dada uma coleção de números inteiros positivos terminada
//por 0 (zero), imprimir seus quadrados.
#include <stdio.h>

int main()
{
    int i, n, q;

    printf("Informe quantos numeros devem ser lidos\n");
    scanf("%d", &q);

    for (i=0; i<q; i++){

      printf("informe um numero terminado com 0 \n");
      scanf("%d", &n);

      n = n*n;

      printf("Seu quadrado eh: %.d \n", n);

    }
    return 0;
}
