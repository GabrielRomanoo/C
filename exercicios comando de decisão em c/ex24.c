//24. Escreva um programa em C que leia o raio (r) de uma circunferência e, de acordo com a
//escolha feita pelo usuário, exibe seu perímetro (2πr) ou sua área (πr
//2
//). Exiba uma
//mensagem se o valor do raio não estiver entre 0.1 e 100.


#include <stdio.h>
#include <math.h>

int main()

{

    float raio, p, a;
    char escolha;

    printf("Informe o raio da circunferencia \n");
    scanf("%f", &raio);

    if ((raio < 0.1) || (raio > 100)){

        printf("Erro!");

        return 0;
    }

    printf("Voce deseja calcular area ou perimero? Digite a ou p \n");
    scanf(" %c", &escolha);


    switch (escolha) {

        case 'a':

            a = M_PI * pow(raio, 2);

            printf("A area foi de: %f \n", a);


        case 'p':

            p = 2 * M_PI * raio;

            printf("O perimetro foi de: %f \n", p);

    }

    return 0;
}
