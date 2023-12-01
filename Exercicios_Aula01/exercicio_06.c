/**
 * 6 – Fazer um programa que leia o peso de um produto. Se o peso for menor que 100 KG, calcular peso * R$ 35,90, mas
 * entre(inclusive) 100KG e 200KG, calcular peso * R$ 32,99, entretanto se o peso for acima de 200KG calcular peso * R$29,99.
 * Informe o valor total da compra. Leia o código do usuário se for A calcular desconto de 9%, se for B calcular desconto de 11%, se
 * for C calcular desconto de R$ 100,00, senão for nenhum código válido calcular um acréscimo de 5% mais R$ 59,99. Mostrar o valor
 * a pagar.
 */

#include <stdio.h>

int main() {
    char idProduto;
    int quantidade;
    float precoTotal, valorPagar;

    printf("=== Menu de Produtos ===\n");
    printf("A - Produto 1: R$ 100.00\n");
    printf("B - Produto 2: R$ 150.00\n");
    printf("C - Produto 3: R$ 200.00\n");

    printf("Digite o código do produto (A, B ou C): ");
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
        default:
            printf("Código inválido. Valor total será 0.00.\n");
            precoTotal = 0.00;
    }

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    precoTotal *= quantidade;

    printf("=== Opções de Pagamento ===\n");
    printf("1 - À vista\n");
    printf("2 - Parcelado em 3x\n");
    printf("3 - Parcelado em 6x\n");

    int opcaoPagamento;
    printf("Digite a opção de pagamento (1, 2 ou 3): ");
    scanf("%d", &opcaoPagamento);

    if (opcaoPagamento == 1) {
        valorPagar = precoTotal;
    } else if (opcaoPagamento == 2) {
        valorPagar = precoTotal / 3.0;
    } else if (opcaoPagamento == 3) {
        valorPagar = precoTotal / 6.0;
    } else {
        printf("Opção de pagamento inválida. Valor a pagar será igual ao valor total.\n");
        valorPagar = precoTotal;
    }

    printf("Valor total: R$ %.2f\n", precoTotal);
    printf("Valor a pagar: R$ %.2f\n", valorPagar);

    return 0;
}
