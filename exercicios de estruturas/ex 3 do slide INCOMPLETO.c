/*
1)Considere a estrutura ponto para representar um
ponto no espaço 2D e uma estrutura retangulo
que representa um retângulo no espaço 2D. A
estrutura retangulo possui 2 membros do tipo
ponto que representam as coordenadas dos
vértices superior esquerdo e inferior direto de um
retângulo. Implemente uma função que indique se
um determinado ponto p está localizado dentro ou
fora de um retângulo r. A função deve devolver
verdadeiro caso o ponto esteja localizado dentro
do retângulo, ou falso caso contrário. Essa função
deve obedecer ao protótipo:
*/

#include <stdio.h>
#include <stdbool.h>

typedef struct {
    float x;
    float y;
} ponto;

typedef struct {
    ponto vertice_superior;
    ponto vertice_inferior;
} retangulo;

bool dentroRet(retangulo , ponto);

int main()
{
    retangulo r;

    ponto p;

    printf("Informe os pontos do vertice superior: ");
    scanf(" %f %f", &r.vertice_superior.x, &r.vertice_superior.y);

    printf("Informe os pontos do vertice inferior: ");
    scanf(" %f %f", &r.vertice_inferior.x, &r.vertice_inferior.y);

    printf("Informe um ponto: ");
    scanf(" %f %f", &p.x, &p.y);

    if (dentroRet(r, p) == true) {

        printf("\nO ponto esta localizado no retangulo!\n");

    }
    else {

        printf("\nO ponto NAO esta localizado no retangulo!\n");
    }

    /*
    printf(" %f %f", r.vertice_superior.x, r.vertice_superior.y);

    printf(" %f %f", r.vertice_inferior.x, r.vertice_inferior.y);

    printf(" %f %f", p.x, p.y);
    */

    return 0;
}

bool dentroRet(retangulo r, ponto p)
{


    if( ( (p.x >= r.vertice_superior.x )  && (p.x <= r.vertice_inferior.x) && (p.y <= r.vertice_superior.y) && (p.y >= r.vertice_inferior.y) ) == true )  {

        return true;
    }
    else {

        return false;
    }
}
