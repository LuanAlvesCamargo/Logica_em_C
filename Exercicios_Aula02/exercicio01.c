/**
* 1- A empresa bits&bytes vende produtos nacionais e importados. Os produtos nacionais tem preço em
* real e os produtos importados são comercializados por preço em dólar convertidos pela cotação do dia –
* pesquisar na internet e colocar como constante no programa.
* Fazer um programa que:
* Leia e some o preço em real de 3 produtos nacionais(SUB1).
* Mostrar o subtotal SUB1.
* Leia e some o preço em dólar de 3 produtos importados, faça a conversão para real.(SUB2)
* Mostrar o subtotal SUB2.

* Mostrar um menu com o nome e o preço de 3 produtos nacionais.
* Utilizando IF escolha e mostre o preço do produto escolhido SUB3.
* Mostrar um menu com o nome e o preço de 3 produtos importados.
* Utilizando SWITCH CASE escolha, faça a conversão para real e mostre o preço do produto convertido
* em real SUB4.

* Fazer a soma dos subtotais e mostrar o valor total.
* Montar um menu de forma de pagamento conforme modelo abaixo:
* 1 – Pagamento a vista – desconto de 12%
* 2 – Pagamento a prazo – acréscimo de 15%
* 3 – Parcela em 6x com acréscimo de 19%

* Utilizando SWITCH CASE leia e verifique a opção escolhida, inclusive se a opção escolhida é válida e
* em caso afirmativo fazer os cálculos necessários e informar o valor do pedido.
* Montar um menu de forma de entrega conforme modelo abaixo:
* 1 – Entrega Expressa – taxa de 11%
* 2 – Entrega convencional – taxa de 5%
* 3 – Retirar a compra na empresa – taxa 0%
* Utilizando IF leia e verifique a opção escolhida, inclusive se a opção escolhida é válida e em caso
* afirmativo fazer os cálculos necessários e informar o valor a pagar.
* O programa DEVE ser desenvolvido seguindo TODAS as solicitações acima.
*/

#include <stdio.h>
#define COTACAO_DOLAR 5.50

int main() {
    float preco_nacionais1;
    float preco_nacionais2;
    float preco_nacionais3;
    float preco_importados1;
    float preco_importados2;
    float preco_importados3;
    float subtotal_nacionais = 0;
    float subtotal_importados = 0;

    // Leitura e soma dos preços em reais de produtos nacionais
    printf("Digite o preco do produto nacional 1 em reais: ");
    scanf("%f", &preco_nacionais1);
    printf("Digite o preco do produto nacional 2 em reais: ");
    scanf("%f", &preco_nacionais2);
    printf("Digite o preco do produto nacional 3 em reais: ");
    scanf("%f", &preco_nacionais3);
    subtotal_nacionais = preco_nacionais1 + preco_nacionais2 + preco_nacionais3;

    printf("Subtotal produtos nacionais: R$%.2f\n", subtotal_nacionais);

    // Leitura e soma dos preços em dólares de produtos importados
    printf("Digite o preco do produto importado 1 em dolares: ");
    scanf("%f", &preco_importados1);
    printf("Digite o preco do produto importado 2 em dolares: ");
    scanf("%f", &preco_importados2);
    printf("Digite o preco do produto importado 3 em dolares: ");
    scanf("%f", &preco_importados3);
    subtotal_importados = (preco_importados1 + preco_importados2 + preco_importados3) * COTACAO_DOLAR;

    printf("Subtotal produtos importados: R$%.2f\n", subtotal_importados);

    // Cálculo do valor total
    float valor_total = subtotal_nacionais + subtotal_importados;

    // Menu de forma de pagamento
    printf("Formas de pagamento:\n");
    printf("1 - Pagamento a vista - desconto de 12%%\n");
    printf("2 - Pagamento a prazo - acréscimo de 15%%\n");
    printf("3 - Parcela em 6x - acréscimo de 19%%\n");
    
    int forma_pagamento;
    printf("Escolha a forma de pagamento: ");
    scanf("%i", &forma_pagamento);

    switch (forma_pagamento) {
        case 1:
            valor_total *= 0.88;
            break;
        case 2:
            valor_total *= 0.15;
            break;
        case 3:
            valor_total *= 0.19;
            break;
        default:
            printf("Opção inválida de pagamento. Programa cancelado.\n");
            return 0;
    }

    // Menu de forma de entrega
    printf("Formas de entrega:\n");
    printf("1 - Entrega Expressa - taxa de 11%%\n");
    printf("2 - Entrega convencional - taxa de 5%%\n");
    printf("3 - Retirar a compra na empresa - taxa 0%%\n");
    
    int forma_entrega;
    printf("Escolha a forma de entrega: ");
    scanf("%i", &forma_entrega);

    switch (forma_entrega) {
        case 1:
            valor_total *= 0.11;
            break;
        case 2:
            valor_total *= 0.05;
            break;
        case 3:
            // Nenhuma taxa
            break;
        default:
            printf("Opção inválida de entrega. Programa cancelado.\n");
            return 0;
    }
    printf("Valor a pagar: R$%.2f\n", valor_total);
    
    return 0;
}
