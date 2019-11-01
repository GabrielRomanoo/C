/* TAD listaenc.h */

#ifndef _FILA_ENC_H
#define _FILA_ENC_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef int lst_info;
typedef struct lst_no * lst_ptr;
struct lst_no {
    lst_info dado;
    lst_ptr prox;
};

/* Inicializa uma lista. */
void lst_init(lst_ptr *);

/* Acessa o k-ésimo nó da lista. */
bool lst_acessar(lst_ptr, int, lst_info *);

/* Altera o valor do k-ésimo nó da lista. */
bool lst_alterar(lst_ptr, int, lst_info);

/* Insere um novo nó na k-ésima posição da lista. */
bool lst_inserir(lst_ptr *, int, lst_info);

/* Remove o k-ésimo nó da lista e devolve seu valor. */
bool lst_remover(lst_ptr *, int, lst_info *);

/* Determina o número de nós de uma lista. */
int lst_tamanho(lst_ptr);

/* Localiza um nó que contém um determinado valor. Devolve NULL, caso não seja localizado. */
lst_ptr lst_procurar(lst_ptr, lst_info);

/* Imprime a lista. */
void lst_imprimir(lst_ptr);

/* Acrescenta no final da lista lst1 os elementos da lista lst2 e depois atribui NULL a lst2. */
void lst_append(lst_ptr *, lst_ptr *);

/* Divide a lista lst1 em duas listas, lst2 e lst3. */
void lst_split(lst_ptr *, int, lst_ptr *, lst_ptr *);

/* dada uma lista encadeada simples não nula lst, remove e devolve o último elemento da lista lst. */
lst_info lst_delete_last(lst_ptr *);

#endif // _FILA_ENC_H
