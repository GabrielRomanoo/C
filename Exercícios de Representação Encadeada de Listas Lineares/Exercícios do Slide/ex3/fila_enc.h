/* fila.h
 * Defini��o do TAD fila e prot�tipo das opera��es que podem ser
 * realizadas sobre uma fila implementada de forma encadeada.
 */

#ifndef _FILA_ENC_H
#define _FILA_ENC_H

#include <stdbool.h>

typedef int queue_info;
typedef struct queue_no * queue_ptr;
struct queue_no {
    queue_info dado;
    queue_ptr prox;
};

typedef struct {
    queue_ptr comeco; // ponteiro para o in�cio da fila
    queue_ptr final;  // ponteiro para o final da fila
} fila;

/* fun��o que inicializa uma fila */
void queue_init(fila *);

/* fun��o que verifica se a fila est� vazia, eetorna verdadeiro, se a
 * fila est� vazia, ou falso, caso contr�rio. */
bool queue_isempty(fila);

/* fun��o para inserir um novo elemento no final da fila */
void enqueue(fila *, queue_info);

/* fun��o para remover o elemento do come�o da fila */
queue_info dequeue(fila *);

/* fun��o que imprime o conte�do da fila */
void queue_print(fila);

/* fun��o que destr�i a fila */
void queue_kill(fila *);

#endif // _FILA_ENC_H

