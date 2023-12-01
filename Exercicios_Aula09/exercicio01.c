/*
* 1 – Escrever um programa para armazenar valores inteiros em uma matriz (5,5).
* Mostrar todos os valores lidos
* Mostrar somente os valores lidos de linhas impares
* Mostrar somente os valores lidos de colunas pares
* Mostrar somente os valores lidos de linhas e colunas pares
* Mostrar somente os valores lidos de linhas e colunas impares
*/

#include <stdio.h>

int main() {
    int matriz[5][5];
    int x = 0, y = 0;

    printf("Digite 25 valores inteiros para preencher a matriz (5x5):\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            scanf("%i", &matriz[x][y]);
        }
    }
    printf("Valores lidos:\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            printf("%i", matriz[x][y]);
        }
        printf("\n");
    }
    printf("\nValores das linhas impares:\n");
    for (x = 0; x < 5; x += 2) {
        for (y = 0; y < 5; y++) {
            printf("%i", matriz[x][y]);
        }
        printf("\n");
    }
    printf("\nValores das colunas pares:\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y += 2) {
            printf("%i", matriz[x][y]);
        }
        printf("\n");
    }
    printf("\nValores das linhas e colunas pares:\n");
    for (x = 0; x < 5; x += 2) {
        for (y = 0; y < 5; y += 2) {
            printf("%i", matriz[x][y]);
        }
        printf("\n");
    }
    printf("\nValores das linhas e colunas impares:\n");
    for (x = 1; x < 5; x += 2) {
        for (y = 1; y < 5; y += 2) {
            printf("%i", matriz[x][y]);
        }
        printf("\n");
    }

    return 0;
}

