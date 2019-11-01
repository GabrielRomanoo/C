/*4. Escreva um programa em C que define estruturas para representar as seguintes entidades:
a) Processador: tem como características a frequência e o fabricante;
b) Monitor:   tem   como   características   o   tamanho   (em   polegadas),   o   tipo   (LCD,   CRT,
Plasma, etc.) e o fabricante;
c) Computador: tem como características o processador, o monitor, a capacidade de disco
rígido e de memória RAM.
O programa deve cadastrar n computadores e depois listar os dados daqueles computadores
com processador com frequência superior 2 GHz, com monitor maior que 17” e capacidade
de memória RAM maior ou igual a 4 GB.*/

#include <stdio.h>
#include <string.h>

struct processador {

    float frequencia;
    char frabicante1[10];

};

struct monitor {

    float tamanho;
    char tipo[10];
    char fabricante2[10];

};

struct computador {

    struct processador proc;
    struct monitor moni;
    int disco;
    int ram;

};

int main()
{
    int n;

    printf("Informe a quantidade de computador a serem cadastrados: ");
    scanf(" %d", &n);
    printf("\n");

    struct computador vetcomp[n];

    int i;

    for (i = 0; i < n; i++) {

        puts("=============================================================");

        printf("\nComputador numero %d\n", i+1);

        printf("\nInforme a frequencia do processador (GHz): ");
        scanf(" %f", &vetcomp[i].proc.frequencia);

        printf("\nInforme o(a) frabicante do processador: ");
        scanf(" %9[^\n]", vetcomp[i].proc.frabicante1);

        printf("\n");
        puts("-------------------------------------------------------------");

        printf("\nInforme o tamanho do monitor (polegadas): ");
        scanf(" %f", &vetcomp[i].moni.tamanho);

        printf("\nInforme o tipo de monitor: ");
        scanf(" %9[^\n]", vetcomp[i].moni.tipo);

        printf("\nInforme o(a) fabricante do monitor: ");
        scanf(" %9[^\n]", vetcomp[i].moni.fabricante2);

        printf("\n");
        puts("-------------------------------------------------------------");

        printf("\nInforme o tamanho do disco rigido no computador (gigas): ");
        scanf(" %d", &vetcomp[i].disco);

        printf("\nInforme o tamanho da memoria RAM no computador (gigas): ");
        scanf(" %d", &vetcomp[i].ram);

        printf("\n");

    }

    puts("=============================================================");

    for (i = 0; i < n; i++) {

        if (vetcomp[i].proc.frequencia > 2 && vetcomp[i].moni.tamanho > 17 && vetcomp[i].ram >= 4) {

            printf("\nComputador numero %d: ", i+1);

            printf("\nFrequencia do processador: ");
            printf("%f", vetcomp[i].proc.frequencia);

            printf("\nFabricante do processador: ");
            printf("%s", vetcomp[i].proc.frabicante1);

            printf("\nTamanho do monitor: ");
            printf("%f", vetcomp[i].moni.tamanho);

            printf("\nTipo do monitor: ");
            printf("%s", vetcomp[i].moni.tipo);

            printf("\nFabricante do monitor: ");
            printf("%s", vetcomp[i].moni.fabricante2);

            printf("\nTamanho do disco rigido: ");
            printf("%d", vetcomp[i].disco);

            printf("\nTamanho da memoria RAM: ");
            printf("%d", vetcomp[i].ram);

            printf("\n");
            printf("\n");
            puts("=============================================================");
            printf("\n");

        }

    }

    return 0;

}
