/*
3. Criar uma função em C que receba um número decimal e converta-o para binário. Obs.:
O parâmetro passado na chamada à função deve ser alterado para binário.
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
