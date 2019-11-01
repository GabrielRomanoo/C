/*
2. Escreva um programa para criptografar e descriptografar um arquivo do tipo texto usando a cifra
de César (https://pt.wikipedia.org/wiki/Cifra_de_César). O programa deve receber como
argumentos da função da main() o nome do arquivo a ser criptografado ou descriptografado, -c
(criptografar) ou -d (descriptografar) e a chave (rotação).
*/

#include <stdio.h>
#include <string.h>

void cesar(int, char *, char *);

int main(int argc, char * argv[])
{
    int r;


    r = atoi(argv[3]);

    cesar(r, argv[2], argv[3]);


    return 0;
}

void cesar(int n, char nome_arquivo[], char tipo[]){

    FILE *arquivo;

    arquivo = fopen(nome_arquivo, "r");

    char ch;

    if (arquivo == NULL) {

        fprintf(stderr, "Erro de abertura do arquivo!");
        return 1;
    }

    while ( feof(arquivo) != EOF) {

    if (strcmp(tipo,"-d") == 0) {

    fscanf(arquivo, "%c", &ch);

    ch = ch - n;

    printf("%c", ch);


    }else {

        if (strcmp(tipo, "-c") == 0) {

           fscanf(arquivo, "%c", &ch);


        }
    }


    }

    fclose(arquivo);
}
