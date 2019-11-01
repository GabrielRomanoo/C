/*
1)Implemente um programa em C que
dados dois pontos no R², calcule e
imprima a distância entre eles. Utilize o
módulo ponto.c implementado
anteriormente. Forneça também o
makefile da aplicação.
*/
#include <stdio.h>
#include "ponto.h"

int main()
{
    ponto p1, p2;

    int x1, y1, x2, y2;

    printf("\nInforme o 1 ponto (x e y): ");
    scanf("%d %d", &x1, &y1);

    pto_init(&p1, x1, y1);

    printf("\nInforme o 2 ponto (x e y): ");
    scanf("%d %d", &x2, &y2);

    pto_init(&p2, x2, y2);

    printf("\nDistancia entre os dois pontos: %lf", pto_distancia(p1, p2));

    return 0;
}
