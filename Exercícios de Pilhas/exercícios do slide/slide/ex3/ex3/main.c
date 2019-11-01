/*
Desenvolva um programa em C para
avaliar uma expressão pós-fixa.
Considere que os operandos são de
apenas 1 dígito.
*/


#include "pilha.h"
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
//protótipo da função precede
bool precede(char , char);
int aval_posfixa(const char *);

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
	printf("Expressão pos-fixa: %s\n", posfixa);
	printf("Resultado da expressao pos-fixa: %d\n", aval_posfixa(posfixa));
	return 0;
}

bool precede(char op1, char op2)
{
	// op1 é o topo da pilha e op2 é o simbolo da infixa

	return (op1 != '(' && op2 != '(') && (op2 == ')' ||
	       (op1 == '*' || op1 == '/') || (op2 == '+' || op2 == '-'));

}

int aval_posfixa(const char * posfixa)
{
    pilha p;
    int i, x, y;
    char simb;

    stack_init(&p);

    for (i = 0; posfixa[i] != '\0'; i++) {
        simb = posfixa[i];
        if (isdigit(simb)) { //verifica se numero
            push(&p, simb - '0'); //0 em ascci é 48, e 1 é 49. Entao se simb for 1, vai ser 49 - 48 que é 1
        }
        else {
            y = pop(&p);
            x = pop(&p);
            switch (simb) {
            case '+':
                push(&p, x+y);
                break;

            case '-':
                push(&p, x-y);
                break;

            case '/':
                push(&p, x/y);
                break;

            case '*':
                push(&p, x*y);
                break;
            }
        }
    }

    return pop(&p);
}

