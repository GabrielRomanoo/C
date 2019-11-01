/*
10. Sentença Dançante1
. Uma sentença é chamada de dançante se sua primeira letra for
maiúscula e cada letra subsequente for o oposto da letra anterior. Espaços devem ser
ignorados ao determinar o case (minúsculo/maiúsculo) de uma letra. Por exemplo, "A b
Cd" é uma sentença dançante porque a primeira letra ('A') é maiúscula, a próxima letra
('b') é minúscula, a próxima letra ('C') é maiúscula, e a próxima letra ('d') é minúscula.
Entrada
A entrada contém vários casos de teste. Cada caso de teste é composto por uma linha que
contém uma sentença, que é uma string que contém entre 1 e 50 caracteres ('A'-'Z','a'-'z' ou
espaço ' '), inclusive, ou no mínimo uma letra ('A'-'Z','a'-'z').
Saída
Transforme a sentença de entrada em uma sentença dançante (conforme o exemplo
abaixo) trocando as letras para minúscula ou maiúscula onde for necessário. Todos os
espaços da sentença original deverão ser preservados, ou seja, " sentence " deverá ser
convertido para " SeNtEnCe ".
Exemplo
Entrada
This is a dancing sentence
 This is a dancing sentence
aaaaaaaaaaa
z
Saída
ThIs Is A dAnCiNg SeNtEnCe
 ThIs Is A dAnCiNg SeNtEnCe
AaAaAaAaAaA
Z
*/

/*
Funções para conversão de caracteres maiúsculos e minúsculos:

tolower
Converte o caracter em minúsculo

toupper
Converte caracter minúsculo em maiúsculo.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int i=0, j=0, k=0;
    char str[50];

    printf("Informe a string: ");
    scanf(" %49[^\n]", str);



    for( i = 0 ; str[i] != '\0' ; i++){

        if( i % 2 == 0 ){
            str[i] = toupper(str[i]);
        }
    }

    puts(str);


    return 0;
}

