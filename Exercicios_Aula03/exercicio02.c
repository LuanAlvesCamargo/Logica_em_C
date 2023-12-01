/**
* 2 – Leia e acumule o preço de 8 produtos e informe o valor a pagar. Acesse a forma de pagamento 1 para
* pagamento parcelado em 5x com 15% de juros ou 2 para pagamento parcelado em 12x com 22% de juros,
* mostre o valor da parcela a ser paga. Em caso de opção de pagamento errada mostre apenas o valor total e a
* mensagem forma de pagamento errada.
*/
#include <stdio.h>

int main() {
    float precoProduto, totalPagar = 0.0;
    int formaPagamento, i;

    for (i = 1; i <= 8; i++) {
        printf("Digite o preço do produto: ", i);
        scanf("%f", &precoProduto);
        totalPagar += precoProduto;
    }

    printf("Digite a forma de pagamento (1 para 5x ou 2 para 12x): ");
    scanf("%i", &formaPagamento);

    float valorParcela;
    if (formaPagamento == 1) {
        valorParcela = (totalPagar * 1.15) / 5;
    } else if (formaPagamento == 2) {
        valorParcela = (totalPagar * 1.22) / 12;
    } else {
        printf("Forma de pagamento errada.\n");
        valorParcela = 0; 
    }

    if (valorParcela > 0) {
        printf("Valor total a pagar: R$%.2f\n", totalPagar);
        printf("Valor da parcela a pagar: R$%.2f\n", valorParcela);
    } else {
        printf("Valor total a pagar: R$%.2f\n", totalPagar);
    }

    return 0;
}
