/*
1. Criar um programa em C que leia os elementos de uma matriz inteira n x n e:
a) escreva os elementos da diagonal principal;
b) escreva todos os elementos, exceto os elementos da diagonal principal;
c) escreva os elementos da diagonal secundária.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, j, n;

    printf("Informe o tamanho da matriz n x n : \n");
    scanf("%d", &n);

    int matriz[n][n];

    printf("\n");

    printf("A seguir, informe os elementos da matriz : \n");

    srand(time(NULL)); // srand() gera uma semente para o rand(). time() devolve o tempo em segundos do sistema

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Posicao %d , %d : ", i+1, j+1);
            matriz[i][j] = rand() % (n * n);
            printf("%d", matriz[i][j]); //usa pra poder aparecer o numero depois da frase "posicao: ..."
            printf("\n");
           // scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    printf("A sua matriz eh: \n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("A seguir estao elementos da diagonal principal: \n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                printf("%d \t", matriz[i][j]);
            } else{
                    printf("\t");
            }
        }
        printf("\n");
    }

    printf("\n");

    printf("A seguir estao todos elementos, exceto os elementos da diagonal principal: \n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                printf("%d \t", matriz[i][j]);
            } else{
                    printf("\t");
            }
        }
        printf("\n");
    }

    printf("\n");

    printf("A seguir estao os elementos da diagonal secundaria: \n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j == n-1){
                printf("%d \t", matriz[i][j]);
            } else{
                    printf("\t");
            }
        }
        printf("\n");
    }







    return 0;
}
