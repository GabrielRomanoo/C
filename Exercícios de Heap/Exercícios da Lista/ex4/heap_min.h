/*
 * heap_min.h
 * Define os protótipos das operações realizadas sobre um heap mínimo
 * de números inteiros.
 *
 * Ciro Cirne Trindade
 * 26/03/2019
 */

#ifndef HEAP_MIN
#define HEAP_MIN
#include <stdbool.h>

/* função que cria um heap mínimo */
void make_heap_min(int [], int);

/* função que remove o menor elemento do heap mínimo e
   reconstrói o heap */
int rem_heap_min(int [], int *);

/* função que insere um novo elemento no heap mínimo */
void ins_heap_min(int [], int *, int);

/* função que verifica se o vetor v de tamanho n é um heap mínimo */
bool is_heap_min(int [], int);

#endif // HEAP_MIN
