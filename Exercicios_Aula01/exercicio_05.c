/**
 * 5 – Fazer um programa com um menu de opções com a descrição e o preço de 3 produtos. Ler o código do produto e a quantidade
 * desejada. Utilizando CASE verifique o produto e o preço escolhido. Faça o cálculo e informe o valor total. Mostrar um menu com 3
 * opções de pagamento. Utilizando IF verifique e calcule o valor a pagar. Informe o valor a pagar.
 */

#include <stdio.h>

int main() {
    char idProduto;
    int quantidade;
    float precoTotal, valorPagar;

    printf("=== Menu de Produtos ===\n");
    printf("A - Produto 1: R$ 10.00\n");
    printf("B - Produto 2: R$ 15.00\n");
    printf("C - Produto 3: R$ 20.00\n");
    
    printf("Digite o código do produto (A, B ou C): ");
    scanf(" %c", &idProduto);

    switch (idProduto) {
        case 'A':
            precoTotal = 10.00;
            break;
        case 'B':
            precoTotal = 15.00;
            break;
        case 'C':
            precoTotal = 20.00;
            break;
        default:
            printf("Código de produto inválido. Valor total será 0,00.\n");
            precoTotal = 0.00;
    }

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    precoTotal *= quantidade;

    printf("=== Opções de Pagamento ===\n");
    printf("1 - Cartão de Crédito\n");
    printf("2 - Cartão de Débito\n");
    printf("3 - Dinheiro\n");

    int opcaoPagamento;
    printf("Digite a opção de pagamento (1, 2 ou 3): ");
    scanf("%d", &opcaoPagamento);

    if (opcaoPagamento == 1) {
        valorPagar = precoTotal;
    } else if (opcaoPagamento == 2) {
        valorPagar = precoTotal;
    } else if (opcaoPagamento == 3) {
        valorPagar = precoTotal;
    } else {
        printf("Opção de pagamento inválida. Valor a pagar será igual ao valor total.\n");
        valorPagar = precoTotal;
    }

    printf("Valor total: R$ %.2f\n", precoTotal);
    printf("Valor a pagar: R$ %.2f\n", valorPagar);

    return 0;
}