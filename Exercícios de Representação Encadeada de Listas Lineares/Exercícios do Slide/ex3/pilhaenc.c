/* pilhaenc.c
 * Implementação das operações realizadas sobre o TAD pilha representado
 * de forma encadeada */

#include "pilhaenc.h"
#include <stdlib.h>
#include <stdio.h>

void stack_init(stack_ptr * topo)
{
	*topo = NULL;
}

bool stack_isempty(stack_ptr topo)
{
	return topo == NULL;
}

void push(stack_ptr * topo, stack_info x)
{
	stack_ptr n;
	if ((n = (stack_ptr) malloc(sizeof(struct stack_no))) == NULL) {
		fprintf(stderr, "Pilha cheia!\n");
		exit(1);
	}
	n->dado = x;
	n->prox = *topo;
	*topo = n;
}

stack_info pop(stack_ptr * topo)
{
    if (!stack_isempty(*topo)) {
        stack_ptr n = *topo;
        stack_info x = n->dado;
        *topo = n->prox;
        free(n);
        return x;
    }
    else {
        fprintf(stderr, "Pilha vazia!\n");
        exit(1);
    }
}

stack_info top(stack_ptr topo)
{
    if (!stack_isempty(topo)) {
        return topo->dado;
    }
    else {
        fprintf(stderr, "Pilha vazia!\n");
        exit(1);
    }
}

void stack_kill(stack_ptr * topo) {
    stack_ptr aux;
    while (!stack_isempty(*topo)) {
        aux = *topo;
        *topo = (*topo)->prox;
        free(aux);
    }
}
