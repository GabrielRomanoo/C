//7. Desenvolva um programa em C que leia um n�mero que ser� o limite superior de um intervalo
//e imprimir todos os n�meros pares menores que esse n�mero. Exemplo: Para limite superior =
//16 a sa�da dever� ser 2, 4, 6, 8, 10, 12, 14.
#include <stdio.h>

int main()
{
    int l, i;

    printf("informe o limite superior \n");
    scanf("%d", &l);

    for(i=1 ; i<l ; i++){

        if(i % 2 == 0){

            printf("%d \n", i);
        }
    }

    return 0;
}
