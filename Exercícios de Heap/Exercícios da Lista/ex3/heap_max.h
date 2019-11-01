#ifndef HEAP_MAX
#define HEAP_MAX

#include <stdbool.h>

/* função que cria um heap máximo */
void make_heap_max(int [], int);

/* função que remove o menor elemento do heap máximo e
   reconstrói o heap */
int rem_heap_max(int [], int *);

/* função que insere um novo elemento no heap máximo */
void ins_heap_max(int [], int *, int);

/* função erifica se o vetor v de tamanho n é um heap máximo */
bool is_heap_max(int [], int n);


#endif // HEAP_MAX

