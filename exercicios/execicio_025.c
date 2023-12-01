/*
25 – Fazer um programa que leia um valor de compra e uma opção de pagamento.
Se a opção for 1 mostre a mensagem pagamento a vista, calcule um desconto de 10% e mostre o valor a pagar. 
Se a opção for 2 mostre a mensagem pagamento em 30 dias, calcule um acréscimo de 15% e mostre o valor a pagar. 
Se a opção for 3 mostre a mensagem pagamento parcelado em 3x, Calcule um acréscimo de 20%, 
divida o valor obtido por 3 e mostre o valor da parcela. Qualquer outra opção escolhida, 
retorne a mensagem opção inválida e encerre a execução do programa – return(0);
*/

#include <stdio.h>
// como eu faria

int main() {
    float valor_compra;
    int opcao_pagamento;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    printf("Digite a opção de pagamento:\n");
    printf("1 - Pagamento à vista\n");
    printf("2 - Pagamento em 30 dias\n");
    printf("3 - Pagamento parcelado em 3x\n");
    scanf("%i", &opcao_pagamento);

    switch (opcao_pagamento) {
        case 1:
            printf("Pagamento à vista\n");
            valor_compra -= valor_compra * 0.1;
            printf("Valor a pagar: R$ %.2f\n", valor_compra);
            break;
        case 2:
            printf("Pagamento em 30 dias\n");
            valor_compra += valor_compra * 0.15;
            printf("Valor a pagar: R$ %.2f\n", valor_compra);
            break;
        case 3:
            printf("Pagamento parcelado em 3x\n");
            float valor_parcela = (valor_compra + (valor_compra * 0.2)) / 3;
            printf("Valor da parcela: R$ %.2f\n", valor_parcela);
            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    return 0;
}

/*
// E com o if

#include <stdio.h>

int main() {
    float valor_compra;
    int opcao_pagamento;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    printf("Digite a opção de pagamento:\n");
    printf("1 - Pagamento à vista\n");
    printf("2 - Pagamento em 30 dias\n");
    printf("3 - Pagamento parcelado em 3x\n");
    scanf("%i", &opcao_pagamento);

    if (opcao_pagamento == 1) {
        printf("Pagamento à vista\n");
        valor_compra -= valor_compra * 0.1; 
        printf("Valor a pagar: R$ %.2f\n", valor_compra);
    } else if (opcao_pagamento == 2) {
        printf("Pagamento em 30 dias\n");
        valor_compra += valor_compra * 0.15;
        printf("Valor a pagar: R$ %.2f\n", valor_compra);
    } else if (opcao_pagamento == 3) {
        printf("Pagamento parcelado em 3x\n");
        float valor_parcela = (valor_compra + (valor_compra * 0.2)) / 3;
        printf("Valor da parcela: R$ %.2f\n", valor_parcela);
    } else {
        printf("Opção inválida\n");
        return 0;
    }

    return 0;
}
*/
