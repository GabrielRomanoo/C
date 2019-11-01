/* fpa.c
 * Implementação das operações que podem ser realizadas sobre o 
 * TAD fpa */
#include <stdlib.h>
#include <stdio.h>
#include "fpa.h"
#include <stdbool.h>


void fp_init(fpa * f) {
  f->tamanho = f->final = 0;
}

bool fp_isempty(fpa f) {
   return (f.tamanho == 0);
}

bool fp_isfull(fpa f) {
   return (f.tamanho == FPA_MAX);
}

void fp_inserir(fpa * f, fpa_info x) {
   if (!fp_isfull(*f)) {
   	  if (f->final < FPA_MAX) {
      	  f->itens[f->final++] = x;
      }
      else {
          int i;
          for (i = 0; i < f->final && f->itens[i] != -1; i++);
          f->itens[i] = x;
      }
      f->tamanho++;
   }
   else {
      fprintf(stderr, "Estouro da Fila!\n");
      exit(1);
   }
}

fpa_info fp_remover_min(fpa * f) {
   if (!fp_isempty(*f)) {
      int i, menor = 0;
      
      while (f->itens[menor] == -1)
      	  menor++;
      	  
      for (i = menor + 1; i < f->final; i++) {
      	  if (f->itens[i] != -1 && f->itens[i] < f->itens[menor]) {
      	  	  menor = i;
      	  }
      }      
      fpa_info x = f->itens[menor];
      f->itens[menor] = -1; // marca como removido
      f->tamanho--;
      return x;
   }
   else {
      fprintf(stderr, "Fila vazia!\n");
      exit(1);
   }
}

