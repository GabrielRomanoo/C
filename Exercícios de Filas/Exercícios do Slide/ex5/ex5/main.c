#include <stdio.h>
#include "fpa.h"

int main()
{
	fpa f;
	fpa_info x;
	int op;
	
	fp_init(&f);
	do {
		printf("\n\n\tFILA\n");
		printf("<1> Inserir\n");
		printf("<2> Remover\n");
		printf("<0> Sair\n");
		printf("Opção: ");
		scanf("%d", &op);
		switch (op) {
			case 1:
				printf("\n\nInserção\n");
				printf("Valor: ");
				scanf("%d", &x);
				fp_inserir(&f, x);
				break;
			case 2:
				printf("\n\nValor removido: %d\n", fp_remover_min(&f));
				break;
			case 0:
				break;
			default:
				printf("\nErro: opção inválida!\n");
		}
	} while (op != 0);
	return 0;
}
