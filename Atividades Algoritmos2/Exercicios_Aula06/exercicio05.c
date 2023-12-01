/**
 * 5 – Desenvolva um programa semelhante ao do exercício 4. Porem o laço 1 é infinito e só para
 * quando a condição1 for 0.
*/

#include <stdio.h>

int main() {
    int quantidadeClientes, quantidadeProdutos;
    float precoProduto, valorCompra;
    int cliente;
	int produto;
    while (1) {
        printf("Digite a quantidade de clientes a serem atendidos (digite 0 para sair): ");
        scanf("%i", &quantidadeClientes);

        if (quantidadeClientes == 0) {
            break;
        }

        for (cliente = 1; cliente <= quantidadeClientes; cliente++) {
            printf("Cliente %i:\n", cliente);
            printf("Digite a quantidade de produtos a serem comprados: ");
            scanf("%d", &quantidadeProdutos);

            valorCompra = 0;

            for (produto = 1; produto <= quantidadeProdutos; produto++) {
                printf("Digite o preco do produto %i: ", produto);
                scanf("%f", &precoProduto);
                valorCompra += precoProduto;
            }

            printf("Valor total da compra do Cliente %i: R$ %.2f\n", cliente, valorCompra);
        }
    }

    printf("Programa encerrado.\n");

    return 0;
}

