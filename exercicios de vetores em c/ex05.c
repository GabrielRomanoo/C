/*
5. Desenvolva um programa para armazenar 15 números inteiros em um vetor e imprimir
uma listagem numerada contendo o número e umas das mensagens: par ou ímpar.
*/
#include <stdio.h>

int main() {

    int i, vet[15];

    printf("Informe os valores do vetor de 15 posicoes: \n");

    for(i=0;i<15;i++){
        scanf("%d", &vet[i]);
    }

    printf("\n");

    printf("Listagem abaixo: \n");

    for(i=0;i<15;i++){
        if(vet[i] % 2 == 0){
        printf("O numero %d eh par \n", vet[i]);
        } else {
            printf("O numero %d eh impar \n", vet[i]);
        }
    }

    return 0;
}
