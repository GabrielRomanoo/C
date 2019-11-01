//2)Escreva um programa que dadas duas strings, exiba-as em ordem alfabética.

#include <stdio.h>
#include <string.h>

int main() {
    char str[41], str2[41];
    int comp;
    printf("Informe as duas strings: ");
    scanf(" %40[^\n] %40[^\n]", str, str2); //se a primeira string for maior q 40 caracteres, vc nem digita a 2, ele ja bota na segunda,
                                            //pra evitar isso, so fazer 2 scanf

    printf("\nOrdem Alfabetica: \n");

    if(strcmp(str, str2) < 0){          //A função strcmp() espera duas strings como argumentos e compara-as lexigraficamente (alfabiticamente)
        printf("%s", &str);
        printf("\n%s", &str2);
    }

    if(strcmp(str, str2) > 0){
        printf("%s", &str2);
        printf("\n%s", &str);
    }





      return 0;

}
