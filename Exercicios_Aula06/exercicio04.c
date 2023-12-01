/**
 * 4 � Leia a quantidade de clientes a serem atendidos. Montar um la�o que execute a quantidade
 * de vezes lida. Dentro desse la�o leia quantos produtos o cliente pretende comprar. Dentro desse
 * segundo la�o ler e acumular o pre�o dos produtos. Ao final mostrar o valor da compra e voltar a
 * ler dados dos pr�ximo cliente at� que n�o tenha mais clientes.
*/

#include <stdio.h>

int main() {
    int quantidadeClientes, quantidadeProdutos;
    float precoProduto, totalCompra;
    int i, j;

    printf("Digite a quantidade de clientes a serem atendidos: ");
    scanf("%i", &quantidadeClientes);

    for (i = 1; i <= quantidadeClientes; i++) {
        totalCompra = 0; 
        
        printf("Cliente %i:\n", i);
        printf("Digite a quantidade de produtos a comprar: ");
        scanf("%i", &quantidadeProdutos);

        for (j = 1; j <= quantidadeProdutos; j++) {
            printf("Digite o preco do produto %i: ", j);
            scanf("%f", &precoProduto);
            totalCompra += precoProduto; 
        }

        printf("Valor total da compra do Cliente %d: R$ %.2f\n", i, totalCompra);
    }

    return 0;
}

