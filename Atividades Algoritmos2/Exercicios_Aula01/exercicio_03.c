/**
 * 3 – Fazer um programa que mostre o cardápio de um restaurante com 5 possibilidades de refeição, mostrando o nome do prato e
 * preço. Leia o código do prato e a quantidade. Faça os cálculos e informe o valor total. Mostrar um menu com 3 opções de
 * pagamento (Cartão de Crédito + 5% de taxa, Cartão de Débito + 3% de taxa ou Dinheiro – 5% de desconto). Faça o teste e
 * calcule e informe o valor a pagar em caso de opção invalida o valor a pagar é o mesmo que o valor total.
 */

#include <stdio.h>

int main() {
    char idPrato;
    int quantidade;
    float precoTotal, valorPagar;
    const float TAXA_CARTAO_CREDITO = 0.05;
    const float TAXA_CARTAO_DEBITO = 0.03;
    const float DESCONTO_DINHEIRO = 0.05;

    printf("=== Cardápio do Restaurante ===\n");
    printf("A - Prato 1: R$ 10.00\n");
    printf("B - Prato 2: R$ 15.00\n");
    printf("C - Prato 3: R$ 20.00\n");
    printf("D - Prato 4: R$ 25.00\n");
    printf("E - Prato 5: R$ 30.00\n");
    
    printf("Digite o código do prato (A, B, C, D ou E): ");
scanf(" %c", &idPrato);

    switch (idPrato) {
        case 'A':
            precoTotal = 10.00;
            break;
        case 'B':
            precoTotal = 15.00;
            break;
        case 'C':
            precoTotal = 20.00;
            break;
        case 'D':
            precoTotal = 25.00;
            break;
        case 'E':
            precoTotal = 30.00;
            break;
        default:
            printf("Código inválido. Valor total será 0,00.\n");
            precoTotal = 0.00;
    }

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("=== Opções de Pagamento ===\n");
    printf("1 - Cartão de Crédito (+5%% de taxa)\n");
    printf("2 - Cartão de Débito (+3%% de taxa)\n");
    printf("3 - Dinheiro (-5%% de desconto)\n");

    int opcaoPagamento;
    printf("Digite a opção de pagamento (1, 2 ou 3): ");
    scanf("%d", &opcaoPagamento);

    switch (opcaoPagamento) {
        case 1:
            valorPagar = precoTotal * (1 + TAXA_CARTAO_CREDITO);
            break;
        case 2:
            valorPagar = precoTotal * (1 + TAXA_CARTAO_DEBITO);
            break;
        case 3:
            valorPagar = precoTotal * (1 - DESCONTO_DINHEIRO);
            break;
        default:
            printf("Opção de pagamento inválida. Valor a pagar será igual ao valor total.\n");
            valorPagar = precoTotal;
    }

    printf("Valor total: R$ %.2f\n", precoTotal);
    printf("Valor a pagar: R$ %.2f\n", valorPagar);

    return 0;
}