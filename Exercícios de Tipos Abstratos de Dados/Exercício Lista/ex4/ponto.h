/* ponto.h
* TAD para representar um ponto no R� */
#ifndef _PONTO_H
#define _PONTO_H

/* Defini��o do tipo Ponto */
typedef struct {
 int x;
 int y;
} ponto;

/* Fun��o pto_init
* Inicializa as coordenadas x,y de um ponto */
void pto_init(ponto *, int, int);

/* Fun��o pto_distancia
* Devolve a dist�ncia entre 2 pontos */
double pto_distancia(ponto, ponto);

#endif
