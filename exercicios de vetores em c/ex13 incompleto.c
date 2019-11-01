/*
13. Dada uma sequ�ncia de n n�meros inteiros, determinar qual � a maior subsequ�ncia
crescente nesta sequ�ncia. Por exemplo, seja n = 8, a sequ�ncia 5, 7, -1, 0 , 3, 6, 6, 4, ent�o
a maior sequ�ncia crescente � -1, 0, 3, 6.
*/

#include <stdio.h>

int main() {

    int i, n, c, f, s = 0, e = 0;

    printf("Diga quantos numeros tem na sequencia \n");
    scanf("%d", &n);

    int vet[n];

    for(i=0;i<n;i++){
        scanf("%d", &vet[i]);
    }

    c = 0;
    f = 1;

 /*   for(i=0;i<n;i++){
      if(vet[c] < vet[f]){
        s = c;
        e = f;
      }
      c+=1;
      f+=1;
    }
*/
    for(i=0;i<n;i++){
      if(vet[i] < vet[i+1]){
        if(vet[s] < vet[e])
            e = i + 1;
      } else {
            s = i;
            e =  i + 1;
      }

     c += 1;
     f += 1;
    }


    for(i=s;i<e;i++){
        printf("%d \n", vet[i]);
    }




    return 0;
}
