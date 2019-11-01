/* deque.h
 * Definição do TAD deque e protótipos de suas operações
 *
 * Ciro Cirne Trindade
 * 25/03/2019
 */
 
#ifndef _DEQUE_H
#define _DEQUE_H

#include <stdbool.h>

#define DEQUE_MAX 10
typedef int deque_info;
typedef struct {
	deque_info itens[DEQUE_MAX];
	int frente; // índice para o último inserido pela frente
	int tras; // índice para o último inserido por trás
} deque;

/* função que inicializa um deque no estado vazio */
void deque_init(deque *);

/* função que verifica se o deque está vazio */
bool deque_isempty(deque);

/* função que verifica se o deque está cheio */
bool deque_isfull(deque);

/* função que insere um novo elemento no deque pela frente */
void deque_ins_frente(deque *, deque_info);

/* função que insere um novo elemento no deque por trás */
void deque_ins_tras(deque *, deque_info);

/* função que remove um elemento do deque pela frente */
deque_info deque_rem_frente(deque *);

/* função que remove um elemento do deque por trás */
deque_info deque_rem_tras(deque *);

/* função que imprime o conteúdo do deque */
void deque_print(deque);

#endif 

