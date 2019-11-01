/*1. Escreva um programa que receba uma string do teclado e informe quantas letras
maiúsculas ela possui.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int i=0, contador_letras=0;        //sempre declarar tudo igual a 0, para nao dar erro
    char string[100];

    printf("Informe a string: ");
    scanf("%99[^\n]", string);

    for(i=0 ; string[i] != '\0' ; i++){

        if( isupper(string[i]) ){       //a função isupper verificar se o caractere é uma
            contador_letras++;          //letra maiuscula. a biblioteca dessa função é a
        }                               //#include <ctype.h>

    }

   puts(contador_letras); //quando usa o puts para isso, da erro no meu pc

   printf("A string possui %d letras maiusculas", contador_letras);

    return 0;
}

