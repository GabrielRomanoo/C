/*3. Criar um programa que dados 3 n�meros inteiros, utilize uma fun��o do tipo void que receba
esses n�meros como par�metro e imprima o maior deles.*/

//por ser void, nao pode ter return.

#include <stdio.h>

void maior(int, int, int); //um pra cada variavel

int main() {

    int n1, n2, n3;

    printf("Informe os numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior(n1, n2, n3);

    return 0;
}
 void maior(int n1, int n2, int n3){

    if( n1 > n2 && n1 > n3){
         printf("\nO maior numero e: %d", n1);
    } else{
            if(n2 > n1 && n2 > n3){
                printf("\nO maior numero e: %d", n2);
            }
    else {
                printf("\nO maior numero e: %d", n3);

        }
    }

 }

