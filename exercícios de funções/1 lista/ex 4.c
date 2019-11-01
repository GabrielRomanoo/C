/*

4. Escreva uma função de protótipo void retangulo(int a, int c); que desenha no
vídeo um retângulo formado por asteriscos (*) com a linhas de altura e c colunas de
comprimento. Por exemplo, se for feita a seguinte chamada a função: retangulo(5, 10);
A função deve desenhar no vídeo o seguinte retângulo:
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
