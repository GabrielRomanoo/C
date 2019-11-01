/* exercício do slide 17 */

#include <stdio.h>

int produto(int, int);

int main() {

    int a,b;

    printf("Informe dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("\n%d x %d = %d", a, b, produto(a,b));

    return 0;
}

int produto(int x, int y) {
    if (y == 1) { //solução trivial
        return x;
    }
    if (x < y) {
        return produto(y,x);
    }
    return produto(x,y-1) + x;
}
