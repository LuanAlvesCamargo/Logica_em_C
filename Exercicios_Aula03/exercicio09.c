/**
9 - Fazer um programa que leia 10 n�meros e informe qual � o menor n�mero.
*/

#include <stdio.h>

int main() {
    int numero, menor;
    int i;

    printf("Digite o numero 1: ");
    scanf("%i", &menor);

    for (i = 2; i <= 10; i++) {
        printf("Digite o numero %i: ", i);
        scanf("%i", &numero);

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O menor numero digitado e: %i\n", menor);

    return 0;
}

