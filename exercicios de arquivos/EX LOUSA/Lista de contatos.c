/*5. Escreva uma aplicação em C que crie um cadastro contendo o nome, telefone e e-mail de seus
amigos. Essas informações são representadas pela estrutura amigo mostrada a seguir. Todo
amigo cadastrado recebe um id sequencial e gerado automaticamente pelo sistema. A aplicação
deve possuir opções para cadastrar um novo amigo, listar todos os amigos cadastrados, alterar o
telefone ou e-mail de um amigo dado seu id ou nome e consultar um amigo dado seu id ou
nome.
typedef struct {
 int id; // identificador do amigo
 char nome[40];
 char fone[14];
 char email[30];
} amigo;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOME_ARQ "contatos.dat"

typedef struct {
 int id;
 char nome[40];
 long int fone;
 char email[30];
} amigo;

void cadastrar(void);
void listar(void);
void alterar(void);

int main()
{
    int n, id;

    do {
        printf("1 - Cadastrar um contato;\n2 - Listar todos os contatos;\n3 - Alterar algo de um contato especifico;\n0 - Sair.\nOpcao: ");
        scanf("%d", &n);
        switch(n){
            case 1:
                cadastrar();
                break;
            case 2:
                listar();
                break;
            case 3:
                alterar();
                break;
            case 0:
                break;
            default:
                puts("Informe uma opcao valida.\n");
        }
    } while (n != 0);
    return 0;
}

void cadastrar()
{
    FILE * arq;
    amigo a;

    if (!(arq = fopen(NOME_ARQ, "ab"))) {
        fprintf(stderr, "Impossivel de executar o arquivo.\n");
        exit(1);
    }
    fseek(arq, 0, SEEK_END);
    a.id = ftell(arq) / sizeof(amigo) + 1;
    printf("\n\nInforme o ID do contato: %d\n", a.id);
    printf("Informe o nome do contato: ");
    scanf(" %[^\n]", a.nome);
    printf("Informe o numero do contato: ");
    scanf("%ld", &a.fone);
    printf("Informe o email do contato: ");
    scanf(" %[^\n]", a.email);
    fwrite(&a, sizeof(amigo), 1, arq);
    puts("\n");
    fclose(arq);
}

void listar()
{
    FILE * arq;
    amigo a;

    if (!(arq = fopen(NOME_ARQ, "rb"))) {
        fprintf(stderr, "Impossivel de executar o arquivo.\n");
        exit(1);
    }
    while (fread(&a, sizeof(amigo), 1, arq) > 0) {
        printf("\n\nID do contato: %d", a.id);
        printf("\nNome do contato: %s", a.nome);
        printf("\nTelefone do contato: %ld", a.fone);
        printf("\nEmail do contato: %s\n\n", a.email);
    }
    fclose(arq);
}

void alterar()
{
    FILE * arq;
    amigo a;
    int id, op, i, n;
    char nome[100];

    if (!(arq = fopen(NOME_ARQ, "r+b"))) {
        fprintf(stderr, "Impossivel de executar o arquivo.\n");
        exit(1);
    }
    printf("\n\nInforme a forma que irá querer alterar o contato:\n");
    printf("1 - ID;\n2 - Nome.\nOpcao: ");
    scanf("%d", &op);
    switch(op) {
        case 1:
            printf("\nInforme o ID do contato: ");
            scanf("%d", &id);
            fseek(arq, (id - 1) * sizeof(amigo), SEEK_SET);
            fread(&a, sizeof(amigo), 1, arq);
            break;
        case 2:
            printf("\nInforme o nome do contato: ");
            scanf(" %[^\n]", nome);
            fseek(arq, 0, SEEK_END);
            n = ftell(arq) / sizeof(amigo);
            rewind(arq);
            for (i = 0; i < n; i++) {
                fread(&a, sizeof(amigo), 1, arq);
                if (strcasecmp(a.nome, nome) == 0) {
                    break;
                }
            }
            break;
        default:
            puts("Informe uma opcao valida.\n");
    }
    printf("\n1 - Alterar telefone;\n2 - Alterar email.\nOpcao: ");
    scanf("%d", &op);
    fseek(arq, -sizeof(amigo), SEEK_CUR);
    if (op == 1) {
        printf("\nTelefone atual: %ld\n", a.fone);
        printf("\nInforme como sera o novo telefone: ");
        scanf("%ld", &a.fone);
        fwrite(&a, sizeof(amigo), 1, arq);
    }
    else if (op == 2) {
        printf("\nEmail atual: %s\n", a.email);
        printf("\nInforme o novo email: ");
        scanf(" %[^\n]", a.email);
        fwrite(&a, sizeof(amigo), 1, arq);
    }
    else {
        puts("\nOpcao inexistente.\n");
    }
    puts("\n");
    fclose(arq);
}
