/*
enigma.c

Programa que, dada uma mensagem cifrada e um crib computa
o n�mero de posi��es poss�veis para o crib na mensagem cifrada.

Gabriel Romano Godoi Pereira (Ci�ncia da Computa��o)
Gustavo Marinho Gomes da Silva (Ci�ncia da Computa��o)
Jaime Mathias de Lara Bueno (Ci�ncia da Computa��o)

Disciplina: Introdu��o � Computa��o - II

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

    /* Verifica se o tamanho do crib � maior do que a mensagem. */

    if (strlen(crib) > strlen(mensagem)){
        return 1;
    }

    /* O la�o abaixo repete a quantidade de vezes poss�vel de crib caber na mensagem. */

    for (i = 0; i != strlen(mensagem) - strlen(crib) + 1; i++){

        if (eh_possivel(i, mensagem, crib) == false){
            /*
            Caso a fun��o retorne false, quer dizer que nenhuma posi��o de crib aparece
            na mensagem a partir da posi��o i (index). Assim, a v�riavel cont � incrementada
            mais um.
            */
             cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}

/*
fun��o que recebe um inteiro index, um char constante mensagem e outro char constante crib.
E retorna, para a main, verdadeiro ou falso.
*/

bool eh_possivel(int index, const char * mensagem, const char * crib){
    int i;

    /* O la�o abaixo verifica se o crib aparece na mensagem a partir da posi��o dada pelo index. */

    for (i = 0; crib[i] != '\0'; i++, index++){
        /*
        Compara a mensagem na posi��o index com crib na posi��o i.
        Caso for verdade, retorna true para a fun��o main.
        */
        if(mensagem[index] == crib[i]){
            return true;
        }
    }
    /*
    Caso a fun��o passe pelo la�o for sem retornar pra fun��o, quer dizer que o crib n�o
    aparece nenhuma vez na mensagem, ent�o retorna false para a fun��o main.
    */
    return false;
}
