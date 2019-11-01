/*
Trabalho.c

Programa que faz um levantamento dos preços de vários produtos em lojas diferentes
para determinar em que loja o produto está mais em conta.

Gabriel Romano Godoi Pereira (Ciência da Computação)
Jaime Mathias de Lara Bueno (Ciência da Computação)
Gustavo Marinho Gomes da Silva (Ciência da Computação)

Disciplina: Introdução à Computação - II

04/12/2018
*/

#include <stdio.h>
#include <string.h>

#define NOME_ARQP "produtos.dat"
#define NOME_ARQL "lojas.dat"
#define NOME_ARQPR "precos.dat"

typedef struct
{
    int cod;
    char descricao[51];
} tproduto;

typedef struct
{
    int cod;
    char nome[41];
    char site[81];
} tloja;

typedef struct
{
    int cod_produto;
    int cod_loja;
    float preco;
} tpreco;

void cadastrar_produto(void);
void alterar_produto(void);
void listar_produto(void);
void cadastrar_loja(void);
void listar_loja(void);
void cadastrar_preco(void);
void listar_preco(void);
void consultar_preco(void);
void insercaoString(tproduto *, int);
void insercaoString2(tloja *, int);
void insercaoInt(tpreco *, int);

int main()
{
    puts("======================================================");
    printf("\tTRABALHO DE INTRODUCAO A COMPUTACAO II\n");
    puts("======================================================");

    int menu;

    do
    {

        printf("\n\t\t\tMENU\n");
        printf("\t\t1 - Cadastrar produto\n");
        printf("\t\t2 - Alterar um produto\n");
        printf("\t\t3 - Listar os produtos\n");
        printf("\t\t4 - Cadastrar loja\n");
        printf("\t\t5 - Listar as lojas\n");
        printf("\t\t6 - Cadastrar precos\n");
        printf("\t\t7 - Listar precos\n");
        printf("\t\t8 - Consultar precos\n");
        printf("\t\t0 - Sair do programa\n");
        printf("\nDigite a sua opcao => ");
        scanf(" %d", &menu);

        switch (menu)
        {

        case 1:
            cadastrar_produto();
            break;

        case 2:
            alterar_produto();
            break;

        case 3:
            listar_produto();
            break;

        case 4:
            cadastrar_loja();
            break;

        case 5:
            listar_loja();
            break;

        case 6:
            cadastrar_preco();
            break;

        case 7:
            listar_preco();
            break;
        case 8:
            consultar_preco();
            break;
        case 0:
            break;

        default:
            printf("\nOpcao invalida!\n");
        }


    }
    while (menu != 0);

    return 0;
}

/* A função cria ou abre o arquivo "produtos.dat" em modo ab, para cadastrar os produtos. */
void cadastrar_produto()
{
    puts("\n======================================================");
    FILE *arquivo;
    tproduto p;
    char op[4];

    if ((arquivo = fopen(NOME_ARQP, "ab")) == NULL) {
        fprintf(stderr,"\nNao foi possivel abrir o arquivo produtos.dat!\n\n");
    }
    else {
        do {
            fseek(arquivo, 0, SEEK_END);
            p.cod = ftell(arquivo) / sizeof(tproduto) + 1;
            /* A variavel p.cod irá receber o proximo codigo do produto em sequencia*/
            printf("\nInforme a descricao do produto de codigo numero %d: ", p.cod);
            scanf(" %50[^\n]", p.descricao);

            fwrite(&p, sizeof(tproduto), 1, arquivo);

            printf("\nO produto foi cadastrado com sucesso!\n");

            printf("\nDeseja cadastrar outro produto (S/N)? ");
            scanf(" %3[^\n]", op);
            /* A variavel "op" é uma string, para o usario poder escrever de qualquer forma. Por exemplo, o usuário digitando "sim" ou "SIM", o laço do repetição se manterá.*/
        }
        while (op[0] == 'S' || op[0] == 's');
        /* O laço irá se repetir enquanto a string op for "s" ou "S" no indice [0], assim, permitindo o cadastro de outros produto*/
    }

    fclose(arquivo);

    puts("\n======================================================");
}

/* A função abre o arquivo "produtos.dat" em modo rb,para alterar o produto solicitado pelo usuário. */
void alterar_produto()
{
    puts("\n======================================================");
    FILE *arquivo;
    tproduto a;
    int codigo;

    printf("\nInforme o codigo do produto: ");
    scanf(" %d", &codigo);
    if ((arquivo = fopen(NOME_ARQP, "r+b")) == NULL) {
        fprintf(stderr,"\nNao foi possivel abrir o arquivo produtos.dat!\n\n");
    }
    else{
        fseek(arquivo, (codigo - 1) * sizeof(tproduto), SEEK_SET);
        fread(&a, sizeof(tproduto), 1, arquivo);
        /* Verifica se o código do produto coreesponde a um produto cadastrado*/
        if (feof(arquivo) || codigo <= 0) {
            printf("\nO arquvio produtos.dat nao possui nenhum produto com este codigo!\n\n");
        }
        /* Altera a descrição do produto e mantem o código correpondente.*/
        else {
            printf("\nDescricao atual do produto de codigo numero %d: %s", a.cod, a.descricao);
            printf("\n\nPor favor, informe a nova descricao do produto: ");
            scanf(" %50[^\n]", a.descricao);
            fseek(arquivo, -sizeof(tproduto), SEEK_CUR);
            fwrite(&a, sizeof(tproduto), 1, arquivo);
            printf("\nO produto foi alterado com sucesso!\n\n");
        }
    }
    fclose (arquivo);
    puts("\n======================================================");
}

/* A função abre o arquivo "produtos.dat" em modo rb, para listar todos os produtos com seus respectivos códigos. */
void listar_produto()
{
    puts("\n======================================================");
    tproduto l;
    int n, i;
    FILE *arquivo;

    if ((arquivo = fopen(NOME_ARQP, "rb")) == NULL) {
        fprintf(stderr,"\nNao foi possivel abrir o arquivo produtos.dat!\n\n");
    }
    else {
        printf("\n\t\tProdutos Cadastrados\n");
        printf("------------------------------------------------------\n");
        printf("      Codigo          \t\t      Descricao\n");
        printf("------------------------------------------------------\n");
        /* Verifica quantas estruturas tem no arquivo e lê todas elas*/
        fseek(arquivo, 0, SEEK_END);
        n = ftell(arquivo) / sizeof(tproduto);
        tproduto v[n];
        rewind(arquivo);
        fread(v, sizeof(tproduto), n, arquivo);
        insercaoString(v, n);

        for (i = 0; i < n; i++) {
            printf("    \t%-d \t\t\t  \t%-20.20s\n", v[i].cod, v[i].descricao);
        }
        printf("------------------------------------------------------\n");
    }
    fclose(arquivo);
    puts("\n======================================================");
}

/* A função cria ou abre o arquivo lojas.dat em modo ab, para cadastras as lojas no arquivo. */
void cadastrar_loja()
{
    puts("\n======================================================");
    FILE * arquivo;
    char op[4];
    tloja l;

    if ((arquivo = fopen(NOME_ARQL, "a+b")) == NULL) {
        fprintf(stderr,"\nNao foi possivel abrir o arquivo %s!\n\n", NOME_ARQL);
    }
    else {
        do {
            fseek(arquivo, 0, SEEK_END);
            l.cod = ftell(arquivo) / sizeof(tloja) + 1;
            /* A variavel l.cod irá receber o proximo codigo da loja em sequencia*/
            printf("\nCodigo da loja: %d", l.cod);
            printf("\nInforme o nome: ");
            scanf(" %40[^\n]", l.nome);
            printf("Informe o nome do site: ");
            scanf(" %80[^\n]", l.site);
            fwrite(&l, sizeof(tloja), 1, arquivo);
            printf("\n\nDeseja cadastrar outra loja (S/N)? ");
            scanf(" %3[^\n]", op);
            /* A variavel "op" é uma string, para o usario poder escrever de qualquer forma. Por exemplo, o usuário digitando "sim" ou "SIM", o laço do repetição se manterá.*/
        }
        while (op[0] == 'S' || op[0] == 's');
        /* O laço irá se repetir enquanto a string op for "s" ou "S" no indice [0], assim, permitindo o cadastro de outras lojas*/
    }

    fclose(arquivo);

    puts("\n======================================================");
}

/* A função abre o arquivo "lojas.dat" em modo rb, para listar todas as lojas cadastradas no arquivo. */
void listar_loja()
{
    puts("\n======================================================");
    tloja k;
    int n, i;
    FILE *arquivo;

    if ((arquivo = fopen(NOME_ARQL, "rb")) == NULL) {
        fprintf(stderr,"\nNao foi possivel abrir o arquivo %s!\n\n", NOME_ARQL);
    }
    else {
        printf("\n\t\t  Lojas Cadastradas\n");
        printf("------------------------------------------------------\n");
        printf(" Codigo\t\t   Nome   \t         Site\n");
        printf("------------------------------------------------------\n");
        /* Verifica quantas estruturas tem no arquivo e lê todas elas*/
        fseek(arquivo, 0, SEEK_END);
        n = ftell(arquivo) / sizeof(tloja);
        tloja v[n];
        rewind(arquivo);
        fread(v, sizeof(tloja), n, arquivo);
        insercaoString2(v, n);

        for (i = 0; i < n; i++) {
            printf("   %-d\t\t%-20s%-20s\n", v[i].cod, v[i].nome, v[i].site);
        }
        printf("------------------------------------------------------\n");
    }
    fclose(arquivo);
    puts("\n======================================================");
}

/* A função cria ou abre o arquivo "precos.dat" em modo ab, juntamente com os arquivos "produtos.dat" e "lojas.dat" em modo rb, para poder cadastrar os precos no arquivo "precos.dat" */
void cadastrar_preco()
{
    puts("\n======================================================");
    FILE *arq, *arq2, *arq3;
    tpreco pr;
    tloja l;
    tproduto p;
    int k = 1, i;
    char op[4];

    if ((arq = fopen(NOME_ARQL, "rb")) == NULL) {
        fprintf(stderr,"\nNao foi possivel abrir o arquivo %s!\n", NOME_ARQL);
    }
    else{
        if ((arq2 = fopen(NOME_ARQP, "rb")) == NULL) {
            fprintf(stderr,"\nNao foi possivel abrir o arquivo %s!\n", NOME_ARQP);
        }
        else {
            if ((arq3 = fopen(NOME_ARQPR, "a+b")) == NULL) {
                fprintf(stderr,"\nNao foi possivel abrir o arquivo %s!\n", NOME_ARQPR);
            }
            else {
                printf("\nInforme o codigo do produto: ");
                scanf("%d", &pr.cod_produto);
                do {
                /* Verifica se o usuario esta digitando um codigo de produto existente*/
                while (fread(&p, sizeof(tproduto), 1, arq2) > 0) {
                    if (pr.cod_produto == p.cod) {
                        k = 0;
                            break;
                        }
                    }
                    if (k == 1 && pr.cod_produto != 0) {
                        printf("\nCodigo de produto inexistente. Informe outro codigo (Digite 0 caso queria sair): ");
                        scanf("%d", &pr.cod_produto);
                        rewind(arq2);
                    }
                } while (k == 1 && pr.cod_produto != 0);
                if (pr.cod_produto != 0) {
                    do {
                        k = 1;
                        printf("\nInforme o codigo de uma loja: ");
                        scanf("%d", &pr.cod_loja);
                        rewind(arq);
                        do {
                            /* Verifica se o usuario esta digitando um codigo de loja existente*/
                            while (fread(&l, sizeof(tloja), 1, arq) > 0) {
                                if (pr.cod_loja == l.cod) {
                                    k = 0;
                                    break;
                                }
                            }
                            if (k == 1 && pr.cod_loja != 0) {
                                printf("\nCodigo de loja inexistente. Informe outro codigo (Digite 0 caso queria sair): ");
                                scanf("%d", &pr.cod_loja);
                                rewind(arq);
                            }
                        } while (k == 1 && pr.cod_loja != 0);
                        if (pr.cod_loja != 0) {
                            k = 1;
                            rewind(arq3);
                            tpreco prcopia;
                            /* Verifica se já existe preco no produto e loja dadas pelo usuario*/
                            while (fread(&prcopia, sizeof(tpreco), 1, arq3) > 0) {
                                if ((pr.cod_loja == prcopia.cod_loja) && (pr.cod_produto == prcopia.cod_produto)) {
                                    printf("\nO produto %d na loja %d ja possui preco.\n", pr.cod_produto, pr.cod_loja);
                                    k = 0;
                                    op[0] = 'n';
                                    break;
                                }
                            }
                            if (k != 0) {
                                printf("\nInforme o preco do produto: ");
                                scanf("%f", &pr.preco);
                                fseek(arq3, 0, SEEK_END);
                                fwrite(&pr, sizeof(tpreco), 1, arq3);
                                printf("\nDeseja cadastrar esse produto em alguma outra loja (S/N)? ");
                                scanf(" %3[^\n]", op);
                                /* A variavel "op" é uma string, para o usario poder escrever de qualquer forma. Por exemplo, o usuário digitando "sim" ou "SIM", o laço do repetição se manterá. */
                            }
                        }
                    } while (op[0] == 's' || op[0] == 'S');
                    /* O laço irá se repetir enquanto a string op for "s" ou "S" no indice [0], assim, permitindo o cadastro de outros produto*/
                }
            }
            fclose(arq3);
        }
        fclose(arq2);
    }
    fclose(arq);
    puts("\n======================================================");
}

/* A função abre os arquivos "produtos.dat", "lojas.dat" e "precos.dat" em modo rb, para poder listar os preços. */
void listar_preco()
{
    puts("\n======================================================");
    int n, k, i, j, x, t;
    FILE *arq, *arq2, *arq3;

    if ((arq3 = fopen(NOME_ARQL, "rb")) == NULL) {
        fprintf(stderr,"\nNao foi possivel abrir o arquivo %s!\n\n", NOME_ARQL);
    }
    else {
        if ((arq2 = fopen(NOME_ARQP, "rb")) == NULL) {
            fprintf(stderr,"\nNao foi possivel abrir o arquivo %s!\n\n", NOME_ARQP);
        }
        else {
            if ((arq = fopen(NOME_ARQPR, "rb")) == NULL) {
                fprintf(stderr,"\nNao foi possivel abrir o arquivo %s!\n\n", NOME_ARQPR);
            }
            else {
                printf("\n\t\t   Precos Cadastrados\n");
                printf("------------------------------------------------------\n");
                printf("   Produto\t         Loja   \t     Preco\n");
                printf("------------------------------------------------------\n");

                /* Verifica quantas estruturas tem nos arquivos e lê todas elas*/
                fseek(arq3, 0, SEEK_END);
                n = ftell(arq3) / sizeof(tloja);
                tloja l[n];
                rewind(arq3);
                fread(l, sizeof(tloja), n, arq3);

                fseek(arq2, 0, SEEK_END);
                t = ftell(arq2) / sizeof(tproduto);
                tproduto p[t];
                rewind(arq2);
                fread(p, sizeof(tproduto), t, arq2);

                fseek(arq, 0, SEEK_END);
                k = ftell(arq) / sizeof(tpreco);
                tpreco pr[k];
                rewind(arq);
                fread(pr, sizeof(tpreco), k, arq);
                insercaoInt(pr, k);

                for (i = 0; i < k; i++) {
                    /* Procura qual a loja que tem que listar*/
                    for (j = 0; j < n; j++) {
                        if (pr[i].cod_loja == l[j].cod) {
                            break;
                        }
                    }
                    /* Procura qual o produto que tem que listar*/
                    for (x = 0; x < t; x++) {
                        if (pr[i].cod_produto == p[x].cod) {
                            printf("    %-11s\t      %-20s  %-20.2f\n", p[x].descricao, l[j].nome, pr[i].preco);
                            break;
                        }
                    }
                }
            }
            fclose(arq);
        }
        fclose(arq2);
    }
    fclose(arq3);
    printf("------------------------------------------------------\n");
    puts("\n======================================================");
}

/* A função abre os arquivos "produtos.dat", "precos.dat" e "lojas.dat" em modo rb, para poder consultar os precos do produto solicitado pelo usuario em todas as lojas que o possui. */
void consultar_preco()
{
    puts("\n======================================================");
    FILE *arq, *arq2, *arq3;
    int i, j, k, n, x = 0, codp;
    tloja l;

    if ((arq = fopen(NOME_ARQP, "rb")) == NULL) {
        fprintf(stderr,"\nNao foi possivel abrir o arquivo %s!\n\n", NOME_ARQP);
    }
    else {
        if ((arq2 = fopen(NOME_ARQPR, "rb")) == NULL) {
            fprintf(stderr,"\nNao foi possivel abrir o arquivo %s!\n\n", NOME_ARQPR);
        }
        else {
            if ((arq3 = fopen(NOME_ARQL, "rb")) == NULL) {
                fprintf(stderr,"\nNao foi possivel abrir o arquivo %s!\n\n", NOME_ARQL);
            }
            else {
                printf("\nInforme o codigo do produto que deseja consultar o preco: ");
                scanf("%d", &codp);

                /* Verifica quantas estruturas tem nos arquivos e lê todas elas*/
                fseek(arq, 0, SEEK_END);
                n = ftell(arq) / sizeof(tproduto);
                tproduto p[n];
                rewind(arq);
                fread(p, sizeof(tproduto), n, arq);

                fseek(arq2, 0, SEEK_END);
                k = ftell(arq2) / sizeof(tpreco);
                tpreco pr[k];
                rewind(arq2);
                fread(pr, sizeof(tpreco), k, arq2);

                for (i = 0; i < n; i++) {
                    if (p[i].cod == codp) {
                        printf("\n\nNome do produto: %s", p[i].descricao);
                        break;
                    }
                }
                if (i == n) {
                    printf("\n\nNao possui produto cadastrado com o codigo %d!", codp);
                }
                /* Procura o preco do produto, se tiver, e o lista*/
                for (j = 0; j < k && i != n; j++) {
                    if (pr[j].cod_produto == codp) {
                        /* Procura o nome da loja para listar junto com o preco*/
                        while (fread(&l, sizeof(tloja), 1, arq3) > 0) {
                            if (l.cod == pr[j].cod_loja) {
                                printf("\nPreco do produto: %.2f na loja %s", pr[j].preco, l.nome);
                                rewind(arq3);
                                break;
                            }
                        }
                        x = 1;
                    }
                }
                if (x == 0 && i != n) {
                    printf("\nNao possui preco cadastrado para este produto!");
                }
            }
            fclose(arq3);
        }
        fclose(arq2);
    }
    fclose(arq);
    puts("\n======================================================");
}

/* A função devolve o vetor v[] ordenado alfabeticamente, que tem n elementos com n >= 1. */
void insercaoString(tproduto v[], int n)
{

    int i, j;
    tproduto atual;

    for (i = 1; i < n; i++)
    {

        atual = v[i];

        for (j = i - 1; (j >= 0) && (strcasecmp(atual.descricao, v[j].descricao) < 0); j--)
        {

            v[j + 1] = v[j];

        }

        v[j + 1] = atual;

    }
}

/* A função devolve o vetor v[] ordenado alfabeticamente, que tem n elementos com n >= 1. */
void insercaoString2(tloja v[], int n)
{

    int i, j;
    tloja atual;

    for (i = 1; i < n; i++)
    {

        atual = v[i];

        for (j = i - 1; (j >= 0) && (strcasecmp(atual.nome, v[j].nome) < 0); j--)
        {

            v[j + 1] = v[j];

        }

        v[j + 1] = atual;

    }
}

/* A função devolve o vetor v[] ordenado decrescente, que tem n elementos com n >= 1. */
void insercaoInt(tpreco v[], int n)
{
    int i, j;
    tpreco atual;

    for (i = 1; i < n; i++)
    {

        atual = v[i];

        for (j = i - 1; j >= 0 && atual.preco > v[j].preco; j--)
        {

            v[j + 1] = v[j];
        }

        v[j + 1] = atual;
    }
}


