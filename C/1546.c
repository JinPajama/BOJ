#include <stdio.h>
#include <stdlib.h>	//sizeof, malloc

int main() {
	int tc = 0;
	char** ox = { 'O', };

	scanf("%d", &tc);
	**ox = malloc(sizeof(char) * tc);

	for (int i = 0; i < tc; i++) {
		*ox[i] = malloc(sizeof(char) * 80);
	}

	for (int i = 0; i < tc; i++) {
		for (int j = 0; j < 80; j++) {
			printf("%c ", ox[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}