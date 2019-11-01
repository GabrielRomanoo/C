/*
3. Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os
seguintes campos: 
◦ marca: string de tamanho 15 
◦ ano: inteiro 
◦ cor: string de tamanho 10 
◦ preço: real
a) Escrever a definição da estrutura carro. 
b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20.
Crie um menu para: 
c) Cadastrar um carro no vetor vetcarros (verificando se há espaço disponível); 
d) Listar todos os carros com preço menor ou igual a um valor fornecido pelo usuário;
e) Listar todos os carros de uma determinada marca fornecida pelo usuário.
*/

#include <stdio.h>
#include <string.h>

struct carro {

    char marca[15];
    int ano;
    char cor[10];
    float preco;

};

int main()
{

    int i, j, k, l, contador=0;
    float cond;
    char op[15];

    struct carro vetcarros[20];

    while (i != 4) {

        printf("1- Cadastra um carro no vetor vetcarros;\n2- Listar todos os carros;\n3- Listar todos os carros de uma determinada marca;\n4- Sair;\n\n");
        scanf("%d", &i);
        printf("\n");

        if (i == 1 && contador <= 19) {

            printf("Informe a marca do carro: ");
            scanf(" %14[^\n]", vetcarros[contador].marca);
            printf("\nInforme o ano do carro: ");
            scanf(" %d", &vetcarros[contador].ano);
            printf("\nInforme a cor do carro: ");
            scanf(" %9[^\n]", vetcarros[contador].cor);
            printf("\nInforme o preco do carro: ");
            scanf(" %f", &vetcarros[contador].preco);
            printf("\n");

            contador++;

        }
        else {

            if (i == 2) {

                printf("Informe o preco desejado: ");
                scanf(" %f", &cond);

                for (j = 0; j < contador; j++) {

                    if (vetcarros[j].preco <= cond) {

                        printf("\nMarca: %-15s;         Ano: %d;    Cor: %-10s;    Preco: %.2f", vetcarros[j].marca, vetcarros[j].ano, vetcarros[j].cor, vetcarros[j].preco);
                        printf("\n\n");
                    }

                }




            }
            else {

                if (i == 3) {

                    printf("\nInforme a marca desejada: ");
                    scanf(" %14[^\n]", op);

                    for (j = 0; j < contador; j++) {

                        if (strcmp(op,vetcarros[j].marca) == 0) {

                            printf("\nMarca : %-15s;         Ano: %d;    Cor: %-10s;     Preco: %.2f", vetcarros[j].marca, vetcarros[j].ano, vetcarros[j].cor, vetcarros[j].preco);
                            printf("\n\n");

                        }
                    }




                }
                else {

                    if (i == 4) {

                        return 1;
                    }

                    if (i != 4) {

                        printf("\nOpcao Errada!\n");
                    }

                }

            }
        }


    }

    return 0;
}
