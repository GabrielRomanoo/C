/*lista.h*/

#ifndef _LISTA_H
#define _LISTA_H

#define LST_MAX 100 // número de elementos do vetor

#include <stdbool.h>
#include <stdio.h>

typedef int lst_info; // tipo de dado da lista

typedef struct {
 lst_info itens[LST_MAX]; // vetor p/ os nós da lista
 int n; // número de nós da lista
} lista;

/* função que inicializa a lista */
void lst_init(lista *);

/* função que acessa o k-ésimo nó da lista e sinaliza o sucesso ou falha da operação */
bool lst_acessar(lista, int, lst_info *);

/* função que altera o valor do k-ésimo nó da lista e sinaliza o sucesso ou falha da operação */
bool lst_alterar(lista *, int, lst_info);

/* função que insere um novo nó na k-ésima posição da lista e sinaliza o sucesso ou falha da operação */
bool lst_inserir(lista *, int, lst_info);

/* função que remove o k-ésimo nó da lista e sinaliza o sucesso ou falha da operação */
bool lst_remover(lista *, int, lst_info *);

/* função que imprimi todos os elementos da lista */
void lst_imprimir(lista);

/* função que procura um determinado elemento na lista */
int lst_procurar(lista, lst_info);

/* função que insere um valor na lista de modo a ela ficar ordenada */
bool lst_ins_ordenado(lista *, lst_info);

/* função que concatena a primeira lista e a segunda lista em uma terceira */
bool lst_concatenar(lista, lista, lista *);

#endif // _LISTA_H
