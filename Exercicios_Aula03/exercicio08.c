/**
* 8 - Fazer um programa que leia 10 números e informe qual é o maior número.
*/

#include <stdio.h>

int main() {
    int numero, maior;
	int i;
	
    printf("Digite o numero 1: ");
    scanf("%i", &maior);

    for (i = 2; i <= 10; i++) {
        printf("Digite o numero %i: ", i);
        scanf("%i", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior numero digitado e: %i\n", maior);

    return 0;
}

