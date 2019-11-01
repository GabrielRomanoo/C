#include <stdio.h>
#include "filapri.h"

int main()
{
    fpa f;
    fpa_info x;
    int op;
    fpa_init(&f);
    do {
        printf("\nFila de Prioridade Ascendente\n");
        printf("<1> Inserir\n");
        printf("<2> Remover\n");
        printf("<0> Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);
        switch (op) {
        case 1:
            printf("\nNovo valor: ");
            scanf("%d", &x);
            fpa_ins(&f, x);
            break;
        case 2:
            printf("\nMenor valor: %d\n", fpa_rem_min(&f));
            break;
        case 0:
            break;
        default:
            printf("\nOpcao invalida!\n");
        }
    } while (op != 0);
    return 0;
}
