/*
3. Se um vetor armazenando uma fila não é considerado
circular, o texto sugere que cada operação dequeue
deve deslocar para a esquerda todo elemento restante
de uma fila. Um método alternativo é adiar o
deslocamento até que final seja igual ao último índice
do vetor. Quando essa situação ocorre e faz-se uma
tentativa de inserir um elemento na fila, a fila inteira é
deslocada para esquerda, de modo que o primeiro
elemento da fila fique na posição 0 do vetor. Qual a
vantagem desse método sobre um deslocamento em
cada operação dequeue? Qual a desvantagem?
Reescreva as rotinas dequeue, enqueue, queue_init,
queue_isempty e queue_isfull usando esse método.
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
			case 0:
				break;
			default:
				printf("\nErro: opção inválida!\n");
		}
	} while (op != 0);
	return 0;
}
