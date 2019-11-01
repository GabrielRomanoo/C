/*
2. Escreva uma função void lst_append(lst_ptr * lst1, lst_ptr * lst2); que
acrescenta no final da lista lst1 os elementos da lista lst2 e depois atribui NULL a lst2.
Considere que as listas são representadas através do encadeamento simples.

3. Escreva uma função void lst_split(lst_ptr * lst1, int pos, lst_ptr *
lst2, lst_ptr * lst3); que divide a lista lst1 em duas listas, lst2 e lst3. A lista lst2
deverá possuir os elementos das posições 0 a pos-1 de lst1, enquanto a lista lst3 deverá
possuir os elementos de pos a n, considerando que n é o número de nós da lista lst1. Depois
atribua NULL a lista lst1. Considere que as listas são representadas através do encadeamento
simples.

4. Escreva uma função lst_info lst_delete_last(lst_ptr * lst); que dada uma
lista encadeada simples não nula lst, remove e devolve o último elemento da lista lst
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
		printf("Opção: ");
		scanf("%d", &op);
		switch (op) {
			case 1:
				printf("\n\nInserir um novo nó\n");
				printf("Posição: ");
				scanf("%d", &k);
				printf("Valor: ");
				scanf("%d", &val);
				if (lst_inserir(&l, k, val)) {
					printf("Inserção realizada com sucesso!\n");
				}
				else {
					printf("Erro: posição inválida ou lista cheia!\n");
				}
				break;
			case 2:
				printf("\n\nRemover um nó da lista\n");
				printf("Posição: ");
				scanf("%d", &k);
				if (lst_remover(&l, k, &val)) {
					printf("%d removido da lista\n", val);
				}
				else {
					printf("Erro: posição inválida ou lista vazia!\n");
				}
				break;
			case 3:
				printf("\n\nAcessar um nó da lista\n");
				printf("Posição: ");
				scanf("%d", &k);
				if (lst_acessar(l, k, &val)) {
					printf("Valor da posição %d = %d\n", k, val);
				}
				else {
					printf("Erro: posição inválida ou lista vazia!\n");
				}
				break;
			case 4:
				printf("\n\nAlterar um nó da lista\n");
				printf("Posição: ");
				scanf("%d", &k);
				printf("Valor: ");
				scanf("%d", &val);
				if (lst_alterar(l, k, val)) {
					printf("Alteração realizada com sucesso!\n");
				}
				else {
					printf("Erro: posição inválida ou lista vazia!\n");
				}
				break;
			case 5:
				printf("\n\nConteúdo da lista: ");
				lst_imprimir(l);
				break;
			case 6:
				printf("\n\nProcurar um valor na lista\n");
				printf("Valor: ");
				scanf("%d", &val);
				p = lst_procurar(l, val);
				if (p != NULL) {
					printf("%d está contido na lista\n", val);
				}
				else {
					printf("%d não está contido na lista\n", val);
				}
				break;
            case 7:
				printf("\n\nInserir um novo nó em l2\n");
				printf("Posição: ");
				scanf("%d", &k);
				printf("Valor: ");
				scanf("%d", &val);
				if (lst_inserir(&l2, k, val)) {
					printf("Inserção realizada com sucesso!\n");
				}
				else {
					printf("Erro: posição inválida ou lista cheia!\n");
				}
				break;
            case 8:
				printf("\n\nAppend de l2 em l1: ");
				lst_append(&l,&l2);
				lst_imprimir(l);
				break;
            case 9:
				printf("\n\nSplit\n");
				printf("Posição: ");
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
				printf("\nErro: opção inválida!\n");
				break;
		}
	} while (op != 0);
    return 0;
}
