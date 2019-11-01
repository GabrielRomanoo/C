//3. Escreva um programa que dada uma string, remove todos os espaços em branco dessa
//string e depois a imprime no vídeo.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int i=0, j=0, k=0, tamanho, cont=0;
    char str[100];
    char str2[100];

    printf("Informe a string: ");
    scanf("%99[^\n]", str);
   //gets(str);

    tamanho = strlen(str);

    //printf("%d", tamanho);

   /* for(i=0;str[i]!='\0';i++){
        if(isspace(str[i])){
            cont++;
        }
    }

    */

   //str2[tamanho] = '\0';
   for(i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
           //for(j=i; j < tamanho - 1; j++){
        str2[j] = str[i];
        //pode ser str[j] = str[i]
           //}
           j++;

        //else{

        //}


        }

    }

    printf ("%d %d", j, i);

    str2[j] = '\0';

    //perguntar pro professor: pq quando bota i no j acima, da certo?

    /*cont = strlen(str2);
    str2[cont] = '\0';

    */

    //tamanho = tamanho - cont;

    //str2[tamanho] = '\0';

    puts(str2);



    return 0;
}
