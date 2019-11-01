/*
7. Escreva uma função que calcule a área e o volume de uma esfera de raio r. Essa função
deve obedecer ao protótipo:
void calc_esfera(float r, float * area, float * volume);
A área da superfície e o volume são dados, respectivamente, por 4 x r
2
 e
4/3 x r3.
*/

#include <stdio.h>
#include <math.h>

void calc_esfera(float, float *, float *);

int main(){

    float raio=0, A, V;

    printf("Informe o raio da esfera em metros: ");
    scanf("%f", &raio);

   calc_esfera(raio, &A, &V);

    printf("\nArea: %.2f metros", A);

    printf("\nVolume: %.2f metros\n", V);




    return 0;
}

void calc_esfera(float r, float *area, float *volume){

    (*area) = 4.0 * M_PI * pow(r, 2);

    (*volume) = (4.0/3.0) * M_PI * pow(r,3);

}
