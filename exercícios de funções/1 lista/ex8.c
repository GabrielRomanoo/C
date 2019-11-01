/*
8. Escreva uma função de protótipo double   hipotenusa(double   x,   double   y); que
calcula e devolve o comprimento da hipotenusa de um triângulo retângulo cujos catetos são
dados pelos parâmetros x e y. Lembre-se que hipotenusa= x
2y
2
. Dica: utilize a função
sqrt para obter a raiz quadrada.

*/

#include <stdio.h>
#include <math.h>

double hipotenusa(double , double);

int main(){

    double x, y;

    scanf("%lf %lf", &x, &y);

    printf("Comprimento: %lf", hipotenusa(x,y));



    return 0;
}

double hipotenusa(double i, double j){

    double z;
    z = sqrt( pow(i,2) + pow(j,2) );  // <- funcao raiz quadrada
    return z;

}
