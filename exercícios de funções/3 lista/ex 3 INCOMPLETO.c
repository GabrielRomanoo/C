/*
3. Escreva uma função que recebe uma string e um caractere como parâmetros e devolve a
posição da 1ª ocorrência do caractere na string. Caso o caractere não esteja contido na
string, a função deve devolver -1.
*/

#include <stdio.h>
#include <string.h>

int str(char *, char);

int main(){

    char stringA[100], ch;

    scanf(" %99[^\n]", stringA);

    scanf(" %c", &ch);

    printf("Posicao que aparece o caractere: %d", str(stringA, ch));

    return 0;
}

int str(char * x, char y){

    int i = 0;

    for(i = 0; x[i] != '\0' ; i++){
        if(x[i] == y){
            return i;
        }
    }

    return -1;

}
