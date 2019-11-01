/*
8. Criar um programa em C que leia o preço de compra e o preço de venda de 10
mercadorias usando um vetor para cada um dos preços. O programa deverá imprimir
quantas mercadorias proporcionam:
a) Lucro < 10%
b) 10 % <= Lucro <= 20%
c) Lucro > 20%
*/

#include <stdio.h>

int main(){

    int venda[10], compra[10], i, lucro, porc, a, b, c;

    for(i=0 ; i<10 ; i++){
        printf("Informe o preço de compra da mercadoria %d \n", i+1);
        scanf("%d", &compra[i]);
    }

    for(i=0 ; i<10 ; i++){
        printf("Informe o preço de venda da mercadoria %d \n", i+1);
        scanf("%d", &venda[i]);
    }

    for(i=0 ; i<10 ; i++){
        lucro = (venda[i] - compra[i]);
        porc = (lucro/venda[i]) * 100;
        if(porc < 10){
            a += 1;
        }
        if(porc >= 10 && porc <= 20){
            b += 1;
        }
        if(porc > 20){
            c += 1;
        }
    }

    printf("Foram %d mercadorias que proporcionaram menos de 10 porcento de lucro \n", a);

    printf("Foram %d mercadorias que proporcionaram mais de 10 porcento de lucro e menos de 20 porcento de lucro \n", b);

    printf("Foram %d mercadorias que proporcionaram mais de 20 porcento de lucro \n", c);


    return 0;
}
