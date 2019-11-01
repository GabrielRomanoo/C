/* filapri.c
 * Implementação das operações sobre o TAD fpa implementado como um heap mínimo
 */

#include <stdio.h>
#include <stdlib.h>
#include "filapri.h"

void fpa_init(fpa * f)
{
    f->n = 0;
}

bool fpa_isempty(fpa f)
{
    return f.n == 0;
}

bool fpa_isfull(fpa f)
{
    return f.n == MAX_FPA;
}

void fpa_ins(fpa * f, fpa_info x)
{
    if (!fpa_isfull(*f))
    {
        int p, pai;
        f->itens[(f->n)++] = x; // insere no final do heap
        p = f->n-1; // índice do último
        pai = (p - 1) / 2; // pai de p
        while (p > 0 && f->itens[pai] > x)
        {
            f->itens[p] = f->itens[pai];
            p = pai;
            pai = (p - 1) / 2;
        }
        f->itens[p] = x;
    }
    else
    {
        fprintf(stderr, "Fila de prioridade cheia!\n");
        exit(1);
    }
}

fpa_info fpa_rem_min(fpa * f)
{
    if (!fpa_isempty(*f))
    {
		if (f->n == 1) {
			return f->itens[--f->n];
		}
        int i = 0, j = 1, d; // índices do heap
        fpa_info menor = f->itens[0], x;
        f->itens[0] = f->itens[--(f->n)]; // passa o último para a raiz
        x = f->itens[0]; // novo elemento
        d = f->n-1;
        // índice do último
        if(j < d && f->itens[j+1] < f->itens[j]) j++;
        while(j <= d && f->itens[j] < x)
        {
            f->itens[i] = f->itens[j];
            i = j;
            j = 2 * j + 1;
            if(j < d && f->itens[j+1] < f->itens[j]) j++;
        }
        f->itens[i] = x;
        return menor;
    }
    else
    {
        fprintf(stderr, "Fila de prioridade vazia!\n");
        exit(1);
    }
}
