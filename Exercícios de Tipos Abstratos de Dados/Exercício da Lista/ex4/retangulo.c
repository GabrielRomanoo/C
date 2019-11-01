/*
/*
4. Defina um TAD retangulo que possui como caracter�sticas um ponto que representa seu
v�rtice superior esquerdo, sua altura e comprimento (valores inteiros). Este TAD exporta as
seguintes fun��es:
a) void ret_init(retangulo *, int, int, int, int): opera��o que inicializa
as coordenadas do ponto que representa o v�rtice superior esquerdo do ret�ngulo e sua
altura e comprimento;
b) int ret_area(retangulo): opera��o que devolve a �rea do ret�ngulo;
c) bool ret_contains(retangulo, ponto): opera��o que verifica se um ponto est�
dentro de um ret�ngulo.
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




