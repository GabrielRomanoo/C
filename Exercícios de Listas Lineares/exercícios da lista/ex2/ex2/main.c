/*
2. Implemente uma função de protótipo bool lst_inserir_inicio(lista * l,
lst_info x); que insere x no início da lista l e devolve verdadeiro para indicar o sucesso
da operação, ou falso, para indicar a falha (lista cheia).
*/

#include "lista.h"

int main() {

    lista l, l2, l3;
    int k, op;
    char op2;
    lst_info val; //tipo de dado inteiro (typedef na lista.h)

    lst_init(&l); //inicializa a lista
    lst_init(&l2);
    lst_init(&l3);

    do {
        printf("\n\nLISTA LINEAR\n");
        printf("<1> Inserir\n");
        printf("<2> Remover\n");
        printf("<3> Acessar\n");
        printf("<4> Alterar\n");
        printf("<5> Imprimir\n");
        printf("<6> Procurar\n");
        printf("<7> Inserir Ordenadamente\n");
        printf("<8> Concatenar duas listas\n");
        printf("<9> Inserir no final da lista\n");
        printf("<10> Inserir no inicio da lista\n");
        printf("<0> Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {

        case 1:
            printf("\n\nInserir um novo no\n");
            printf("Posicao: ");
            scanf("%d", &k);
            printf("Valor: ");
            scanf("%d", &val);
            if (lst_inserir(&l,k,val)) {
                printf("Insercao realizada com sucesso!\n");
            } else {
                printf("Erro: posicao invalida ou lista cheia!\n");
            }
            break;

        case 2:
            printf("\n\nRemover um novo no\n");
            printf("Posicao: ");
            scanf("%d", &k);
            if (lst_remover(&l,k,&val)) {
                printf("%d removido da lista!\n", val);
            } else {
                printf("Erro: posicao invalida ou lista cheia!\n");
            }
            break;

        case 3:
            printf("\n\nAcessar um novo no\n");
            printf("Posicao: ");
            scanf("%d", &k);
            if (lst_acessar(l,k,&val)) {
                printf("Valor da posicao %d = %d\n", k, val);
            } else {
                printf("Erro: posicao invalida ou lista cheia!\n");
            }
            break;

        case 4:
            printf("\n\nAlterar um novo no\n");
            printf("Posicao: ");
            scanf("%d", &k);
            printf("Valor: ");
            scanf("%d", &val);
            if (lst_alterar(&l,k,val)) {
                printf("Alteracao realizada com sucesso!\n");
            } else {
                printf("Erro: posicao invalida ou lista cheia!\n");
            }
            break;

        case 5:
            printf("\nElementos da lista:\n");
            lst_imprimir(l);
            break;

        case 6:
            printf("\n\nProcurar um elemento na lista\n");
            printf("Valor: ");
            scanf("%d", &val);
            if ((k = lst_procurar(l,val)) != -1) {
                printf("Posicao do elemento %d: %d\n", val, k);
            } else {
                printf("Erro: o valor nao estao contido na lista!\n");
            }
            break;

        case 7:
            printf("\n\nInserir Ordenadamente um novo no \n");
            printf("Valor: ");
            scanf("%d", &val);
            if (lst_ins_ordenado(&l,val)) {
                printf("Insercao Ordenada realizada com sucesso!\n");
            } else {
                printf("Erro: posicao invalida ou lista cheia!\n");
            }
            break;

        case 8:
            printf("\n\nObs: as duas listas precisam estar ordenadas!\n");
            while (op2 != 'N'){
                printf("\nInserir Ordenadamente um novo no na 2 lista\n");
                printf("Valor: ");
                scanf("%d", &val);
                if (lst_ins_ordenado(&l2, val)) {
                    printf("Insercao Ordenada realizada com sucesso!\n");
                } else {
                    printf("Erro: posicao invalida ou lista cheia!\n");
                }
                printf("\n\nQuer adicionar mais elementos a lista 2? S/N ");
                scanf(" %c", &op2);
            }
            if (lst_concatenar(l,l2,&l3)) {
                printf("\nLista Concatenada: ");
                lst_imprimir(l3);
            } else {
                printf("Erro: (lst3 não tem capacidade para suportar a concatenação de lst1 e lst2");
            }
            break;

        case 9:
            printf("\n\nInserir um novo no, porem no final\n");
            printf("Valor: ");
            scanf("%d", &val);
            if (lst_inserir_final(&l,val)) {
                printf("Insercao realizada com sucesso!\n");
            } else {
                printf("Erro: posicao invalida ou lista cheia!\n");
            }
            break;

        case 10:
            printf("\n\nInserir um novo no, porem no inicio\n");
            printf("Valor: ");
            scanf("%d", &val);
            if (lst_inserir_inicio(&l,val)) {
                printf("Insercao realizada com sucesso!\n");
            } else {
                printf("Erro: posicao invalida ou lista cheia!\n");
            }
            break;


        case 0:
            break;

        default:
            printf("\n\nErro: posição invalida!\n");
            break;

        }

    }  while (op != 0);

    return 0;
}
