/*
5. Escreva uma fun��o que recebe como par�metro um inteiro positivo ano e devolve
verdadeiro (true) se ano for bissexto, ou falso (false), caso contr�rio. Um ano �
bissexto se (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)).
*/

#include <stdio.h>
#include <stdbool.h> //biblioteca da fun��o bool

bool ano(int *);

int main() {

    int i;

    printf("Informe o ano: ");
    scanf("%d", &i);

    if( ano(&i) == true){
        printf("\nO ano e bissexto!");
    }else{
        printf("\nO ano NAO e bissexto!");
    }

    return 0;
}

bool ano(int *x){

    int j;

    j = *x;

    if( j % 4 == 0 && (j % 100 != 0 || j % 400 == 0) ){

        return true;

    } else{

        return false;

    }
}
