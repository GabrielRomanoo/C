#ifndef HEAP_MAX
#define HEAP_MAX

/* função que cria um heap máximo */
void make_heap_max(int [], int);

/* função que remove o menor elemento do heap máximo e
   reconstrói o heap */
int rem_heap_max(int [], int *);

/* função que insere um novo elemento no heap máximo */
void ins_heap_max(int [], int *, int);

#endif // HEAP_MAX

