/**
 * 2. � Fazer um programa que acesse a quantidade e a identificação de preço de um produto e a possibilidade de desconto, conforme
 * a tabela abaixo. Faça os cálculos necessários (preco * quantidade) para valor total e (vtotal - (votal * taxa) para valor a pagar e
 * informe o valor total e o valor a pagar. Em caso de ID inválido considerar preco=0.
 * PREÇO ID DESCONTO DESCONTO
 * R$ 100,00 A 15%
 * R$ 150,00 B 19%
 * R$ 200,00 C 22%
 * R$ 250,00 D 25%
 */

#include <stdio.h>

int main() {
    char idProduto;
    int quantidade;
    float precoTotal, valorPagar;
    const float DESCONTO_A = 0.15;
    const float DESCONTO_B = 0.19;
    const float DESCONTO_C = 0.22;
    const float DESCONTO_D = 0.25;

    printf("Digite o ID do produto (A, B, C ou D): ");
    scanf(" %c", &idProduto);

    switch (idProduto) {
        case 'A':
            precoTotal = 100.00;
            break;
        case 'B':
            precoTotal = 150.00;
            break;
        case 'C':
            precoTotal = 200.00;
            break;
        case 'D':
            precoTotal = 250.00;
            break;
        default:
            printf("ID inválido. Valor total será 0,00.\n");
            precoTotal = 0.00;
    }

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Valor total antes do desconto: R$ %.2f\n", precoTotal * quantidade);

    switch (idProduto) {
        case 'A':
            valorPagar = (precoTotal * quantidade) - (precoTotal * quantidade * DESCONTO_A);
            break;
        case 'B':
            valorPagar = (precoTotal * quantidade) - (precoTotal * quantidade * DESCONTO_B);
            break;
        case 'C':
            valorPagar = (precoTotal * quantidade) - (precoTotal * quantidade * DESCONTO_C);
            break;
        case 'D':
            valorPagar = (precoTotal * quantidade) - (precoTotal * quantidade * DESCONTO_D);
            break;
        default:
            valorPagar = 0.00;
    }

    printf("Valor total: R$ %.2f\n", precoTotal * quantidade);
    printf("Valor a pagar: R$ %.2f\n", valorPagar);

    return 0;
}
