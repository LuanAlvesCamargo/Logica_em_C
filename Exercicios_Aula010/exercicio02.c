/*
2 � Escrever um programa que leia id, pre�o e quantidade de 3 produtos � Matriz 3 x 3
Mostrar somente os pre�os
Mostrar somente os produtos
Mostrar pre�o x quantidade
*/

#include <stdio.h>

int main() {
    int matriz[3][3]; 
	int i;
	
    printf("Digite o ID, pre�o e quantidade de 3 produtos:\n");

    for (i = 0; i < 3; i++) {
        printf("Produto %i:\n", i + 1);
        printf("ID: ");
        scanf("%i", &matriz[i][0]); 
        printf("Pre�o: ");
        scanf("%i", &matriz[i][1]);
        printf("Quantidade: ");
        scanf("%i", &matriz[i][2]);
    }

    printf("Precos dos produtos:\n");
    for (i = 0; i < 3; i++) {
        printf("Produto %i: R$ %i\n", i + 1, matriz[i][1]);
    }

    printf("IDs dos produtos:\n");
    for (i = 0; i < 3; i++) {
        printf("Produto %i: %i\n", i + 1, matriz[i][0]);
    }

    // Mostra o preco multiplicado pela quantidade de cada produto
    printf("Pre�o x Quantidade dos produtos:\n");
    for (i = 0; i < 3; i++) {
        int preco = matriz[i][1];
        int quantidade = matriz[i][2];
        printf("Produto %i: R$ %i x %i = R$ %i\n", i + 1, preco, quantidade, preco * quantidade);
    }

    return 0;
}

