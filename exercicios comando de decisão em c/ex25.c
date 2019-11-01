//25. Dada a data de nascimento de uma pessoa, escreva um programa em C que determine o
//seu tipo característico de acordo com as regras abaixo:
// Seja D o dia do nascimento da pessoa
// M o mês do nascimento da pessoa
// A o ano de nascimento da pessoa
// N o número formado pela justaposição dos três números anteriores: DMA
// Z o resto da divisão de N por 9
//A tabela abaixo fornece o tipo característico da pessoa a partir de Z:
//Z Tipo
//0 irresistível
//1 impetuoso
//2 discreto
//3 amoroso
//4 tímido
//5 paquerador
//6 estudioso
//7 sonhador
//8 charmoso

#include <stdio.h>

int main()

{

    int m, a, d, n, z;

    printf("informe seu ano de nascimento\n");
    scanf("%d", &a);
    printf("informe seu mes de nascimento\n");
    scanf("%d", &m);
    printf("informe seu dia de nascimento\n");
    scanf("%d", &d);

    n = a * 1000 + m * 100 + d;

    z = n % 9;

    switch (z) {

    case 0:
    printf("irresistivel\n");
    break;

    case 1:
    printf("impetuoso\n");
    break;

    case 2:
    printf("discreto\n");
    break;

    case 3:
    printf("amoroso\n");
    break;

    case 4:
    printf("timido\n");
    break;

    case 5:
    printf("paquerador\n");
    break;

    case 6:
    printf("estudioso\n");
    break;

    case 7:
    printf("sonhador\n");
    break;

    case 8:
    printf("charmoso\n");
    break;


    }

    return 0;
}
