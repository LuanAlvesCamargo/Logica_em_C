/**
* 4 � Uma carteira contem 8 c�dulas. Leia o valor de cada c�dula e informe o total em dinheiro que cont�m essa carteira.
*/

#include <stdio.h>

int main() {
    int totalCedulas = 8;
    float valorCedula, totalDinheiro = 0.0;
    int i;

    for (i = 1; i <= totalCedulas; i++) {
        printf("Digite o valor da cedula %i: ", i);
        scanf("%f", &valorCedula);
        totalDinheiro += valorCedula;
    }

    printf("O total em dinheiro na carteira e: R$%.2f\n", totalDinheiro);

    return 0;
}
