/*
* 6 – Fazer um programa que leia a temperatura de uma cidade dos últimos 15 dias. 
* Utilizar Climatempo para fonte de dados verídicas. Mostrar todas as temperaturas, 
* a maior temperatura, a menor temperatura e a temperatura média.
*/

#include <stdio.h>

int main() {
    int dias = 15, i = 0;
    float temperaturas[dias];
    float maiorTemperatura, menorTemperatura, temperaturaMedia = 0;

    printf("Digite as temperaturas dos ultimos 15 dias:\n");

    for (i = 0; i < dias; i++) {
        printf("Dia %i: ", i + 1);
        scanf("%f", &temperaturas[i]);

        if (i == 0) {
            maiorTemperatura = menorTemperatura = temperaturas[i];
        } else {
        	
            if (temperaturas[i] > maiorTemperatura) {
                maiorTemperatura = temperaturas[i];
            }
            if (temperaturas[i] < menorTemperatura) {
                menorTemperatura = temperaturas[i];
            }
        }

        temperaturaMedia += temperaturas[i];
    }

    temperaturaMedia /= dias;

    printf("Temperaturas registradas nos ultimos 15 dias:\n");
    for (int i = 0; i < dias; i++) {
        printf("Dia %i: %.2f\n", i + 1, temperaturas[i]);
    }

    printf("Maior temperatura: %.2f\n", maiorTemperatura);
    printf("Menor temperatura: %.2f\n", menorTemperatura);
    printf("Temperatura média: %.2f\n", temperaturaMedia);

    return 0;
}

