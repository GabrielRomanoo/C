/*
2. Escreva uma função de protótipo void init_vetor(int a[], int n, int val);
que inicialize o vetor a com n elementos com o valor de val.
*/

#include <stdio.h>

void init_vetor(int [], int, int);

int main(){

    int i, j, k=0;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &i);

    int vet[i];

    printf("Informe o valor do vetor: ");
    scanf(" %d", &j);

    init_vetor(vet, i, j);

    for(k=0; k < i; k++){
        printf("%d ", vet[k]);
    }


    return 0;
}

void init_vetor(int a[], int n, int val){

    int x;

    for(x = 0; x < n; x++){
        a[x] = val;
    }

}
