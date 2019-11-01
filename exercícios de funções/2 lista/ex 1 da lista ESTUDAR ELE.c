/*
1. Para cada uma das senten�as seguintes escreva uma instru��o que realize a tarefa
indicada. Admita que as vari�veis do tipo float, numero1 e numero2, foram declaradas e
numero1 foi inicializada com o valor 7.3.
a) Declare a vari�vel fptr como ponteiro para uma vari�vel do tipo float;
b) Atribua o endere�o da vari�vel numero1 ao ponteiro fptr;
c) Imprima o valor da vari�vel apontada por fptr usando o ponteiro;
d) Atribua o valor da vari�vel apontada por fptr � vari�vel numero2;
e) Imprima o valor de numero2;
f) Imprima o endere�o de numero1;
g) Imprima o endere�o armazenado em fptr.
*/


#include <stdio.h>



int main() {

    float numero1 = 7.3 , numero2; //enunciado

    float * fptr; // a) Declare a vari�vel fptr como ponteiro para uma vari�vel do tipo float;

    * fptr = &numero1; // b) Atribua o endere�o da vari�vel numero1 ao ponteiro fptr;

    printf("o valor da vari�vel apontada por fptr usando o ponteiro %.2f", *fptr); //c) Imprima o valor da vari�vel apontada por fptr usando o ponteiro;

    numero2 = * fptr; //d) Atribua o valor da vari�vel apontada por fptr � vari�vel numero2; //fptr � s� referencia ao poteiro(endere�o), ja *fptr � referencia ao conteudo do endereco de memoria do ponteiro

    printf("\n%f", numero2); // e) Imprima o valor de numero2;

    printf("\n%p\n", &numero1);// f) Imprima o endere�o de numero1;

    printf("%p\n", fptr); //g) Imprima o endere�o armazenado em fptr.




    return 0;

}
