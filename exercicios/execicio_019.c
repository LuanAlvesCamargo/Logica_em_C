//6 � Fazer um programa que leia um valor em real, transforme e mostre esse valor em d�lar e euro.

#include <stdio.h>

int main() {
    float real, dolar, euro;
    float cotacao_dolar = 5.50; // valor da cota��o do d�lar
    float cotacao_euro = 6.50; // valor da cota��o do euro

    printf("Digite um valor em reais: ");
    scanf("%f", &real);

    dolar = real / cotacao_dolar; // converte para d�lar
    euro = real / cotacao_euro; // converte para euro

    printf("R$ %.2f equivale a US$ %.2f e a � %.2f\n", real, dolar, euro);

    return 0;
}

