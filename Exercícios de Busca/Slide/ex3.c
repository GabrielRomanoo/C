#include <stdio.h>

int busca_binaria_rec(int [], int, int, int);

int main() {

    int n, i, x;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int vet[n], val;

    //printf("Digite os valores do vetor ORDENADAMENTE\n");
    for (i = 0; i < n; i++){
        //scanf("%d", &vet[i]);
        vet[i] = i;
    }

    printf("Informe o valor para a busca binaria: ");
    scanf("%d", &val);

    x =  busca_binaria_rec(vet,0,n-1,val);

    if (x != -1) {
        printf("Posicao encontrada do valor %d: %d", val, x);
    } else {

    }

    return 0;
}

int busca_binaria_rec(int a[], int inicio, int final, int x) {
    if (inicio > final) {
        return -1;
    }
    int meio = (inicio + final)/2;
    if(a[meio] == x)
        return meio;
    if (x < a[meio])
        return busca_binaria_rec(a,inicio,meio-1,x);
    return busca_binaria_rec(a,meio+1,final,x);
}
//v[18] = {1, 2, 3, 6, 7, 8, 10, 11, 12, 13, 15, 18, 20, 21, 22, 25, 27, 30}
