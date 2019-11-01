/*
2)Defina uma estrutura para representar um
cilindro. Um cilindro possui um círculo como
base e uma altura.
 Escreva um programa que dadas as
informações da base do cilindro e sua altura,
determina o volume do cilindro.
 Área da base do cilindro (Ab): πR2
 Volume do cilindro: Ab * altura

*/

#include <stdio.h>
#include <math.h>

struct base {

    float raio;

};

struct cilindro {

    struct base dado;

    float altura;

};

int main()
{
    struct cilindro x;

    printf("Informe o raio: ");
    scanf(" %f", &x.dado.raio);

    printf("Informe a altura: ");
    scanf(" %f", &x.altura);

    float volume, area;

    area = M_PI * pow((x.dado.raio),2);

    volume = area * (x.altura);

    printf("\nVolume: %.2f", volume);

    return 0;

}


