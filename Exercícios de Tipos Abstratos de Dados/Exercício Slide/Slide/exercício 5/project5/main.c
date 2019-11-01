/*
3)Implemente um programa que dado um
círculo e um ponto, informe a área do
círculo e se o ponto está dentro do
círculo. Forneça também o makefile da
aplicação.
*/

#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"
#include "ponto.h"

int main()
{
    int x, y;
    double r;
    printf("Informe os pontos (centro) e o raio de um circulo: ");
    scanf("%d %d %lf", &x, &y, &r);

    circulo c;

    circ_init(&c, x, y, r);

    printf("\nArea do circulo: %.2lf", circ_area(c));

    ponto p;

    printf("\n\nInforme um novo ponto: ");
    scanf("%d %d", &x, &y);

    pto_init(&p, x, y);

    if ( circ_contains(c, p) == 1) {

        printf("\nEsse ponto está dentro do circulo!\n");

    } else {

        printf("\nEsse ponto NAO está dentro do circulo!\n");

    }

    return 0;
}
