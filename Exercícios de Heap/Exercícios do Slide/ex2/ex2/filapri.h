/* filapri.h
 * Definicao do tipo fpa (Fila de Prioridade Ascendente) e do prótipo de suas operações
 */

 #ifndef _FILAPRI_H
 #define _FILAPRI_H

 #include <stdbool.h>

 #define MAX_FPA 10
 typedef int fpa_info;
 typedef struct {
     fpa_info itens[MAX_FPA];
     int n;
 } fpa;

 // inicizaliza a fila de prioridade ascendente
 void fpa_init(fpa *);

 // verifica se a fila está cheia
 bool fpa_isempty(fpa);

 // verifica se a fila está cheia
 bool fpa_isfull(fpa);

 // insere um valor na fila de prioridade ascendente
 void fpa_ins(fpa *, fpa_info);

 // remove e devolve o valor de menor prioridade na fila
 fpa_info fpa_rem_min(fpa *);

 #endif // _FILAPRI_H
