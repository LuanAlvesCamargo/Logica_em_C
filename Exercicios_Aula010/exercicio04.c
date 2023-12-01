/*
4 – Escrever um programa que leia 16 números inteiros em um vetor
Mostrar somente o menor valor
Mostrar somente o maior valor
*/

#include <stdio.h>

int main() {
    int vetor[16]; 
    int i; 
    int menor, maior; 

    printf("Digite 16 numeros inteiros:\n");

    for (i = 0; i < 16; i++) {
        scanf("%i", &vetor[i]);
    }

    // Inicializa as variaveis menor e maior com o primeiro elemento do vetor
    menor = vetor[0];
    maior = vetor[0];

    // Encontra o menor e o maior valor percorrendo o vetor.
    for (i = 1; i < 16; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i]; 
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("Menor valor: %i\n", menor);
    printf("Maior valor: %i\n", maior);

    return 0;
}

