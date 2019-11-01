/*
3. Implemente uma aplicação que use os módulos my_io e my_math. Esta aplicação deve usar
as funções do módulo my_io para deixar o usuário entrar com um número inteiro e outro
real. Depois a aplicação deve usar as funções do módulo my_math para calcular o fatorial
do número inteiro e arredondar para um inteiro o número real e exibir os resultados no
vídeo. Forneça o makefile da aplicação.
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "my_math.h"
#include "my_io.h"

int main() {

    int num1, fat1, arr;

    double num2;

    printf("Informe um numero inteiro: ");

    while (read_int(&num1) != 1) {
        printf("\nErro, digite novamente!\n");
    }

    //printf("\n%d", num1);

    printf("\nInforme um numero real: ");

    while (read_double(&num2) != 1) {
        printf("\nErro, digite novamente!\n");
    }

    // printf("\n%lf", num2   );

     printf("\nFatorial do numero %d: ", num1);

     fat1 = fatorial(num1);

     printf(" %d", fat1);

     printf("\nArredondamento do numero %lf: ", num2);

     arr = arredondarParaInt(num2);

     printf(" %d", arr);

    return 0;
}
