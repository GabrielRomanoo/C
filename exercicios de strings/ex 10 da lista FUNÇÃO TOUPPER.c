/*
10. Senten�a Dan�ante1
. Uma senten�a � chamada de dan�ante se sua primeira letra for
mai�scula e cada letra subsequente for o oposto da letra anterior. Espa�os devem ser
ignorados ao determinar o case (min�sculo/mai�sculo) de uma letra. Por exemplo, "A b
Cd" � uma senten�a dan�ante porque a primeira letra ('A') � mai�scula, a pr�xima letra
('b') � min�scula, a pr�xima letra ('C') � mai�scula, e a pr�xima letra ('d') � min�scula.
Entrada
A entrada cont�m v�rios casos de teste. Cada caso de teste � composto por uma linha que
cont�m uma senten�a, que � uma string que cont�m entre 1 e 50 caracteres ('A'-'Z','a'-'z' ou
espa�o ' '), inclusive, ou no m�nimo uma letra ('A'-'Z','a'-'z').
Sa�da
Transforme a senten�a de entrada em uma senten�a dan�ante (conforme o exemplo
abaixo) trocando as letras para min�scula ou mai�scula onde for necess�rio. Todos os
espa�os da senten�a original dever�o ser preservados, ou seja, " sentence " dever� ser
convertido para " SeNtEnCe ".
Exemplo
Entrada
This is a dancing sentence
 This is a dancing sentence
aaaaaaaaaaa
z
Sa�da
ThIs Is A dAnCiNg SeNtEnCe
 ThIs Is A dAnCiNg SeNtEnCe
AaAaAaAaAaA
Z
*/

/*
Fun��es para convers�o de caracteres mai�sculos e min�sculos:

tolower
Converte o caracter em min�sculo

toupper
Converte caracter min�sculo em mai�sculo.
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

