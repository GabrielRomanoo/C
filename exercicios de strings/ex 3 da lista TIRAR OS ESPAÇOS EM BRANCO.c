//3. Escreva um programa que dada uma string, remove todos os espaços em branco dessa
//string e depois a imprime no vídeo.

#include <stdio.h>

int main() {

    int i=0, j=0, k=0, tamanho, cont=0;
    char str[100];
    char str2[100];

    printf("Informe a string: ");
    scanf("%99[^\n]", str);

    for(i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){

        str2[j] = str[i];
        //pode ser str[j] = str[i]

           j++;
        }
    }

    str2[j] = '\0';

    //perguntar pro professor: pq quando bota i no j acima, da certo?

    puts(str2);



    return 0;
}
