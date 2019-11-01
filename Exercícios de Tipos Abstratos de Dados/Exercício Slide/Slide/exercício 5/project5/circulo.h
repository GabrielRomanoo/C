/* circulo.h
* TAD */
#ifndef _CIRCULO_H
#define _CIRCULO_H

#include "ponto.h"
#include <stdbool.h>

typedef struct {
 ponto centro;
 double raio;
} circulo;

/* operação que inicializa um círculo c com centro no
ponto x,y e raio r */
void circ_init(circulo *, int, int, double);

/* operação que calcula e devolve a área do círculo c (πR²) */
double circ_area(circulo);

/* operação que verifica se um ponto p está dentro do círculo c
(a distância do ponto ao centro do círculo é menor ou igual a seu raio) */
bool circ_contains(circulo, ponto);


#endif
