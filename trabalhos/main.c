/* trabalho1.c
 *
 * Programa que faz as operações de inserção, remoção, união, intersecção e
 * diferença de dois conjuntos numéricos inteiros.
 *
 * Gabriel Romano Godoi Pereira (Ciência da Computação)
 * Jaime Mathias de Lara Bueno (Ciência da Computação)
 * Gustavo Marinho Gomes da Silva (Ciência da Computação)
 *
 * Disciplina: Estrutura de Dados I
 *
 *12/04/2019
*/

#include <stdio.h>
#include "set.h"

int main()
{
    set s1, s2, s3;

    int op;

    set_info val;
    set_init(&s1);
    set_init(&s2);


     do {
        printf("\n\tCONJUNTOS\n");
        printf("<1> Inserir no 1o conjunto\n");
        printf("<2> Inserir no 2o conjunto\n");
        printf("<3> Remover do 1o conjunto\n");
        printf("<4> Remover do 2o conjunto\n");
        printf("<5> Imprimir o 1o conjunto\n");
        printf("<6> Imprimir o 2o conjunto\n");
        printf("<7> União dos conjuntos\n");
        printf("<8> Interseccao dos conjuntos\n");
        printf("<9> Diferenca dos conjuntos\n");
        printf("<0> Sair do programa\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("\n\nInserir no 1o conjunto\n");
                printf("Valor: ");
                scanf("%d", &val);
                if (set_insert(&s1, val)) {
                        printf("%d inserido com sucesso no 1o conjunto!\n", val);
                }
                else {
                    printf("Erro: conjunto cheio ou elemento repetido!\n");
                }
                break;

            case 2:
                printf("\n\nInserir no 2o conjunto\n");
                printf("Valor: ");
                scanf("%d", &val);
                if (set_insert(&s2, val)) {
                        printf("%d inserido com sucesso no 2o conjunto!\n", val);
                }
                else {
                    printf("Erro: conjunto cheio ou elemento repetido!\n");
                }
                break;

            case 3:
                printf("\n\nRemover do 1o conjunto\n");
                printf("Valor: ");
                scanf("%d", &val);
                if (set_remove(&s1, val)) {
                    printf("%d removido com sucesso no 1o conjunto!\n", val);
                }
                else {
                    printf("Erro: %d nao esta' contido no 1o. conjunto!\n", val);
                }
                break;

                case 4:
                    printf("\n\nRemover do 2o conjunto\n");
                    printf("Valor: ");
                    scanf("%d", &val);
                    if (set_remove(&s2, val)) {
                            printf("%d removido com sucesso no 2o conjunto!\n", val);
                    }
                    else {
                        printf("Erro: %d não esta' contido no 2o. conjunto!\n", val);
                    }
                    break;

                case 5:
                    printf("\n\n1o conjunto: ");
                    set_print(s1);
                    break;

                case 6:
                    printf("\n\n2o conjunto: ");
                    set_print(s2);
                    break;

                case 7:
                    if (set_union(s1, s2, &s3)) {
                            printf("\n\nUniao dos 2 conjuntos: ");
                            set_print(s3);
                    }
                    else {
                        printf("Erro: não ha' espaco suficiente para essa operacao!\n");
                    }
                    break;

                case 8:
                    printf("\n\nInterseccao dos 2 conjuntos: ");
                    set_intersection(s1, s2, &s3);
                    set_print(s3);
                    break;

                 case 9:
                     printf("\n\nDiferenca dos 2 conjuntos: ");
                     set_difference(s1, s2, &s3);
                     set_print(s3);
                     break;

                 case 0:
                     break;

                default:
                    printf("\nErro: opcao invalida!\n");
        }
     } while (op != 0);

    return 0;
}
