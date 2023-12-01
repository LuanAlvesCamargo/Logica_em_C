/*
5 – Escreva um programa que leia 15 valores de produtos em um vetor
Mostrar quantos produtos tem preço superior a 100
Mostrar quantos produtos tem preço inferior a 100
*/
#include <stdio.h>

int main() {
    int quantidade = 15;
    float precos[quantidade];
    int acima_de_100 = 0; 
    int abaixo_de_100 = 0;
	int i;

    printf("Digite os preços dos produtos:\n");
    for (i = 0; i < quantidade; i++) {
        printf("Produto: R$", i + 1);
        scanf("%f", &precos[i]);
    }

 
    for (i = 0; i < quantidade; i++) {
        if (precos[i] > 100) {
            acima_de_100++;
        } else {
            abaixo_de_100++;
        }
    }

    printf("Produtos com preço superior a 100: %i\n", acima_de_100);
    printf("Produtos com preço inferior a 100: %i\n", abaixo_de_100);

    return 0;
}

