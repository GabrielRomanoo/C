

#ifndef _RETANGULO_H
#define _RETANGULO_H

#include "ponto.h"

typedef struct {
 ponto vertice;
 int altura;
 int comprimento;
} retangulo;

/*opera��o que inicializa as coordenadas do ponto que representa o
v�rtice superior esquerdo do ret�ngulo e sua altura e comprimento */
void ret_init(retangulo *, int, int, int, int);

//opera��o que devolve a �rea do ret�ngulo
int ret_area(retangulo);

//opera��o que verifica se um ponto est� dentro de um ret�ngulo.
bool ret_contains(retangulo, ponto);

#endif

