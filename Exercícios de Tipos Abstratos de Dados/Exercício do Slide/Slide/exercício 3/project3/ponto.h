/* ponto.h
* TAD para representar um ponto no R² */
#ifndef _PONTO_H
#define _PONTO_H

/* Definição do tipo Ponto */
typedef struct {
 int x;
 int y;
} ponto;

/* Função pto_init
* Inicializa as coordenadas x,y de um ponto */
void pto_init(ponto *, int, int);

/* Função pto_distancia
* Devolve a distância entre 2 pontos */
double pto_distancia(ponto, ponto);

#endif
