#ifndef HEAP_MAX
#define HEAP_MAX

/* fun��o que cria um heap m�ximo */
void make_heap_max(int [], int);

/* fun��o que remove o menor elemento do heap m�ximo e
   reconstr�i o heap */
int rem_heap_max(int [], int *);

/* fun��o que insere um novo elemento no heap m�ximo */
void ins_heap_max(int [], int *, int);

#endif // HEAP_MAX

