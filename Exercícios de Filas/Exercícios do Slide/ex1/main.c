/*
1) Escreva uma função void queue_print(fila 
f), que imprime o conteúdo da fila.
*/
#include "fila.h"
#include <stdio.h>

int main() {

    fila f;

    queue_init(&f);

    int i = 0, val;
    char op;


    while (!queue_isfull(f)) {
        printf("\nInforme o elemento da posicao %d da fila: ", i);
        scanf("%d", &val);
        enqueue(&f, val);
        i++;
        printf("Quer continuar? (S/N):");
        scanf(" %c", &op);
        if (op == 'N' || op == 'n') {
            break;
        }
    }

    printf("\nElementos da fila:\t");
    queue_print(f);

    return 0;
}
