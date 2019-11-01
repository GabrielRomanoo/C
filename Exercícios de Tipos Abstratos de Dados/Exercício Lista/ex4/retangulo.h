

#ifndef _RETANGULO_H
#define _RETANGULO_H

#include "ponto.h"

typedef struct {
 ponto vertice;
 int altura;
 int comprimento;
} retangulo;

/*operação que inicializa as coordenadas do ponto que representa o
vértice superior esquerdo do retângulo e sua altura e comprimento */
void ret_init(retangulo *, int, int, int, int);

//operação que devolve a área do retângulo
int ret_area(retangulo);

//operação que verifica se um ponto está dentro de um retângulo.
bool ret_contains(retangulo, ponto);

#endif

