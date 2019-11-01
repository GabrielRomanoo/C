/*
/*
4. Defina um TAD retangulo que possui como características um ponto que representa seu
vértice superior esquerdo, sua altura e comprimento (valores inteiros). Este TAD exporta as
seguintes funções:
a) void ret_init(retangulo *, int, int, int, int): operação que inicializa
as coordenadas do ponto que representa o vértice superior esquerdo do retângulo e sua
altura e comprimento;
b) int ret_area(retangulo): operação que devolve a área do retângulo;
c) bool ret_contains(retangulo, ponto): operação que verifica se um ponto está
dentro de um retângulo.
*/


#include <math.h>
#include <stdbool.h>
#include "retangulo.h"
#include "ponto.h"

void ret_init(retangulo * r, int x, int y, int a, int c)
{
    r->vertice.x = x;
    r->vertice.y = y;
    r->altura = a;
    r->comprimento = c;

}

int ret_area(retangulo r)
{
    return (r.altura * r.comprimento);
}

bool ret_contains(retangulo r, ponto p)
{
    if (r.vertice.x <= p.x && r.vertice.y >= p.y) {

        return true;
    }

    return false;
}




