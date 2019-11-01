/*
7. Escreva um programa que dada uma sequência de n números inteiros, imprimi-los em
ordem inversa.
*/

#include <stdio.h>

int main () {

    int n, i;

    printf("Quantos numeros vao ser lidos? \n");
    scanf("%d", &n);

    int vet[n];

    for(i=0;i<n;i++){
        printf("Informe o %d numero \n", i+1);
        scanf("%d", &vet[i]);
    }

    printf("\n");

    printf("Imprimindo em ordem inversa: \n");

    for(i=n-1;i>=0;i--){        //eu botei o n-1 pois um vetor de 10 posicoes vai de 0 ate 9, entao era preciso botar -1 para poder dar o tamanho certo do vetor
        printf("%d \n",vet[i]);

    }



    return 0;
}
