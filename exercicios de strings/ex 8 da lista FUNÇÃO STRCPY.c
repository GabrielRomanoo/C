/*8. Escreva um programa para ler 8 nomes em cada um dos vetores de strings A e B.
Construir um vetor de strings C, que será formada por um elemento do vetor A e por um
elemento do vetor B, intercaladamente.
*/

#include <stdio.h>
#include <string.h>

int main(){

    int i=0, j=0, x=0;
    char strA[8][50], strB[8][50], strC[16][50];

    printf("Informe o primeiro vetor de strings: \n");

    for(i=0; i < 8 ; i++){

       scanf(" %49[^\n]", strA[i]);

    }


    printf("Informe o primeiro vetor de strings: \n");



    for(i=0; i < 8 ; i++){

       scanf(" %49[^\n]", strB[i]);

    }

    printf("Terceiro vetor: \n");

    for(i=0; i < 16 ; i++){

       if(strA[j]  != '\0'){
        strcpy(strC[i],strA[j]);
        j++;
        i++;
       }

        if(strB[x]  != '\0'){
        strcpy(strC[i],strB[x]);
        x++;
       }
    }

    for(i=0; i < 16 ; i++){

        printf("%s", &strC[i]);
        printf("\n");

    }


    return 0;
}

