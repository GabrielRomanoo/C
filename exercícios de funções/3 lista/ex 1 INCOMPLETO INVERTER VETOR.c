/*
1. Escreva uma fun��o que receba um vetor de inteiros de n elementos e troque o 1�
elemento pelo �ltimo, o 2� pelo pen�ltimo, o 3� pelo antepen�ltimo, e assim
sucessivamente. Escreva um programa que leia um vetor de inteiros de n elementos,
utilize a fun��o para inverter a ordem dos elementos do vetor e depois mostre o vetor.
*/

//FAZER O 1, 2, 3 E 5

#include <stdio.h>

void troca(int, int *);

int main() {

    int i, x=0;

    printf("Informe o tamanho do vetor: ");
    scanf(" %d", &i);

    int vet[i];

    for(x=0; x < i; x++){
        scanf(" %d", &vet[x]);
    }

    troca(i, vet);

    for(x=0; x < i; x++){
        printf("%d ", vet[x]);
    }


    return 0;
}

void troca(int n, int * a){

    int j=0, k = n - 1, aux = 0;

    for(j=0; j < k; j++, k--){
        aux = a[j];
        a[j] = a[k];
        a[k] = aux;
    }

}

