//1.Escreva uma programa que dada uma string,  escreva-a de trás para frente.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int i=0;
    char string1[50];


    printf("Informe a string: ");
    scanf("%49[^\n]", string1);

    /*

    strrev(string1);

    printf("Invertida: %s", string1);
    */


    //ABAIXO É DO JEITO MANUAL;


	/*printf("\nString invertida: ");

	for (i = strlen(string1) - 1; i >= 0; i--) {
        //i = numero de caracteres - 1 (ou seja: para pegar o numero do índice.)
		putchar(string1[i]);
	}
	printf("\n");
	*/


	//OU DE OUTRO JEITO MANUAL:


	char inverso[strlen(string1) + 1]; //O INVERSO PEGA O NUMERO DE CARACERES + 1 (ESSE + 1 É PRA TER LUGAR PRO '\0')
	int j;
	for (i = strlen(string1) - 1, j = 0; i >= 0; i--, j++) {
		inverso[j] = string1[i];
	}
	inverso[j] = '\0';
	printf("\nString invertida: %s\n", inverso);


    return 0;
}
