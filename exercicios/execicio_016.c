/*
16 � Fazer um programa que leia o nome e o pre�o de 4 produtos, 
fa�a os c�lculos necess�rios, mostre o nome e o pre�o dos produtos lidos, o resultado da soma dos pre�os e o valor m�dio dos produtos.
*/

#include <stdio.h>

int main() {
    char nome[4][50];
    float preco[4], soma_precos = 0, media_precos;
    int i;

    // Lendo o nome e o pre�o de cada produto
    for (i = 0; i < 4; i++) {
        printf("Digite o nome do produto %d: ", i+1);
        scanf("%s", nome[i]);

        printf("Digite o preco do produto %d: ", i+1);
        scanf("%f", &preco[i]);

        soma_precos += preco[i];
    }

    media_precos = soma_precos / 4;

    // Exibindo os dados dos produtos
    printf("\nProdutos cadastrados:\n");
    for (i = 0; i < 4; i++) {
        printf("%s: R$ %.2f\n", nome[i], preco[i]);
    }

    // Exibindo a soma dos pre�os e a m�dia de pre�os
    printf("\nSoma dos precos: R$ %.2f\n", soma_precos);
    printf("Media dos precos: R$ %.2f\n", media_precos);

    return 0;
}

