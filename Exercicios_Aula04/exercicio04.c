/**
 * 4 – Leia o preço de 8 produtos, faça o cálculo e informe o valor a pagar. 
 * Acesse a forma de pagamento 1 – para a vista desconto de 10% ou 2 para a prazo acréscimo de 15%. 
 * Em caso de opção invalidada, mostre uma mensagem e cancele a execução do programa.
*/

#include <stdio.h>

int main() {
    int numProdutos = 8;
    int i = 1;

    while (i <= numProdutos) {
        float precoProduto, valorPagar;
        int formaPagamento;

        printf("Informe o preco do produto: ", i);
        scanf("%f", &precoProduto);

        printf("Informe a forma de pagamento (1 para vista, 2 para prazo): ");
        scanf("%i", &formaPagamento);

        if (formaPagamento == 1) {
            valorPagar = precoProduto * 0.9; // Desconto de 10% para pagamento à vista
        } else if (formaPagamento == 2) {
            valorPagar = precoProduto * 1.15; // Acréscimo de 15% para pagamento a prazo
        } else {
            printf("Opcao de forma de pagamento invalida. Programa cancelado.\n");
            return 1; // Encerra o programa em caso de opção inválida
        }

        printf("Valor a pagar pelo produto: R$ %.2f\n", i, valorPagar);

        i++;
    }

    return 0;
}

