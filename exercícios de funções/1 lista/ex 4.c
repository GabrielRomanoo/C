/*

4. Escreva uma fun��o de prot�tipo void�retangulo(int�a,�int�c); que desenha no
v�deo um ret�ngulo formado por asteriscos (*) com a linhas de altura e c colunas de
comprimento. Por exemplo, se for feita a seguinte chamada a fun��o: retangulo(5,�10);
A fun��o deve desenhar no v�deo o seguinte ret�ngulo:
**********
**********
**********
**********
**********

*/

#include <stdio.h>
#include <string.h>

void retangulo(int, int);

int main() {

    int a, c;

    printf("Informe quantas linhas de altura voce quer: ");
    scanf("%d", &a);

    printf("\nInforme quantas colunas de comprimento voce quer: ");
    scanf("%d", &c);

    printf("\n");

    retangulo(a,c);

    return 0;
}

void retangulo(int a, int c){

    int i=0, j=0;

    for(i=0 ; i < a ; i++){
        for(j=0 ; j < c ; j++){
            printf("*");
        }
        printf("\n");
    }
}
