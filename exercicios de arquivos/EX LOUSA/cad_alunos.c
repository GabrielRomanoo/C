/*
Cadastro de alunos em um arquivo do tipo texto

Altere o programa ca_alunos.c acrescentando uma consulta pela matricula do aluno.
O usuario deve informar a matricula e se houver um aluno com essa matricula, mostrar o nome, caso contrário,
exibir uma mensagem.


*/

#include <stdio.h>
#define NOMEARQ "alunos.txt"

void cadastra_aluno(void);
void lista_alunos(void);
void consulta_aluno(void);

int main()
{
	int op;
	do {
		printf("\n\n\tCADASTRO DE ALUNOS\n");
		printf("<1> Cadastrar um novo aluno\n");
		printf("<2> Listar os alunos cadastrados\n");
		printf("<3> Consulta da matricula");
		printf("<0> Sair do programa\n");
		printf("Opção: ");
		scanf("%d", &op);
		switch (op) {
			case 1: cadastra_aluno();
				    break;
			case 2: lista_alunos();
					break;
            case 3: consulta_aluno();
                    break;
			case 0: break;
			default: printf("\nErro: opção inválida!\n");
		}
	} while (op != 0);
	return 0;
}

void cadastra_aluno()
{
	FILE * arq;
	int mat;
	char nome[41];
	printf("\n\nNovo Aluno\n");
	printf("Matrícula: ");
	scanf("%d", &mat);
	printf("Nome: ");
	scanf(" %40[^\n]", nome);
	if ((arq = fopen(NOMEARQ, "a")) == NULL) {
		fprintf(stderr, "\nErro: não foi possível abrir o arquivo %s!\n", NOMEARQ);
		return;
	}
	fprintf(arq, "%d %s\n", mat, nome);
	fclose(arq);
	printf("\nAluno cadastrado com sucesso!\n");
}

void lista_alunos()
{
	FILE * arq;
	int mat;
	char nome[41];
	if ((arq = fopen(NOMEARQ, "r")) == NULL) {
		fprintf(stderr, "\nErro: não foi possível abrir o arquivo %s!\n", NOMEARQ);
		return;
	}
	printf("\n\n\t\tAlunos cadastrados\n");
	printf("----------------------------------------\n");
	printf("Matrícula Nome\n");
	printf("----------------------------------------\n");
	while (fscanf(arq, "%d %[^\n]", &mat, nome) > 0) {
		printf("%09d %s\n", mat, nome);
	}
	printf("----------------------------------------\n");
	fclose(arq);
}

void consulta_aluno()
{
    FILE * arq;

    if ((arq = fopen(NOMEARQ, "r")) == NULL) {
		fprintf(stderr, "\nErro: não foi possível abrir o arquivo %s!\n", NOMEARQ);
		exit(1);
	}

	int matri, compt;

	char str[100];

	printf("\nInforme a matricula para a busca: ");
	scanf(" %d", &matri);


	while ( (fscanf(arq, "%d %[^\n]", &compt, str)) > 0) {

//	printf("ta aqui");

        if (matri == compt){

            printf("Nome: %s", str);


            //puts(str);

        }else{

            printf("nao existe");

        }
	}

    fclose(arq);
}
