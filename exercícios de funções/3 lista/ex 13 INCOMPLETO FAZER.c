/*
13. Escreva um programa que use uma macro AREA_TRIRET para calcular a �rea de um
tri�ngulo ret�ngulo dados sua base e altura. �rea do tri�ngulo ret�ngulo = (base * altura) /
2
*/

#include <stdio.h>

#define AREA_TRIRET(base, altura)  (((base) * (altura))/2)

int main(){

    int b, h;

    scanf("%d %d", &b, &h);

    printf("Area: %d", AREA_TRIRET(b,h));

    //PODE PASSAR ARGUMENTOS DE QUALQUER TIPO PARA A MACRO AREA TRIRET (POR EX: FLOAT, INT, LONG LONG)

    return 0;

}
