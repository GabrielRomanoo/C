/* 
   main.c 
   Testa a implementação do TAD deque
   
   Ciro Cirne Trindade
   25/03/2019
*/

#include <stdio.h>
#include "deque.h"

int main()
{
	deque d;
	deque_info val;
	int op;
	
	deque_init(&d);
	do {
		printf("\n\n\t\tDEQUE\n");
		printf("\t<1> Inserir pela frente\n");
		printf("\t<2> Inserir por trás\n");
		printf("\t<3> Remover pela frente\n");
		printf("\t<4> Remover por trás\n");
		printf("\t<5> Imprimir\n");
		printf("\t<0> Sair\n");
		printf("\tOpcao: ");
		scanf("%d", &op);
		switch (op) {
			case 1:
				printf("\n\tInserir pela frente:\n");
				printf("\tValor: ");
				scanf("%d", &val);
				deque_ins_frente(&d, val);
				break;
			case 2:
				printf("\n\tInserir por trás:\n");
				printf("\tValor: ");
				scanf("%d", &val);
				deque_ins_tras(&d, val);
				break;
			case 3:
				printf("\n\tValor removido pela frente: %d\n", deque_rem_frente(&d));
				break;
			case 4:
				printf("\n\tValor removido por trás: %d\n", deque_rem_tras(&d));
				break;
			case 5:
				printf("\n\tConteudo do deque: ");
				deque_print(d);
				break;
			case 0:
				break;
			default:
				printf("\n\tOpcao invalida!\n");
		}
	} while (op != 0);
	return 0;
}

