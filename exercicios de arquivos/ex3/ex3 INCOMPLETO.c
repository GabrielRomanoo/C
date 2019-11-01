/*
3. Escreva um programa que recebe dois valores via argumentos da fun��o main(). O primeiro �
uma string e o segundo o nome de um arquivo do tipo texto. O programa deve percorrer o
arquivo imprimindo no v�deo todas as linhas que cont�m a string. Use a fun��o strstr() para
procurar a palavra em uma linha.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
    if (argc != 3) {
		fprintf(stderr, "Erro: uso incorreto!\nDigite: %s <arquivo>\n", argv[0]);
		return 1;
	}

    FILE *arq;

    arq = fopen(argv[2], "r");

    if (arq == NULL) {

        printf("Erro na abertura do arquivo %s no modo de leitura", argv[2]);
    }

    char string[100];

    while( fgets(string, 100, arq) != NULL ) { //fazendo assim nao precisa fazer o laco antigo do feof do arquivo com break (la�o antigo no ex anterior)

        if ( strstr(string, argv[1]) != NULL) {

            fputs(string, stdout); //stdout � a funcao que representa o video assim como o stdin � a funcao que representa o teclado

        }

    }

    fclose(arq);

    return 0;
}
