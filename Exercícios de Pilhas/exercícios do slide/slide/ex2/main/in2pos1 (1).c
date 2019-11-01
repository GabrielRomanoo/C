/*
* in2pos1.c
* Este programa converte uma expressão infixa (sem parênteses)
* em uma expressão pós-fixa.
* Ciro Cirne Trindade
* 19/02/2019
*/



#include "pilha.h"
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
//protótipo da função precede
bool precede(char , char);


int main()
{
	pilha p;
	char simb;
	char infixa[40];
	char posfixa[40];
	int i = 0, j = 0;
	stack_init(&p);
	printf("Este programa converte uma expressão Infixa para Pós-fixa");
	printf("\n\nEntre com a expressão infixa: ");
	scanf("%39s", infixa); // lê a expressão infixa
	while (infixa[j] != '\0') { // varredura da expressão infixa
		simb = infixa[j++];
		if (isdigit(simb)) {
			// um operando vai diretamente
			posfixa[i++] = simb; // para a expressão pós-fixa
		}
		else {
			while (!stack_isempty(p) && precede(top(p), simb)) {
				 //Enquanto a pilha não estiver vazia e o operador do topo da
			 	// * pilha tiver precedência sobre o operador corrente na expressão
			 	//* infixa, o operador do topo da pilha é desempilhado ...
				posfixa[i++] = pop(&p); // ...e colocado na expressão pós-fixa
			}
			if (simb != ')') {
			push(&p, simb); // o operador da expressão infixa é empilhado
			}
			else {
                pop(&p);
			}
		} // fim do else
	} // fim do while (varredura)
	while (!stack_isempty(p)) { // esvazia a pilha dos operadores
		posfixa[i++] = pop(&p);
	}
	posfixa[i] = '\0';
	printf("Expressão Pós-fixa: %s\n", posfixa);
	return 0;
}



bool precede(char op1, char op2)
{
	// op1 é o topo da pilha e op2 é o simbolo da infixa

	return (op1 != '(' && op2 != '(') && (op2 == ')' ||
	       (op1 == '*' || op1 == '/') || (op2 == '+' || op2 == '-'));

}


