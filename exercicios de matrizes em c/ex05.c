/*
5. Desenvolva um programa em C para entrar com os valores para uma matriz An x m. Gerar e
imprimir At
. A matriz transposta é gerada trocando linha por coluna.
*/

#include <stdio.h>

int main() {

    int m, n, i, j, x=0, y=0, z=0;

    printf("Diga a linha e coluna da matriz: \n");
    scanf("%d %d", &n, &m);

    int matriz[n][m], matrizt[m][n];

    printf("Informe os elementos: ");
    printf("\n");

    printf("Matriz: ");
    printf("\n");

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d , %d :", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            printf("\n");
        }
    }

    printf("\n");
    printf("Matriz transposta: ");
    printf("\n");




    return 0;
}


