/**
 * 3 � Leia o valor de 3 contas de luz, 
 * some todas as contas e calcule um acr�scimo de 15%,
 * informe o valor total e o valor a pagar com acr�scimo.
*/

#include <stdio.h>

int main() {
    int i = 1;
    float conta, total = 0, valorComAcrescimo;

    while (i <= 3) {
        printf("Digite o valor da conta: ", i);
        scanf("%f", &conta);

        total += conta; 
        i++;     
    }

    valorComAcrescimo = total + (total * 0.15);

    printf("Valor total das contas: R$ %.2f\n", total);
    printf("Valor a pagar com acrescimo: R$ %.2f\n", valorComAcrescimo);

    return 0;
}
