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

void lst_append(lst_ptr * lst1, lst_ptr * lst2) {
    lst_ptr p = *lst1; //ponteiro auxiliar
    while (p->prox != NULL) { //laço pra achar o ultimo nó e p conseguir apontar pra ele
        p = p->prox;
    }
    p->prox = *lst2; //ultimo nó de lst1 apontando pro primeiro nó de lts2
    *lst2 = NULL;
}

void lst_split(lst_ptr * lst1, int pos, lst_ptr * lst2, lst_ptr * lst3) {
    if (pos < lst_tamanho(*lst1)) {
        int cont = 0;
        lst_ptr p;
        *lst2 = *lst1; //lst2 aponta para a primeira posição da lista lst1 (lst1 é um ponteiro)
        *lst1 = NULL; //com isso, agora lst2 ""tem"" todo conteudo que era de lst1
        p = *lst2;  //ponteiro auxiliar
        while (cont < pos - 1) { //acha a ultima posição pos - 1 em lst2
            p = p->prox;
            cont++;
        }
        *lst3 = p->prox; //lst3a aponta para a posição pos de lst2
        p->prox = NULL; //indica que essa é a ultima posição de lst2
    }
}

lst_info lst_delete_last(lst_ptr * lst) {
    if (*lst != NULL) {
        lst_ptr n, p = *lst;
        lst_info val;
        if (p->prox == NULL) {
            n = p;
            *lst = NULL;
            val = n->dado;
            free(n);
            return val;
        }
        while (p->prox->prox!= NULL) {
            p = p->prox;
        }
        n = p->prox;
        p->prox = n->prox;
        val = n->dado;
        free(n);
        return val;
    }
    return NULL;
}
