/*
13. Huaauhahhuahau3
. Em chats, é muito comum entre jovens e adolescentes utilizar
sequências de letras, que parecem muitas vezes aleatórias, para representar risadas. Alguns
exemplos comuns são:
huaauhahhuahau
hehehehe
ahahahaha
jaisjjkasjksjjskjakijs
huehuehue
Cláudia é uma jovem programadora que ficou intrigada pela sonoridade das “risadas
digitais”. Algumas delas ela nem mesmo consegue pronunciar! Mas ela percebeu que
algumas delas parecem transmitir melhor o sentimento da risada que outras. A primeira
coisa que ela percebeu é que as consoantes não interferem no quanto as risadas digitais
influenciam na transmissão do sentimento. A segunda coisa que ela percebeu é que as
risadas digitais mais engraçadas são aquelas em que as sequências de vogais são iguais
quando lidas na ordem natural (da esquerda para a direita) ou na ordem inversa (da direita
para a esquerda), ignorando as consoantes. Por exemplo, “hahaha” e “huaauhahhuahau”
estão entre as risadas mais engraçadas, enquanto “riajkjdhhihhjak” e “huehuehue” não
estão entre as mais engraçadas.
Cláudia está muito atarefada com a análise estatística das risadas digitais e pediu sua ajuda
para escrever um programa que determine, para uma risada digital, se ela é das mais
engraçadas ou não.
Entrada
A entrada é composta por uma linha, contendo uma sequência de no máximo 50
caracteres, formada apenas por letras minúsculas sem acentuação. As vogais são as letras
‘a’,‘e’,‘i’,‘o’,‘u’. A sequência contém pelo menos uma vogal.
Saída
Seu programa deve produzir uma linha contendo um caractere, “S” caso a risada seja das
mais engraçadas, ou “N” caso contrário.
Exemplos
Entrada
hahaha
Saída
S
Entrada
riajkjdhhihhjak
Saída
N

3 Maratona de Programação da SBC 2016. Disponível em:
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
        //i = numero de caracteres - 1 (ou seja: para pegar o numero do índice.)
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
