/**
 * 5 – Fazer um programa que utilizando FOR leia e a acumule o preço de 5 produtos,
 *  depois utilizando WHILE leia e acumule o preço de mais 5 produtos. Mostre o total do acumulador 1,
 *  acumulador 2 e da soma dos acumuladores.
*/

#include <stdio.h>

int main() {
    int i;
    float preco, acumulador1 = 0, acumulador2 = 0;

    // Usando o loop FOR para acumular o preço de 5 produtos
    for (i = 1; i <= 5; i++) {
        printf("Digite o preço do produto: ", i);
        scanf("%f", &preco);
        acumulador1 += preco;
    }
    i = 1;

    while (i <= 5) {
        printf("Digite o preco do produto: ", i);
        scanf("%f", &preco);
        acumulador2 += preco;
        i++;
    }

    printf("Acumulador 1: %.2f\n", acumulador1);
    printf("Acumulador 2: %.2f\n", acumulador2);
    printf("Soma dos acumuladores: %.2f\n", acumulador1 + acumulador2);

    return 0;
}

