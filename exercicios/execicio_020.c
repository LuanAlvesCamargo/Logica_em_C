/*
20 – Fazer um programa que leia a média final e a frequência do aluno.
Se a média final for maior ou igual a 7 E a frequência for maior ou igual a 75, mostrar mensagem aluno aprovado, Caso contrário aluno reprovado.
*/

#include <stdio.h>

int main() {
    float media_final;
    int frequencia;

    printf("Digite a média final do aluno: ");
    scanf("%f", &media_final);

    printf("Digite a frequência do aluno: ");
    scanf("%i", &frequencia);

    if (media_final >= 7.0 && frequencia >= 75) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}

