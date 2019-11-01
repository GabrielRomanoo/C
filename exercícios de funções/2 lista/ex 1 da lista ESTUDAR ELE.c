/*
1. Para cada uma das sentenças seguintes escreva uma instrução que realize a tarefa
indicada. Admita que as variáveis do tipo float, numero1 e numero2, foram declaradas e
numero1 foi inicializada com o valor 7.3.
a) Declare a variável fptr como ponteiro para uma variável do tipo float;
b) Atribua o endereço da variável numero1 ao ponteiro fptr;
c) Imprima o valor da variável apontada por fptr usando o ponteiro;
d) Atribua o valor da variável apontada por fptr à variável numero2;
e) Imprima o valor de numero2;
f) Imprima o endereço de numero1;
g) Imprima o endereço armazenado em fptr.
*/


#include <stdio.h>



int main() {

    float numero1 = 7.3 , numero2; //enunciado

    float * fptr; // a) Declare a variável fptr como ponteiro para uma variável do tipo float;

    * fptr = &numero1; // b) Atribua o endereço da variável numero1 ao ponteiro fptr;

    printf("o valor da variável apontada por fptr usando o ponteiro %.2f", *fptr); //c) Imprima o valor da variável apontada por fptr usando o ponteiro;

    numero2 = * fptr; //d) Atribua o valor da variável apontada por fptr à variável numero2; //fptr é só referencia ao poteiro(endereço), ja *fptr é referencia ao conteudo do endereco de memoria do ponteiro

    printf("\n%f", numero2); // e) Imprima o valor de numero2;

    printf("\n%p\n", &numero1);// f) Imprima o endereço de numero1;

    printf("%p\n", fptr); //g) Imprima o endereço armazenado em fptr.




    return 0;

}
