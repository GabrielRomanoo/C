#include <stdio.h>
#include "pilha.h"
#include "fila.h"
int main()
{
    pilha p;
    fila f;
    stack_init(&p);
    queue_init(&f);
    enqueue(&f, 4);
    enqueue(&f, 7);
    push(&p, 3);
    push(&p, 2);
    while(!queue_isempty(f))
        push(&p, dequeue(&f));
    while(!stack_isempty(p))
        enqueue(&f, pop(&p));
    while(!queue_isempty(f))
        printf("%d\n", dequeue(&f));
    return 0;
}
