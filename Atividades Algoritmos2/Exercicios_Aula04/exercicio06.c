/**
 * 6 � Uma carteira cont�m 8 c�dulas de d�lar. Leia o valor de cada c�dula, 
 * acumule e informe o total em dinheiro em d�lar que cont�m essa carteira. 
 * Leia a cota��o do d�lar do dia, fa�a o c�lculo e informe o valor em dinheiro em real.
*/

#include <stdio.h>

int main(){
    int num_cedulas = 8;
    float cotacao_dolar, valor_cedula, total_dolar = 0, total_real;
    int i = 1;

    printf("Digite a cotacao do dolar do dia: ");
    scanf("%f",&cotacao_dolar);

    while (i <= num_cedulas){
        printf("Digite o valor da cedula em dolar: ");
        scanf("%f",&valor_cedula);

        total_dolar += valor_cedula;
        i++;
    }

    total_real = total_dolar * cotacao_dolar;

    printf("Total em dinheiro em dolar: %.2f\n", total_dolar);
    printf("Total em dinheiro em real: %.2f\n", total_real);

    return 0;
}

