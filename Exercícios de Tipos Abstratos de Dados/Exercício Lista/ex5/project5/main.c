/*
5. Escreva uma aplicação que dado um retângulo e um conjunto de n pontos, informe a área do
retângulo e quantos pontos estão dentro do retângulo. Forneça o makefile da aplicação.
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

    printf("Informações do retangulo:\n\nInforme os pontos do vertice superior esquerdo: ");
    scanf("%d %d", &x, &y);

    printf("\nInforme a altura: ");
    scanf("%d", &altura);

    printf("\nInforme o comprimento: ");
    scanf("%d", &comprimento);

    ret_init(&r, x, y, altura, comprimento);

    printf("\nArea do retangulo: %d", ret_area(r));

    printf("\n\nInforme a quantidade de pontos que você quer: ");
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

    printf("\n\nDos pontos que você informou, %d deles estao dentro do retangulo.\n", cont);

    return 0;
}
