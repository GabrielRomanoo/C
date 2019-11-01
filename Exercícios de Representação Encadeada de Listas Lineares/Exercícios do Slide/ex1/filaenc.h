/* filaenc.h
 * Defini��o do TAD fila representado de forma encadeada e prot�tipos
   de suas opera��es */

#ifndef _FILAENC_H
#define _FILAENC_H

#include <stdbool.h>
#include <stdio.h>

typedef char queue_info;
typedef struct queue_no * queue_ptr;
struct queue_no {
    queue_info dado;
    queue_ptr prox;
};

typedef struct {
    queue_ptr comeco;
    queue_ptr final;
} fila;

/* Inicializa a fila f no estado vazio */
void queue_init(fila *);

/* Verifica se a fila f est� vazia */
bool queue_isempty(fila);

/* Insere o elemento x no final da fila f */
void enqueue(fila *, queue_info);

/* Remove o elemento do in�cio da Fila f e retorna seu valor */
queue_info dequeue(fila *);

/* Imprime todos os elementos da fila f, do in�cio para o final. */
void queue_print(fila);

#endif

