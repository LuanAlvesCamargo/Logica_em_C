/**
* 2- Fa�a um programa que mostre o menu de op��es de quarto de um Hotel
* 1 � Quarto Standard - R$ 200,00 a di�ria
* 2 � Quarto Luxo - R$ 400,00 a di�ria
* 3 � Quarto Super Luxo - R$ 800,00 a di�ria
* Escolha o quarto e informe em caso de op��o inv�lida cancelando a execu��o do programa.
* Leia a quantidade de di�rias
* Utilizando Switch CASE Teste a op��o do quarto escolhido e fa�a o c�lculo do valor total
* Valor Total = Quantidade de Di�rias x Valor da Di�ria
* Mostre:
* Quarto escolhido
* Quantidade de di�rias contratadas
* Valor a Paga
* Mostre um Menu de Pagamento
* 1 - A vista desconto 15%
* 2 - A prazo acr�scimo 25%
* 3 - 2x com acr�scimo de 30%
* Utilizando IF leia a forma de pagamento escolhida e calcule o valor a Pagar
* Mostre o Valor a Pagar
* Receba o pagamento
* Verifique se o valor � suficiente
* Se sim calcule e mostre o troco
* Se n�o cancele o programa
* O programa DEVE ser desenvolvido seguindo TODAS as solicita��es acima.
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
    printf("1 - Quarto Standard - R$ 200,00 a di�ria\n");
    printf("2 - Quarto Luxo - R$ 400,00 a di�ria\n");
    printf("3 - Quarto Super Luxo - R$ 800,00 a di�ria\n");
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
            printf("Op��o inv�lida. Programa cancelado.\n");
            return 0;
    }

    printf("Digite a quantidade de di�rias: ");
    scanf("%d", &quant_diarias);

    valor_total = valor_diaria * quant_diarias;

    printf("Quarto escolhido: %d\n", opcao_quarto);
    printf("Quantidade de di�rias contratadas: %d\n", quant_diarias);
    printf("Valor a Pagar: R$%.2f\n", valor_total);

    int opcao_pagamento;
    printf("Escolha a forma de pagamento:\n");
    printf("1 - A vista desconto 15%%\n");
    printf("2 - A prazo acr�scimo 25%%\n");
    printf("3 - 2x com acr�scimo de 30%%\n");
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
            printf("Op��o inv�lida de pagamento. Programa cancelado.\n");
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

