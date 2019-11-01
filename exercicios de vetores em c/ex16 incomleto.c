/*
16. Dados dois números naturais m e n e duas sequências ordenadas com m e n números
inteiros, obter uma única sequência ordenada contendo todos os elementos das sequências
sem repetição.
*/

#include <stdio.h>

int main() {

    int m, n, i, x, j, c, y;

    printf("Diga m e n \n");
    scanf("%d %d", &m,&n);

    int vet1[m], vet2[n];

    printf("\n");

    printf("Primeira sequencia ordenada com %d numeros inteiros\n", m);
    for(i=0;i<m;i++){
        scanf("%d", &vet1[i]);
    }

    printf("\n");

    printf("Segunda sequencia ordenada com %d numeros inteiros \n", n);
    for(i=0;i<n;i++){
        scanf("%d", &vet2[i]);
    }

    printf("\n");

    x = m + n;

    int vet3[x];



    for(i=0;i<m;i++){
        vet3[i] = vet1[i];
    }


    y=0;

    for(j=i;j<x;j++){
        vet3[j] = vet2[y];
        y++;
    }

/*
    for(i=0;i<x;i++){
        for(j=i+1;j<x;j++){
            if(vet3[i] == vet3[j]){
                vet3[j]= 0;
        }
    }
*/


    printf("Uma unica sequencia ordenada \n");

    for(i=0;i<x;i++){
        for(j=i-1;j<x;j--){
            if(vet3[j]==vet3[i]){
                break;
            }
        }
        if(j<0){
            printf("%d", vet3[i]);
            printf("\n");
        }

    }


    return 0;
}

