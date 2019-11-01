/* listaord.h
 * Definição do TAD para representar uma lista ordenada implementada
 * de forma encadeada e protótipo das operações sobre esse TAD.
 * 24/04/2019
 */

#ifndef _LISTAORD_H
#define _LISTAORD_H
#include <stdbool.h>

typedef int lst_info;
typedef struct lst_no * lst_ptr;
struct lst_no {
    lst_info dado;
    lst_ptr prox;
};

/* inicializa a lista ordenada */
void lst_init(lst_ptr *);

/* insere um novo elemento na lista ordenada */
void lst_ins(lst_ptr *, lst_info);

/* remove um elemento da lista ordenada */
bool lst_rem(lst_ptr *, lst_info);

/* procura e devolve o ponteiro para o nó da lista
 * que contém um valor, ou NULL, caso o valor não
 * seja localizado */
lst_ptr lst_find(lst_ptr, lst_info);

/* imprime os elementos da lista ordenada */
void lst_print(lst_ptr);

/* destrói uma lista ordenada */
void lst_kill(lst_ptr *);

/* devolve o número de vezes que o elemento x ocorre dentro da lista */
int lst_occurs(lst_ptr, lst_info);

/* devolve o número de elementos armazenados em l */
int lst_size(lst_ptr);

/* remove de l todas as ocorrências do elemento x e devolve o número de remoções */
int lst_rem_all (lst_ptr *, lst_info);

/* combina x e y em uma única lista ordenada e a devolve */
lst_ptr lst_merge(lst_ptr, lst_ptr);

/* informa se duas listas são idênticas ou não (se forem iguais, a função devolve true, caso contrário, devolve false) */
bool lst_equals(lst_ptr, lst_ptr);

#endif
