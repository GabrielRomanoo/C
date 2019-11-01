/*
Escreva um programa que dada uma
lista de até 20 nomes, exiba apenas os
nomes que começam com as letras de
'A' a 'J'.

CADA LINHA É UMA STRING
E
CADA COLUNA É UM CARACTERE
*/

#include <stdio.h>
#include <string.h>

int main(){

    int i, j;
    char str[20][100];

    for(i=0;i<=19;i++){
    //fgets(str[i],80,stdin);
    scanf(" %19[^\n]", str[i]);
    }

    printf("\nStrings que comecao com A ou J: \n");

    for(i=0;i<=19;i++){
            if(str[i][0] == 'A' || str[i][0] == 'a' || str[i][0] == 'J' || str[i][0] == 'j'){
                    //o 0 é pq tem q pegar a primeira coluna (coluna = caractere)
                printf("%s\n", &str[i]);
            }
    }

    return 0;
}
