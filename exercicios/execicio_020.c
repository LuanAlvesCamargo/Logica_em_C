/*
20 � Fazer um programa que leia a m�dia final e a frequ�ncia do aluno.
Se a m�dia final for maior ou igual a 7 E a frequ�ncia for maior ou igual a 75, mostrar mensagem aluno aprovado, Caso contr�rio aluno reprovado.
*/

#include <stdio.h>

int main() {
    float media_final;
    int frequencia;

    printf("Digite a m�dia final do aluno: ");
    scanf("%f", &media_final);

    printf("Digite a frequ�ncia do aluno: ");
    scanf("%i", &frequencia);

    if (media_final >= 7.0 && frequencia >= 75) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}

