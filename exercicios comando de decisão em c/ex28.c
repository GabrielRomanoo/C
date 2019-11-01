//28. Criar um programa em C que a partir da idade e peso do paciente calcule a dosagem de
//determinado medicamento e imprima a receita informando quantas gotas do
//medicamento o paciente deve tomar por dose. Considere que o medicamento em questão
//possui 500 mg por ml, e que cada ml corresponde a 20 gotas.
// Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de
//60 Kg devem tomar 1000 mg; com peso abaixo de 60 Kg devem tomar 875 mg;
// Para crianças e adolescentes abaixo de 12 anos a dosagem é calculada pelo peso
//corpóreo conforme a tabela a seguir:
//Peso Dosagem
//5 Kg a 9 Kg 125 mg
//9.1 Kg a 16 Kg 250 mg
//16.1 Kg a 24 Kg 375 mg
//24.1 Kg a 30 Kg 500 mg
//Acima de 30 Kg 750 mg

#include <stdio.h>

int main()

{
    int idade, gotas;
    double peso;

    printf("informe seu peso\n");
    scanf("%lf", &peso);

    printf("informe sua idade\n");
    scanf("%d", &idade);

    if (idade >= 12 && peso >= 60.0) {

    gotas = 40;

    } else {

       if (idade >=12 && peso < 60.0)  {

       gotas = 35;

       }  else {

    switch (peso) {

    case (peso > 5.0 && peso <= 9.0) :

        gotas = 5;

        printf("gotas: %d",gotas);

        break;

    case peso <= 16.0 :

        gotas = 10;

        printf("gotas: %d",gotas);

        break;

    case peso <= 24.0:

        gotas = 15;

        printf("gotas: %d",gotas);

        break;

    case peso <= 30.0:

        gotas = 20;

        printf("gotas: %d",gotas);

        break;

    defaut:

        gotas = 25;

        printf("gotas: %d",gotas);

        break;


    }

    }

    }

 return 0;
 }




