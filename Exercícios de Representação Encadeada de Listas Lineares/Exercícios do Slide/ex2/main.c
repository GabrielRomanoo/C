/*
Desenvolva a seguintes operações para
uma lista encadeada:

a)void lst_init(lst_ptr *);
    Inicializa uma lista

b)bool lst_acessar(lst_ptr, int, lst_info *);
    Acessa o k-ésimo nó da lista

c)bool lst_alterar(lst_ptr, int, lst_info);
    Altera o valor do k-ésimo nó da lista

d)bool lst_inserir(lst_ptr *, int, lst_info);
    Insere um novo nó na k-ésima posição da lista

e)bool lst_remover(lstr_ptr *, int, lst_info *);
    Remove o k-ésimo nó da lista e devolve seu valor

f)int lst_tamanho(lst_ptr);
    Determina o número de nós de uma lista

g)lst_ptr lst_procurar(lst_ptr, lst_info);
    Localiza um nó que contém um determinado valor. Devolve NULL, caso não seja localizado7

h)void lst_imprimir(lst_ptr);
    Imprime a lista
*/

#include "listaenc.h"
#include <stdio.h>

int main()
{
    lst_ptr l, p;
	int k, op;
	lst_info val;

	lst_init(&l);
	do {
		printf("\n\nLISTA LINEAR\n");
		printf("<1> Inserir\n");
		printf("<2> Remover\n");
		printf("<3> Acessar\n");
		printf("<4> Alterar\n");
		printf("<5> Imprimir\n");
		printf("<6> Procurar\n");
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
			case 0:
				break;
			default:
				printf("\nErro: opção inválida!\n");
				break;
		}
	} while (op != 0);


    return 0;
}
