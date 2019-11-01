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
   return (f.final == 0 && f.comeco == 0);
}

bool queue_isfull(fila f) {
   return (f.final - f.comeco == QUEUE_MAX || f.comeco + f.final== QUEUE_MAX);
}

void enqueue(fila * f, queue_info x) {
   if (!queue_isfull(*f)) {
      f->itens[f->final % QUEUE_MAX] = x;
      f->final = (f->final % QUEUE_MAX) + 1;
   }
   else {
      fprintf(stderr, "Estouro da Fila!\n");
      exit(1);
   }
}

queue_info dequeue(fila * f) {
   if (!queue_isempty(*f)) {
      queue_info x = f->itens[f->comeco % QUEUE_MAX];
        if (f->comeco == QUEUE_MAX - 1) {
            f->comeco = 0;
        }  else {
            f->comeco = (f->comeco % QUEUE_MAX) + 1;
            return x;
        }
   }
   else {
      fprintf(stderr, "Fila vazia!\n");
      exit(1);
   }
}

void queue_print(fila f)
{
    int i, k = 0, j = 0;
    printf("[ ");
    //printf("%d,", f.itens[f.comeco]);

    //if (!queue_isempty(f)){

        for (i = f.comeco; i % QUEUE_MAX <= f.final; i++) {


                 printf("%d,", f.itens[i % QUEUE_MAX]);


        }

        /*
        for (i = (f.comeco); k != 500; i++) {
            if(j > f.final){
                    if (f.comeco == f.final) {
                        printf("%d,", f.itens[i % QUEUE_MAX]);
                        //j++;
                    }
                    else {
                            k = 500;
                    }
            }
            else {
            printf("%d,", f.itens[i % QUEUE_MAX]);
            j++;
            }
        }
        */
    //

    printf("\b ]\n");

}

void dequeue_and_test(fila *f, queue_info * x, bool * und)
{
    if (!queue_isempty(*f)) {
      (*x) = f->itens[f->comeco % QUEUE_MAX];
      f->comeco = (f->comeco % QUEUE_MAX) + 1;
      (*und) = false;
   }
   else {
      (*und) = true;
   }

}

void queue_fura_fila(fila * f, queue_info x) {
    if (!queue_isfull(*f)) {
      if(f->comeco == 0) {
        f->comeco = QUEUE_MAX - 1;
      }
      else {
            f->comeco = (f->comeco % QUEUE_MAX) - 1;

      }
      f->itens[f->comeco] = x;
    }

   else {
      fprintf(stderr, "Estouro da Fila!\n");
      exit(1);

   }
}
