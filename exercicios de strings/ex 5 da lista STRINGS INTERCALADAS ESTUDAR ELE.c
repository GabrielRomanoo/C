/*5. Escreva um programa que dadas duas strings (A e B), construa e exiba uma terceira string
(C) formada pelos caracteres de A e B intercalados. Por exemplo: A = “Quarta” e B =
“Segunda”, a resposta deve ser C = “QSueagrutnada”.*/

#include <stdio.h>
#include <string.h>

int main() {

    char str[100], str2[100], str3[200];
    int i=0, j=0, k=0, x=0;

    printf("Informe a primeira string: ");
    scanf("%99[^\n]", str);

    printf("\nInforme a segunda string: ");

    // scanf("%*c"); //limpa o buffer, se nao fizer isso, ou não deixar um espaço abaixo (" %99[^\n]") ele nao limpa o buffer e da erro.

    scanf(" %99[^\n]", str2);

    for( i=0 ; i != (strlen(str) + strlen(str2))  ; i++ ){

        if(str[j] != '\0'){
            str3[x] = str[j];
            j++;
            x++;
        }

        if(str2[k] != '\0'){
            str3[x] = str2[k];
            k++;
            x++;
            //i++ não precisa porque ja vai rodar no laço do for logo em seguida
        }

    }

    str3[i] = '\0';

    printf("\n");

    printf("Strings intercaladas: %s", &str3);



    return 0;
}
