/* TAD listaenc.c */

#include "listaenc.h"

void lst_init(lst_ptr * l) {
    *l = NULL;
}

bool lst_acessar(lst_ptr l, int k, lst_info * val) {
    //lst_ptr l é um ponteiro pra lista
    if (k >= 0 && k < lst_tamanho(l)) {
        int i;
        for (i = 0; i < k; i++) {
            l = l->prox;
        }
        *val = l->dado;
        return true;
    }
    return false;
}

bool lst_alterar(lst_ptr l, int k, lst_info val) {
    if (k >= 0 && k < lst_tamanho(l)) {
        int i;
        for (i = 0; i < k; i++) {
            l = l->prox;
        }
        l->dado = val;
        return true;
    }
    return false;
}

bool lst_inserir(lst_ptr * l, int k, lst_info val) {
    if (k >= 0 && k <= lst_tamanho(*l)) {
        lst_ptr n;
        if ((n = (lst_ptr) malloc(sizeof(struct lst_no))) == NULL) {
            fprintf(stderr, "Estouro da Fila!\n");
            return false;
        }
        n->dado = val;
        if (k == 0) {
            n->prox = *l;
            *l = n;
        }
        else {
            int i;
            lst_ptr p = *l; //ponteiro auxiliar
            for (i = 0; i < k - 1; i++) {
                p = p->prox;
            }
            n->prox = p->prox;
            p->prox = n;
            }
        return true;
    }
    return false;
}

bool lst_remover(lst_ptr * l, int k, lst_info * val) {
    if (k >= 0 && k < lst_tamanho(*l)) {
        lst_ptr n;
        if (k == 0) {
            n = *l;
            *val = n->dado;
            *l = n->prox;
        }
        else {
            int i;
            lst_ptr p = *l; //ponteiro auxiliar
            for (i = 0; i < k - 1; i++) {
                p = p->prox;
            }
            n = p->prox;
            p->prox = n->prox;
            }
        *val = n->dado;
        free(n);
        return true;
    }
    return false;
}

int lst_tamanho(lst_ptr l) {
    int cont = 0;
    while (l != NULL) {
        cont++;
        l = l->prox;
    }
    return cont;
}

lst_ptr lst_procurar(lst_ptr l, lst_info x) {
    while (l != NULL) {
        if (l->dado == x) {
            return l;
        }
        l = l->prox;
    }
    return NULL;
}

void lst_imprimir(lst_ptr l) {
    printf("[ ");
    while (l != NULL) {
        printf("%d,", l->dado);
        l = l->prox;
    }
    printf("\b ]\n");
}
