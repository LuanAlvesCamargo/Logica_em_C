/*
* 4 – Escreva um programa que leia valores de produtos em uma matriz 3 x 3
* Mostrar o valor total e o valor médio de TODOS os produtos
*/

#include <stdio.h>

int main() {
    float produtos[3][3];
    float valorTotal = 0.0;
    float valorMedio = 0.0;
	int x = 0, y = 0;
	
    printf("Digite os valores dos produtos:\n");

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            printf("Produto : ", x + 1, y + 1);
            scanf("%f", &produtos[x][y]);
            valorTotal += produtos[x][y];
        }
    }
    
    valorMedio = valorTotal / (3 * 3);

    printf("Valor Total dos Produtos: %.2f\n", valorTotal);
    printf("Valor Medio dos Produtos: %.2f\n", valorMedio);

    return 0;
}

