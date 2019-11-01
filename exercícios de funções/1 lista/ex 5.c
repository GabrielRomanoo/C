/*5. Escreva uma fun��o de prot�tipo void �triangulo(int �n,�char �ch); que desenha no
v�deo um tri�ngulo invertido formado por n caracteres ch em sua base. Por exemplo, se for feita
seguinte chamada a fun��o: triangulo(7,�'#');
A fun��o deve desenhar no v�deo o seguinte tri�ngulo:
#######
�#####
��###
���#
*/

#include <stdio.h>

void triangulo(int, char);

int main(){

    int n;
    char ch;

    printf("Informe o tamanho da base do triangulo (APENAS NUMEROS IMPARES): ");
    scanf("%d", &n);

    printf("Informe o caractere do triangulo: ");
    scanf(" %c", &ch);

    triangulo(n,ch);

    return 0;
}

void triangulo(int n, char ch){

    int i=0, j=0, k=0, l=0;

    for(i = n ; i > 0 ; i = i - 2){

        if(k > 0){
            for(l = k; l > 0; l--){
                printf(" ");
            }
        }

        for(j = 0 ; j < i ; j++){
            printf("%c", ch);
        }

        k++;

        printf("\n");
    }


}
