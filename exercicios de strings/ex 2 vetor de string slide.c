/*Escreva um programa que dada uma data no
formato ddmmaaaa, exiba-a no formato
dd/nome-do-mês/aaaa. Não utilize nenhum
comando de decisão.*/

#include <stdio.H>
#include <string.h>

int main() {

    char data[9], meses [11][9] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    int i, j=48, k=0, a=48;

    printf("Informe a data no formato ddmmaaaa: ");
    scanf("%8s", data);



    for(i=0;i<2;i++){
        putchar(data[i]);
    }
    printf("/");

    for(i=2;data[2] == '0',i<4;i++){
        k+=data[i];
    }

    k = k - j; // 97 - 48 = 49

    for(i=0;data[2] == '1'&& i<1; i++){

        k = k - 39;
    }



    for(i=0;data[2] == '0' && i<1; i++){

    k = k - 48;
    }


    printf("%s", &meses[k-1]);
    printf("/");


    for(i=4;i<8;i++){
        putchar(data[i]);
    }

    //JEITO MUITO MAIS SIMPLES:

    /*

    char * meses[] = { "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
	                   "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };
	int dia, mes, ano;

	printf("Informe uma data no formato ddmmaaaa: ");
	scanf("%2d%2d%4d", &dia, &mes, &ano);

	printf("\nData: %02d/%s/%d\n", dia, meses[mes - 1], ano);
    */








    return 0;
}
