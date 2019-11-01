/*
1. Escreva um programa que recebe o nome de dois arquivos do tipo texto via argumentos da
função main(). O programa deve gerar uma cópia o primeiro arquivo no segundo, entretanto,
todos os caracteres do segundo arquivo devem estar em letras maiúsculas. Use a função
toupper() do ctype.h para converter todos os caracteres para maiúsculo e gravá-los no segundo
arquivo.
*/


#include <stdio.h>
#include <ctype.h>
#include <windows.h>

int main()
{

    FILE *arq1, *arq2;

    char arquivo1[20], arquivo2[20], ch, ch2;

    printf("Informe o nome do primeiro arquivo: ");
    scanf(" %s", &arquivo1);

    printf("Informe o nome do segundo arquivo: ");
    scanf(" %s", &arquivo2);

    arq1 = fopen(arquivo1,"r");

    if (arq1 == NULL) {

        fprintf(stderr, "Erro de abertura do arquivo!");
        return 1;
    }

    arq2 = fopen(arquivo2,"w");

    if (arq2 == NULL) {

        fprintf(stderr, "Erro de abertura do arquivo!");
        return 1;
    }

    while (feof(arq1) != EOF) {

        fscanf(arq1, "%c", &ch);

        if(feof(arq1)){
            break;
        }

        ch = toupper(ch);
        //fputc(ch, arq2);

        fprintf(arq2, "%c", ch);

        printf("%c", ch);
    }

    fclose(arq2);

    fclose(arq1);

    return 0;
}
