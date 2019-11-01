/*6. Escreva uma função para calcular e devolver o fatorial de um número natural passado como
parâmetro.*/

//por ter que retornar algo, nao pode ser o void.

#include <stdio.h>

int fatorial(int);


int main(){

    int n;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    printf("\nO fatorial do numero informado eh: %d\n",fatorial(n));

    return 0;
}

int fatorial(int n){

    int i=0, fat=1;

    for(i=n; i>0 ;i--){

        fat = fat * i;
    }

    return fat;
}
