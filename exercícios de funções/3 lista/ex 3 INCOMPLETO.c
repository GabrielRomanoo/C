/*
3. Escreva uma fun��o que recebe uma string e um caractere como par�metros e devolve a
posi��o da 1� ocorr�ncia do caractere na string. Caso o caractere n�o esteja contido na
string, a fun��o deve devolver -1.
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
