/**
 * 4 – Fazer um programa que mostre 4 modelos de produtos eletrônicos, mostrando o nome do produto e preço. Leia o código do
 * produto e a quantidade. Faça os cálculos e informe o valor a pagar. Mostrar um menu com 3 opções de pagamento (Parcelado em
 * 3x SEM Juros, Parcelado em 6x SEM Juros e PARCELADO em 9X com Juros de 17%). Faça o teste, calcule e informe o valor a pagar.
 */

#include <stdio.h>

int main() {
    char idProduto;
    int quantidade;
    float precoTotal, valorPagar;
    const float JUROS_PARCELADO_9X = 0.17;

    printf("=== Produtos Eletrônicos ===\n");
    printf("A - Produto 1: R$ 1000.00\n");
    printf("B - Produto 2: R$ 1500.00\n");
    printf("C - Produto 3: R$ 2000.00\n");
    printf("D - Produto 4: R$ 2500.00\n");

    printf("Digite o código do produto (A, B, C ou D): ");
    scanf(" %s", &idProduto);

    switch (idProduto) {
        case 'A':
            precoTotal = 1000.00;
            break;
        case 'B':
            precoTotal = 1500.00;
            break;
        case 'C':
            precoTotal = 2000.00;
            break;
        case 'D':
            precoTotal = 2500.00;
            break;
        default:
            printf("Código inválido. Valor total será 0,00.\n");
            precoTotal = 0.00;
    }

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("=== Opções de Pagamento ===\n");
    printf("1 - Parcelado em 3x SEM Juros\n");
    printf("2 - Parcelado em 6x SEM Juros\n");
    printf("3 - Parcelado em 9x COM Juros (17%%)\n");

    int opcaoPagamento;
    printf("Digite a opção de pagamento (1, 2 ou 3): ");
    scanf("%d", &opcaoPagamento);

    switch (opcaoPagamento) {
        case 1:
            valorPagar = precoTotal;
            break;
        case 2:
            valorPagar = precoTotal;
            break;
        case 3:
            valorPagar = precoTotal * (1 + JUROS_PARCELADO_9X);
            break;
        default:
            printf("Opção de pagamento inválida. Valor a pagar será igual ao valor total.\n");
            valorPagar = precoTotal;
    }

    printf("Valor total: R$ %.2f\n", precoTotal);
    printf("Valor a pagar: R$ %.2f\n", valorPagar);

    return 0;
}