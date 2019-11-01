/*
4. A CETESP lhe contratou para implementar uma aplicação em C para manter em um arquivo
chamado   “chuvas.dat”,   o   índice   pluviométrico   diário   na   região   da   Grande   São   Paulo.   O
programa deve armazenar estruturas do tipo chuva, mostrada abaixo, neste arquivo. Além de
permitir esse cadastro, seu programa deve possuir uma opção que gere um arquivo do tipo texto,
chamado “dias_chuvosos.txt”, contendo, em cada linha, a data (no formato dd/mm/aaaa) e o
índice pluviométrico, separados por um espaço em branco, de todos os dias de um determinado
ano em que esse índice superou os 60 mm. 

typedef struct {
 int dia;
 int mes;
 int ano;
} data;
typedef struct {
 data dt;
 int ind_pluviometrico;
} chuva;

*/

#include <stdio.h>

typedef struct {
 int dia;
 int mes;
 int ano;
} data;

typedef struct {
 data dt;
 int ind_pluviometrico;
} chuva;

void cadastrar(chuva);

void gerar(chuva);

int main()
{
    chuva dados;

    int menu = 0;

    while (menu != 3) {

        printf("\n1-Cadastro \n2-Gerar \n3- Sair\n\n");
        scanf(" %d", &menu);

        switch(menu) {

            case 1:

                cadastrar(dados);
                break;

            case 2:

                gerar(dados);
                break;

            case 3:

                break;

            default:

                printf("\nOpcao Invalida!\n");
                break;

        }
    }


    return 0;
}

void cadastrar(chuva dados1)
{

    FILE *arquivo;

    if ((arquivo = fopen("chuvas.dat", "ab")) == NULL) {

        printf("\nErro de abertura!\n");
    }

    printf("\nInforme o indice pluviometrico: ");
    scanf(" %d", &dados1.ind_pluviometrico);

    printf("\nInforme o dia: ");
    scanf(" %d", &dados1.dt.dia);

    printf("\nInforme o mes: ");
    scanf(" %d", &dados1.dt.mes);

    printf("\nInforme o ano: ");
    scanf(" %d", &dados1.dt.ano);

    fwrite(&dados1, sizeof(chuva), 1, arquivo); //precisa de & pq n é vetor

    fclose(arquivo);

}

void gerar(chuva dados2)
{
    FILE *arquivo;

    if ( (arquivo = fopen("dias_chuvosos.txt", "w")) == NULL) {

        printf("\nErro de abertura!\n");
    }

    FILE *arquivo2;

    if ( (arquivo2 = fopen("chuvas.dat", "rb")) == NULL) {

        printf("\nErro de abertura!\n");
    }

    int op;

    printf("\nOpcao: ");
    scanf(" %d", &op);

    while ((fread(&dados2, sizeof(chuva), 1, arquivo2)) > 0) {

            if (dados2.ind_pluviometrico > 60 && dados2.dt.ano == op) {

                fprintf(arquivo, "%d/",  dados2.dt.dia);
                fprintf(arquivo, "%d/",  dados2.dt.mes);
                fprintf(arquivo, "%d ",  dados2.dt.ano);
                fprintf(arquivo, "%d\n",  dados2.ind_pluviometrico);

            }
    }


    fclose(arquivo);
    fclose(arquivo2);
}



