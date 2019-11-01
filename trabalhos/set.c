/* set.c
 * Implementa��o das opera��es que podem ser realizadas sobre o
 * TAD set
*/

#include "set.h"
#include <stdio.h>

void set_init(set * s)
{
    s->n = 0;
}

bool set_isempty(set s)
{
    return (s.n == 0);
}

bool set_isfull(set s)
{
    return (s.n == SET_MAX);
}

bool set_member(set s, set_info x)
{
    int i;
    for (i = 0; i < s.n; i++) {
        /* verifica se a vari�vel x est� na posi��o i do conjunto s */
        if (x == s.itens[i]) {
            return true;
        }
    }
    return false;
}

bool set_insert(set * s, set_info x)
{
    /* verifica se o conjunto s n�o est� cheio e se elemento x n�o � repetido no conjunto s */
    if (!set_isfull(*s) && !set_member(*s, x)) {
        s->itens[s->n] = x;
        s->n++;
        return true;
    }
    return false;
}

bool set_remove(set * s, set_info x)
{
    /* verifica se a vari�vel x est� no conjunto s */
    if (set_member(*s, x)) {
        int i, j;
        /* o la�o de repeti��o abaixo procura a posi��o do elemento � ser removido */
        for (i = 0; i < s->n; i++) {
            if (s->itens[i] == x) {
                /* a vari�vel j guarda a posi��o do elemento � ser removido */
                j = i;
                break;
            }
        }
        /* o la�o de repeti��o abaixo desloca todos os elementos para as suas novas posi��es,
           come�ando pela posi��o j do elemento � ser removido */
        for (i = j; i < s->n - 1; i++) {
            s->itens[i] = s->itens[i+1];
        }
        s->n--;
        return true;
    }
    return false;
}

bool set_union(set s1, set s2, set * s3)
{
    /* verifica se haver� estouro na capacidade do conjunto s3 */
    if (s1.n + s2.n <= SET_MAX) {
        set_init(s3);
        int i;
        /* o la�o de repeti��o abaixo atribui todos os elementos do conjunto s1 em s3 */
        for (i = 0; i < s1.n; i++) {
            s3->itens[i] = s1.itens[i];
            s3->n++;
        }
        /* o la�o de repeti��o abaixo atribui todos os elementos do conjunto s2 em s3 que j� n�o esteja em s3 */
        for (i = 0; i < s2.n; i++) {
                /* como j� foram atribu�dos todos os elementos de s1 em s3, o if abaixo
                   verifica se existe algum elemento repetido de s2 em s3 */
                if (!set_member(*s3, s2.itens[i])) {
                    s3->itens[s3->n] = s2.itens[i];
                    s3->n++;
                }
        }
        return true;
    }
    return false;
}

void set_intersection(set s1, set s2, set * s3)
{
    set_init(s3);
    int i;
    for (i = 0; i < s1.n; i++) {
        /* verifica os membros em comum entre s1 e s2 */
        if (set_member(s2, s1.itens[i]) ) {
            s3->itens[s3->n] = s1.itens[i];
            s3->n++;
        }
    }
}

void set_difference(set s1, set s2, set * s3)
{
    set_init(s3);
    int i;
    for (i = 0; i < s1.n; i++) {
        /* verifica se o membro na posi��o i de s1 n�o se repete em s2 */
        if (!set_member(s2, s1.itens[i])) {
            s3->itens[s3->n] = s1.itens[i];
            s3->n++;
        }
    }
}

void set_print(set s)
{
    int i;
	printf("[ ");
	for (i = 0; i < s.n; i++) {
		printf("%d, ", s.itens[i]);
	}
	printf("\b\b ]\n");
}
