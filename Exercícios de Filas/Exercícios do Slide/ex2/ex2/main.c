/*
2) Escreva uma função, void 
dequeue_and_test(fila * f, queue_info 
* x, bool * und), que defina und como
false e x com o item removido de uma fila
não-vazia, e que defina und com true se a fila
estiver vazia.
*/
#include <stdio.h>
#include "fila.h"

int main()
{
    fila f;
    queue_init(&f);

    int i = 0, val;
    char op;
    bool und;


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

    printf("\nDeseja remover o elemento do inicio da fila? (S/N):");
    scanf(" %c", &op);
    if (op == 'N' || op == 'n') {
    }
    else {
        while (!queue_isempty(f)) {
            dequeue_and_test(&f, &val, &und);
            printf("\nElemento removido: ", val);

            if (und != true) {
                printf("Quer continuar? (S/N):");
                scanf(" %c", &op);
                if (op == 'N' || op == 'n') {
                    break;
                }
            }
        }
    }

    printf("\nElementos da fila:\t");
    queue_print(f);

    return 0;
}
