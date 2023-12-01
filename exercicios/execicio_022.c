/*
22 – Fazer um programa que leia o valor de um livro e o curso que o aluno frequenta.
Se o aluno for do 1 ou do 2 ano dar um desconto de 15%, mas se o aluno for do 3 ano, dar um desconto de 22%. Mostre o valor a pagar.
*/

#include <stdio.h>

int main() {
    float valor_livro;
    int ano_curso;
    float desconto = 0;

    printf("Digite o valor do livro: ");
    scanf("%f", &valor_livro);

    printf("Digite o ano do curso (1, 2 ou 3): ");
    scanf("%i", &ano_curso);

    if (ano_curso == 1 || ano_curso == 2) {
        desconto = 0.15;
    } else if (ano_curso == 3) {
        desconto = 0.22;
    }

    float valor_pagar = valor_livro - (valor_livro * desconto);

    printf("Valor a pagar: R$ %.2f\n", valor_pagar);

    return 0;
}

