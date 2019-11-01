/* fpa.h
 * Defini��o do TAD fpa (fila de prioridade ascendente e 
 * prot�tipos das opera��es que podem ser realizadas sobre uma fpa. 
 */

#ifndef _FPA_H
#define _FPA_H

#include <stdbool.h>

#define FPA_MAX 50   // tamanho m�ximo da fila 
typedef int fpa_info;
typedef struct {
    fpa_info itens[FPA_MAX]; // itens da fila 
    int final;  // �ndice para o final da fila 
    int tamanho; // tamanho da fila
} fpa;

/* fun��o que inicializa uma fpa */
void fp_init(fpa *);

/* fun��o que verifica se a fpa est� vazia, retorna verdadeiro, se a
 * fpa est� vazia, ou falso, caso contr�rio. */
bool fp_isempty(fpa);

/* fun��o que verifica se a fpa est� cheia, retorna verdadeiro, se a
 * fpa est� cheia ou falso, caso contr�rio. */
bool fp_isfull(fpa);

/* fun��o para inserir um novo elemento no final da fpa ou na 1�
 * posi��o marcada como vazia */
void fp_inserir(fpa *, fpa_info);

/* fun��o para remover e devolver o elemento de menor prioridade da fpa 
 * e marca sua posi��o como removida */
fpa_info fp_remover_min(fpa *);

#endif // _FPA_H

