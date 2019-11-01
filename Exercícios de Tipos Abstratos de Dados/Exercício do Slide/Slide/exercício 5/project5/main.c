/*
3)Implemente um programa que dado um
c�rculo e um ponto, informe a �rea do
c�rculo e se o ponto est� dentro do
c�rculo. Forne�a tamb�m o makefile da
aplica��o.
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

        printf("\nEsse ponto est� dentro do circulo!\n");

    } else {

        printf("\nEsse ponto NAO est� dentro do circulo!\n");

    }

    return 0;
}
