/*
* 2 – Escrever um programa que leia a idade, peso e altura de 5 pessoas – Matriz 5 x 3
* Mostrar somente as idade lidas
* Mostrar somente os pesos lidos
* Mostrar somente as alturas lidas
* Mostra as médias de peso, idade e altura
*/

#include <stdio.h>

int main() {
    int pessoas = 5;
    int matriz[5][3];
    int idade, peso, altura;
    int somaIdades = 0, somaPesos = 0, somaAlturas = 0;
    int i;

    for (i = 0; i < pessoas; i++) {
        printf("Digite a idade da pessoa %i: ", i + 1);
        scanf("%i", &idade);

        printf("Digite o peso da pessoa %i: ", i + 1);
        scanf("%i", &peso);

        printf("Digite a altura da pessoa %i: ", i + 1);
        scanf("%i", &altura);

        matriz[i][0] = idade;
        matriz[i][1] = peso;
        matriz[i][2] = altura;

        somaIdades += idade;
        somaPesos += peso;
        somaAlturas += altura;
    }

    printf("\nIdades lidas: ");
    for (i = 0; i < pessoas; i++) {
        printf("%i", matriz[i][0]);
    }

    printf("\nPesos lidos: ");
    for (i = 0; i < pessoas; i++) {
        printf("%i", matriz[i][1]);
    }

    printf("\nAlturas lidas: ");
    for (i = 0; i < pessoas; i++) {
        printf("%i", matriz[i][2]);
    }

    float mediaIdades = (float)somaIdades / pessoas;
    float mediaPesos = (float)somaPesos / pessoas;
    float mediaAlturas = (float)somaAlturas / pessoas;

    printf("\nMedia de idades: %.2f\n", mediaIdades);
    printf("Media de pesos: %.2f\n", mediaPesos);
    printf("Media de alturas: %.2f\n", mediaAlturas);

    return 0;
}

