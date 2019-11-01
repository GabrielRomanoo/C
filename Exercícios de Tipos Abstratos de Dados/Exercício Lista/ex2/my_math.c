/*
2. Crie um m�dulo my_math com as fun��es fatorial e arredondarParaInt (estas
fun��es foram implementadas como exerc�cios na disciplina de Introdu��o � Computa��oII).
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "my_math.h"

int fatorial(int n)
{

    int i = 0, fat = 1;

    for (i = n; i > 0 ; i--) {

        fat = fat * i;
    }

    return fat;
}

int arredondarParaInt(double n)
{
	int m = (int) floor(n + 0.5);
	return m;
}
