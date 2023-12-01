/*
* 6 - Fazer um programa que acesse o preço de 15 produtos de uma loja. Mostre os 15 preços lidos.
* Faça os cálculos necessários e informe o valor a pagar. 
* No mesmo programa mostre as opções 1 para a vista 10% de desconto 2 para a prazo 15% de acréscimo
* 3 para parcelado em 3 vezes. Calcule e Informe o valor a pagar. Verificar se tem mais clientes na loja.
*/

#include <stdio.h>

int main() {
    int quantidadeProdutos = 15, i;
    float precos[15];
    float valorTotal = 0;
    int opcaoPagamento;
    float valorFinal = 0;

    for (i = 0; i < quantidadeProdutos; i++) {
        printf("Digite o preco do produto %i: ", i + 1);
        scanf("%f", &precos[i]);
        valorTotal += precos[i];
    }
	
    printf("\nPreços dos produtos lidos:\n");
    for (i = 0; i < quantidadeProdutos; i++) {
        printf("Produto %i: R$ %.2f\n", i + 1, precos[i]);
    }

    printf("\nOpcoes de pagamento:\n");
    printf("1 - a vista com 10%% de desconto\n");
    printf("2 - A prazo com 15%% de acréscimo\n");
    printf("3 - Parcelado em 3 vezes (sem acrescimo)\n");
    printf("Digite a opção de pagamento (1/2/3): ");
    scanf("%i", &opcaoPagamento);

    switch (opcaoPagamento) {
        case 1:
            valorFinal = valorTotal * 0.90; // 10% de desconto
            break;
        case 2:
            valorFinal = valorTotal * 1.15; // 15% de acréscimo
            break;
        case 3:
            valorFinal = valorTotal; // Sem acréscimo
            break;
        default:
            printf("Opção de pagamento inválida.\n");
            return 1;
    }

    printf("\nValor a pagar: R$ %.2f\n", valorFinal);

    printf("\nHa mais clientes na loja? (S para sim, N para nao): ");
    char resposta;
    scanf(" %c", &resposta);

    if (resposta == 'S' || resposta == 's') {
        main();
    }

    return 0;
}

