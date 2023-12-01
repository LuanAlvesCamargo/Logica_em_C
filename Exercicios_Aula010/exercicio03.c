/*
3 – Escrever um programa que leia números inteiros em uma matriz 4 x 4
Mostrar somente o menor valor de cada linha
Mostrar somente o maior valor de cada linha
*/

/*
3 – Escrever um programa que leia números inteiros em uma matriz 4 x 4
Mostrar somente o menor valor de cada linha
Mostrar somente o maior valor de cada linha
*/
#include <stdio.h>

int main() {
    int matriz[4][4];
	int x, y;
	
    printf("Digite os valores da matriz 4x4:\n");
    for (x = 0; x < 4; x++) {
        for (y = 0; y < 4; y++) {
            scanf("%i", &matriz[x][y]);
        }
    }

    for (x = 0; x < 4; x++) {
        int menor = matriz[x][0];
        int maior = matriz[x][0];

        for (y = 0; y < 4; y++) {
            if (matriz[x][y] < menor) {
                menor = matriz[x][y];
            }
            if (matriz[x][y] > maior) {
                maior = matriz[x][y];
            }
        }

        printf("Menor valor da linha %i: %i\n", x + 1, menor);
        printf("Maior valor da linha %i: %i\n", x + 1, maior);
    }

    return 0;
}

