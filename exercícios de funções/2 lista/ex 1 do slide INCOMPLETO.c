/*
1)Criar uma função em C que receba como
parâmetro o valor de um ângulo em radianos e
converta-o para graus. Obs.: O parâmetro
passado na chamada à função deve ser
alterado para graus. Dica: graus =
radianos*180/ π
*/

#include <stdio.h>
#include <math.h> //pra usar a constante pi

void converte(float *);

int main(){

    float angulo;

    printf("Informe o angulo em radianos: ");
    scanf("%f", &angulo);

    converte(&angulo);

    printf("Angulo em graus: %f", angulo);

    return 0;
}

void converte(float * x){

    *x = (*x * 180) / M_PI;
}
