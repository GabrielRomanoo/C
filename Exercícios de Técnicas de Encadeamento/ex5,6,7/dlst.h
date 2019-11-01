/* dlst.h
 * Definição do TAD lista ordenada duplamente encadeada circular com nó cabeça e
 * protótipo de suas operações
 */

#ifndef _DLST_H
#define _DLST_H
#include <stdbool.h>

typedef int dlst_info;
typedef struct dlst_no * dlst_ptr;
struct dlst_no {
    dlst_ptr ant;
    dlst_info dado;
    dlst_ptr prox;
};

/* função que inicializa a lista */
void dlst_init(dlst_ptr *);

/* função que insere um novo nó na lista ordenada */
void dlst_inserir(dlst_ptr, dlst_info);

/* função que remove um nó da lista ordenada */
bool dlst_remover(dlst_ptr, dlst_info);

/* função que imprime a lista em ordem crescente */
void dlst_print_cresc(dlst_ptr);

/* função que imprime a lista em ordem decrescente */
void dlst_printf_dec(dlst_ptr);

/* acrescenta no final da lista lst1 os elementos da lista lst2 */
void dlst_append(dlst_ptr, dlst_ptr);

/* remove e devolve o último elemento da lista lst */
 dlst_info dlst_delete_last(dlst_ptr);

/* inverte a ordem dos elementos da lista duplamente encadeada com nó cabeça lst */
void dlst_reverse(dlst_ptr);



#endif // _DLST_H
