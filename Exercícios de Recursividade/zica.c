#include <stdio.h>

void infecta(int *, int, int, int [][*], int, int);

int main()
{
	int l, c, i, j, area = 0, m, x, y;
	scanf("%d %d", &l, &c);
	int mapa[l][c];
	for (i = 0; i < l; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &mapa[i][j]);
		}
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		x--;
		y--;
		infecta(&area, l, c, mapa, x, y);
	}
	printf("%d\n", area);
	return 0;
}

void infecta(int * area, int lin, int col, int mapa[][col], int x, int y) {
	if (x >= 0 && x < lin && y >= 0 && y < col && mapa[x][y] == 1) {
		mapa[x][y] = -1;
		(*area)++;
		infecta(area, lin, col, mapa, x + 1, y);
		infecta(area, lin, col, mapa, x - 1, y);
		infecta(area, lin, col, mapa, x, y + 1);
		infecta(area, lin, col, mapa, x, y - 1);
	}
}		
