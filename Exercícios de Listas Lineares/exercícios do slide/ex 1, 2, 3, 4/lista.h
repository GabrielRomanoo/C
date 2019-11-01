/*lista.h*/

#ifndef _LISTA_H
#define _LISTA_H

#define LST_MAX 100 // n�mero de elementos do vetor

#include <stdbool.h>
#include <stdio.h>

typedef int lst_info; // tipo de dado da lista

typedef struct {
 lst_info itens[LST_MAX]; // vetor p/ os n�s da lista
 int n; // n�mero de n�s da lista
} lista;

/* fun��o que inicializa a lista */
void lst_init(lista *);

/* fun��o que acessa o k-�simo n� da lista e sinaliza o sucesso ou falha da opera��o */
bool lst_acessar(lista, int, lst_info *);

/* fun��o que altera o valor do k-�simo n� da lista e sinaliza o sucesso ou falha da opera��o */
bool lst_alterar(lista *, int, lst_info);

/* fun��o que insere um novo n� na k-�sima posi��o da lista e sinaliza o sucesso ou falha da opera��o */
bool lst_inserir(lista *, int, lst_info);

/* fun��o que remove o k-�simo n� da lista e sinaliza o sucesso ou falha da opera��o */
bool lst_remover(lista *, int, lst_info *);

/* fun��o que imprimi todos os elementos da lista */
void lst_imprimir(lista);

/* fun��o que procura um determinado elemento na lista */
int lst_procurar(lista, lst_info);

/* fun��o que insere um valor na lista de modo a ela ficar ordenada */
bool lst_ins_ordenado(lista *, lst_info);

/* fun��o que concatena a primeira lista e a segunda lista em uma terceira */
bool lst_concatenar(lista, lista, lista *);

#endif // _LISTA_H
