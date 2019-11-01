/*
2. Criar uma função em C que receba um número binário e converta-o para decimal. Obs.:
O parâmetro passado na chamada à função deve ser alterado para decimal.
*/

#include <stdio.h>
#include <math.h>

void converte(int *);

int main(){

    int binario;

   // printf("Informe o tamanho do numero binario: ");
   // scanf("%d", &t);

    printf("Informe o numero binario: ");
    scanf("%d", &binario);

    converte(&binario);

    printf("Numero alterado para decimal: %d", binario);


    return 0;
}

void converte(int *decimal){

    int n, d= 0, j=1, i=0, k=1, t=0;

    n = *decimal;

    //ABAIXO FOI FEITO PELO PROFESSOR:

    for(i=0 ; n > 0 ;i++){

        d += (n % 10 ) * k;
        n /= 10;
        k *= 2;
    }



    /*

    t = *decimal; //(tamanho)

    //LAÇO PARA CONTAR O TAMANHO DO NUMERO BINARIO

    for(i=0 ; t != 0 ; i++){

        t = t / 10;

    }



    for( j = 0; j < i ; j++){

        if(j==0){
            d += (((n / 1) % 10) * 1);
        }

        if(j==1){
            d += (( (n / 10) % 10 ) * pow(2,1) );
        }

        if(j==2){
            d += (( (n / 100) % 10) * pow(2,2) ) ;
        }

        if(j==3){
            d += ( ((n / 1000) % 10) * pow(2,3));
        }

        if(j==4){
            d += ( ((n / 10000) % 10) * pow(2,4));
        }

        if(j==5){
            d += ( ((n / 100000) % 10) * pow(2,5));
        }

        if(j==6){
            d += ( ((n / 1000000) % 10) * pow(2,6));
        }

        if(j==7){
            d += ( ((n / 10000000) % 10) * pow(2,7));
        }

    }

    */

    *decimal = d;


}




