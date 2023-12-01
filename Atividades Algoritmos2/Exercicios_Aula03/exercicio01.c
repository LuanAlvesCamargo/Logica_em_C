/**
* 1 – Leia o valor de 5 contas de luz em atraso, some todas as contas e calcule um acréscimo de 15% e informe o valor a pagar.
*/
#include <stdio.h>

int main() {
    float totalContas = 0.0;
    float conta;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor da conta %i: ", i + 1);
        scanf("%f", &conta);
        totalContas += conta;
    }

    float acrescimo = totalContas * 0.15;
    float valorAPagar = totalContas + acrescimo;

    printf("O valor a pagar, com 15%% de acréscimo, é: %.2f\n", valorAPagar);

    return 0;
}
