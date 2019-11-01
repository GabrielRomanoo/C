/*
5. Escreva uma aplica��o que dado um ret�ngulo e um conjunto de n pontos, informe a �rea do
ret�ngulo e quantos pontos est�o dentro do ret�ngulo. Forne�a o makefile da aplica��o.
*/
#include <stdio.h>
#include <stdlib.h>
#include "retangulo.h"
#include "ponto.h"

int main()
{
    retangulo r;

    ponto p;

    int x, y, altura, comprimento, n, i, cont = 0;

    printf("Informa��es do retangulo:\n\nInforme os pontos do vertice superior esquerdo: ");
    scanf("%d %d", &x, &y);

    printf("\nInforme a altura: ");
    scanf("%d", &altura);

    printf("\nInforme o comprimento: ");
    scanf("%d", &comprimento);

    ret_init(&r, x, y, altura, comprimento);

    printf("\nArea do retangulo: %d", ret_area(r));

    printf("\n\nInforme a quantidade de pontos que voc� quer: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        printf("\nInforme as coordenadas do %d ponto: ", i+1);
        scanf("%d %d", &x, &y);

        p.x = x;
        p.y = y;

        if (ret_contains(r,p) == true) {

           cont++;

        }

    }

    printf("\n\nDos pontos que voc� informou, %d deles estao dentro do retangulo.\n", cont);

    return 0;
}
