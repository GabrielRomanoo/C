/*1)Considere a estrutura struct circulo
definida anteriormente e escreva um
programa que dados dois círculos,
verifique se eles se sobrepõem. Dois
círculos se sobrepõem se a distância
entre os centros destes círculos é menor
que a soma de seus raios. Distância
entre dois pontos:
d= sqrt( pow( x1−x2, 2) + pow(y1−y2, 2) ) */

#include <stdio.h>
#include <math.h>

struct ponto {

    float x;
    float y;
};

struct circulo{

    struct ponto centro;
    float raio;
};

int main(){

    struct circulo dados[2];

    int i;
    float d, soma;

    for (i = 0; i < 2; i++) {

        printf("Informe o raio do %d circulo: ", i+1);
        scanf(" %f", &dados[i].raio);
        printf("\nInforme o eixo x do centro do %d circulo: ", i+1);
        scanf(" %f", &dados[i].centro.x);
        printf("\nInforme o eixo y do centro do %d circulo: ", i+1);
        scanf(" %f", &dados[i].centro.y);
        printf("\n");

    }

    d = sqrt( pow( ((dados[0].centro.x) - (dados[1].centro.x)), 2) + pow( ((dados[0].centro.y) - (dados[1].centro.y)), 2)  );

    soma = (dados[0].raio) + (dados[1].raio);

    if (d < soma) {

        printf("\nSe sobrepoem!\n");

    }
    else {

        printf("\nNao se sobrepoem!\n");
    }

    return 0;
}
