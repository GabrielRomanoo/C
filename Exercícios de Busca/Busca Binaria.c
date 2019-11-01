#include <stdio.h>

int busca_binaria(int [], int, int);

int main() {

    int n, i;

    scanf("%d", &n);

    int vet[n], pos;

    for (i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    scanf("%d", &pos);

    printf("\nPosicao de %d eh: %d", pos, busca_binaria(vet,n,pos));

    return 0;
}

int busca_binaria(int a[], int n, int x) {
    int inicio = 0, final = n-1, meio;
    while (inicio <= final) {
        meio = (inicio + final) / 2;
        if (a[meio] == x) return meio;
        if (a[meio] > x)
            final = meio - 1; // busca à esquerda
        else
            inicio = meio + 1; // busca à direita
    }
    return -1;
}
