/*
7- Fazer um programa que leia 3 notas de um aluno.
Faça os cáculos necessários fórmula -> MD = (p1 + p2 + p3)/3 e informe a média obtida pelo aluno. 
Verifique se a média é maior que 7. Se sim mostre uma mensagem de parabéns.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 7) {
        printf("Parabens! Sua media: %f\n", media);
    } else {
        printf("Reprovado! Sua media: %f\n", media);
    }

    getchar();
    return 0;
}

