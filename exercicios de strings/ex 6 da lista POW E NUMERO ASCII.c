/*6. Escreva um programa que receba uma string de 0s e 1s, interprete essa string como um
número binário e informe o valor desse número na base decimal.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    char str[9]; //9 porque so existe no maximo 8 numeros no binario, ex; 11001010
    int i=0, numero_decimal =0, expoente=0;

    printf("Informe o numero binario: ");
    scanf("%8[^\n]", str);

    expoente = strlen(str) - 1;

    printf(" %d", expoente);

    for( i=0 ; str[i] != '\0', expoente >= 0 ; i++){

        if(str[i] == '0'){

            expoente--;

        }

        if(str[i] == '1'){

           // numero_decimal = numero_decimal + ( str[i] * (pow(2,expoente)));
           // nao pode coloar str[i], porque '1' é um caractere em ascii com outro valor numero

            numero_decimal = numero_decimal + ( 1 * (pow(2,expoente)));

            expoente--;

        }

    }


     printf(" %d", numero_decimal);


    return 0;
}
