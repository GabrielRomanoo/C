/*
4. Implemente uma função que receba uma lista como argumento inverta a ordem dos nós
dessa lista usando uma pilha.
*/


#include "pilha.h"
#include "lista.h"
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>

void lst_inverte(lista *l);

int main()
{
    lista l;
    lst_init(&l);
    int k, op, val;

     do {
        printf("\n\nLISTA LINEAR\n");
        printf("<1> Inserir\n");
        printf("<2> Imprimir\n");
        printf("<3> Inverter usando pilha\n");
        printf("<0> Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {

        case 1:
            printf("\n\nInserir um novo no\n");
            printf("Posicao: ");
            scanf("%d", &k);
            printf("Valor: ");
            scanf("%d", &val);
            if (lst_inserir(&l,k,val)) {
                printf("Insercao realizada com sucesso!\n");
            } else {
                printf("Erro: posicao invalida ou lista cheia!\n");
            }
            break;
        case 2:
            printf("\nElementos da lista:\n");
            lst_imprimir(l);
            break;

        case 3:
            lst_inverte(&l);
            break;


        case 0:
            break;

        default:
            printf("\n\nErro: posição invalida!\n");
            break;

        }

    }  while (op != 0);

    return 0;
}

void lst_inverte(lista * l)
{
    int i;
    pilha p;
    stack_init(&p); //inicializa a pilha
    for (i = 0; i < l->n; i++) {
        push(&p, l->itens[i]);
    }
    i = 0;
    while (!stack_isempty(p)) {
        l->itens[i++] = pop(&p);
    }
}
