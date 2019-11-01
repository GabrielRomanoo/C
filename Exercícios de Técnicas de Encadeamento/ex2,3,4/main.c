/*
2. Escreva uma fun��o void lst_append(lst_ptr * lst1, lst_ptr * lst2); que
acrescenta no final da lista lst1 os elementos da lista lst2 e depois atribui NULL a lst2.
Considere que as listas s�o representadas atrav�s do encadeamento simples.

3. Escreva uma fun��o void lst_split(lst_ptr * lst1, int pos, lst_ptr *
lst2, lst_ptr * lst3); que divide a lista lst1 em duas listas, lst2 e lst3. A lista lst2
dever� possuir os elementos das posi��es 0 a pos-1 de lst1, enquanto a lista lst3 dever�
possuir os elementos de pos a n, considerando que n � o n�mero de n�s da lista lst1. Depois
atribua NULL a lista lst1. Considere que as listas s�o representadas atrav�s do encadeamento
simples.

4. Escreva uma fun��o lst_info lst_delete_last(lst_ptr * lst); que dada uma
lista encadeada simples n�o nula lst, remove e devolve o �ltimo elemento da lista lst
*/

#include "listaenc.h"
#include <stdio.h>

int main()
{
    lst_ptr l, l2, l3, p;
	int k, op;
	lst_info val;

	lst_init(&l);
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
		printf("<7> Inserir na l2\n");
		printf("<8> Append\n");
		printf("<9> Split\n");
		printf("<10> Delete Last\n");
		printf("<0> Sair\n");
		printf("Op��o: ");
		scanf("%d", &op);
		switch (op) {
			case 1:
				printf("\n\nInserir um novo n�\n");
				printf("Posi��o: ");
				scanf("%d", &k);
				printf("Valor: ");
				scanf("%d", &val);
				if (lst_inserir(&l, k, val)) {
					printf("Inser��o realizada com sucesso!\n");
				}
				else {
					printf("Erro: posi��o inv�lida ou lista cheia!\n");
				}
				break;
			case 2:
				printf("\n\nRemover um n� da lista\n");
				printf("Posi��o: ");
				scanf("%d", &k);
				if (lst_remover(&l, k, &val)) {
					printf("%d removido da lista\n", val);
				}
				else {
					printf("Erro: posi��o inv�lida ou lista vazia!\n");
				}
				break;
			case 3:
				printf("\n\nAcessar um n� da lista\n");
				printf("Posi��o: ");
				scanf("%d", &k);
				if (lst_acessar(l, k, &val)) {
					printf("Valor da posi��o %d = %d\n", k, val);
				}
				else {
					printf("Erro: posi��o inv�lida ou lista vazia!\n");
				}
				break;
			case 4:
				printf("\n\nAlterar um n� da lista\n");
				printf("Posi��o: ");
				scanf("%d", &k);
				printf("Valor: ");
				scanf("%d", &val);
				if (lst_alterar(l, k, val)) {
					printf("Altera��o realizada com sucesso!\n");
				}
				else {
					printf("Erro: posi��o inv�lida ou lista vazia!\n");
				}
				break;
			case 5:
				printf("\n\nConte�do da lista: ");
				lst_imprimir(l);
				break;
			case 6:
				printf("\n\nProcurar um valor na lista\n");
				printf("Valor: ");
				scanf("%d", &val);
				p = lst_procurar(l, val);
				if (p != NULL) {
					printf("%d est� contido na lista\n", val);
				}
				else {
					printf("%d n�o est� contido na lista\n", val);
				}
				break;
            case 7:
				printf("\n\nInserir um novo n� em l2\n");
				printf("Posi��o: ");
				scanf("%d", &k);
				printf("Valor: ");
				scanf("%d", &val);
				if (lst_inserir(&l2, k, val)) {
					printf("Inser��o realizada com sucesso!\n");
				}
				else {
					printf("Erro: posi��o inv�lida ou lista cheia!\n");
				}
				break;
            case 8:
				printf("\n\nAppend de l2 em l1: ");
				lst_append(&l,&l2);
				lst_imprimir(l);
				break;
            case 9:
				printf("\n\nSplit\n");
				printf("Posi��o: ");
				scanf("%d", &val);
				lst_split(&l, val, &l2, &l3);
				lst_imprimir(l2);
				lst_imprimir(l3);
				break;
            case 10:
				printf("\n\nDelete Last\n");
				val = lst_delete_last(&l);
				if (val != NULL) {
                    printf("Elemento removido: %d", val);
				}
				else {
					printf("Erro!\n");
				}
				break;
			case 0:
				break;
			default:
				printf("\nErro: op��o inv�lida!\n");
				break;
		}
	} while (op != 0);
    return 0;
}
