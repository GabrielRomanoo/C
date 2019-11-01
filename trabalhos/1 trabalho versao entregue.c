/*
enigma.c

Programa que, dada uma mensagem cifrada e um crib computa
o número de posições possíveis para o crib na mensagem cifrada.

Gabriel Romano Godoi Pereira (Ciência da Computação)
Gustavo Marinho Gomes da Silva (Ciência da Computação)
Jaime Mathias de Lara Bueno (Ciência da Computação)

Disciplina: Introdução à Computação - II

01/10/2018
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool eh_possivel(int, const char *, const char *);

int main(){
    int i, j, cont = 0;
    char mensagem[10001];

    scanf("%10000s", &mensagem);

    char crib[strlen(mensagem) + 1];

    scanf("%s", &crib);

    /* Verifica se o tamanho do crib é maior do que a mensagem. */

    if (strlen(crib) > strlen(mensagem)){
        return 1;
    }

    /* O laço abaixo repete a quantidade de vezes possível de crib caber na mensagem. */

    for (i = 0; i != strlen(mensagem) - strlen(crib) + 1; i++){

        if (eh_possivel(i, mensagem, crib) == false){
            /*
            Caso a função retorne false, quer dizer que nenhuma posição de crib aparece
            na mensagem a partir da posição i (index). Assim, a váriavel cont é incrementada
            mais um.
            */
             cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}

/*
função que recebe um inteiro index, um char constante mensagem e outro char constante crib.
E retorna, para a main, verdadeiro ou falso.
*/

bool eh_possivel(int index, const char * mensagem, const char * crib){
    int i;

    /* O laço abaixo verifica se o crib aparece na mensagem a partir da posição dada pelo index. */

    for (i = 0; crib[i] != '\0'; i++, index++){
        /*
        Compara a mensagem na posição index com crib na posição i.
        Caso for verdade, retorna true para a função main.
        */
        if(mensagem[index] == crib[i]){
            return true;
        }
    }
    /*
    Caso a função passe pelo laço for sem retornar pra função, quer dizer que o crib não
    aparece nenhuma vez na mensagem, então retorna false para a função main.
    */
    return false;
}
