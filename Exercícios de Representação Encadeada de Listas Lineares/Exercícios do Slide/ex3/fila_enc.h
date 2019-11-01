/* fila.h
 * Definição do TAD fila e protótipo das operações que podem ser
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
    queue_ptr comeco; // ponteiro para o início da fila
    queue_ptr final;  // ponteiro para o final da fila
} fila;

/* função que inicializa uma fila */
void queue_init(fila *);

/* função que verifica se a fila está vazia, eetorna verdadeiro, se a
 * fila está vazia, ou falso, caso contrário. */
bool queue_isempty(fila);

/* função para inserir um novo elemento no final da fila */
void enqueue(fila *, queue_info);

/* função para remover o elemento do começo da fila */
queue_info dequeue(fila *);

/* função que imprime o conteúdo da fila */
void queue_print(fila);

/* função que destrói a fila */
void queue_kill(fila *);

#endif // _FILA_ENC_H

