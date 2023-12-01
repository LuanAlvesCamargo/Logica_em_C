/**
* 3 - Fazer um programa que mostre um menu de uma Pizzaria:
* 1 – Calabresa 48,00
* 2 – Quatro queijos 52,00
* 3 – Frango com catupiry 68,00
* Acesse e utilizando IF verifique a opção desejada
* Em caso de opção inválida cancele a execução do programa
* Acesse a quantidade
* Faça o cálculo e informe:
* O Sabor escolhido
* A quantidade comprada
* Valor Total
* Mostre um menu com a opções
* 1 – Pagamento à vista desconto de 10%
* 2 – Pagamento débito SEM desconto
* 3 – Pagamento crédito COM acréscimo de 15%
* Acesse e utilizando Switch CASE verifique a opção deseja
* Em caso de opção inválida cancele a execução do programa
* Faça o cálculo e informe o valor a pagar
* Acesse o valor do pagamento
* Se o valor pago for maior que o valor a pagar
* Calcule e mostre o troco
* Caso contrário mostra mensagem
* Valor pago insuficiente
* O programa DEVE ser desenvolvido seguindo TODAS as solicitações acima.
*/

#include <stdio.h>

int main() {
    int opcao_sabor;
    int quantidade;
    float valor_total;
    float valor_pagar;
    float desconto = 0.10;
    float acrescimo = 0.15;

    printf("Escolha o sabor:\n");
    printf("1 - Calabresa - R$ 48,00\n");
    printf("2 - Quatro queijos - R$ 52,00\n");
    printf("3 - Frango com catupiry - R$ 68,00\n");
    scanf("%i", &opcao_sabor);

    float valor_sabor;
    switch (opcao_sabor) {
        case 1:
            valor_sabor = 48.00;
            break;
        case 2:
            valor_sabor = 52.00;
            break;
        case 3:
            valor_sabor = 68.00;
            break;
        default:
            printf("Opção inválida. Programa cancelado.\n");
            return 0;
    }

    printf("Digite a quantidade: ");
    scanf("%i", &quantidade);

    valor_total = valor_sabor * quantidade;

    printf("Sabor escolhido: %d\n", opcao_sabor);
    printf("Quantidade comprada: %d\n", quantidade);
    printf("Valor Total: R$%.2f\n", valor_total);

    int opcao_pagamento;
    printf("Escolha a forma de pagamento:\n");
    printf("1 - Pagamento à vista desconto de 10%%\n");
    printf("2 - Pagamento débito SEM desconto\n");
    printf("3 - Pagamento crédito COM acréscimo de 15%%\n");
    scanf("%i", &opcao_pagamento);

    switch (opcao_pagamento) {
        case 1:
            valor_pagar = valor_total - (valor_total * desconto);
            break;
        case 2:
            valor_pagar = valor_total;
            break;
        case 3:
            valor_pagar = valor_total + (valor_total * acrescimo);
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
        printf("Valor pago insuficiente. Programa cancelado.\n");
    }
    
    return 0;
}

