/*
11- Fazer um programa que leia o valor a pagar e a forma de pagamento. 
Se a forma de pagamento escolhida for 1 - a vista, calcule um desconto de 11% e informe o valor a pagar, 
mas se a forma de pagamento for 2 - a prazo, calcule um acrécimo de 12% e informe o valor a parga. 
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	
    float valorPagar, valorFinal;
    int formaPagamento;

    printf("Digite o valor a pagar: ");
    scanf("%f", &valorPagar);

    printf("Escolha a forma de pagamento (1 - a vista, 2 - a prazo): ");
    scanf("%i", &formaPagamento);

    if (formaPagamento == 1) {
        valorFinal = valorPagar - (valorPagar * 0.11);
        printf("Valor a pagar (a vista): %.2f\n", valorFinal);
    } else if (formaPagamento == 2) {
        valorFinal = valorPagar + (valorPagar * 0.12);
        printf("Valor a pagar (a prazo): %.2f\n", valorFinal);
    } else {
        printf("Forma de pagamento invalida.\n");
    }
    
    getchar();
    return 0;
}

