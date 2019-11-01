/*

3. Um grupo de amigos está desenvolvendo um novo jogo baseado em campo minado para
celulares visando o público infantil. O jogo é uma versão simplificada da original. A parte
do jogo dada a você é a de determinar quantos clusters de 1's há no tabuleiro do jogo.
Dada uma matriz de 0's e 1's devem ser identificados vários clusters de 1's, ou seja,
agrupamentos de números 1 como vizinhos. O número 1 sem nenhum vizinho é considerado
um agrupamento de um número apenas. Duas células matriciais com a entrada 1 são
consideradas vizinhas se uma for vizinha da outra nas direções norte, sul, leste ou oeste.
Por exemplo, o tabuleiro na figura (a) abaixo possui 4 agrupamentos, conforme ilustra a
figura (b).
1 1 0 0 1 1 0 0
1 0 1 0 1 0 2 0
0 1 0 1 0 3 0 4
0 1 1 0 0 3 3 0
(a) (b)
Note que a célula (1,1) no canto superior esquerdo possui como vizinhos as células (1,2) e
(2,1) formando assim o primeiro cluster (agrupamento).
Entrada
A primeira linha da entrada é composta por dois inteiros L e C (3 ≤ L, C ≤ 30) separados por
um espaço em branco representando o número de linhas e colunas do tabuleiro do jogo, respectivamente.
As próximas L linhas possuem C 0's ou 1's separados por um espaço em branco.
Saída
Seu programa deve produzir uma linha contendo o número de agrupamentos encontrados no
tabuleiro do jogo fornecido na entrada.
Exemplo
Entrada
4 4
1 1 0 0
1 0 1 0
0 1 0 1
0 1 1 0
Saída
4

*/

#include <stdio.h>

void verifica(int, int, int [][*], int, int);

int main() {

    int x,y,i,j,agrupamentos=0;

    scanf("%d %d", &x, &y);

    int matriz[x][y];

    for (i = 0; i < x; i++) {
             for (j = 0; j < y; j++) {
                 scanf("%d", &matriz[i][j]);

        }
    }


    for (i = 0; i < x; i++) {
            for (j = 0; j < y; j++) {
                if (matriz[i][j]==1) {
                    verifica(x,y,matriz,i,j);
                    agrupamentos++;
                }
        }
    }


    for (i = 0; i < x; i++) {
             for (j = 0; j < y; j++) {
                 printf("%d\t", matriz[i][j]);

        }
        printf("\n");
    }

    printf("%d", agrupamentos);


    return 0;
}

void verifica(int lin, int col, int mapa[][col], int x, int y) {
	if (x >= 0 && x < lin && y >= 0 && y < col && mapa[x][y] == 1) {
		mapa[x][y] = -1;
		verifica(lin, col, mapa, x + 1, y);
		verifica(lin, col, mapa, x - 1, y);
		verifica(lin, col, mapa, x, y + 1);
		verifica(lin, col, mapa, x, y - 1);
	}
}
