/*
10. Criar um programa em C que receba a temperatura média de cada mês do ano, em graus
centígrados, e armazene essas temperaturas em um vetor. Imprimir as temperaturas de
todos os meses, maior e a menor temperatura do ano e em que mês aconteceram. Suponha
que não há meses com temperaturas iguais.
*/

#include <stdio.h>

int main() {

    int i, max = 0, min, mesmax = 0, mesmin = 0, temp[12];

    printf("Informe as temperaturas medias de cada mes do ano\n");

    for(i=0 ; i<12 ; i++){
        printf("Mes %d \n", i+1);
        scanf("%d", &temp[i]);
    }

    min = temp[0];

    for(i=0 ; i<12 ; i++){
        if(max < temp[i]){
            max = temp[i];
            mesmax = i;
        }
        if(min > temp[i]){
            min = temp[i];
            mesmin = i;
        }

    }

    printf("\n");

    printf("As temperaturas sao: \n");

    for(i=0 ; i<12 ; i++){
        printf("No mes %d a temperatura foi de: %d \n", i+1, temp[i]);
    }

    printf("A maior temperatura foi de %d no mes %d \n", max, mesmax + 1);

    printf("A menor temperatura foi de %d no mes %d \n", min, mesmin + 1);

    return 0;
}
