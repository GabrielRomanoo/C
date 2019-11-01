/*/
3)Escreva um programa que receba um nome
completo e apresente apenas o último
sobrenome e o primeiro nome separados por
uma vírgula. Por exemplo:
 Ciro Cirne Trindade
 Trindade, Ciro
*/
#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int i;

    printf("Informe o nome: ");
    scanf(" %99[^\n]", str);

   // puts(str);


   for( i = strlen(str) - 1 ; str[i] != '\0' ; i--){
    // o i vai pegar o numero de caracteres e diminuir 1, para poder pegar o ultimo indice
        if(str[i] == ' '){
            break;
            //vai encerrar o laço do for quando achar o espaço em branco, e assim guardar o indice
            // do espaço em branco na variavel i.
        }
        if (i < 0) { // a string não tem espaço em branco
		puts("Digite um nome completo, com pelo menos um espaço em branco!");
		return 1; //irá encerrar o programa
	}

   }

   //IMPRIMIR O ULTIMO SOBRENOME:

   printf("%s, ", &str[i+1]);
   //acima está "i+1" pois a posição i é do espaço em branco, e a posição "i + 1" é da primeira letra
   //do ultimo nome. Assim, o printf irá imprimir tudo que estiver na sequencia da posição "i+1", ou
   //seja, irá imprimir todo o ultimo nome.

   //IMPRIMIR O PRIMEIRO NOME:
   for( i=0 ; str[i] != '\0' ; i++ ){
    if(str[i] != ' '){
        putchar(str[i]); //Imprime caractere por caractere.
    }else{
        break;
    }
   }

   //OUTRO JEITO (FEITO PELO PROFESSOR)
   /*
   // procura o último espaço em branco da string
	for (i = strlen(nome) - 1; i >= 0 && nome[i] != ' '; i--);

	if (i < 0) { // a string não tem espaço em branco
		puts("Digite um nome completo, com pelo menos um espaço em branco!");
	}
	else {
		// imprime o último sobrenome
		printf("%s, ", &nome[i + 1]);

		// imprime o primeiro nome
		for (i = 0; nome[i] != ' '; i++) {
			putchar(nome[i]);
		}
		printf("\n");
		*/
        /*
		char inverso[strlen(nome) + 2];
		int j;
		strcpy(inverso, &nome[i + 1]);
		strcat(inverso, ", ");
		for (i = 0, j = strlen(inverso); nome[i] != ' '; i++, j++) {
			inverso[j] = nome[i];
		}
		inverso[j] = '\0';
		puts(inverso);
		*/

    return 0;
}
