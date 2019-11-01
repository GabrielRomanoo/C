//26. Um comerciante calcula o valor de venda, tendo em vista a tabela a seguir:
//Valor da Compra Valor da Venda
//Valor < R$ 10,00 Lucro de 70%
//R$ 10,00 ≤ Valor < R$ 30,00 Lucro de 50%
//R$ 30,00 ≤ Valor < R$ 50,00 Lucro de 40%
//Valor ≥ R$ 50,00 Lucro de 30%
//Criar um programa em C que possa entrar com o valor da compra e imprimir o valor da
//venda.

#include <stdio.h>

int main()

{
    float valor_venda, valor_compra;
    int valor;

    printf("Informe o valor da compra\n");
    scanf("%d", &valor_compra);

    if (valor_compra < 10)

        valor = 1;

        else

            if (valor_compra < 30)

                valor = 2;

                else

                    if (valor_compra < 50)

                        valor = 3;



    switch (valor) {

    case 1:

        valor_venda = valor_compra + (0.7 * valor_compra);

        printf("O valor da venda sera de: R$%f \n", valor_venda);

        break;

    case 2:

        valor_venda = valor_compra + (0.5 * valor_compra);

        printf("O valor da venda sera de: R$%f \n", valor_venda);

        break;

    case 3:

        valor_venda = valor_compra + (0.4 * valor_compra);

        printf("O valor da venda sera de: R$%f \n", valor_venda);

        break;

    default:

        valor_venda = valor_compra + (0.3 * valor_compra);

        printf("O valor da venda sera de: R$%f \n", valor_venda);

        break;


    }


}

