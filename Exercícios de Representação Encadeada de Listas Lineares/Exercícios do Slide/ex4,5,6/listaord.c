/* listaord.c
 * Implementação das operações sobre o TAD lista ordenada.
 * 24/04/2019
 */

#include "listaord.h"
#include <stdlib.h>
#include <stdio.h>

void lst_init(lst_ptr * l)
{
    *l = NULL;
}

void lst_ins(lst_ptr * l, lst_info val)
{
    lst_ptr n;
    if ((n = (lst_ptr) malloc(sizeof(struct lst_no))) == NULL) {
        fprintf(stderr, "Erro de alocacao de memoria!\n");
        exit(1);
    }
    n->dado = val;
    if (*l == NULL || val <= (*l)->dado) { //testando se a lista ta vazia ou se o val pe menor igual ao 1º no da lista
       n->prox = *l;
       *l = n;
    }
    else {
        lst_ptr p = *l;
        while (p->prox != NULL && val > p->prox->dado) { //testando se val é o maior e se o valor é maior que o primeiro
            p = p->prox;
        }
        n->prox = p->prox;
        p->prox = n;
    }
}

bool lst_rem(lst_ptr * l, lst_info x)
{
    if (*l == NULL || x < (*l)->dado) { //testando se a lista está vazia ou se o x é menor que o 1º elemento
        return false;
    }
    else {
        lst_ptr p = *l;
        if (x == (*l)->dado) { //testando se x é igual ao primeiro elemento
            *l = p->prox; //poderia ser *l = (*l)->prox
            free(p);
            return true;
        }
        else {
            while (p->prox != NULL && x > p->prox->dado) { //acha a posição (testa se x é maior que o
                p = p->prox;
            }
            if (p->prox != NULL && x == p->prox->dado) {
                lst_ptr n = p->prox;
                p->prox = n->prox;
                free(n);
                return true;
            }
        }
        return false;
    }
}

lst_ptr lst_find(lst_ptr l, lst_info x)
{
    while (l != NULL && x > l->dado) {
        l = l->prox;
    }
    if (l != NULL && x == l->dado) {
        return l;
    }
    return NULL;
}

void lst_print(lst_ptr l)
{
    printf("[ ");
    while (l != NULL) {
        printf("%d,", l->dado);
        l = l->prox;
    }
    printf("\b ]\n");
}

void lst_kill(lst_ptr * l)
{
	lst_ptr p;
	while (*l != NULL) {
		p = *l;
		*l = (*l)->prox;
		free(p);
	}
}

int lst_occurs(lst_ptr l, lst_info x) {
    int cont = 0;
    while (l != NULL) {
        if (l->dado == x) {
            cont ++;
        }
        l = l->prox;
    }
    return cont;
}

int lst_size(lst_ptr l) {
    int cont = 0;
    while (l != NULL) {
        cont++;
        l = l->prox;
    }
    return cont;
}

int lst_rem_all(lst_ptr *l, lst_info x) {
    int i = 0, ocorrencia = lst_occurs(*l,x);
    while (i < ocorrencia) {
        if (*l == NULL || x < (*l)->dado) { //testando se a lista está vazia ou se o x é menor que o 1º elemento
            exit(1);
        }
        else {
            lst_ptr p = *l;
            if (x == (*l)->dado) { //testando se x é igual ao primeiro elemento
                *l = p->prox; //poderia ser *l = (*l)->prox
                free(p);
                i++;
            }
            else {
                while (p->prox != NULL && x > p->prox->dado) { //acha a posição (testa se x é maior que o
                    p = p->prox;
                }
                if (p->prox != NULL && x == p->prox->dado) {
                    lst_ptr n = p->prox;
                    p->prox = n->prox;
                    free(n);
                    i++;
                }
            }
        }
    }
    //JEITO DO CIRO MAIS EFICIENTE
    return ocorrencia;
}

lst_ptr lst_merge(lst_ptr x, lst_ptr y) {
    lst_ptr z,p, n;
    //p aponta pro final da lista
    lst_init(&z);
     //PRIMEIRA insercap DE Z
    if (x != NULL && y != NULL){
        if (x->dado < y->dado) { //PRIMEIRA POSICAO DE Z
            if ((z = (lst_ptr) malloc(sizeof(struct lst_no))) == NULL) {
                fprintf(stderr, "Erro de alocacao de memoria!\n");
                exit(1);
            }
            z->dado = x->dado;
            z->prox = NULL;
            x = x->prox;
        }
        else {
            if ((z = (lst_ptr) malloc(sizeof(struct lst_no))) == NULL) {
                fprintf(stderr, "Erro de alocacao de memoria!\n");
                exit(1);
            }
            z->dado = y->dado;
            z->prox = NULL;
            y = y->prox;
        }
    }
    else {
        if (x != NULL || y != NULL){
            if (x != NULL) {
                if ((z = (lst_ptr) malloc(sizeof(struct lst_no))) == NULL) {
                fprintf(stderr, "Erro de alocacao de memoria!\n");
                exit(1);
                }
                z->dado = x->dado;
                z->prox = NULL;
                x = x->prox;
            } else {
                 if ((z = (lst_ptr) malloc(sizeof(struct lst_no))) == NULL) {
                fprintf(stderr, "Erro de alocacao de memoria!\n");
                exit(1);
                }
                z->dado = y->dado;
                z->prox = NULL;
                y = y->prox;
            }
        }
    }
    p = z; //p aponta pro 1 no da lista z
    while (x != NULL && y != NULL) {
        if ((n= (lst_ptr) malloc(sizeof(struct lst_no))) == NULL) { // aloca um nó
            fprintf(stderr, "Erro de alocacao de memoria!\n");
            exit(1);
        }
        if (x->dado < y->dado) {
            n->dado = x->dado;
            n->prox = NULL;
            x = x->prox;

        } else {
            n->dado = y->dado;
            n->prox = NULL;
            y = y->prox;

        }
        p->prox = n;
        p = n; //p aponta pro ultimo no

    }
    //agora, alguma das duas listas x ou y está null, então temos que descobrir qual a que ainda tem elementos a serem copiados pra z
    while (x != NULL) {
        if ((n = (lst_ptr) malloc(sizeof(struct lst_no))) == NULL) {
            fprintf(stderr, "Erro de alocacao de memoria!\n");
            exit(1);
            }
            n->dado = x->dado;
            n->prox = NULL;while (x != NULL) {
        if ((z = (lst_ptr) malloc(sizeof(struct lst_no))) == NULL) {
            fprintf(stderr, "Erro de alocacao de memoria!\n");
            exit(1);
            }
            n->dado = x->dado;
            n->prox = NULL;
            x = x->prox;
            p->prox = n;
            p = n;
    }
            x = x->prox;
            p->prox = n;
            p = n;
    }
    while (y != NULL) {
        if ((n = (lst_ptr) malloc(sizeof(struct lst_no))) == NULL) {
            fprintf(stderr, "Erro de alocacao de memoria!\n");
            exit(1);
            }
            n->dado = y->dado;
            n->prox = NULL;
            y = y->prox;
            p->prox = n;
            p = n;
    }
    return z;
}
