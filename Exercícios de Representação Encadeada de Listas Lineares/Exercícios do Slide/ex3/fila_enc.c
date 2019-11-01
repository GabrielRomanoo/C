/* fila.c
 * Implementação das operações que podem ser realizadas sobre o
 * TAD fila */
#include <stdlib.h>
#include <stdio.h>
#include "fila_enc.h"
#include <stdbool.h>


void queue_init(fila * f) {
  f->comeco = f->final = NULL;
}

bool queue_isempty(fila f) {
   return (f.comeco == NULL && f.final == NULL);
}

void enqueue(fila * f, queue_info x) {
   queue_ptr n;
   if ((n = (queue_ptr) malloc(sizeof(struct queue_no))) == NULL) {
      fprintf(stderr, "Estouro da Fila!\n");
      exit(1);
   }
   else {
      n->dado = x;
      n->prox = NULL;
      if(queue_isempty(*f)) {
      	  f->comeco = n;
      }
      else {
          f->final->prox = n;
      }
      f->final = n;
   }
}

queue_info dequeue(fila * f) {
   if (!queue_isempty(*f)) {
      queue_info x = f->comeco->dado;
      queue_ptr p = f->comeco;
      if (f->comeco == f->final) {
      	f->final = NULL;
      }
      f->comeco = f->comeco->prox;
      free(p);
      return x;
   }
   else {
      fprintf(stderr, "Fila vazia!\n");
      exit(1);
   }
}

void queue_print(fila f)
{
	printf("[ ");
	while (f.comeco != NULL) {
		printf("%d,", f.comeco->dado);
		f.comeco = f.comeco->prox;
	}
	printf("\b ]\n");
}

 void queue_kill(fila * f) {
     queue_ptr p;
     while (f->comeco != NULL) {
        p = f->comeco;
        f->comeco = f->comeco->prox;
        free(p);
     }
     f->final = NULL;
 }

