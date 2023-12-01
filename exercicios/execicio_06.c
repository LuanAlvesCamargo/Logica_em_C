/*
6 � Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano. Leia o saldo m�dio de um cliente e calcule o
valor do cr�dito de acordo com a tabela abaixo. Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito.

Saldo m�dio Percentual 
de 0 a 200 nenhum cr�dito
de 201 a 400 20% do valor do saldo m�dio
de 401 a 600 30% do valor do saldo m�dio
acima de 601 40% do valor do saldo m�dio
*/

#include <stdio.h>

int main() {
    float saldoMedio, valorCredito;
    
    printf("Digite o saldo m�dio do cliente: ");
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
        printf("Saldo m�dio inv�lido.\n");
        return 0;
    }
    
    printf("Saldo m�dio: %.2f\n", saldoMedio);
    printf("Valor do cr�dito: %.2f\n", valorCredito);
    
    return 0;
}

