/**
 * 3 – Ler um número N, some todos os números inteiros de 1 a N, e mostre o resultado obtido
*/

#include <stdio.h>

int main() {
    int N, soma = 0;
	int i, j;
    printf("Digite um numero inteiro: ");
    scanf("%i", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            soma += j;
        }
    }

    printf("A soma de todos os numeros de 1 a %i e: %i\n", N, soma);

    return 0;
}

