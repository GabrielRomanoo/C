/*lista.c*/

#include "lista.h"


void lst_init(lista * l)
{
    l->n = 0;
}

bool lst_acessar(lista l, int k, lst_info * val)
{
    if (k >= 0 && k < l.n) {
        *val = l.itens[k];
        return true;
    }
    return false;
}

bool lst_alterar(lista * l, int k, lst_info val)
{
    if (k >= 0 && k < l->n) {
        l->itens[k] = val;
        return true;
    }
    return false;
}

bool lst_inserir(lista * l, int k, lst_info val)
{
    if (l->n < LST_MAX && k >= 0 && k <= l-> n) {
        int i;
        for (i = l->n - 1; i >= k; i--) {
            l->itens[i+1] = l->itens[i];

        }
        l->itens[k] = val;
        l->n++; //n é o numero de nós;
        return true;
    }
    return false;
}

bool lst_remover(lista * l, int k, lst_info * val)
{
    if (k >= 0 && k < l->n) {
        int i;
        *val = l->itens[k];
        for (i = k + 1; i < l->n; i++) {
            l->itens[i-1] = l->itens[i];
        }
        l->n--; //como fica repetido o penultimo e o ultimo elemento, o n-- faz com que o ultimo seja excluido
        return true;
    }
    return false;
}

void lst_imprimir(lista l)
{
    int i;
    for (i = 0; i < l.n; i++) {
        printf("%d\n", l.itens[i]);
    }
}

int lst_procurar(lista l, lst_info val)
{
    int i;
    for (i = 0; i < l.n; i++) {
        if (l.itens[i] == val) {
            return i;
        }
    }
    return -1;
}

bool lst_ins_ordenado(lista * l, lst_info val)
{
    if (l->n < LST_MAX) {
        int i, j, aux = 0;
        //printf("\n%d\n", l->n);
        l->itens[l->n] = val;
        l->n++;
        for (i = 0; i < l->n; i++) {
            for (j = i + 1; j < l->n; j++) { // sempre 1 elemento à frente
                if (l->itens[i] > l->itens[j]) {
                 aux = l->itens[i]; //método da bolha
                 l->itens[i] = l->itens[j];
                 l->itens[j] = aux;
                }
            }
        }
        return true;
    }
    return false;
}

bool lst_concatenar(lista lst1, lista lst2, lista * lst3)
{
    if (lst1.n + lst2.n > LST_MAX) {
        return false;
    } else {
        int i, j, aux = 0;
        for (i = 0, j = 0, aux = 0; i < lst1.n || j < lst1.n; i++, j++, aux++) {
            lst3->itens[aux] = lst1.itens[i];
            aux++;
            lst3->itens[aux] = lst2.itens[j];

        }
        lst3->n = lst1.n + lst2.n;
        for (i = 0; i < lst3->n; i++) {
            for (j = i + 1; j < lst3->n; j++) { // sempre 1 elemento à frente
                if (lst3->itens[i] > lst3->itens[j]) {
                 aux = lst3->itens[i]; //método da bolha
                 lst3->itens[i] = lst3->itens[j];
                 lst3->itens[j] = aux;
                }
            }
        }
    }
    return true;
}

bool lst_inserir_final(lista * l, lst_info x)
{
    if (l->n < LST_MAX) {
        l->itens[l->n] = x;
        l->n++;
        return true;
    }
    return false;
}

bool lst_inserir_inicio(lista * l, lst_info x)
{
    if (l->n < LST_MAX) {
        int i;

        for (i = l->n - 1; i >= 0; i--) {
            l->itens[i+1] = l->itens[i];
        }

        l->itens[0] = x;
        l->n++;
        return true;
    }
    return false;
}

bool lst_remover_final(lista * l, lst_info * x)
{
    if (l->n > 0) {
        *x = l->itens[l->n-1];
        l->n--;
        return true;
    }
    return false;
}
