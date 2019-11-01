/*
15. Dada uma sequência de n números reais, determinar os números que compõem a
sequência e o número de vezes que cada um deles ocorre na mesma. Por exemplo, n = 8 e
a sequência -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1.7. A saída seria:
-1.7 ocorre 3 vezes
3.0 ocorre 1 vez
0.0 ocorre 2 vezes
1.5 ocorre 1 vez
2.3 ocorre 1 vez
*/

#include <stdio.h>

int main () {

    int n, i, j, contador, x=0;

    printf("Informe quantos numeros tem a sequencia: \n");
    scanf("%d", &n);

    int vetor[n], ocorrencias[n];

    for(i=0;i<n;i++){
       printf("%d:", i+1);
       scanf(" %d", &vetor[i]);
    }

    for(i=0;i<n;i++){
        ocorrencias[i]=0;
    }

    for(i=0;i<n;i++){
        //ocorrencias[i] = 0; //preencher o vetor com zeros //substitui o for anterior
        for(j=0;j<n;j++){
            if(vetor[i]==vetor[j]){
                ocorrencias[i]++;
            }
        }
    }

    printf("Ocorrencias de cada numero: \n");

    for(i=0;i<n;i++){
        for(j=i-1;j>=0;j--){            //Esse laço for irá fazer uma varredura, de tras pra frente,
            if(vetor[j] == vetor[i]){   //verificando se existe um numero repetido. Se tiver, ele sai
                break;                  //do laço com o j positivo e, por consequencia, nao entra no
            }                           //if seguinte. Para entender melhor, fazer o teste de mesa.
        }
        if(j<0){
            printf("O numero %d aparece %d vez", vetor[i], ocorrencias[i]);

            if(ocorrencias[i] > 0){
                printf("es");
            }

        printf("\n");

        }

    }



    return 0;
}


