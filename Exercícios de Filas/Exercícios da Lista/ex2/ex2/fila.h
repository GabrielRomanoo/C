/* fila.h
 * Defini��o do TAD fila e prot�tipo das opera��es que podem ser
 * realizadas sobre uma fila.
 */

#ifndef _FILA_H
#define _FILA_H

#include <stdbool.h>

#define QUEUE_MAX 50   // tamanho m�ximo da fila
typedef int queue_info;
typedef struct {
    queue_info itens[QUEUE_MAX]; // itens da fila
    int comeco, // �ndice para o in�cio da fila
        final;  // �ndice para o final da fila
} fila;

/* fun��o que inicializa uma fila */
void queue_init(fila *);

/* fun��o que verifica se a fila est� vazia, eetorna verdadeiro, se a
 * fila est� vazia, ou falso, caso contr�rio. */
bool queue_isempty(fila);

/* fun��o que verifica se a fila est� cheia, retorna verdadeiro, se a
 * fila est� cheia ou falso, caso contr�rio. */
bool queue_isfull(fila);

/* fun��o para inserir um novo elemento no final da fila */
void enqueue(fila *, queue_info);

/* fun��o para remover o elemento do come�o da fila */
queue_info dequeue(fila *);

/* fun��o para imprimir o conte�do da pilha */
void queue_print(fila);

/* fun��o para remover o elemento do come�o da fila e retorna false
se a fila estiver nao-vazia, e true se estiver cheia*/
void dequeue_and_test(fila *, queue_info *, bool *);

#endif // _FILA_H

