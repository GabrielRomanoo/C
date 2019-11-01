/*
5. Escreva uma função void dlst_append(dlst_ptr lst1, dlst_ptr lst2); que
acrescenta no final da lista lst1 os elementos da lista lst2. A lista lst2 deve ficar vazia após a
execução desta função. Considere que as listas são representadas através do encadeamento
circular duplo com nó cabeça.

6. Escreva uma função dlst_info dlst_delete_last(dlst_ptr lst); que dada uma
lista duplamente encadeada com nó cabeça não nula lst, remove e devolve o último elemento
da lista lst.

7. Escreva uma função void dlst_reverse(dlst_ptr lst); que inverte a ordem dos
elementos da lista duplamente encadeada com nó cabeça lst.


*/

#include <stdio.h>
#include "dlst.h"

int main()
{
    dlst_ptr l, l2;
    int op;
    dlst_info x;

    dlst_init(&l);
    dlst_init(&l2);
    do {
        printf("\n\tLISTA ORDENADA DUPLAMENTE ENCADEADA CIRCULAR COM NO CABECA\n");
        printf("\t<1> Inserir\n");
        printf("\t<2> Remover\n");
        printf("\t<3> Imprimir l1 em ordem crescente\n");
        printf("\t<4> Imprimir l1 em ordem decrescente\n");
        printf("\t<5> Inserir na l2\n");
        printf("\t<6> dlst2 no final de dlst1\n");
        printf("\t<7> Remover ultimo\n");
        printf("\t<8> Reverse\n");
        printf("\t<0> Sair\n");
        printf("\tOpcao: ");
        scanf("%d", &op);
        switch (op) {
            case 1: printf("\n\tValor para inserir: ");
                    scanf("%d", &x);
                    dlst_inserir(l, x);
                    break;
            case 2: printf("\n\tValor para remover: ");
                    scanf("%d", &x);
                    if (dlst_remover(l, x)) {
                        printf("\tRemocao realizada com sucesso!\n");
                    }
                    else {
                        printf("\t%d nao esta' contido na lista!\n", x);
                    }
                    break;
            case 3: printf("\n\tLista em ordem crescente\n\t");
            		dlst_print_cresc(l);
                    break;
            case 4: printf("\n\tLista em ordem decrescente\n\t");
            		dlst_printf_dec(l);
                    break;
            case 5: printf("\n\tValor para inserir em l2: ");
                    scanf("%d", &x);
                    dlst_inserir(l2, x);
                    break;
            case 6: printf("\n\tl2 em l1");
                    dlst_append(l,l2);
                    break;
            case 7: x = dlst_delete_last(l);
                    printf("\nValor do ultimo elemento removido: %d", x);
                    break;
            case 8: printf("\nRevertendo: \n");
                    dlst_reverse(l);
                    break;
            case 0: break;
            default: printf("\n\tOpcao invalida!\n");
        }
    } while (op != 0);
    return 0;
}
