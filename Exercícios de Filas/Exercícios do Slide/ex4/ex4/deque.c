/* deque.c
 * Implementação das operações realizadas sobre o TAD deque
 *
 * Ciro Cirne Trindade
 * 25/03/2019
 */

#include "deque.h"
#include <stdio.h>
#include <stdlib.h>

void deque_init(deque * d) {
	d->frente = 0;
	d->tras = DEQUE_MAX - 1;
}

bool deque_isempty(deque d) {
	return d.frente == 0 && d.tras == DEQUE_MAX - 1;
}

bool deque_isfull(deque d) {
	return d.frente > d.tras;
}

void deque_ins_frente(deque * d, deque_info x) {
	if (!deque_isfull(*d)) {
		d->itens[d->frente++] = x;
	}
	else {
		fprintf(stderr, "Deque cheio!\n");
		exit(1);
	}
}

void deque_ins_tras(deque * d, deque_info x) {
	if (!deque_isfull(*d)) {
		d->itens[d->tras--] = x;
	}
	else {
		fprintf(stderr, "Deque cheio!\n");
		exit(1);
	}
}

deque_info deque_rem_frente(deque * d) {
	if (!deque_isempty(*d)) {
		if (d->frente > 0) { // há elementos inseridos pela frente
			return d->itens[--d->frente];
		}
		else { // remover o primeiro inserido por trás
			deque_info x = d->itens[DEQUE_MAX - 1];
			int i;
			for (i = DEQUE_MAX - 2; i > d->tras; i--) {
				d->itens[i+1] = d->itens[i];
			}
			d->tras++;
			return x;
		}
	}
	else {
		fprintf(stderr, "Deque vazio!\n");
		exit(1);
	}
}

deque_info deque_rem_tras(deque * d) {
	if (!deque_isempty(*d)) {
		if (d->tras < DEQUE_MAX - 1) { // há elementos inseridos pela direita
			return d->itens[++d->tras];
		}
		else { // remover o primeiro inserido pela frente
			deque_info x = d->itens[0];
			int i;
			for (i = 0; i < d->frente - 1; i++) {
				d->itens[i] = d->itens[i + 1];
			}
			d->frente--;
			return x;
		}
	}
	else {
		fprintf(stderr, "Deque vazio!\n");
		exit(1);
	}
}

void deque_print(deque d) {
	int i;
	printf("[ ");
	for (i = d.frente - 1; i >= 0; i--) {
		printf("%d,", d.itens[i]);
	}
	for (i = DEQUE_MAX - 1; i > d.tras; i--) {
		printf("%d,", d.itens[i]);
	}
	printf("\b ]\n");
}

/*
vetor 3 8 _ 5 1 ( _ é vazio ; o vetor é de tamanho 5)

dando print aparece 8 3 1 5

*/
