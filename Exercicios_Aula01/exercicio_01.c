/**
 * 1 – O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Faça um programa que leia o peso do prato montado
 * pelo cliente (em quilos) e informe o valor da refeição. Mostre um menu com as opções 1 – comer no local – taxa R$ 0,0 ou 2 – levar
 * para viagem - taxa R$ 7,00. Faça o calculo e informe o valor a pagar. Em caso de opção inválida considere taxa 0,0.
 */
#include <stdio.h>

int main() {
    float pesoPrato, valorRefeicao;
    const float PRECO_POR_QUILO = 12.00;
    const float TAXA_LEVAR_PARA_VIAGEM = 7.00;

    printf("Restaurante a Quilo Bem-Bão\n");

    printf("Digite o peso do prato montado (em quilos): ");
    scanf("%f", &pesoPrato);

    printf("=== Opções de Serviço ===\n");
    printf("1 - Comer no local (taxa: R$ 0,00)\n");
    printf("2 - Levar para viagem (taxa: R$ 7,00)\n");

    int opcaoServico;
    printf("Digite a opção de serviço (1 ou 2): ");
    scanf("%d", &opcaoServico);

    switch (opcaoServico) {
        case 1:
            valorRefeicao = pesoPrato * PRECO_POR_QUILO;
            break;
        case 2:
            valorRefeicao = pesoPrato * PRECO_POR_QUILO + TAXA_LEVAR_PARA_VIAGEM;
            break;
        default:
            printf("Opção de serviço inválida. Taxa será 0,00.\n");
            valorRefeicao = pesoPrato * PRECO_POR_QUILO;
    }

    printf("Peso do prato: %.2f kg\n", pesoPrato);
    printf("Valor da refeição: R$ %.2f\n", valorRefeicao);

    return 0;
}
