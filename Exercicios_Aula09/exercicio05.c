/*
* 5 – Escreva um programa que leia o 3 preços para cada tipo de produto Monitor, teclado, mouse e HD – Matriz 4 x 3
* Mostrar o valor médio de cada produto
* Mostrar os valores lidos de cada tipo de produto um por vez
* Mostrar TODOS os valores lidos
*/

#include <stdio.h>

int main() {
    float precos[4][3];
    float medias[4] = {0};
    int x, y;

    for (x = 0; x < 4; x++) {
        for (y = 0; y < 3; y++) {
            printf("Digite o preco do %s: ", x == 0 ? "Monitor" : (x == 1 ? "Teclado" : (x == 2 ? "Mouse" : "HD")), y + 1);
            scanf("%f", &precos[x][y]);
            medias[x] += precos[x][y];
        }
    }

    // Calcula e exibe o valor médio de cada produto
    for (x = 0; x < 4; x++) {
        medias[x] /= 3; // Calcula a média
        printf("Valor medio de %s: \n", x == 0 ? "Monitor" : (x == 1 ? "Teclado" : (x == 2 ? "Mouse" : "HD")), medias[x]);
    }

    // Exibe os valores lidos para cada tipo de produto um por vez
    for (x = 0; x < 4; x++) {
        printf("Valores lidos para %s: ", x == 0 ? "Monitor" : (x == 1 ? "Teclado" : (x == 2 ? "Mouse" : "HD")));
        for (y = 0; y < 3; y++) {
            printf("%.2f ", precos[x][y]);
        }
        printf("\n");
    }

    // Exibe TODOS os valores lidos
    printf("TODOS os valores lidos:\n");
    for (x = 0; x < 4; x++) {
        for (y = 0; y < 3; y++) {
            printf("%.2f ", precos[x][y]);
        }
    }

    return 0;
}
