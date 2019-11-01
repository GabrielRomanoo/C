/*
1)Implemente as operações
void stack_kill(stack_ptr * topo);
void queue_kill(fila * f) ;
que destroem uma pilha e uma
lista, respectivamente.
*/

#include "pilhaenc.h"
#include "fila_enc.h"
#include <stdio.h>
int main()
{
    stack_ptr p; // pilha de dados numéricos
    int x, n; // resto das divisões e número na base decimal

    printf("PARTE DO PROGRAMA USANDO PILHA: \n");

    printf("Digite um inteiro decimal positivo: ");
    scanf("%d", &n);
    stack_init(&p); // inicializa a pilha no estado vazio
    while (n != 0)
    {
        x = n % 2; // calcula o resto
        push(&p, x); // empilha o resto
        n /= 2; // calcula o quociente
    }

    printf("Corresponde ao binario: ");
    while (!stack_isempty(p))   // esvazia a pilha
    {
        printf("%d", pop(&p));
    }


    printf("\n");

    printf("----------------------------------------\n");

    printf("PARTE DO PROGRAMA USANDO UMA FILA");

    fila f;
	queue_info k;
	int op;

	queue_init(&f);
	do {
		printf("\n\n\tFILA\n");
		printf("<1> Inserir\n");
		printf("<2> Remover\n");
		printf("<3> Imprimir\n");
		printf("<4> Kill\n");
		printf("<0> Sair\n");
		printf("Opção: ");
		scanf("%d", &op);
		switch (op) {
			case 1:
				printf("\n\nInserção\n");
				printf("Valor: ");
				scanf("%d", &k);
				enqueue(&f, k);
				break;
			case 2:
				printf("\n\nValor removido: %d\n", dequeue(&f));
				break;
			case 3:
				printf("\n\nConteúdo da fila: ");
				queue_print(f);
				break;
            case 4:
                printf("\nLista destruída!\n");
                queue_kill(&f);
                break;
			case 0:
				break;
			default:
				printf("\nErro: opção inválida!\n");
		}
	} while (op != 0);

	printf("\nLista destruída!\n");
    queue_kill(&f);

    return 0;
}
