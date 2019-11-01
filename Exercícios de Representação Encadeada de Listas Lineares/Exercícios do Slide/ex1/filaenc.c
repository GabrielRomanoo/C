/* filaenc.c
 * Implementação das operações realizadas sobre o TAD fila representado
 * de forma encadeada */
#include "filaenc.h"

void queue_init(fila * f) {
    f->comeco = NULL;
    f->final = NULL;
}

bool queue_isempty(fila f) {
    return (f.comeco == NULL && f.final == NULL);
}

void enqueue(fila * f, queue_info x) {
    queue_ptr n;
    if ((n = (queue_ptr) malloc(sizeof(struct queue_no))) == NULL) {
		fprintf(stderr, "Fila cheia!\n");
		exit(1);
	}

    n->dado = x;
    n->prox = NULL;
    if (queue_isempty(*f)) {
        f->comeco = n;
    }
    else {
        f->final->prox = n;
    }
    f->final = n;
}

queue_info dequeue(fila * f) {
    if (!queue_isempty(*f)) {
        queue_info x = f->comeco->dado;
        queue_ptr p = f->comeco;
        if (f->comeco == f->final) { //quando só tem um elemento
            f->final = NULL;
        }
        f->comeco = f->comeco->prox;
        free(p);
        return x;
    }
    fprintf(stderr, "Fila vazia!\n");
    exit(1);
}

void queue_print(fila f) {
    printf("[");
    if (!queue_isempty(f)){
        while (f.comeco != NULL) {
            printf("%d, ", f.comeco->dado);
            f.comeco = f.comeco->prox;
        }
        printf("\b\b");
    }
    printf("]\n");
}

