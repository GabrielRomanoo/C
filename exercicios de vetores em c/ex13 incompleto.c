/*
13. Dada uma sequência de n números inteiros, determinar qual é a maior subsequência
crescente nesta sequência. Por exemplo, seja n = 8, a sequência 5, 7, -1, 0 , 3, 6, 6, 4, então
a maior sequência crescente é -1, 0, 3, 6.
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
