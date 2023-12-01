/*
18 – Fazer um programa que leia os valores necessários e transforme graus fahrenheit em graus célsius utilizando a fórmula:
celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
*/

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius\n", fahrenheit, celsius);

    return 0;
}
