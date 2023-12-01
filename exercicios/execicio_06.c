/*
6 – Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. Leia o saldo médio de um cliente e calcule o
valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito.

Saldo médio Percentual 
de 0 a 200 nenhum crédito
de 201 a 400 20% do valor do saldo médio
de 401 a 600 30% do valor do saldo médio
acima de 601 40% do valor do saldo médio
*/

#include <stdio.h>

int main() {
    float saldoMedio, valorCredito;
    
    printf("Digite o saldo médio do cliente: ");
    scanf("%f", &saldoMedio);
    
    if (saldoMedio >= 0 && saldoMedio <= 200) {
        valorCredito = 0;
    } else if (saldoMedio >= 201 && saldoMedio <= 400) {
        valorCredito = saldoMedio * 0.2;
    } else if (saldoMedio >= 401 && saldoMedio <= 600) {
        valorCredito = saldoMedio * 0.3;
    } else if (saldoMedio > 600) {
        valorCredito = saldoMedio * 0.4;
    } else {
        printf("Saldo médio inválido.\n");
        return 0;
    }
    
    printf("Saldo médio: %.2f\n", saldoMedio);
    printf("Valor do crédito: %.2f\n", valorCredito);
    
    return 0;
}

