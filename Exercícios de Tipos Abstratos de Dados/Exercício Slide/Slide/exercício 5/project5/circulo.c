/*
2)Defina um TAD circulo definido pela estrutura
abaixo:
typedef struct {
 ponto centro;
 double raio;
} circulo;
Este TAD deve exportar as seguintes operações:
a)void circ_init(circulo * c, int x, int y, double
r): operação que inicializa um círculo c com centro no
ponto x,y e raio r
b)double circ_area(circulo c): operação que calcula e
devolve a área do círculo c (πR²)
c)bool circ_contains(circulo c, ponto p): operação
que verifica se um ponto p está dentro do círculo c (a
distância do ponto ao centro do círculo é menor ou igual
a seu raio)
*/

/* circulo.c
* Implementa as operações que manipulam o TAD circulo */
#include <math.h>
#include <stdbool.h>
#include "circulo.h"
#include "ponto.h"


void circ_init(circulo * c, int x, int y, double r)
{
    c->centro.x = x;
    c->centro.y = y;
    c->raio = r;
}


double circ_area(circulo c)
{
    return (M_PI * pow(c.raio, 2));
}

bool circ_contains(circulo c, ponto p)
{
    return ( pto_distancia(p,c.centro) <= c.raio );
}


