/* dec2bin.c
 * Converte um número da base decimal para binária */

#include "pilha.h"
#include <stdio.h>

int main()
{
	pilha p;
	stack_info n;
	bool erro;
		
	printf("Informe um número na base decinal (<= 0 p/ sair): ");
	scanf("%d", &n);
	while (n > 0) {
		stack_init(&p);
		erro = false;
		while (n != 0 && !erro) {
			push_and_test(&p, n % 2, &erro);
			n /= 2;
		}
		if (!erro) {
			printf("Em binário: ");
			while (!stack_isempty(p)) {
				printf("%d", pop(&p));
			}
		}
		else {
			printf("Erro: número muito grande, não foi possível convertê-lo!");
		}
		
		printf("\n\nInforme um número na base decinal (<= 0 p/ sair): ");
		scanf("%d", &n);		
	}
	return 0;
} 
