//4. Desenvolva um programa em C para imprimir os múltiplos de 5 no intervalo de 1 a 100
#include <stdio.h>

int main() {

int i;

printf("O multiplos de 5 no intervalo de 1 a 100 sao:");

for (i=1 ; i<101; i++) {

   if(i % 5 == 0) {

    printf("%d \n", i);
   }

}

return 0;
}
