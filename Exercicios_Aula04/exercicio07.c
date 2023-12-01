/**
 * 7 – Leia o peso de 5 pessoas e informe o peso da pessoa mais pesada.
*/

#include <stdio.h>

int main() {
    int i = 1;
    float peso, pesoMaisPesado = 0;

    while (i <= 5) {
        printf("Digite o peso da pessoa: ", i);
        scanf("%f", &peso);

        if (peso > pesoMaisPesado) {
            pesoMaisPesado = peso;
        }

        i++;
    }

    printf("O peso da pessoa mais pesada e: %.2f\n", pesoMaisPesado);

    return 0;
}

