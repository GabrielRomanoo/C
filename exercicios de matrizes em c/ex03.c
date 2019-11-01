/*
3. Implemente um programa que leia duas matrizes n x n de números reais e gere e escreva
uma terceira com os maiores elementos de cada posição entre as duas matrizes.
*/

#include <stdio.h>

int main() {

    int n, i, j, x;

    printf("Diga o tamanho das duas matrizes: \n");
    scanf("%d", &n);

    int matriz1[n][n], matriz2[n][n], matriz3[n][n];

    printf("Informe os elementos: ");
    printf("\n");

    printf("Matriz 1: ");
    printf("\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d , %d :", i+1, j+1);
            scanf("%d", &matriz1[i][j]);
            printf("\n");
        }
    }

    printf("\n");
    printf("Matriz 2: ");
    printf("\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d , %d :", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
            printf("\n");
        }
    }

     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(matriz1[i][j] > matriz2[i][j]){
                matriz3[i][j] = matriz1[i][j];
            } else{
                 if(matriz1[i][j] < matriz2[i][j]){
                matriz3[i][j] = matriz2[i][j];
            } else{
                    if(matriz1[i][j] == matriz2[i][j]){
                matriz3[i][j] = matriz1[i][j];
                    }
                }
            }
        }
     }

    printf("\n");
    printf("Matriz com os maiores elementos da duas: ");
    printf("\n");


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d \t", matriz3[i][j]);
        }
        printf("\n");
    }



    return 0;
}

