/* set.h
 * Definição do TAD set e protótipo das operações que podem ser
 * realizadas sobre um set.
*/

#ifndef _SET_H
#define _SET_H

#define SET_MAX 10
#include <stdbool.h>

/* definição do TAD set */
typedef int set_info;
typedef struct{
    set_info itens[SET_MAX];
    int n;
} set;

/* função que inicializa um conjunto vazio */
void set_init(set *);

/* função que verifica se um conjunto está vazio */
bool set_isempty(set);

/* função que verifica se um conjunto está cheio */
bool set_isfull(set);

/* função que devolve verdadeiro se um valor é membro
 do conjunto, ou falso, caso contrário */
bool set_member(set, set_info);

/* função que insere um valor no conjunto e devolve verdadeiro
 se a operação foi bem-sucedida, ou falso, caso contrário
 (conjunto cheio ou elemento repetido) */
bool set_insert(set *, set_info);

/* função que remove um valor do conjunto e devolve verdadeiro
 se a operação foi bem-sucedida, ou falso, caso contrário
 (o valor não está contido no conjunto) */
bool set_remove(set *, set_info);

/* função que atribui ao seu 3o. argumento (um conjunto) o
 resultado da união entre os 2 primeiros conjuntos passados como
 argumentos e devolve verdadeiro se a operação foi bem-sucedida
 (não houve um estouro da capacidade do 3o. argumento, ou falso,
 caso contrário) */
bool set_union(set, set, set *);

/* função que atribui ao seu 3o. argumento (um conjunto) o
 resultado da intersecção entre os 2 primeiros conjuntos passados
 como argumentos, ou seja, os elementos do 1º conjunto que não
 estão no segundo conjunto */
void set_intersection(set, set, set *);

/* função que atribui ao seu 3o. argumento (um conjunto) o
 resultado da diferença entre os 2 primeiros conjuntos passados
 como argumentos */
void set_difference(set, set, set *);

/* função que imprime todos os membros do conjunto */
void set_print(set);



#endif
