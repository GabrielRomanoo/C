/*
1. Escreva uma função de protótipo void queue_fura_fila(fila * f, queue_info
x); que insere x no começo da fila f. O detalhe é que sua função não pode movimentar os
outros itens da fila. (Observe que este neste caso, desrespeitaremos o conceito de Fila –
primeiro a entrar é o primeiro a sair).
*/

#include <stdio.h>
#include "fila.h"

int main()
{
	fila f;
	queue_info x, val;
	int op;
	bool und;

	queue_init(&f);
	do {
		printf("\n\n\tFILA\n");
		printf("<1> Inserir\n");
		printf("<2> Remover\n");
		printf("<3> Imprimir\n");
		printf("<4> Remover e testar\n");
		printf("5 furar\n");
		printf("<0> Sair\n");
		printf("Opção: ");
		scanf("%d", &op);
		switch (op) {
			case 1:
				printf("\n\nInserção\n");
				printf("Valor: ");
				scanf("%d", &x);
				enqueue(&f, x);
				break;
			case 2:
				printf("\n\nValor removido: %d\n", dequeue(&f));
				break;
            case 3:
                printf("\n\nElementos da fila:\t");
                queue_print(f);
                break;
            case 4:
                dequeue_and_test(&f, &val, &und);
                if (und == false) {
                    printf("\n\nValor removido: %d\n", x);
                }
                else {
                    fprintf(stderr, "Fila vazia!\n");
                    break;
                }
                break;
            case 5:
				printf("\n\nInserção furada\n");
				printf("Valor: ");
				scanf("%d", &x);
				queue_fura_fila(&f, x);
				break;
			case 0:
				break;
			default:
				printf("\nErro: opção inválida!\n");
		}
	} while (op != 0);
	return 0;
}
