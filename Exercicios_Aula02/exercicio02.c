/**
* 2- Faça um programa que mostre o menu de opções de quarto de um Hotel
* 1 – Quarto Standard - R$ 200,00 a diária
* 2 – Quarto Luxo - R$ 400,00 a diária
* 3 – Quarto Super Luxo - R$ 800,00 a diária
* Escolha o quarto e informe em caso de opção inválida cancelando a execução do programa.
* Leia a quantidade de diárias
* Utilizando Switch CASE Teste a opção do quarto escolhido e faça o cálculo do valor total
* Valor Total = Quantidade de Diárias x Valor da Diária
* Mostre:
* Quarto escolhido
* Quantidade de diárias contratadas
* Valor a Paga
* Mostre um Menu de Pagamento
* 1 - A vista desconto 15%
* 2 - A prazo acréscimo 25%
* 3 - 2x com acréscimo de 30%
* Utilizando IF leia a forma de pagamento escolhida e calcule o valor a Pagar
* Mostre o Valor a Pagar
* Receba o pagamento
* Verifique se o valor é suficiente
* Se sim calcule e mostre o troco
* Se não cancele o programa
* O programa DEVE ser desenvolvido seguindo TODAS as solicitações acima.
*/
#include <stdio.h>

int main() {
    int opcao_quarto;
    int quant_diarias;
    float valor_diaria;
    float valor_total;
    float valor_pagar;
    float desconto = 0.15;
    float acrescimo = 0.25;

    printf("Escolha o quarto:\n");
    printf("1 - Quarto Standard - R$ 200,00 a diária\n");
    printf("2 - Quarto Luxo - R$ 400,00 a diária\n");
    printf("3 - Quarto Super Luxo - R$ 800,00 a diária\n");
    scanf("%i", &opcao_quarto);

    switch (opcao_quarto) {
        case 1:
            valor_diaria = 200.00;
            break;
        case 2:
            valor_diaria = 400.00;
            break;
        case 3:
            valor_diaria = 800.00;
            break;
        default:
            printf("Opção inválida. Programa cancelado.\n");
            return 0;
    }

    printf("Digite a quantidade de diárias: ");
    scanf("%d", &quant_diarias);

    valor_total = valor_diaria * quant_diarias;

    printf("Quarto escolhido: %d\n", opcao_quarto);
    printf("Quantidade de diárias contratadas: %d\n", quant_diarias);
    printf("Valor a Pagar: R$%.2f\n", valor_total);

    int opcao_pagamento;
    printf("Escolha a forma de pagamento:\n");
    printf("1 - A vista desconto 15%%\n");
    printf("2 - A prazo acréscimo 25%%\n");
    printf("3 - 2x com acréscimo de 30%%\n");
    scanf("%d", &opcao_pagamento);

    switch (opcao_pagamento) {
        case 1:
            valor_pagar = valor_total - (valor_total * desconto);
            break;
        case 2:
            valor_pagar = valor_total + (valor_total * acrescimo);
            break;
        case 3:
            valor_pagar = valor_total * 1.3;
            break;
        default:
            printf("Opção inválida de pagamento. Programa cancelado.\n");
            return 0;
    }

    printf("Valor a Pagar: R$%.2f\n", valor_pagar);

    float valor_recebido;
    printf("Digite o valor recebido: ");
    scanf("%f", &valor_recebido);

    if (valor_recebido >= valor_pagar) {
        float troco = valor_recebido - valor_pagar;
        printf("Troco: R$%.2f\n", troco);
    } else {
        printf("Valor insuficiente. Programa cancelado.\n");
    }

    return 0;
}

