/*
3. Criar uma fun��o em C que receba um n�mero decimal e converta-o para bin�rio. Obs.:
O par�metro passado na chamada � fun��o deve ser alterado para bin�rio.
*/

#include <stdio.h>

void converte(long long *); //long long sao para numeros grandes (ate 17 digitos)

int main(){

    long long decimal;

    printf("Informe o numero decimal: ");
    scanf("%Ld", &decimal);

    converte(&decimal);

    printf("O numero em binario: %Ld", decimal);

    return 0;
}

void converte(long long *binario){

    long long n, b=0, i=0, potencia=1;

    n = *binario;

    for( i = 0 ; n > 0 ; i ++){

        b += (n % 2) * potencia;
        n /= 2;
        potencia *=10;

    }

    *binario = b;

}
