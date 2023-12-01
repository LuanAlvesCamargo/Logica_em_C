/*
26 – Elabore um programa que solicite o peso e a altura de uma determinada pessoa.
Após a digitação, fazer os cálculos necessários e conforme a tabela abaixo mostre o resultado.
*/

#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Sobrepeso\n");
    } else if (imc >= 30 && imc <= 34.9) {
        printf("Obesidade grau 1\n");
    } else if (imc >= 35 && imc <= 39.9) {
        printf("Obesidade grau 2\n");
    } else {
        printf("Obesidade grau 3\n");
    }

    return 0;
}

