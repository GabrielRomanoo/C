/*
6. Desenvolva um programa para armazenar 8 números em um vetor e depois imprimir todos
os números múltiplos de 6 digitados.
*/

#include <stdio.h>

int main() {

    int vet[8], i;

    printf("Informe os valores do vetor: \n");

    for(i=0;i<8;i++){
        scanf("%d", &vet[i]);
    }

    printf("\n");

    printf("Valores multiplos de 6 \n");

    for(i=0;i<8;i++){
        if((vet[i] % 6) == 0){
        printf("%d \n", vet[i]);
        }
    }

    return 0;
}
