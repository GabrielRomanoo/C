/* pilhaenc.h
 * Definição do TAD pilha representado de forma encadeada e protótipos
 * de suas operações */

#ifndef _PILHAENC_H
#define _PILHAENC_H

#include <stdbool.h>

typedef int stack_info;
typedef struct stack_no * stack_ptr;
struct stack_no {
	stack_info dado;
	stack_ptr prox;
};

// inicializa a pilha
void stack_init(stack_ptr *);

// verifica se a pilha está vazia
bool stack_isempty(stack_ptr);

// insere um novo elemento no topo da pilha
void push(stack_ptr *, stack_info);

// remove e devolve o valor do elemento do topo da pilha
stack_info pop(stack_ptr *);

// devolve o valor do elemento do topo da pilha
stack_info top(stack_ptr);

// destrói a pilha
void stack_kill(stack_ptr *);

#endif
