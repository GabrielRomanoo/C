#include <stdio.h>
#include <stdbool.h>
#include "my_io.h"

int main()
{
    int n;
    printf("Tamanho da string (min. 5): ");
    while (!read_int(&n) || n < 5)
    {
        printf("Você não digitou um inteiro maior ou igual a 5!\nTamanho da string (min. 5): ");
    }
    char str[n + 1];
    printf("Informe uma string (máx. %d): ", n);
    read_line(str, n);
    printf("String informada: %s\n", str);
    return 0;
}


