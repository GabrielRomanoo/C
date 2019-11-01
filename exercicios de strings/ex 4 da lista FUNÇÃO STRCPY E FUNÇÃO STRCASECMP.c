/*4. Escreva um programa que receba uma string do teclado e informe se ela é palíndromo ou
não. Uma string é palíndromo quando pode ser lida tanto de trás para frente quanto de
frente para trás e possui exatamente a mesma sequência de caracteres. Por exemplo:
“ASA”, “SUBI NO ONIBUS”. Desconsidere os espaços.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[100], str2[100];
    int i=0, j=0, k=0;

    printf("Informe a String: ");
    scanf("%99[^\n]", str);

    //BLOCO PARA TIRAR OS EPAÇOS EM BRANCO:
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j] = str[i];
            j++;
        }
    }


    str[j] = '\0'; //ADICIONA O '\0' PARA INFORMAR QUAL É O FINAL DA STRING

    strcpy(str2, str); //FUNÇÃO PARA ATRIBUIR UMA STRING A OUTRA (MESMA COISA QUE FAZER STR2 = STR)

    //strrev(str2); //INVERTE A STRING NELA MESMA

    //PODERIA TER INVERTIDO DESSA FORMA:

    for (i = strlen(str2) - 1, j=0; i >= 0; i--, j++) {
        //i = numero de caracteres - 1 (ou seja: para pegar o numero do índice.)
        str2[j] = str[i];

	}

   if(strcasecmp(str, str2) == 0){
        //a diferença de strcasecmp é que o 'case' diz que as letras maiusculas e minusculas sao iguais.
        //a função strcmpi faz a mesma coisa, porem, apenas no windows
        printf("eh palindromo\n");
    }else{
        printf("nao eh palindromo \n");
    }

    return 0;
}
