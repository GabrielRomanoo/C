/*7. Escreva um programa para ler 10 nomes em um vetor de strings A. Depois formar um
vetor de strings B de tal forma que os elementos (nomes) estejam em ordem inversa a do
vetor A.
*/

#include <stdio.h>
#include <string.h>

int main() {

    char strA[10][50], strB[10][50];
    int i=0, j=0, k=0, x=0;

    //LER O VETOR DE STRINGS

    for( i=0 ; i <= 9 ; i++){
        printf("Informe a %d string: ", i + 1);
        //fgets(strA[i],80,stdin);
        scanf(" %49[^\n]", strA[i]);
        printf("\n");
    }

   // printf(" %s", &strA[0][3]);

   /*
   for(i=0; i<= 9;i++){
        printf(" %s \n", strA[i]);
   }
   */

    //INVERTER AS STRINGS EM B

    //INVERTENDO AS PROPRIAS STRINGS:


    /*
    for( i = 0 , x=0 ; i <= 9, x <= strlen(strA[i])- 1 ; i++, x++){

       for(j = strlen(strA[i]) - 1, k=0 ; j >= 0 , k <= strlen(strA[i]) - 1 ; j--, k++){

        //strB[x][j+1] = '\0';

        strB[x][k] = strA[x][j];

       }

      strB[i][k] = '\0';

    }

  //  scanf(" %*c");



    printf("String B em ordem inversa da string A: \n");

    for( i=0 ; i <= 9 ; i++){

        printf(" %s ", &strB[i]);
        printf("\n");
    }


  //  puts(strB[0]);

  */

  //INVERTENDO AS STRINGS APENAS DE POSIÇÃO


  for( i = 0, j = 9; j >= 0 ; i++, j--){

        strcpy(strB[j], strA[i]);

  }

  printf("String B em ordem inversa da string A: \n");

    for( i=0 ; i <= 9 ; i++){

        printf(" %s ", &strB[i]);
        printf("\n");
    }

    return 0;
}
