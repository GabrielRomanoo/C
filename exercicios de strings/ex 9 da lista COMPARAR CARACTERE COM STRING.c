/*9. Escreva um programa que dada um inteiro n e um caractere ch, solicite que o usuário
informe n palavras que começam com a letra ch. Se o usuário informar alguma palavra
que não comece com a letra ch, o programa deve exibir uma mensagem informando que a
palavra não começa com a letra ch. No final o programa deve exibir as n palavras
digitadas pelo usuário que começam com a letra ch.*/

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
