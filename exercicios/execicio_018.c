/*
18 � Fazer um programa que leia os valores necess�rios e transforme graus fahrenheit em graus c�lsius utilizando a f�rmula:
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
