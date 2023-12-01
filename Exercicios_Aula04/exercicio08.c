/**
* 8 � Leia a altura de 5 pessoas e informe a altura da pessoa mais baixa.
*/

#include <stdio.h>

int main() {
    int i = 1;
    float altura, alturaMaisBaixa;

    printf("Digite a altura da pessoa: ", i);
    scanf("%f", &altura);
    alturaMaisBaixa = altura;

    while (i < 5) {
        i++;
        printf("Digite a altura da pessoa: ", i);
        scanf("%f", &altura);

        if (altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
        }
    }

    printf("A altura da pessoa mais baixa e: %.2f\n", alturaMaisBaixa);

    return 0;
}

