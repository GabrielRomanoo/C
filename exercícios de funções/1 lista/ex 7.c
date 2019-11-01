/*7. Considere a função do exercício anterior e escreva um programa que solicita dois números
naturais (n e k) ao usuário e calcula e imprime:
a) O número de permutação Pn: Pn=n!
b) O número de arranjos An,k: An , k=
n!
n−k !
c) O número de combinações Cn,k: Cn , k=
n!
k !∗n−k !
*/

#include <stdio.h>

void funcao(int, int);

int main(){

    int n, k;

    scanf("%d %d", &n, &k);

    funcao(n,k);

    return 0;
}

void funcao(int n, int k){

    int i, j=0, cont=1, fatorial_n=1, arranjo=1, combinacao=1, denominador=1, fatorial_k=1;

    for(i=n; i > 0 ; i--){

        fatorial_n = fatorial_n * i;

    }

    puts("-----------------------------------");

    printf("Permutacao: %d", fatorial_n);

    for(i = (n - k) ; i > 0 ; i--){

        denominador = denominador * i;
    }

    arranjo = (fatorial_n / denominador);

    printf("\nArranjo: %d", arranjo);

    for(i=k ; i>0 ; i--){
        fatorial_k = fatorial_k * i;
    }

    combinacao = (fatorial_n / (fatorial_k * denominador));

    printf("\nCombinacao: %d", combinacao);

}
