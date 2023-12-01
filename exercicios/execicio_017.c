/*
17 – Fazer um programa que leia os valores necessários e transforme graus célsius em graus fahrenheit utilizando a fórmula: 
fahrenheit = (celsius * 9/5) + 32;
*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("A temperatura em graus Fahrenheit eh: %.2f\n", fahrenheit);

    return 0;
}




