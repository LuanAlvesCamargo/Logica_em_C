/**
 * 7 – Desenvolva um programa semelhante ao do exercício 4. Porem os 2 laços são infinitos.
*/

#include <stdio.h>

int main() {
    while (1) {
        int numClientes, i, j;
        printf("Digite a quantidade de clientes a serem atendidos (ou 0 para sair): ");
        scanf("%i", &numClientes);

        if (numClientes == 0) {
            break;
        }

        for (i = 1; i <= numClientes; i++) {
            int numProdutos;
            float totalCompra = 0.0;

            printf("Cliente %d:\n", i);
            printf("Digite a quantidade de produtos a serem comprados: ");
            scanf("%i", &numProdutos);

            for (j = 1; j <= numProdutos; j++) {
                float precoProduto;
                printf("Digite o preço do produto %i: ", j);
                scanf("%f", &precoProduto);

                totalCompra += precoProduto;
            }

            printf("O valor total da compra do Cliente %i é: R$%.2f\n\n", i, totalCompra);
        }
    }

    printf("Programa encerrado.\n");

    return 0;
}

