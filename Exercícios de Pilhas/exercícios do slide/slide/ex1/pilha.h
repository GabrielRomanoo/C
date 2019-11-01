/* pilha.h
 * Definição do TAD pilha e protótipo de suas operações*/
 
#ifndef _PILHA_H
#define _PILHA_H

#include <stdbool.h>

#define STACK_MAX 10
typedef int stack_info;
typedef struct {
	stack_info itens[STACK_MAX];
	int topo;
} pilha;

/* função que inicializa a pilha */
void stack_init(pilha *);

/* função que verifica se a pilha está vazia */
bool stack_isempty(pilha);

/* função que verifica se a pilha está cheia */
bool stack_isfull(pilha);

/* função que empilha um novo valor na pilha */
void push(pilha *, stack_info);

/* função que empilha um novo valor no topo da pilha e sinaliza
 * o sucesso ou falha da operação */
void push_and_test(pilha *, stack_info, bool *);

/* função que remove e devolve o nó do topo da pilha */
stack_info pop(pilha *);

/* função que remove e devolve o nó do top da pilha e sinaliza
   o sucesso ou falha da operação */
stack_info pop_and_test(pilha *, bool *);   

/* função que devolve o valor do topo da pilha */
stack_info top(pilha);

/* função que devolve o valor do topo da pilha e sinaliza
   o sucesso ou falha da operação */
stack_info top_and_test(pilha, bool *);   

#endif 
