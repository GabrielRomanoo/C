/*
Desenvolva um programa em C para
avaliar uma express�o p�s-fixa.
Considere que os operandos s�o de
apenas 1 d�gito.
*/


#include "pilha.h"
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
//prot�tipo da fun��o precede
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
	printf("Este programa converte uma express�o Infixa para P�s-fixa");
	printf("\n\nEntre com a express�o infixa: ");
	scanf("%39s", infixa); // l� a express�o infixa
	while (infixa[j] != '\0') { // varredura da express�o infixa
		simb = infixa[j++];
		if (isdigit(simb)) {
			// um operando vai diretamente
			posfixa[i++] = simb; // para a express�o p�s-fixa
		}
		else {
			while (!stack_isempty(p) && precede(top(p), simb)) {
				 //Enquanto a pilha n�o estiver vazia e o operador do topo da
			 	// * pilha tiver preced�ncia sobre o operador corrente na express�o
			 	//* infixa, o operador do topo da pilha � desempilhado ...
				posfixa[i++] = pop(&p); // ...e colocado na express�o p�s-fixa
			}
			if (simb != ')') {
			push(&p, simb); // o operador da express�o infixa � empilhado
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
	printf("Express�o pos-fixa: %s\n", posfixa);
	printf("Resultado da expressao pos-fixa: %d\n", aval_posfixa(posfixa));
	return 0;
}

bool precede(char op1, char op2)
{
	// op1 � o topo da pilha e op2 � o simbolo da infixa

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
            push(&p, simb - '0'); //0 em ascci � 48, e 1 � 49. Entao se simb for 1, vai ser 49 - 48 que � 1
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

