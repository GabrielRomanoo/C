/*
2. Escreva um programa que receba uma linha de texto, conte as vogais e apresente o
histograma da frequência de cada uma delas. Considere que a linha de texto não contém
acentuação. Por exemplo:
Linha de texto: “As eleicoes 2018 acontecerao em Outubro”
Histograma:
a: *** (3)
e: ****** (6)
i: * (1)
o: ***** (5)
u: ** (2)
*/

#include <stdio.h>
#include <ctype.h>

int main() {

//PASSO 1: DECLARAR AS VARIAVEIS

    int i=0 , j=0 , contadorvogais[5] = {0};
    char string[100] , stringvogais[] = {'a','e','i','o','u','\0'};

//PASSO 2: FAZER A ENTRADA

    printf("Informe sua string: ");
    scanf("%99[^\n]", string);

//PASSO 3: TRANSFORMAR O TEXTO EM LETRAS MINUSCULAS (PARA PODER COMPARAR)


    for(i=0 ; string[i] != '\0' ; i++){
        string[i] = tolower(string[i]);     //A função TOLOWER transforma o caractere maiusculo em
    }                                       //minusculo. Novamente, pela biblioteca ctype.

    //printf("%s", string);
    //PARA VERIFICAR SE TRANSFORMA TUDO EM MINUSCULO

//PASSO 4: COMPARAR A STRING PRINCIPAL COM A STRING DE VOGAIS E BOTAR A QUANTIDADE NO VETOR DE VOGAIS

    for(i=0 ; string[i] != '\0' ; i++){

            for(j=0 ; j<5 ; j++){

                if(string[i] == stringvogais[j]){

                    contadorvogais[j]++;
                }
            }
    }

//PASSO 5: MOSTRAR O HISTOGRAMA

    printf("\n");

    printf("Histograma: \n");


    for(i=0;i<5;i++){
        //printf(" %c: %d \n", stringvogais[i], contadorvogais[i]);   MOSTRA SEM OS *
        printf("%c: ", stringvogais[i]);

        for(j=0;j<contadorvogais[i];j++){
            printf("*");
        }
        printf(" (%d) \n", contadorvogais[i]);
    }



    return 0;
}
