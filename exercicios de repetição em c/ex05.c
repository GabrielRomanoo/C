//5. Desenvolva um programa em C que dados 10 números, imprima o quadrado de cada um deles
#include <stdio.h>

int main()
{
    int i, n;

    for(i=1; i<11; i++){

        printf("informe o numero\n");
        scanf("%d", &n);
        n = n*n;
        printf("O quadrado do numero eh: %.d \n", n);

    }

    return 0;
}
