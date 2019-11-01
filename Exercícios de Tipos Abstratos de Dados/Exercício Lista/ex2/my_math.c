/*
2. Crie um módulo my_math com as funções fatorial e arredondarParaInt (estas
funções foram implementadas como exercícios na disciplina de Introdução à ComputaçãoII).
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
