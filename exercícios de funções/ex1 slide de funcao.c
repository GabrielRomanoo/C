/*
1)Criar uma função em C que receba como
parâmetro o valor de um ângulo em radianos e
converta-o para graus. Obs.: O parâmetro
passado na chamada à função deve ser
alterado para graus. Dica: graus =
radianos*180/ π.
*/

#include <stdio.h>
#include <math.h>

void transforma(float *);

int main(){

    float rad;

    printf("Informe o valor de um angulo em radianos: ");
    scanf("%f", &rad);

    transforma(&rad);

    printf("Valor do angulo em graus: %.2f", rad);

    return 0;
}

void transforma(float * x){

    *x = (*x * 180.0) / M_PI;

}
