/**
* Elabore um programa que efetue a leitura de valores positivos inteiros at� que um valor negativo seja
* informado. Ao final devem ser apresentados o maior e menor valores informados pelo usu�rio.
*/

#include <stdio.h>

int main() {
    int i, maior, menor;

    maior = menor = -1;

    do {
        printf("Digite um valor positivo (ou um valor negativo para sair): ");
        scanf("%i", &i);

        if (i >= 0) {
            if (maior == -1 || menor == -1) {
                maior = menor = i;
            } else {
                if (i > maior) {
                    maior = i;
                }
                if (i < menor) {
                    menor = i;
                }
            }
        }
    } while (i >= 0);

    if (maior != -1 && menor != -1) {
        printf("Maior valor informado: %i\n", maior);
        printf("Menor valor informado: %i\n", menor);
    } else {
        printf("Nenhum valor positivo foi informado.\n");
    }

    return 0;
}

