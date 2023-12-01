/**
*1 – Crie um programa que leia um número do teclado até que encontre um número igual a zero. No final, mostre a soma dos números digitados.
*/
#include <stdio.h>

int main() {
    int i, soma = 0;

    do {
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%i", &i);
        soma += i;
    } while (i != 0);

    printf("A soma dos numeros digitados e: %i\n", soma);

    return 0;
}

