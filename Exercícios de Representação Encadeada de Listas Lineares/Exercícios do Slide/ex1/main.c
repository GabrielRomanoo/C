#include "filaenc.h"

int main(){

    fila f;

    queue_init(&f);

    enqueue(&f,2);
    enqueue(&f,4);
    enqueue(&f,6);
    enqueue(&f,8);

    queue_print(f);

    dequeue(&f);
    dequeue(&f);
    dequeue(&f);
    dequeue(&f);

    return 0;
}
