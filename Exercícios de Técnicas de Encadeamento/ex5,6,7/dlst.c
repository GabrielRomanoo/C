/* dlst.c
 * Implementa as operações sobre o TAD lista ordenada ducplamente encadeada com nó cabeça
 */

#include "dlst.h"
#include <stdio.h>
#include <stdlib.h>

void dlst_init(dlst_ptr * l)
{
    if((*l = (dlst_ptr) malloc(sizeof(struct dlst_no))) == NULL) {
        fprintf(stderr, "Erro de alocacao de memoria!\n");
        exit(1);
    }
    (*l)->prox = (*l)->ant = *l;
}

void dlst_inserir(dlst_ptr l, dlst_info x)
{
    dlst_ptr n, p;
    if ((n = (dlst_ptr) malloc(sizeof(struct dlst_no))) == NULL) {
        fprintf(stderr, "Erro de alocacao de memoria!\n");
        exit(1);
    }
    n->dado = x;
    p = l;
    while (p->prox != l && x > p->prox->dado) {
        p = p->prox;
    }
    n->prox = p->prox;
    n->ant = p;
    p->prox->ant = n;
    p->prox = n;
}

bool dlst_remover(dlst_ptr l, dlst_info x)
{
    dlst_ptr p = l->prox;
    while (p != l && x > p->dado) {
        p = p->prox;
    }
    if (p != l && x == p->dado) {
        p->prox->ant = p->ant;
        p->ant->prox = p->prox;
        free(p);
        return true;
    }
    return false;
}

void dlst_print_cresc(dlst_ptr l)
{
    dlst_ptr p = l->prox;
    printf("[ ");
    while (p != l) {
        printf("%d,", p->dado);
        p = p->prox;
    }
    printf("\b ]\n");
}

void dlst_printf_dec(dlst_ptr l)
{
    dlst_ptr p = l->ant;
    printf("[ ");
    while (p != l) {
        printf("%d,", p->dado);
        p = p->ant;
    }
    printf("\b ]\n");
}

void dlst_append(dlst_ptr lst1, dlst_ptr lst2) {
    dlst_ptr p = lst1; //ponteiro p apontando pro nó cabeça de lst1
    p->ant->prox = lst2->prox;
    lst2->prox->ant = p->ant;
    p->ant = lst2->ant;
    lst2->ant->prox = p; //ou p->ant->prox
    lst2 = NULL;
}

dlst_info dlst_delete_last(dlst_ptr lst) {
     if (lst != NULL) {
         dlst_ptr p = lst->ant;
         p->ant->prox = p->prox;
         p->prox->ant = p->ant;
         dlst_info val;
         val = p->dado;
         free(p);
         return val;
     }
     printf("Erro! Lista Nula!\n");
     return NULL;
 }

void dlst_reverse(dlst_ptr lst) {
    dlst_ptr n = lst->prox, p = lst->ant;
    dlst_info k,x;
    do {
        dlst_print_cresc(lst);
        x = p->dado;
        k = n->dado;
        p->dado = k;
        n->dado = x;
        p = p->ant;
        n = n->prox;
    } while(p->dado != x && n->dado != k && p != n);
    dlst_print_cresc(lst);
}





