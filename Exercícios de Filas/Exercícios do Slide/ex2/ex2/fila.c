/* fila.c
 * Implementação das operações que podem ser realizadas sobre o
 * TAD fila */
#include <stdlib.h>
#include <stdio.h>
#include "fila.h"
#include <stdbool.h>


void queue_init(fila * f) {
  f->comeco = f->final = 0;
}

bool queue_isempty(fila f) {
   return (f.comeco == f.final);
}

bool queue_isfull(fila f) {
   return (f.final - f.comeco == QUEUE_MAX);
}

void enqueue(fila * f, queue_info x) {
   if (!queue_isfull(*f)) {
      f->itens[f->final % QUEUE_MAX] = x;
      f->final++;
   }
   else {
      fprintf(stderr, "Estouro da Fila!\n");
      exit(1);
   }
}

queue_info dequeue(fila * f) {
   if (!queue_isempty(*f)) {
      queue_info x = f->itens[f->comeco % QUEUE_MAX];
      f->comeco++;
      return x;
   }
   else {
      fprintf(stderr, "Fila vazia!\n");
      exit(1);
   }
}

void queue_print(fila f)
{
    int i;
    printf("[ ");
    for (i = f.comeco; i < f.final; i++) {
        printf("%d,", f.itens[i % QUEUE_MAX]);
    }
    printf("\b ]\n");

}


/*JEITO DO CIRO ABAIXO:
void queue_print(fila f)
{
	int i;
	printf("[ ");
	for (i = f.comeco; i < f.final; i++) {
		printf("%d,", f.itens[i]);
	}
	printf("\b ]\n");
}
*/

void dequeue_and_test(fila *f, queue_info * x, bool * und)
{
    if (!queue_isempty(*f)) {
      (*x) = f->itens[f->comeco % QUEUE_MAX];
      f->comeco++;
      (*und) = false;
   }
   else {
      (*und) = true;
   }

}
