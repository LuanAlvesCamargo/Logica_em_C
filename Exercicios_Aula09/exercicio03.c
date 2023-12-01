/*
* 3 – Escrever um programa que leia números inteiros em uma matriz 4 x 4
* Mostrar somente o maior valor de cada linha
* Mostrar somente o menor valor de cada linha
*/

#include <stdio.h>

int main() {
    int matriz[4][4];
    int x = 0, y = 0;

    printf("Digite os valores da matriz 4x4:\n");
    for (x = 0; x < 4; x++) {
        for (y = 0; y < 4; y++) {
            scanf("%i", &matriz[x][y]);
        }
    }
    for (x = 0; x < 4; x++) {
        int maior = matriz[x][0];
        int menor = matriz[x][0];
        
        for (x = 0; x < 4; x++) {
            if (matriz[x][y] > maior) {
                maior = matriz[x][y];
            }

            if (matriz[x][y] < menor) {
                menor = matriz[x][y];
            }
        }

        printf("Maior valor da linha %i: %i\n", x + 1, maior);
        printf("Menor valor da linha %i: %i\n", x + 1, menor);
    }

    return 0;
}

