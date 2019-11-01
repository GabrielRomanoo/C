/* fpa.h
 * Definição do TAD fpa (fila de prioridade ascendente e 
 * protótipos das operações que podem ser realizadas sobre uma fpa. 
 */

#ifndef _FPA_H
#define _FPA_H

#include <stdbool.h>

#define FPA_MAX 50   // tamanho máximo da fila 
typedef int fpa_info;
typedef struct {
    fpa_info itens[FPA_MAX]; // itens da fila 
    int final;  // índice para o final da fila 
    int tamanho; // tamanho da fila
} fpa;

/* função que inicializa uma fpa */
void fp_init(fpa *);

/* função que verifica se a fpa está vazia, retorna verdadeiro, se a
 * fpa está vazia, ou falso, caso contrário. */
bool fp_isempty(fpa);

/* função que verifica se a fpa está cheia, retorna verdadeiro, se a
 * fpa está cheia ou falso, caso contrário. */
bool fp_isfull(fpa);

/* função para inserir um novo elemento no final da fpa ou na 1ª
 * posição marcada como vazia */
void fp_inserir(fpa *, fpa_info);

/* função para remover e devolver o elemento de menor prioridade da fpa 
 * e marca sua posição como removida */
fpa_info fp_remover_min(fpa *);

#endif // _FPA_H

