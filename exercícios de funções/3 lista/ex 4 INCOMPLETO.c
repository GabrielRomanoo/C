/*
4. Escreva uma fun��o que recebe um vetor de strings com at� 20 caracteres cada e o n�mero
de strings do vetor como par�metros, e devolve verdadeiro se o vetor est� em ordem
alfab�tica (crescente), ou falso, caso contr�rio. A fun��o deve ter o seguinte prot�tipo:
bool esta_ordenado(char vetor[][21], int n);
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool esta_ordenado(int, char [*][21]);

int main(){

    int i, x;

    printf("Informe quantas strings voce ira digitar: ");
    scanf("%d", &i);

    char vet[i][21];

    for(x=0; x < i; x++){
        scanf("%s", vet[x]);
    }

    if(esta_ordenado(i, vet) == true){
        printf("\nEsta em ordem alfabetica\n");
    }
    if(esta_ordenado(i, vet) == false){
        printf("\nNAO esta em ordem alfabetica\n");
    }

    return 0;
}

bool esta_ordenado(int n, char vetor[n][21]){

    int j=0, k=0;


    for(j=0; j < n ; j++){

        for(k=0; k < 20 && vetor[j][k] != '\0'; k++){

            if(vetor[j][k] != vetor[j+1][k]){

                    if( vetor[j][k] - vetor[j+1][k]  > 0){
                        return false;
                    }
                    k = 20;

            }
        }
    }

    return true;
}
