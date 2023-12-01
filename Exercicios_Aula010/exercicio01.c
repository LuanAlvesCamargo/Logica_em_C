/*
1 – Escrever um programa para armazenar o nome e o número de 3 documentos de 5 pessoas – Matriz 5 x 3
Mostrar todos os valores lidos
Somente o nome dos documentos
Mostrar somente o número dos documentos
*/
#include <stdio.h>

int main() {
    char documentos[5][3][50];
	int x, y;
    
    for (x = 0; x < 5; x++) {
        printf("Pessoa %i:\n", x + 1);
        for (y = 0; y < 3; y++) {
            printf("Nome do Documento %i: ", y + 1);
            scanf("%s", documentos[x][y]);
            printf("Numero do Documento %i: ", y + 1);
            scanf("%s", documentos[x][y]);
        }
    }

    // Mostrando todos os valores lidos
    printf("Valores lidos:\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 3; y++) {
            printf("Pessoa %i, Documento %i - Nome: %s, Numero: %s\n", x + 1, y + 1, documentos[x][y], documentos[x][y + 1]);
        }
    }

    // Mostrando somente os nomes dos documentos
    printf("Nomes dos documentos:\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 3; y++) {
            printf("Pessoa %i, Documento %i - Nome: %s\n", x + 1, y + 1, documentos[x][y]);
        }
    }

    // Mostrando somente os numeros dos documentos
    printf("Numeros dos documentos:\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 3; y++) {
            printf("Pessoa %i, Documento %i - Número: %s\n", x + 1, y + 1, documentos[x][y + 1]);
        }
    }

    return 0;
}

