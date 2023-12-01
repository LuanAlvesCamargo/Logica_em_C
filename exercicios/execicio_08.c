/*
2- Fazer um programa que  leia a idade de uma pessoa e verifique se ela é maior de idade.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 0;

    printf("Digite a primeira nota: ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("Maior de idade: %i\n", idade);
    } else {
        printf("Menor de idade: %i\n", idade);
    }

    getchar();
    return 0;
}

