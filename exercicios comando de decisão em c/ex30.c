//30. O custo ao consumidor de um carro novo � a soma do custo de f�brica com a
//porcentagem do distribuidor e com os impostos, ambos aplicados ao custo de f�brica.
//Sabe-se que as porcentagens s�o as mesmas que est�o na tabela a seguir. Fa�a um
//programa em C que receba o custo de f�brica de um carro e mostre o custo ao
//consumidor.
//Custo de f�brica % do distribuidor % dos impostos
//At� R$ 12.000,00 5 Isento
//Entre R$ 12.000,00 e R$ 25.000,00    10 15
//Acima de R$ 25.000,00                15 20

#include <stdio.h>

int main()

{

    float custo_fabrica, custo_novo;

    printf("informe o custo de fabrica\n");
    scanf("%f", &custo_fabrica);

    switch (custo_fabrica) {

        case custo_fabrica < 12000:

            custo_novo = custo_fabrica + (custo_fabrica * 0.05);

            printf("o custo ao consumidor sera de: R$%f \n", custo_novo);

            break;


        case custo_fabrica < 25000:

            custo_novo = custo_fabrica + (custo_fabrica * 0.1) + (custo_fabrica * 0.15);

            printf("o custo ao consumidor sera de: R$%f \n", custo_novo);

            break;

        default:

            custo_novo = custo_fabrica + (custo_fabrica * 0.15) + (custo_fabrica * 0.2);

            printf("o custo ao consumidor sera de: R$%f \n", custo_novo);

            break;
    }



    return 0;
}
