/*
15. Escreva um programa que use uma macro MINIMUM3 para determinar o menor de três
valores numéricos. A macro MINIMUM3 deve usar a macro MINIMUM2 definida um
exercício anterior.
*/

#include <stdio.h>

#define MINIMUM2(a,b) a < b ? a : b
#define MINIMUM3(a,b,c) ((MINIMUM2(a,b)) < (c) ? (MINIMUM2(a,b)) : (c))

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("Menor entre os 3: %d", MINIMUM3(a, b, c));

    return 0;
}
