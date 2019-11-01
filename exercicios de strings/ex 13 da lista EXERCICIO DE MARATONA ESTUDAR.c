/*
13. Huaauhahhuahau3
. Em chats, � muito comum entre jovens e adolescentes utilizar
sequ�ncias de letras, que parecem muitas vezes aleat�rias, para representar risadas. Alguns
exemplos comuns s�o:
huaauhahhuahau
hehehehe
ahahahaha
jaisjjkasjksjjskjakijs
huehuehue
Cl�udia � uma jovem programadora que ficou intrigada pela sonoridade das �risadas
digitais�. Algumas delas ela nem mesmo consegue pronunciar! Mas ela percebeu que
algumas delas parecem transmitir melhor o sentimento da risada que outras. A primeira
coisa que ela percebeu � que as consoantes n�o interferem no quanto as risadas digitais
influenciam na transmiss�o do sentimento. A segunda coisa que ela percebeu � que as
risadas digitais mais engra�adas s�o aquelas em que as sequ�ncias de vogais s�o iguais
quando lidas na ordem natural (da esquerda para a direita) ou na ordem inversa (da direita
para a esquerda), ignorando as consoantes. Por exemplo, �hahaha� e �huaauhahhuahau�
est�o entre as risadas mais engra�adas, enquanto �riajkjdhhihhjak� e �huehuehue� n�o
est�o entre as mais engra�adas.
Cl�udia est� muito atarefada com a an�lise estat�stica das risadas digitais e pediu sua ajuda
para escrever um programa que determine, para uma risada digital, se ela � das mais
engra�adas ou n�o.
Entrada
A entrada � composta por uma linha, contendo uma sequ�ncia de no m�ximo 50
caracteres, formada apenas por letras min�sculas sem acentua��o. As vogais s�o as letras
�a�,�e�,�i�,�o�,�u�. A sequ�ncia cont�m pelo menos uma vogal.
Sa�da
Seu programa deve produzir uma linha contendo um caractere, �S� caso a risada seja das
mais engra�adas, ou �N� caso contr�rio.
Exemplos
Entrada
hahaha
Sa�da
S
Entrada
riajkjdhhihhjak
Sa�da
N

3 Maratona de Programa��o da SBC 2016. Dispon�vel em:
https://www.urionlinejudge.com.br/judge/pt/problems/view/2242
*/

#include <stdio.h>
#include <string.h>

int main() {

    char strA[50], strB[50], vogal[] = {'a','e', 'i' ,'o' , 'u', '\0'};
    int i=0, j=0, k=0;

    scanf(" %49[^\n]", strA);

    //TIRAR AS CONSOANTES:

    for(i=0; strA[i]!='\0' ;i++){
        for(j=0; vogal[j]!='\0';j++){
            if(strA[i] == vogal[j]){
                strA[k++] = strA[i];
               // k++;
            }
        }
    }

    strA[k] = '\0';

    strcpy(strB,strA);

    //strrev(strB);

    for (i = strlen(strA) - 1, j=0; i >= 0; i--, j++) {
        //i = numero de caracteres - 1 (ou seja: para pegar o numero do �ndice.)
        strB[j] = strA[i];

	}

	//puts(strB);

    if(strcasecmp(strA,strB) == 0){
        printf("S\n");
    } else{
        printf("N\n");
    }


    //ABAIXO FOI FEITO PELO PROFESSOR:

    /*
    char risada[51], vogais[51], inverso[51];
	int i, j = 0;
	scanf(" %s", risada);
	for (i = 0; risada[i] != '\0'; i++) {
		if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' ||
		    risada[i] == 'o' || risada[i] == 'u') {
		    vogais[j++] = risada[i];
		}
	}
	vogais[j] = '\0';
	inverso[j] = '\0';
	i = 0;
	for (j = j - 1; j >= 0; j--) {
		inverso[j] = vogais[i++];
	}

	if (strcmp(vogais, inverso) == 0) {
		printf("S\n");
	}
	else {
		printf("N\n");
	}
    */

    return 0;
}
