/*
2)Dada uma lista ordenada l, codifique
a função int lst_occurs(lst_ptr l,
lst_info x); que devolve o número
de vezes que o elemento x ocorre
dentro da lista l.
3)Dada uma lista ordenada l, codifique
a função int lst_size(lst_ptr l);
que devolve o número de elementos
armazenados em l.
4)Dada uma lista ordenada l e um elemento
x, codifique a função int lst_rem_all
(lst_ptr * l, lst_info x); que
remove de l todas as ocorrências do
elemento x e devolve o número de
remoções.
5)Dadas duas listas ordenadas x e y,
codifique a função lst_ptr
lst_merge(lst_ptr x, lst_ptr y); que
combina x e y em uma única lista
ordenada e a devolve.
6)Dadas duas listas ordenadas x e y,
codifique a função bool
lst_equals(lst_ptr x, lst_ptr y);
que informa se as duas listas são
idênticas ou não (se forem iguais, a
função devolve true, caso contrário,
devolve false).
*/

#include <stdio.h>
#include "listaord.h"

int main()
{
    lst_ptr l,l2,l3;
    lst_init(&l);
    lst_init(&l2);
    lst_init(&l3);
    int op;
    lst_info x;
    do {
        printf("\n\n\tLISTA ORDENADA\n");
        printf("\t<1> Inserir\n");
        printf("\t<2> Remover\n");
        printf("\t<3> Procurar\n");
        printf("\t<4> Imprimir\n");
        printf("\t<5> Destruir\n");
        printf("\t<6> Ocorrencia\n");
        printf("\t<7> Tamanho\n");
        printf("\t<8> Remover Tudo\n");
        printf("\t<9> Copiar\n");
        printf("\t<10> Inserir em l2\n");
        printf("\t<11> Iguais\n");
        printf("\t<0> Sair do programa\n");
        printf("\tOpcao: ");
        scanf("%d", &op);
        switch (op) {
            case 1: printf("\n\tInserir um novo elemento na lista\n");
                    printf("\tValor: ");
                    scanf("%d", &x);
                    lst_ins(&l, x);
                    break;
            case 2: printf("\n\tRemover um elemento da lista\n");
                    printf("\tValor: ");
                    scanf("%d", &x);
                    if (lst_rem(&l, x)) {
                        printf("\n\tElemento removido com sucesso\n");
                    }
                    else {
                        printf("\n\t%d nao esta na lista\n", x);
                    }
                    break;
            case 3: printf("\n\tProcurar um elemento na lista\n");
                    printf("\tValor: ");
                    scanf("%d", &x);
                    if (lst_find(l, x) != NULL) {
                        printf("\n\t%d foi localizado na lista\n", x);
                    }
                    else {
                        printf("\n\t%d NAO foi localizado na lista\n", x);
                    }
                    break;
            case 4: printf("\n\tConteudo da lista: ");
                    lst_print(l);
                    break;
            case 5: lst_kill(&l);
                    printf("\n\tLista destruida!\n");
            case 6: printf("\n\tContar quantas vezes um elemento na lista\n");
                    printf("\tValor: ");
                    scanf("%d", &x);
                    printf("\tAparece %d vezes\n", lst_occurs(l,x));
                    break;
            case 7: printf("\n\tA lista tem %d elementos!\n", lst_size(l));
                    break;
            case 8: printf("\n\tRemover todo elemento: ");
                    scanf("%d", &x);
                    printf("\tO elemento %d foi removido %d vezes!\n", x, lst_rem_all(&l,x));
                    break;
            case 9: printf("\n\tCopiar em outra lista: ");
                    l3 = lst_merge(l,l2);
                    if (l3 != NULL) {
                        lst_print(l3);
                    }
                    else {
                        printf("\n\tErro\n");
                    }
                    break;
            case 10: printf("\n\tInserir um novo elemento na lista 2\n");
                    printf("\tValor: ");
                    scanf("%d", &x);
                    lst_ins(&l2, x);
                    printf("\n\tConteudo lista 2: ");
                    lst_print(l2);
                    break;
             case 11: printf("\n\tVerificar se as duas listas são iguais\n");
                    if (lst_equals(l,l2) == true) {
                        printf("\n\tAs duas listas são iguais!\n");
                    } else {
                        printf("\n\tAs duas listas NAO são iguais!\n");
                    }
                    break;
            case 0: break;
            default: printf("\n\tOpcao invalida!\n");
        }
        } while (op != 0);
    return 0;
}
