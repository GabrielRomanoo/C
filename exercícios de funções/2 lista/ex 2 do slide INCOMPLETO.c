/*
2)Criar uma função em C que receba um número
inteiro n > 0 e devolve o número de dígitos de
n e o primeiro dígito de n
*/

#include <stdio.h>

void digitos(int /* <-valor de n*/, int *, int *);

int main(){

    int numero, num_digitos, primeiro_num;

    printf("informe um numero: ");
    scanf("%d", &numero);

    digitos(numero, &num_digitos, &primeiro_num);

    printf("\nPrimeiro digito: %d", primeiro_num);

    printf("\nNumero de digitos: %d", num_digitos);

    return 0;
}

void digitos(int i /* <- copia da variavel numero */, int *nd , int *pd){

    *nd = 1; //alterando num_digitos

    for( ; i > 9 /* <- maximo valor da primeira posicao */ ; (*nd)++){
        i = i / 10;
    }

    *pd = i; //alterando primeiro_num


}

