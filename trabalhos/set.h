/* set.h
 * Defini��o do TAD set e prot�tipo das opera��es que podem ser
 * realizadas sobre um set.
*/

#ifndef _SET_H
#define _SET_H

#define SET_MAX 10
#include <stdbool.h>

/* defini��o do TAD set */
typedef int set_info;
typedef struct{
    set_info itens[SET_MAX];
    int n;
} set;

/* fun��o que inicializa um conjunto vazio */
void set_init(set *);

/* fun��o que verifica se um conjunto est� vazio */
bool set_isempty(set);

/* fun��o que verifica se um conjunto est� cheio */
bool set_isfull(set);

/* fun��o que devolve verdadeiro se um valor � membro
 do conjunto, ou falso, caso contr�rio */
bool set_member(set, set_info);

/* fun��o que insere um valor no conjunto e devolve verdadeiro
 se a opera��o foi bem-sucedida, ou falso, caso contr�rio
 (conjunto cheio ou elemento repetido) */
bool set_insert(set *, set_info);

/* fun��o que remove um valor do conjunto e devolve verdadeiro
 se a opera��o foi bem-sucedida, ou falso, caso contr�rio
 (o valor n�o est� contido no conjunto) */
bool set_remove(set *, set_info);

/* fun��o que atribui ao seu 3o. argumento (um conjunto) o
 resultado da uni�o entre os 2 primeiros conjuntos passados como
 argumentos e devolve verdadeiro se a opera��o foi bem-sucedida
 (n�o houve um estouro da capacidade do 3o. argumento, ou falso,
 caso contr�rio) */
bool set_union(set, set, set *);

/* fun��o que atribui ao seu 3o. argumento (um conjunto) o
 resultado da intersec��o entre os 2 primeiros conjuntos passados
 como argumentos, ou seja, os elementos do 1� conjunto que n�o
 est�o no segundo conjunto */
void set_intersection(set, set, set *);

/* fun��o que atribui ao seu 3o. argumento (um conjunto) o
 resultado da diferen�a entre os 2 primeiros conjuntos passados
 como argumentos */
void set_difference(set, set, set *);

/* fun��o que imprime todos os membros do conjunto */
void set_print(set);



#endif
