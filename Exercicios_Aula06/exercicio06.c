/**
 * 6 � Desenvolva um programa semelhante ao do exerc�cio 4. Porem o la�o 2 � infinito e s� para quando a pre�o for 0.
*/

#include <stdio.h>

int main() {
    int quantidade_clientes, i, j;
    printf("Digite a quantidade de clientes a serem atendidos: ");
    scanf("%i", &quantidade_clientes);

    for (i = 0; i < quantidade_clientes; i++) {
        int quantidade_produtos;
        printf("\nCliente %i\n", i + 1);
        printf("Digite a quantidade de produtos a comprar: ");
        scanf("%i", &quantidade_produtos);

        float total_compra = 0.0;

        for (j = 0; j < quantidade_produtos; j++) {
            float preco_produto;
            printf("Digite o pre�o do produto %i: ", j + 1);
            scanf("%f", &preco_produto);

            total_compra += preco_produto;
        }

        printf("O valor total da compra do Cliente %i �: R$ %.2f\n", i + 1, total_compra);
        
        if (total_compra == 0.0) {
            printf("O cliente %i n�o comprou nada. Encerrando...\n", i + 1);
            break;
        }
    }

    return 0;
}

