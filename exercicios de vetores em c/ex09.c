/*
9. Criar um programa para entrar com n�meros inteiros em um vetor A[10]. Gerar e imprimir
o vetor B onde cada elemento � o quadrado do elemento, na respectiva posi��o do vetor A.
*/

#include <stdio.h>

int main() {

    int i, j, A[10], B[10];

    printf("Informe os valores do Vetor A\n");

    for(i=0 ; i<10 ; i++){
        scanf("%d", &A[i]);
    }

    for(i=0 ; i<10 ; i++){
        j = A[i];
        B[i] = j*j;
    }

    printf("Vetor B\n");

    for(i=0 ; i<10 ; i++){
        printf("%d\n", B[i]);
    }

    return 0;
}
