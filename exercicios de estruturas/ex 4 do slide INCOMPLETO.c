/*
2)Considere as declarações a seguir para
representar o cadastro de alunos de uma
disciplina e implemente uma função que
imprima o número de matrícula, o nome, a
turma e a média de todos os alunos aprovados
na disciplina.
typedef struct { 
   char nome[60];
   int matricula;
   char turma;
   float provas[3];
} aluno;
Considere que o critério de
aprovação é que a média
aritmética das 3 provas seja
maior ou igual a 7.
A função deve receber como
parâmetros o número de alunos
da turma e um vetor com os
dados dos alunos.
*/

#include <stdio.h>

typedef struct {
    char nome[60];
    int matricula;
    char turma;
    float provas[3];
} aluno;

void aprovados(int, aluno[]);

int main()
{
    int n, i, j;

    printf("Informe a quantidade de alunos a serem cadastrados: ");
    scanf(" %d", &n);
    printf("\n");

    aluno dados[n];

    puts("==================================================");

    for (i = 0; i < n; i++) {

        j = 0;

        printf("\nInforme o nome do %d aluno: ", i + 1);
        scanf(" %59[^\n]", dados[i].nome);

        printf("\nInforme a matricula do %d aluno: ", i + 1);
        scanf(" %d", &dados[i].matricula);

        printf("\nInforme a turma do %d aluno: ", i + 1);
        scanf(" %c", &dados[i].turma);

        printf("\nInforme a nota da %d prova do %d aluno: ", j + 1, i + 1);
        scanf(" %f", &dados[i].provas[j]);

        j++;

        printf("\nInforme a nota da %d prova do %d aluno: ", j + 1, i + 1);
        scanf(" %f", &dados[i].provas[j]);

        j++;

        printf("\nInforme a nota da %d prova do %d aluno: ", j + 1, i + 1);
        scanf(" %f", &dados[i].provas[j]);

        printf("\n");

        puts("==================================================");

    }

    aprovados(n,dados);

    return 0;
}


void aprovados(int n, aluno dados[]){

    int i, j;
    float media;

    for (i = 0; i < n; i++) {

        media = 0;

        for (j = 0; j < 3; j++) {

            media = media + dados[i].provas[j];
        }

        media = media / 3.0;

        if (media >= 7.0) {

        printf("\nNome do %d aluno: %s", i + 1, dados[i].nome);

        printf("\nMatricula do %d aluno: %d", i + 1, dados[i].matricula);

        printf("\nTurma do %d aluno: %c", i + 1, dados[i].turma);

        printf("\nMedia do %d aluno: %.2f", i + 1, media);

        }
        printf("\n");

        puts("==================================================");
    }

}
