//23 � Fazer um programa que acesse um n�mero de 1 a 7 e informe o dia da semana correspondente.

#include <stdio.h>

int main() {
    int numero_dia;

    printf("Digite um n�mero de 1 a 7: ");
    scanf("%i", &numero_dia);

    if (numero_dia == 1) {
        printf("Domingo\n");
    } else if (numero_dia == 2) {
        printf("Segunda-feira\n");
    } else if (numero_dia == 3) {
        printf("Ter�a-feira\n");
    } else if (numero_dia == 4) {
        printf("Quarta-feira\n");
    } else if (numero_dia == 5) {
        printf("Quinta-feira\n");
    } else if (numero_dia == 6) {
        printf("Sexta-feira\n");
    } else if (numero_dia == 7) {
        printf("S�bado\n");
    } else {
        printf("N�mero inv�lido\n");
    }

    return 0;
}

