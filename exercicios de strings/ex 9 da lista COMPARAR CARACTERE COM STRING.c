/*9. Escreva um programa que dada um inteiro n e um caractere ch, solicite que o usu�rio
informe n palavras que come�am com a letra ch. Se o usu�rio informar alguma palavra
que n�o comece com a letra ch, o programa deve exibir uma mensagem informando que a
palavra n�o come�a com a letra ch. No final o programa deve exibir as n palavras
digitadas pelo usu�rio que come�am com a letra ch.*/

#include <stdio.h>
#include <string.h>

int main() {

    int n, i=0;
    char letra, c;

    printf("Informe quantas palavras voce ira digitar: ");
    scanf("%d", &n);

    printf("Informe o caractere a ser verificado: ");
    scanf(" %c", &letra);

    char str[n][50];

    printf("Informe as palavras: \n");

    for(i=0; i < n;i++){
        scanf(" %s", str[i]);
            if(str[i][0] != letra){
            printf("Erro! A palavra nao comeca com a letra %c \n", letra);
        }
    }

     printf("As palavras que comecam com a letra %c sao: \n", letra);

    for(i=0; i < n;i++){

        if(str[i][0] == letra){
            printf("%s \n", str[i]);
        }
    }




    return 0;
}
